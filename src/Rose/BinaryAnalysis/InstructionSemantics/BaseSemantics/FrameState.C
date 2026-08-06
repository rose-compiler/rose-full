#include <featureTests.h>
#ifdef ROSE_ENABLE_BINARY_ANALYSIS

#include <Rose/BinaryAnalysis/ByteCode/Analysis.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/BaseSemantics/FrameState.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/BaseSemantics/RiscOperators.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/BaseSemantics/SymbolicMemory.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/BaseSemantics/SValue.h>
#include <Rose/StringUtility/NumberToString.h>

#include <iostream>

namespace Rose {
namespace BinaryAnalysis {
namespace InstructionSemantics {
namespace BaseSemantics {

//FIX_ME by using value from the class (may not be easy to get)
#define MAX_LOCALS 256

FrameState::~FrameState() {}

FrameState::FrameState() : MemoryState() {
    purpose(AddressSpace::Purpose::FRAMES);
    name("frame");
}

FrameState::FrameState(const SValue::Ptr &valProtoval)
    : MemoryState(valProtoval, valProtoval), locals_{} {
    purpose(AddressSpace::Purpose::FRAMES);
    name("frame");
}

FrameState::Ptr
FrameState::instance(const SValue::Ptr &valProtoval) {
    return Ptr(new FrameState(valProtoval));
}

MemoryState::Ptr
FrameState::create(const SValuePtr &addrProtoval, const SValuePtr &valProtoval) const {
    (void) addrProtoval;
    return instance(valProtoval);
}

AddressSpace::Ptr
FrameState::clone() const {
    Ptr retval = instance(get_val_protoval());

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

ByteCode::Class::Ptr
FrameState::analysisClass() {
    return class_;
}

void
FrameState::analysisClass(ByteCode::Class::Ptr& c) {
    class_ = c;
}

void
FrameState::initializeFrame(RiscOperatorsPtr& ops, std::string& /*className*/,
                            std::string& desc, uint16_t access, uint16_t maxLocals) {
    ASSERT_require2(stack_.size() == 0, "stack must be empty");
    ASSERT_require2(locals_.size() == 0, "locals array must be empty");
    // Clear anyway, can they be populated?
    clear();

    locals_.resize(maxLocals);

    constexpr uint16_t ACC_STATIC = 0x0008;
    bool isStatic = (access & ACC_STATIC) != 0;
    ASSERT_require2(!isStatic, "static frame inititialization not yet supported");

    // Create the this object for the frame

    SValuePtr this_ = ops->protoval();
    this_->kind(ValueKind::ObjectReference);
    this_->typeDescriptor(desc);

    // Not static so has this pointer
    ops->writeLocal(0, this_);

    //TODO: Just placeholders for function arguments, need function signatures.
    auto arg1 = ops->undefined_(32);
    arg1->kind(ValueKind::Integer32);
    auto arg2 = ops->undefined_(64);
    arg2->kind(ValueKind::Integer64);
    ops->writeLocal(1, arg1);
    ops->writeLocal(2, arg2);
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
