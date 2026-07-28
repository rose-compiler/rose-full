#ifndef ROSE_BinaryAnalysis_InstructionSemantics_SymbolicSemantics_TPP
#define ROSE_BinaryAnalysis_InstructionSemantics_SymbolicSemantics_TPP
#include <featureTests.h>
#ifdef ROSE_ENABLE_BINARY_ANALYSIS
#include <Rose/BinaryAnalysis/BasicTypes.h>

#include <Rose/BinaryAnalysis/InstructionSemantics/BaseSemantics.h>
#include <Rose/BinaryAnalysis/MemoryMap.h>

#include <Sawyer/BitVector.h>

namespace Rose {
namespace BinaryAnalysis {
namespace InstructionSemantics {
namespace SymbolicSemantics {

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                   Template definitions for RISC operators
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class FloatOp>
BaseSemantics::SValuePtr
RiscOperators::fpBinaryOp(const BaseSemantics::SValuePtr &lhs,
                          const BaseSemantics::SValuePtr &rhs,
                          FloatOp op) {
    ASSERT_not_null(lhs);
    ASSERT_not_null(rhs);
    ASSERT_require2(lhs->kind() == rhs->kind(), "lhs and rhs ValueKinds must be the same");
    ASSERT_require2(lhs->isConcrete(), "only concrete values are currently implemented");
    ASSERT_require2(rhs->isConcrete(), "only concrete values are currently implemented");

    switch (lhs->kind()) {
        case BaseSemantics::ValueKind::Float32: {
            ASSERT_require(rhs->nBits() == 32);
            ASSERT_require(lhs->nBits() == 32);
            ASSERT_require(sizeof(float) == sizeof(uint32_t));

            const uint32_t lhsBits = static_cast<uint32_t>(lhs->toUnsigned().get());
            const uint32_t rhsBits = static_cast<uint32_t>(rhs->toUnsigned().get());

            float lv;
            float rv;
            std::memcpy(&lv, &lhsBits, sizeof lv);
            std::memcpy(&rv, &rhsBits, sizeof rv);

            const float resultValue = static_cast<float>(op(lv, rv));

            uint32_t resultBits;
            std::memcpy(&resultBits, &resultValue, sizeof resultBits);

            BaseSemantics::SValuePtr result = number_(32, resultBits);
            result->kind(BaseSemantics::ValueKind::Float32);
            return result;
        }

        case BaseSemantics::ValueKind::Float64: {
            ASSERT_require(lhs->nBits() == 64);
            ASSERT_require(rhs->nBits() == 64);
            ASSERT_require(sizeof(double) == sizeof(uint64_t));

            const uint64_t lhsBits = lhs->toUnsigned().get();
            const uint64_t rhsBits = rhs->toUnsigned().get();

            double lv;
            double rv;
            std::memcpy(&lv, &lhsBits, sizeof lv);
            std::memcpy(&rv, &rhsBits, sizeof rv);

            const double resultValue = op(lv, rv);

            uint64_t resultBits;
            std::memcpy(&resultBits, &resultValue, sizeof resultBits);

            BaseSemantics::SValuePtr result = number_(64, resultBits);
            result->kind(BaseSemantics::ValueKind::Float64);
            return result;
        }

        default:
            throw BaseSemantics::NotImplemented(
                      "fpBinaryOp operands are not floating point", currentInstruction());
    }
}

} // namespace
} // namespace
} // namespace
} // namespace

#endif
#endif
