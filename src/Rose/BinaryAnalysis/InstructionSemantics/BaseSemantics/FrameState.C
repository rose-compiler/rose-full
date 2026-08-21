#include <featureTests.h>
#ifdef ROSE_ENABLE_BINARY_ANALYSIS

#include <Rose/BinaryAnalysis/ByteCode/Analysis.h>
#include <Rose/BinaryAnalysis/ByteCode/Jvm.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/DescriptorParser.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/BaseSemantics/FrameState.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/BaseSemantics/Merger.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/BaseSemantics/RiscOperators.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/BaseSemantics/SymbolicMemory.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/BaseSemantics/SValue.h>
#include <Rose/StringUtility/NumberToString.h>

#include <atomic>
#include <iostream>

namespace Rose {
namespace BinaryAnalysis {
namespace InstructionSemantics {
namespace BaseSemantics {

namespace IS = Rose::BinaryAnalysis::InstructionSemantics;

//FIX_ME by using value from the class (may not be easy to get)
#define MAX_LOCALS 256

FrameState::~FrameState() {}

FrameState::FrameState() : MemoryState() {
    purpose(AddressSpace::Purpose::FRAMES);
    name("frame");
}

FrameState::FrameState(const SValue::Ptr &valProtoval, const Sawyer::Optional<Address> &addr, SgAsmJvmConstantPool *pool)
    : MemoryState(valProtoval, valProtoval), frameId_{newFrameId()}, returnAddress_{addr},
      stack_{}, locals_{}, method_{nullptr}
{
    jvmConstantPool(pool);

    purpose(AddressSpace::Purpose::FRAMES);
    name("frame");
}

FrameState::FrameState(const FrameState &other)
    : MemoryState{other}, frameId_{other.frameId_}, returnAddress_{other.returnAddress_},
      stack_{other.stack_}, locals_{other.locals_}, method_{other.method_}
{
    ASSERT_not_null(jvmConstantPool());
    purpose(AddressSpace::Purpose::FRAMES);
}

FrameState::Ptr
FrameState::instance(const SValuePtr &valProtoval, const Sawyer::Optional<Address> &addr, SgAsmJvmConstantPool* pool) {
    return Ptr(new FrameState(valProtoval, addr, pool));
}

MemoryState::Ptr
FrameState::create(const SValuePtr &addrProtoval, const SValuePtr &valProtoval) const {
    (void) addrProtoval;
    SgAsmJvmConstantPool* pool{nullptr};
    ASSERT_require2(pool != nullptr, "don't use, no constant pool");
    return instance(valProtoval, 0, pool);
}

AddressSpace::Ptr
FrameState::clone() const {
    Ptr retval = instance(get_val_protoval(), 0, jvmConstantPool());

    retval->frameId_ = frameId_;
    retval->returnAddress_ = returnAddress_;
    retval->locals_ = locals_;
    retval->stack_ = stack_;

    return retval;
}

FrameState::Ptr
FrameState::promote(const AddressSpace::Ptr &x) {
    (void) x;
    ASSERT_require2(false, "TODO:FrameState::promote\n");
    return {};
}

void
FrameState::clear() {
    stack_.clear();
    locals_.clear();
}

void
FrameState::clearFrame() {
    clear();
}

ByteCode::Method::Ptr
FrameState::analysisMethod() {
    return method_;
}

void
FrameState::analysisMethod(ByteCode::Method::Ptr &m) {
    method_ = m;
}

SValuePtr
FrameState::createArgument(const std::string &descriptor, size_t argIdx) {
    ASSERT_require(!descriptor.empty());
    ASSERT_require(descriptor[0] == '(');

    size_t pos = 1;
    size_t currentArg = 0;

    while (descriptor[pos] != ')') {
        const size_t begin = pos;

        // Skip array dimensions.
        while (descriptor[pos] == '[')
            ++pos;

        // Skip the underlying type.
        if (descriptor[pos] == 'L') {
            const size_t semi = descriptor.find(';', pos);
            ASSERT_require(semi != std::string::npos);
            pos = semi + 1;
        } else {
            ++pos;
        }

        if (currentArg++ == argIdx) {
            const std::string argDesc = descriptor.substr(begin, pos - begin);

            auto value = get_val_protoval()->unspecified_(32);

            switch (argDesc[0]) {
                case 'B':
                case 'C':
                case 'I':
                case 'S':
                case 'Z':
                    value = get_val_protoval()->unspecified_(32);
                    value->kind(ValueKind::Integer32);
                    break;

                case 'J':
                    value = get_val_protoval()->unspecified_(64);
                    value->kind(ValueKind::Integer64);
                    break;

                case 'F':
                    value = get_val_protoval()->unspecified_(32);
                    value->kind(ValueKind::Float32);
                    break;

                case 'D':
                    value = get_val_protoval()->unspecified_(64);
                    value->kind(ValueKind::Float64);
                    break;

                case 'L':
                    value = get_val_protoval()->unspecified_(32);
                    value->kind(ValueKind::ObjectReference);
                    value->typeDescriptor(argDesc);
                    break;

                case '[':
                    value = get_val_protoval()->unspecified_(32);
                    value->kind(ValueKind::ArrayReference);
                    value->typeDescriptor(argDesc);
                    break;

                default:
                    ASSERT_not_reachable("invalid method argument descriptor");
            }

            return value;
        }
    }

    ASSERT_not_reachable("method argument index out of range");
}

void
FrameState::initializeRootFrame(RiscOperatorsPtr& ops, size_t index) {
#if 0
//TODO
    const std::string descriptor = MethodDescriptor(ops, index);
#else
    (void) ops;
    (void) index;
#endif
}

void
FrameState::initializeRootFrame(const ByteCode::Method::Ptr &method) {
    ASSERT_not_null(method);

    method_ = method;
    std::string descriptor = method->descriptor();

    size_t local = 0;
    auto protoval = get_val_protoval();
    auto jvmMethod = Rose::BinaryAnalysis::ByteCode::JvmMethod::promote(method);

    // Make the constant pool available to the frame
    jvmConstantPool(jvmMethod->constant_pool());

    // Synthesize the receiver
    if (!jvmMethod->isStatic()) {
        BaseSemantics::SValuePtr receiver = protoval->undefined_(protoval->nBits());

        receiver->kind(BaseSemantics::ValueKind::ObjectReference);
        receiver->typeDescriptor("L" + method->analysisClass()->name() + ";");

        writeLocal(local++, receiver);
    }

    auto md = IS::DescriptorParser::parseMethodDescriptor(descriptor);

    // Synthesize explicit arguments from the method descriptor.
    for (const IS::DescriptorType &argumentType: md.arguments) {
        BaseSemantics::SValuePtr argument;

        switch (argumentType.kind) {
            case BaseSemantics::ValueKind::Integer32:
            case BaseSemantics::ValueKind::Float32:
                argument = protoval->undefined_(32);
                break;

            case BaseSemantics::ValueKind::Integer64:
            case BaseSemantics::ValueKind::Float64:
                argument = protoval->undefined_(64);
                break;

            case BaseSemantics::ValueKind::ObjectReference:
                argument = protoval->undefined_(protoval->nBits());
                break;

            case BaseSemantics::ValueKind::ArrayReference: {
                argument = protoval->undefined_(protoval->nBits());
                auto length = protoval->undefined_(32);
                length->kind(ValueKind::Integer32);
                argument->arrayLength(length);
                break;
            }

            default:
                ASSERT_not_reachable("invalid JVM method argument kind");
        }

        argument->kind(argumentType.kind);
        if (argumentType.isReference()) {
            argument->typeDescriptor(argumentType.descriptor);
        }
        writeLocal(local, argument);

        local += argumentType.isCategory2() ? 2 : 1;
    }
}

SValue::Ptr
FrameState::readMemory(const SValue::Ptr &address_, const SValue::Ptr &dflt,
                       RiscOperators */*addrOps*/, RiscOperators */*valOps*/) {
    (void) address_;
    (void) dflt;
    ASSERT_require2(false, "TODO::readMemory\n");
    return {};
}

SValue::Ptr
FrameState::peekMemory(const SValue::Ptr &address, const SValue::Ptr &dflt, RiscOperators *addrOps, RiscOperators *valOps) {
    ASSERT_require2(false, "TODO::peekMemory\n");
    return readMemory(address, dflt, addrOps, valOps);  // readMemory doesn't have side effects
}

void
FrameState::writeMemory(const SValue::Ptr &address_, const SValue::Ptr &value_, RiscOperators */*addrOps*/, RiscOperators */*valOps*/) {
    (void) address_;
    (void) value_;
    ASSERT_require2(false, "TODO::writeMemory\n");
}

bool
FrameState::isCategory1(const SValue::Ptr &value) {
    ASSERT_not_null(value);

    switch (value->kind()) {
        case ValueKind::Integer32:
        case ValueKind::Float32:
        case ValueKind::ObjectReference:
        case ValueKind::ArrayReference:
            return true;
        case ValueKind::Integer64:
        case ValueKind::Float64:
        case ValueKind::Category2Tail:
            return false;
        default: ASSERT_not_reachable("invalid JVM ValueKind");
    }
}

bool
FrameState::isCategory2(const SValuePtr &value) {
    ASSERT_not_null(value);
    return value->kind() == ValueKind::Integer64 || value->kind() == ValueKind::Float64;
}

bool
FrameState::isCategory2Tail(const SValuePtr& sval) {
    ASSERT_not_null(sval);
    return sval->kind() == ValueKind::Category2Tail;
}

SValue::Ptr
FrameState::readLocal(size_t index) const {
    ASSERT_require2(index < locals_.size(), "ERROR: locals array size exceeded\n");
    return locals_[index];
}

void
FrameState::clearLocalRange(size_t begin, size_t nSlots) {
    const size_t end = begin + nSlots;

    for (size_t i = begin; i < end && i < locals_.size(); ++i) {
        auto sval = locals_[i];
        if (sval == nullptr) continue;

        // Clear head of a category-2 tail
        if (isCategory2Tail(sval) && i > 0) {
            locals_[i - 1] = nullptr;
        }
        // Clear tail of a category-2 head
        if (sval->isJvmCategory2() && i + 1 < locals_.size()) {
            locals_[i + 1] = nullptr;
        }
        locals_[i] = nullptr;
    }
}

void
FrameState::writeLocal(size_t index, const SValuePtr &sval) {
    ASSERT_not_null(sval);
    const size_t nSlots = sval->isJvmCategory2() ? 2 : 1;

    // Clear slot and overlapping category-2 ones
    clearLocalRange(index, nSlots);

    if (index + nSlots > locals_.size()) {
        locals_.resize(index + nSlots);
    }

    locals_[index] = sval;

    if (nSlots == 2) {
        auto tail = get_val_protoval()->copy();
        tail->kind(ValueKind::Category2Tail);
        locals_[index + 1] = tail;
    }
}

SValue::Ptr
FrameState::peekOperand(size_t depth) {
    ASSERT_require2(depth < stack_.size(), "ERROR: operand stack depth exceeded\n");
    return stack_[stack_.size() - 1 - depth];
}

SValue::Ptr
FrameState::popOperand() {
    ASSERT_require2(!stack_.empty(), "operand stack is empty");
    auto val = stack_.back();  // get value
    stack_.pop_back();         // remove it
    return val;
}

void
FrameState::pushOperand(const SValuePtr &sval) {
    stack_.push_back(sval);
}

bool
FrameState::merge(const AddressSpace::Ptr &other_, RiscOperators */*addrOps*/, RiscOperators */*valOps*/) {
    ASSERT_require2(name() == other_->name(), "TODO::FrameState::merge(), names diff");
    ASSERT_require2(purpose() == other_->purpose(), "TODO::FrameState::merge(), purpose differs");
    return false;
}

void
FrameState::hash(Combinatorics::Hasher &hasher, RiscOperators*, RiscOperators*) const {
    (void) hasher;
    ASSERT_require2(false, "TODO::hash\n");
}

const Sawyer::Optional<Address>&
FrameState::returnAddress() const {
    return returnAddress_;
}

void
FrameState::returnAddress(Address addr) {
    returnAddress_ = addr;
}

size_t
FrameState::frameId() const {
    return frameId_;
}

void
FrameState::frameId(size_t id) {
    frameId_ = id;
}

size_t
FrameState::newFrameId() {
    static std::atomic<uint64_t> nextId{1};
    return nextId.fetch_add(1, std::memory_order_relaxed);
}

std::string
FrameState::frameName() const {
    if (!method_) return "<root>";
    return method_->analysisClass()->name() + "::" + method_->name() + method_->descriptor();
}

std::string
FrameState::frameLabel() const {
    return label() + " " + frameName();
}

std::string
FrameState::label() const {
    return "frame #" + std::to_string(frameId_);
}

SgAsmJvmConstantPool*
FrameState::jvmConstantPool() const {
    return pool_;
}

void
FrameState::jvmConstantPool(SgAsmJvmConstantPool *pool) {
    pool_ = pool;
}

void
FrameState::print(std::ostream &out, Formatter &formatter_) const {
    (void) out;
    (void) formatter_;

    if (stack_.size()) {
        out << "  operands:\n";
    }

    //TODO::use formatter
    for (auto sval : stack_) {
        if (sval != nullptr) {
            out << "    ";
            if (sval->kind() == ValueKind::Integer32) {
                out << *sval << ":Integer";
            }
            else if (sval->kind() == ValueKind::Integer64) {
                out << *sval << ":Long";
            }
            else if (sval->kind() == ValueKind::NativeInt) {
                out << *sval << ":NativeInt";
            }
            else if (sval->kind() == ValueKind::Float32) {
                out << *sval << ":Float";
            }
            else if (sval->kind() == ValueKind::Float64) {
                out << *sval << ":Double";
            }
            else if (sval->kind() == ValueKind::Category2Tail) {
                out << "<category-2-tail>";
            }
            else if (sval->kind() == ValueKind::ArrayReference) {
                SValuePtr count = sval->arrayLength();
                out << "ArrayReference[" << *count << "]";
                if (sval->hasTypeDescriptor()) {
                    out << ":" << sval->typeDescriptor();
                }
            }
            else if (sval->kind() == ValueKind::ObjectReference) {
                out << "ObjectReference";
                if (sval->hasTypeDescriptor()) {
                    out << ":" << sval->typeDescriptor();
                }
            }
            else if (sval->kind() == ValueKind::Unknown) {
                out << "<unknown>";
            }
            out << "\n";
        } else {
            out << "    NULL\n";
        }
    }

    bool first{true};

    for (size_t idx = 0; idx < locals_.size(); ++idx) {
        const auto &sval = locals_[idx];

        if (first) {
            out << "  locals:\n";
            first = false;
        }
        if (sval != nullptr) {
            out << "    " << idx << ": ";
            if (sval->kind() == ValueKind::Integer32) {
                out << *sval << ":Integer";
            }
            else if (sval->kind() == ValueKind::Integer64) {
                out << *sval << ":Long";
            }
            else if (sval->kind() == ValueKind::NativeInt) {
                out << *sval << ":NativeInt";
            }
            else if (sval->kind() == ValueKind::Float32) {
                out << *sval << ":Float";
            }
            else if (sval->kind() == ValueKind::Float64) {
                out << *sval << ":Double";
            }
            else if (sval->kind() == ValueKind::Category2Tail) {
                out << "<category-2-tail>";
            }
            else if (sval->kind() == ValueKind::ArrayReference) {
                SValuePtr count = sval->arrayLength();
                out << "ArrayReference[" << *count << "]";
                if (sval->hasTypeDescriptor()) {
                    out << ":" << sval->typeDescriptor();
                }
            }
            else if (sval->kind() == ValueKind::ObjectReference) {
                out << "ObjectReference";
                if (sval->hasTypeDescriptor()) {
                    out << ":" << sval->typeDescriptor();
                }
            }
            else if (sval->kind() == ValueKind::Unknown) {
                out << "<unknown>";
            }
            out << "\n";
        }
    }
}


} // namespace
} // namespace
} // namespace
} // namespace

#endif
