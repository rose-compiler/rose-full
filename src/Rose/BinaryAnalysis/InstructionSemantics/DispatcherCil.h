#ifndef ROSE_BinaryAnalysis_InstructionSemantics_DispatcherCil_H
#define ROSE_BinaryAnalysis_InstructionSemantics_DispatcherCil_H
#include <featureTests.h>
#ifdef ROSE_ENABLE_BINARY_ANALYSIS

#include <Rose/BinaryAnalysis/BasicTypes.h>
#include <Rose/BinaryAnalysis/Architecture/Base.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/BaseSemantics.h>
#include <Rose/BinaryAnalysis/InstructionSemantics/BaseSemantics/Dispatcher.h>
#include <Rose/BinaryAnalysis/InstructionEnumsCil.h>

#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
#include <boost/serialization/access.hpp>
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/export.hpp>
#include <boost/serialization/split_member.hpp>
#endif

namespace Rose {
namespace BinaryAnalysis {
namespace InstructionSemantics {

/** Shared-ownership pointer to an CIL instruction dispatcher. */
typedef boost::shared_ptr<class DispatcherCil> DispatcherCilPtr;

class DispatcherCil: public BaseSemantics::Dispatcher {
public:
    /** Base type. */
    using Super = BaseSemantics::Dispatcher;

    /** Shared-ownership pointer. */
    using Ptr = DispatcherCilPtr;

public:
    /** Cached register.
     *
     *  This register is cached so that there are not so many calls to Dispatcher::findRegister(). Changing the @ref
     *  registerDictionary property invalidates all entries of the cache.
     *
     * @{ */
    RegisterDescriptor REG_D[8], REG_A[8], REG_FP[8], REG_PC, REG_CCR, REG_CCR_C, REG_CCR_V, REG_CCR_Z, REG_CCR_N, REG_CCR_X;
    RegisterDescriptor REG_MACSR_SU, REG_MACSR_FI, REG_MACSR_N, REG_MACSR_Z, REG_MACSR_V, REG_MACSR_C, REG_MAC_MASK;
    RegisterDescriptor REG_MACEXT0, REG_MACEXT1, REG_MACEXT2, REG_MACEXT3, REG_SSP, REG_SR_S, REG_SR, REG_VBR;
    // Floating-point condition code bits
    RegisterDescriptor REG_FPCC_NAN, REG_FPCC_I, REG_FPCC_Z, REG_FPCC_N;
    // Floating-point status register exception bits
    RegisterDescriptor REG_EXC_BSUN, REG_EXC_OPERR, REG_EXC_OVFL, REG_EXC_UNFL, REG_EXC_DZ, REG_EXC_INAN;
    RegisterDescriptor REG_EXC_IDE, REG_EXC_INEX;
    // Floating-point status register accrued exception bits
    RegisterDescriptor REG_AEXC_IOP, REG_AEXC_OVFL, REG_AEXC_UNFL, REG_AEXC_DZ, REG_AEXC_INEX;
    /** @} */

#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void save(S &s, const unsigned /*version*/) const {
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(Super);
    };

    template<class S>
    void load(S &s, const unsigned /*version*/) {
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(Super);
#if 0
        regcache_init();
        iproc_init();
        memory_init();
#else
        initializeDispatchTable();
        initializeMemoryState();
#endif
    }

    BOOST_SERIALIZATION_SPLIT_MEMBER();
#endif

private:
    DispatcherCil();                                    // used only by boost::serialization

protected:
    DispatcherCil(const Architecture::BaseConstPtr&);   // prototypical constructor
    DispatcherCil(const Architecture::BaseConstPtr&, const BaseSemantics::RiscOperatorsPtr&);

#if 0
    /** Load the cached register descriptors.
     *
     *  This happens at construction when the @ref registerDictionary property is changed. */
    void regcache_init(const Architecture::Base::ConstPtr&);
#endif

    /** Loads the iproc table with instruction processing functors.
     *
     *  This normally happens from the constructor. */
    void initializeDispatchTable();

    /** Make sure memory is set up correctly.
     *
     *  For instance, byte order should be big endian. */
    void initializeMemoryState();

public:
    ~DispatcherCil();

    /** Construct a prototypical dispatcher.
     *
     *  The only thing this dispatcher can be used for is to create another dispatcher with the virtual @ref create method. */
    static DispatcherCilPtr instance(const Architecture::BaseConstPtr&);

    /** Constructor. */
    static DispatcherCilPtr instance(const Architecture::BaseConstPtr&, const BaseSemantics::RiscOperatorsPtr&);

    /** Virtual constructor. */
    virtual BaseSemantics::DispatcherPtr create(const BaseSemantics::RiscOperatorsPtr&) const override;

    /** Dynamic cast to DispatcherCilPtr with assertion. */
    static DispatcherCilPtr promote(const BaseSemantics::DispatcherPtr&);

    virtual RegisterDescriptor instructionPointerRegister() const override;
    virtual RegisterDescriptor stackPointerRegister() const override;
    virtual BaseSemantics::SValuePtr read(SgAsmExpression*, size_t value_nbits, size_t addr_nbits=0) override;

    int iprocKey(SgAsmInstruction *insn_) const override;
    BaseSemantics::InsnProcessor* iprocLookup(SgAsmInstruction *insn) override;

    /** Set or clear FPSR EXC INAN bit. */
    void updateFpsrExcInan(const BaseSemantics::SValuePtr &a, SgAsmType *aType,
                           const BaseSemantics::SValuePtr &b, SgAsmType *bType);

    /** Set or clear FPSR EXC IDE bit. */
    void updateFpsrExcIde(const BaseSemantics::SValuePtr &a, SgAsmType *aType,
                          const BaseSemantics::SValuePtr &b, SgAsmType *bType);

    /** Set or clear FPSR EXC OVFL bit.
     *
     *  Set if the destination is a floating-point data register or memory (@p dstType) and the intermediate result (@p
     *  intermediate) has an exponent that is greater than or equal to the maximum exponent value of the selected rounding
     *  precision (@p rounding) */
    void updateFpsrExcOvfl(const BaseSemantics::SValuePtr &intermediate, SgAsmType *valueType,
                           SgAsmType *rounding, SgAsmType *dstType);

    /** Set or clear FPSR EXC UVFL bit.
     *
     *  Set if the intermediate result of an arithmetic instruction is too small to be represented as a normalized number in a
     *  floating-point register or memory using the selected rounding precision, that is, when the intermediate result exponent
     *  is less than or equal to the minimum exponent value of the selected rounding precision. Cleared otherwise. Underflow
     *  can ony occur when the desitnation format is single or double precision. When the destination is byte, word, or
     *  longword, the conversion ounderflows to zero without causing an underflow or an operand error. */
    void updateFpsrExcUnfl(const BaseSemantics::SValuePtr &intermediate, SgAsmType *valueType,
                           SgAsmType *rounding, SgAsmType *dstType);

    /** Set or clear FPSR EXC INEX bit. */
    void updateFpsrExcInex();

    /** Determines if an instruction should branch. */
    BaseSemantics::SValuePtr condition(CilInstructionKind, BaseSemantics::RiscOperators*);

    /** Update accrued floating-point exceptions. */
    void accumulateFpExceptions();

    /** Set floating point condition codes according to result. */
    void adjustFpConditionCodes(const BaseSemantics::SValuePtr &result, SgAsmFloatType*);

  // DQ (6/7/2026): Adding support for type analysis...
     class CilTypeAnalysis
        {
          public:
               using SValuePtr = Rose::BinaryAnalysis::InstructionSemantics::BaseSemantics::SValue::Ptr;
               using TypeToken = uint32_t;
               using TypeSet = std::set<TypeToken>;

          private:
               std::map<const void*, TypeSet> possibleTypes_;

          
          public:
               void setPossibleTypes(const SValuePtr &v, const TypeSet &types)
                  {
                    ASSERT_not_null(v);
                 // possibleTypes_[v.get()] = types;
                    possibleTypes_[v.operator->()] = types;
                  }

               void addPossibleType(const SValuePtr &v, TypeToken type)
                  {
                    ASSERT_not_null(v);
                 // possibleTypes_[v.get()].insert(type);
                    possibleTypes_[v.operator->()].insert(type);
                  }

               TypeSet possibleDynamicTypes(const SValuePtr &v) const
                  {
                    ASSERT_not_null(v);

                 // auto found = possibleTypes_.find(v.get());
                    auto found = possibleTypes_.find(v.operator->());
                    if (found != possibleTypes_.end())
                         return found->second;

                 // Unknown object type.
                    return TypeSet{};
                  }

               bool hasTypeInfo(const SValuePtr &v) const
                  {
                    ASSERT_not_null(v);
                 // return possibleTypes_.find(v.get()) != possibleTypes_.end();
                    return possibleTypes_.find(v.operator->()) != possibleTypes_.end();
                  }

               enum Nullness
                  {
                    NullnessUnknown,
                    DefinitelyNull,
                    DefinitelyNonNull,
                    MaybeNull
                  };

              static const void* key(const SValuePtr &v)
                 {
                   ASSERT_not_null(v);

                // SValuePtr is Sawyer::SharedPointer, not std::shared_ptr,
                // so it does not have v.get().
                   return static_cast<const void*>(v.operator->());
                 }

          private:
               std::map<const void*, Nullness> nullness_;

          public:

               void setNullness(const SValuePtr &v, Nullness n)
                  {
                    ASSERT_not_null(v);
                    nullness_[key(v)] = n;
                  }

               Nullness nullness(const SValuePtr &v) const
                  {
                    ASSERT_not_null(v);

                    auto found = nullness_.find(key(v));
                    if (found != nullness_.end())
                         return found->second;

                    return NullnessUnknown;
                  }

               bool isDefinitelyNull(const SValuePtr &v) const
                  {
                    return nullness(v) == DefinitelyNull;
                  }

               bool isDefinitelyNonNull(const SValuePtr &v) const
                  {
                    return nullness(v) == DefinitelyNonNull;
                  }
  
     struct TypeDescriptor
        {
          uint32_t metadataToken = 0;          // CIL metadata token for TypeDef/TypeRef/TypeSpec
          std::string name;                    // Optional friendly/debug name
          bool isValueType = false;
          bool isReferenceType = true;
          bool isInterface = false;
          bool isArray = false;
          size_t valueBitWidth = 0;            // Useful for unbox.any, conv, etc.; 0 if unknown

          TypeDescriptor() = default;

          explicit TypeDescriptor(uint32_t token) : metadataToken(token) {}

          TypeDescriptor(uint32_t token, const std::string &name) : metadataToken(token), name(name) {}

          bool isValid() const
             {
               return metadataToken != 0;
             }
        };

     struct MetadataDescriptor
        {
          enum Kind
             {
               UnknownMetadata,
               TypeMetadata,
               MethodMetadata,
               FieldMetadata
             };

          uint32_t metadataToken = 0;
          Kind kind = UnknownMetadata;
          std::string name;

          MetadataDescriptor() = default;

          MetadataDescriptor(uint32_t token, Kind kind)
             : metadataToken(token), kind(kind) {}

          bool isValid() const
             {
               return metadataToken != 0;
             }
        };

     struct MethodDescriptor
        {
          uint32_t metadataToken = 0;
          std::string name;

          MethodDescriptor() = default;

          explicit MethodDescriptor(uint32_t token) : metadataToken(token) {}

          MethodDescriptor(uint32_t token, const std::string &name) : metadataToken(token), name(name) {}

          bool isValid() const
             {
               return metadataToken != 0;
             }
        };

bool
isAssignableTo(uint32_t sourceType, const TypeDescriptor *targetType)
{
    ASSERT_not_null(targetType);

    // First approximation:
    // a type is assignable to itself.
    if (sourceType == targetType->metadataToken)
        return true;

    // TODO:
    // - System.Object
    // - base classes
    // - interfaces
    // - arrays
    // - generic TypeSpec rules

    return false;
}

bool
allAssignableTo(const DispatcherCil::CilTypeAnalysis::TypeSet &possibleTypes,
                const TypeDescriptor *targetType)
{
    ASSERT_not_null(targetType);

    if (possibleTypes.empty())
        return false; // unknown, not definitely assignable

    for (uint32_t sourceType: possibleTypes) {
        if (!isAssignableTo(sourceType, targetType))
            return false;
    }

    return true;
}

bool
noneAssignableTo(const DispatcherCil::CilTypeAnalysis::TypeSet &possibleTypes,
                 const TypeDescriptor *targetType)
{
    ASSERT_not_null(targetType);

    if (possibleTypes.empty())
        return false; // unknown, not definitely impossible

    for (uint32_t sourceType: possibleTypes) {
        if (isAssignableTo(sourceType, targetType))
            return false;
    }

    return true;
}

void copyFacts(const SValuePtr &dst, const SValuePtr &src) {
    ASSERT_not_null(dst);
    ASSERT_not_null(src);

    auto typeFound = possibleTypes_.find(key(src));
    if (typeFound != possibleTypes_.end())
        possibleTypes_[key(dst)] = typeFound->second;

    auto nullFound = nullness_.find(key(src));
    if (nullFound != nullness_.end())
        nullness_[key(dst)] = nullFound->second;
}

#if 0
SValuePtr
nullReference(DispatcherCil dispatcher, Ops ops, size_t nbits)
{
 // ASSERT_not_null(dispatcher);
 // ASSERT_not_null(ops);

    SValuePtr retval = ops.number_(nbits, 0);
    dispatcher.typeAnalysis().setNullness(retval, DispatcherCil::CilTypeAnalysis::DefinitelyNull);

    return retval;
}
#endif

        };
  
       // DQ (6/7/2026): Adding suport for type analysis.
          private:
               CilTypeAnalysis typeAnalysis_;

          public:
               CilTypeAnalysis& typeAnalysis()
                  {
                    return typeAnalysis_;
                  }

               const CilTypeAnalysis& typeAnalysis() const
                  {
                    return typeAnalysis_;
                  }

   };

} // namespace
} // namespace
} // namespace

#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
BOOST_CLASS_EXPORT_KEY(Rose::BinaryAnalysis::InstructionSemantics::DispatcherCil);
#endif

#endif
#endif
