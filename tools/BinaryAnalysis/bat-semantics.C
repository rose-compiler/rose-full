static const char *purpose = "symbolically execute instructions from a file";
static const char *description =
    "Given a specimen on the command-line, partition the file and symbolically execute "
    "its instructions, printing information about the entire process.";

#include <rose.h>
#include <batSupport.h>

#include <Rose/BinaryAnalysis/AddressInterval.h>
#include <Rose/BinaryAnalysis/Architecture/Base.h>
#include <Rose/BinaryAnalysis/ByteCode/Jvm.h>
#include <Rose/BinaryAnalysis/Disassembler/Base.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/ConcreteSemantics.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/IntervalSemantics.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/NullSemantics.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/PartialSymbolicSemantics.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/SymbolicSemantics.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/TraceSemantics.h>
#include <Rose/BinaryAnalysis/MemoryMap.h>
#include <Rose/BinaryAnalysis/Partitioner2/Partitioner.h>
#include <Rose/CommandLine.h>

//TODO: Probably also create and use an EngineCil
#include <Rose/BinaryAnalysis/Partitioner2/EngineJvm.h>

using namespace Rose;
using namespace Rose::BinaryAnalysis;
using namespace Rose::BinaryAnalysis::InstructionSemantics;
using namespace Sawyer::Message::Common;
namespace P2 = Rose::BinaryAnalysis::Partitioner2;
namespace S2 = Rose::BinaryAnalysis::InstructionSemantics;

Sawyer::Message::Facility mlog;

// Settings parsed from command-line switches
struct Settings {
    std::string opsClassName = "symbolic"; // name of RiscOperators class, abbreviated
    bool useMemoryMap = false;
    SymbolicSemantics::DefinersMode computingDefiners = SymbolicSemantics::TRACK_NO_DEFINERS;
    SymbolicSemantics::WritersMode computingWriters = SymbolicSemantics::TRACK_NO_WRITERS;
};

// Parse command-line switches and return positional arguments, or exit failure.
static std::vector<std::string>
parseCommandLine(int argc, char *argv[], Settings &settings) {
    using namespace Sawyer::CommandLine;

    //----- Generic switches -----
    SwitchGroup genSwitches = Rose::CommandLine::genericSwitches();
    genSwitches.name("global");

    //----- Semantics class switches -----
    SwitchGroup sem("Semantics class switches");
    sem.name("class");
    sem.doc("These switches control which classes are used when constructing the instruction semantics framework.");

    sem.insert(Switch("semantics")
               .argument("class", anyParser(settings.opsClassName))
               .doc("Name of the class that represents the semantic RiscOperators.  This switch is required and provides "
                    "the default values for @s{value}, @s{rstate}, and @s{mstate}.  Use \"@s{semantics} list\" to get a "
                    "list of recognized names."));

    //----- Semantics control switches -----
    SwitchGroup ctl("Semantics control switches");
    ctl.name("ctl");
    ctl.doc("These switches control various operational characteristics of the instruction semantics framework. The "
            "applicability of some of these switches depends on the classes used to construct the framework.");

    CommandLine::insertBooleanSwitch(ctl, "use-memory-map", settings.useMemoryMap,
                                     "Adds the specimen's memory map to the memory state and/or RISC operators if they support "
                                     "using a memory map. For most domains that allow this, it essentially initializes memory "
                                     "based on values loaded from the executable.");

    ctl.insert(Switch("track-definers")
               .argument("how", enumParser<SymbolicSemantics::DefinersMode>(settings.computingDefiners)
                         ->with("none", SymbolicSemantics::TRACK_NO_DEFINERS)
                         ->with("last", SymbolicSemantics::TRACK_LATEST_DEFINER)
                         ->with("all", SymbolicSemantics::TRACK_ALL_DEFINERS))
               .doc("Controls whether a domain that supports tracking value definers does so.  For instance, the "
                    "symbolic domain can keep a list of defining instructions for each symbolic value. Turning on any "
                    "form of definers also turns on the output of such definers.  The @v{how} can be one of these words: "
                    "@named{none}{Do not compute definers.}"
                    "@named{last}{Track only the latest defining instruction per value.}"
                    "@named{all}{Track all defining instructions per value.}"));

    ctl.insert(Switch("track-writers")
               .argument("how", enumParser<SymbolicSemantics::WritersMode>(settings.computingWriters)
                         ->with("none", SymbolicSemantics::TRACK_NO_WRITERS)
                         ->with("last", SymbolicSemantics::TRACK_LATEST_WRITER)
                         ->with("all", SymbolicSemantics::TRACK_ALL_WRITERS))
               .doc("Controls whether a domain that supports tracking writers does so.  This means that each location "
                    "(registers and memory) will have a list of instructions that wrote to that location. The allowed "
                    "arguments are:"
                    "@named{none}{Do not track writers.}"
                    "@named{last}{Track only the latest writing instruction per location.}"
                    "@named{all}{Track all writing instructions per location.}"));

    //----- Parse -----
    Parser parser = Rose::CommandLine::createEmptyParser(purpose, description);
    parser.errorStream(::mlog[FATAL]);
    parser.with(sem);
    parser.with(ctl);
    parser.with(genSwitches);
    std::vector<std::string> args = parser.parse(argc, argv).apply().unreachedArgs();

    if (args.size() < 1) {
        ::mlog[FATAL] <<"incorrect usage; see --help\n";
        exit(1);
    }
    return args;
}

static void
printAst(std::ostream &out, SgAsmInstruction *insn, const std::string &prefix) {
    struct Visitor: AstPrePostProcessing {
        std::ostream &out;
        size_t depth = 0;
        const std::string &prefix;

        Visitor(std::ostream &out, const std::string &prefix)
            : out(out), prefix(prefix) {}

        void preOrderVisit(SgNode *node) override {
            out <<prefix <<"|";
            for (size_t i = 0; i < depth; ++i)
                out <<"   |";
            ++depth;
            out <<node->class_name();
            if (auto insn = isSgAsmInstruction(node))
                out <<" " <<insn->toString();
            if (auto rre = isSgAsmRegisterReferenceExpression(node))
                out <<" " <<rre->get_descriptor().toString();
            if (auto ive = isSgAsmIntegerValueExpression(node))
                out <<" " <<StringUtility::toHex2(ive->get_absoluteValue(), ive->get_significantBits());
            out <<"\n";
        }

        void postOrderVisit(SgNode*) override {
            --depth;
        }
    };
    Visitor(out, prefix).traverse(insn);
}

int
main(int argc, char *argv[]) {
    ROSE_INITIALIZE;
    Diagnostics::initAndRegister(&::mlog, "tool");
    ::mlog.comment("debugging semantics");
    Bat::checkRoseVersionNumber(MINIMUM_ROSE_LIBRARY_VERSION, ::mlog[FATAL]);
    Bat::registerSelfTests();

    ByteCode::Class::Ptr bcClass{nullptr};
    InstructionSemantics::BaseSemantics::RiscOperatorsPtr ops{nullptr};

    // Parse command-line
    Settings settings;
    std::vector<std::string> args = parseCommandLine(argc, argv, settings);
    ASSERT_require(args.size() > 0);

    std::vector<std::string> specimen;
    specimen.push_back(args[0]);

    // Create an Engine to drive the partitioner
    auto engine = P2::Engine::forge(specimen);
    std::cerr <<"using the " << engine->name() << " Engine\n";

    // Partition the specimen to get access to its methods and instructions
    engine->settings().partitioner.base.usingSemantics = false; // while partitioning

    engine->loadSpecimens(specimen);
    auto partitioner = engine->partition(specimen);
    auto architecture = engine->architecture();

    engine->settings().partitioner.base.usingSemantics = true;

    // Fetch information from the engine now that partitioning has finished
    bcClass = engine->analysisClass();
    InstructionSemantics::BaseSemantics::StatePtr state = engine->state();

    // Add the ByteCode::ClassPtr to the frame
    state->frameState()->analysisClass(bcClass);

    // Initialize the state with a reference object
    auto protoval = state->protoval();
    auto svalRef = protoval->unspecified_(32);
    svalRef->kind(S2::BaseSemantics::ValueKind::ObjectReference);

    std::string desc = "<unspecified>";
    svalRef->kind(InstructionSemantics::BaseSemantics::ValueKind::ObjectReference);
    svalRef->typeDescriptor(desc);

    state->frameState()->writeLocal(0, svalRef);

    SmtSolver::Ptr solver = SmtSolver::instance("none");
    ops = InstructionSemantics::SymbolicSemantics::RiscOperators::instanceFromState(state, solver);
    ASSERT_not_null(ops);

    auto tops = S2::TraceSemantics::RiscOperators::instance(ops);
    S2::BaseSemantics::Dispatcher::Ptr cpu = partitioner->newDispatcher(tops);
    ASSERT_not_null(cpu);

    // Create an InstructionProvider and inject a nop instruction to show initial state
    //
    auto map = MemoryMap::instance();
    std::vector<uint8_t> bytes;
    bytes.push_back(/*nop*/0);

    size_t va{0};
    map->insert(AddressInterval::baseSize(va, bytes.size()),
                MemoryMap::Segment(MemoryMap::AllocatingBuffer::instance(bytes.size()),
                                   0, MemoryMap::READ_EXECUTE, "instructions"));
    map->at(va).write(bytes);
    auto provider = InstructionProvider::instance(architecture, map);

    SgAsmInstruction *insn = provider->at(va);
    std::cerr <<partitioner->unparse(insn) <<"\n";
    printAst(std::cout, insn, "");
    cpu->processInstruction(insn);
    std::cerr <<*ops->currentState();

    // Process ByteCode methods and their instructions
    for (auto bcMethod : bcClass->methods()) {
        for (auto insn : bcMethod->instructions()->get_instructions()) {
            std::cerr << partitioner->unparse(insn) << "\n";
            printAst(std::cout, insn, "");
            cpu->processInstruction(insn);
            std::cerr <<*ops->currentState();
        }

    }
}
