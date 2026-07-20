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

// DQ (6/22/2026): It was suggested that we add these to the top of the file.
#include <map>
#include <set>
#include <string>
#include <vector>


namespace Rose {
namespace BinaryAnalysis {
namespace InstructionSemantics {

/** Shared-ownership pointer to an CIL instruction dispatcher. */
typedef boost::shared_ptr<class DispatcherCil> DispatcherCilPtr;

class DispatcherCil: public BaseSemantics::Dispatcher
   {
     public:
      /** Base type. */
          using Super = BaseSemantics::Dispatcher;

      /** Shared-ownership pointer. */
          using Ptr = DispatcherCilPtr;

#if 0
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
#else
     public:
          RegisterDescriptor REG_PC;    
#endif

#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
     private:
          friend class boost::serialization::access;

          template<class S>
          void save(S &s, const unsigned /*version*/) const
             {
               s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(Super);
             };

          template<class S>
          void load(S &s, const unsigned /*version*/)
             {
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
          void updateFpsrExcIde(const BaseSemantics::SValuePtr &a, SgAsmType *aType, const BaseSemantics::SValuePtr &b, SgAsmType *bType);

      /** Set or clear FPSR EXC OVFL bit.
       *
       *  Set if the destination is a floating-point data register or memory (@p dstType) and the intermediate result (@p
       *  intermediate) has an exponent that is greater than or equal to the maximum exponent value of the selected rounding
       *  precision (@p rounding) */
          void updateFpsrExcOvfl(const BaseSemantics::SValuePtr &intermediate, SgAsmType *valueType, SgAsmType *rounding, SgAsmType *dstType);

      /** Set or clear FPSR EXC UVFL bit.
       *
       *  Set if the intermediate result of an arithmetic instruction is too small to be represented as a normalized number in a
       *  floating-point register or memory using the selected rounding precision, that is, when the intermediate result exponent
       *  is less than or equal to the minimum exponent value of the selected rounding precision. Cleared otherwise. Underflow
       *  can ony occur when the desitnation format is single or double precision. When the destination is byte, word, or
       *  longword, the conversion ounderflows to zero without causing an underflow or an operand error. */
          void updateFpsrExcUnfl(const BaseSemantics::SValuePtr &intermediate, SgAsmType *valueType, SgAsmType *rounding, SgAsmType *dstType);

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
                    enum Nullness
                       {
                         NullnessUnknown,
                         DefinitelyNull,
                         DefinitelyNonNull,
                         MaybeNull
                       };

                    enum CilBranchCompareKind
                       {
                         BranchEq,
                         BranchGe,
                         BranchGt,
                         BranchLe,
                         BranchLt
                       };

                 // DQ (6/28/2026): Adding more support for assignability of types.
                    enum Assignability
                       {
                         AssignabilityNo,
                         AssignabilityYes,
                         AssignabilityUnknown
                       };
#if 0
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
#else
struct TypeDescriptor
   {
     // The token can be known even when the metadata record has not been resolved.
     uint32_t metadataToken = 0;

     // True only when the metadata provider actually resolved the token and filled
     // in the type-category/layout information below.
     bool metadataKnown = false;

     std::string name;

     // These are meaningful only when metadataKnown is true.
     bool isValueType = false;
     bool isReferenceType = false;
     bool isInterface = false;
     bool isArray = false;

     // Optional hierarchy metadata. These are deliberately separate from
     // metadataKnown because a provider can know a type's category/name without
     // having loaded its inheritance/interface closure. A zero base token means
     // "no base type" only when baseTypeKnown is true.
     bool baseTypeKnown = false;
     uint32_t baseTypeToken = 0;
     bool interfaceTypesKnown = false;
     std::set<uint32_t> interfaceTypeTokens;

     // Storage size for value types, in bits. Zero means unknown layout.
     size_t valueBitWidth = 0;

     TypeDescriptor() = default;

     // Token is known, but type metadata/layout is not known.
     explicit TypeDescriptor(uint32_t token)
        : metadataToken(token), metadataKnown(false)
        {}

     // Use this only when the caller really knows this is resolved metadata.
     TypeDescriptor(uint32_t token, const std::string &name)
        : metadataToken(token), metadataKnown(true), name(name)
        {}

     // This means "has a nonzero metadata token", not "metadata was resolved".
     bool isValid() const
        {
          return metadataToken != 0;
        }

     bool isResolved() const
        {
          return metadataKnown;
        }

     bool isKnownReferenceType() const
        {
          return metadataKnown && isReferenceType && !isValueType;
        }

     bool isKnownValueType() const
        {
          return metadataKnown && isValueType;
        }

     bool hasKnownValueWidth() const
        {
          return metadataKnown && valueBitWidth != 0;
        }

     bool hasKnownBaseType() const
        {
          return metadataKnown && baseTypeKnown;
        }

     bool hasKnownInterfaceTypes() const
        {
          return metadataKnown && interfaceTypesKnown;
        }
   };
#endif
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

                         MetadataDescriptor(uint32_t token, Kind kind) : metadataToken(token), kind(kind) {}

                         bool isValid() const
                            {
                              return metadataToken != 0;
                            }
                       };

                    struct MethodDescriptor
                       {
                         uint32_t metadataToken = 0;
                         std::string name;

                         bool signatureKnown = false;

                      // DQ (6/22/2026): Adding new data members.    
                      // bool hasThis      = false;
                         bool explicitThis = false;
                         bool isStatic     = false;
                         bool isVirtual    = false;

                         size_t parameterCount = 0;
                         bool hasThis          = false;
                         bool returnsVoid      = true;
                         size_t returnBits     = 0;

                      // DQ (6/22/2026): Adding new data members.    
                      // size_t returnBitWidth = 0;
                      // SValuePtr::ValueKind returnKind = SValuePtr::ValueKind::UNKNOWN;
                         Rose::BinaryAnalysis::InstructionSemantics::BaseSemantics::ValueKind returnKind = Rose::BinaryAnalysis::InstructionSemantics::BaseSemantics::ValueKind::Unknown;
                         std::string returnTypeDescriptor;
                      // std::vector<SValuePtr::ValueKind> parameterKinds;
                         std::vector<size_t> parameterBitWidths;
                         std::vector<std::string> parameterTypeDescriptors;

                         MethodDescriptor() = default;

                         explicit MethodDescriptor(uint32_t token) : metadataToken(token) {}

                         bool isValid() const
                            {
                              return metadataToken != 0;
                            }

                         size_t stackArgumentCount() const
                            {
                              return parameterCount + ((hasThis || explicitThis) ? 1 : 0);
                            }
                       };
#if 0
// DQ (6/22/2026): Suggested version of struct.
struct MethodDescriptor {
    uint32_t metadataToken = 0;

    bool signatureKnown = false;

    bool hasThis = false;
    bool explicitThis = false;
    bool isStatic = false;
    bool isVirtual = false;

    size_t parameterCount = 0;

    bool returnsVoid = true;
    size_t returnBitWidth = 0;

    SValue::ValueKind returnKind = SValue::ValueKind::UNKNOWN;
    std::string returnTypeDescriptor;

    std::vector<SValue::ValueKind> parameterKinds;
    std::vector<size_t> parameterBitWidths;
    std::vector<std::string> parameterTypeDescriptors;
};
#endif

                    struct CallSiteDescriptor
                       {
                         uint32_t signatureToken = 0;

                         bool signatureKnown = false;
                         size_t parameterCount = 0;
                         bool hasThis = false;
                         bool returnsVoid = true;
                         size_t returnBits = 0;

                         explicit CallSiteDescriptor(uint32_t token) : signatureToken(token) {}

                         size_t stackArgumentCount() const
                            {
                              return parameterCount + (hasThis ? 1 : 0);
                            }
                       };

                    struct CurrentMethodDescriptor
                       {
                         bool returnsVoid = true;
                         size_t returnBits = 32;
                         BaseSemantics::ValueKind returnKind = BaseSemantics::ValueKind::Unknown;
                         std::string returnTypeDescriptor;
                       };
#if 0
                    struct FieldDescriptor
                       {
                         uint32_t metadataToken = 0;
                         std::string name;

                         bool metadataKnown = false;

                         bool isStatic = false;

                      // Field storage layout.
                         bool offsetKnown = false;
                         uint64_t offsetBytes = 0;

                      // Field type/layout.
                         bool typeKnown = false;
                         size_t fieldBits = 32;
                         BaseSemantics::ValueKind valueKind = BaseSemantics::ValueKind::Unknown;

                         FieldDescriptor() = default;
                         explicit FieldDescriptor(uint32_t token) : metadataToken(token) {}

                         bool isValid() const { return metadataToken != 0; }
                       };
#else
                    struct FieldDescriptor
                       {
                         uint32_t metadataToken = 0;
                         std::string name;

                         bool metadataKnown = false;

                         bool isStatic = false;

                      // For instance fields.
                         bool offsetKnown = false;
                         uint64_t offsetBytes = 0;

                      // Field storage type.
                         bool typeKnown = false;
                         size_t fieldBits = 32;
                         BaseSemantics::ValueKind valueKind = BaseSemantics::ValueKind::Unknown;

                      // Recommended additions.
                         bool isReferenceType = false;
                         bool isValueType = false;
                         uint32_t fieldTypeToken = 0;
                         std::string typeDescriptor;

                         FieldDescriptor() = default;
                         explicit FieldDescriptor(uint32_t token): metadataToken(token) {}

                         bool isValid() const { return metadataToken != 0; }
                       };
#endif
#if 0
                    class CilMetadataProvider
                       {
                         public:
                              virtual ~CilMetadataProvider() {}

                              virtual DispatcherCil::CilTypeAnalysis::MethodDescriptor
                              resolveMethod(uint32_t methodToken) const = 0;

                              virtual DispatcherCil::CilTypeAnalysis::CallSiteDescriptor
                              resolveCallSite(uint32_t standaloneSigToken) const = 0;

                              virtual DispatcherCil::CilTypeAnalysis::TypeDescriptor
                              resolveType(uint32_t typeToken) const = 0;
                       };
#else
                    class CilMetadataProvider
                       {
                         public:
                              virtual ~CilMetadataProvider() {}

                              virtual DispatcherCil::CilTypeAnalysis::MethodDescriptor
                              resolveMethod(uint32_t methodToken) const = 0;

                           // virtual DispatcherCil::CilTypeAnalysis::CallSiteDescriptor resolveCallSite(uint32_t standaloneSigToken) const = 0;
                              virtual CallSiteDescriptor resolveCallSite(uint32_t standaloneSigToken) const = 0;

                           // virtual DispatcherCil::CilTypeAnalysis::TypeDescriptor resolveType(uint32_t typeToken) const = 0;
                              virtual DispatcherCil::CilTypeAnalysis::TypeDescriptor resolveType(uint32_t typeToken) const = 0;

                           // virtual DispatcherCil::CilTypeAnalysis::FieldDescriptor resolveField(uint32_t fieldToken) const = 0;
                              virtual FieldDescriptor resolveField(uint32_t fieldToken) const = 0;
                       };
#endif

                    static DispatcherCil::CilTypeAnalysis::FieldDescriptor resolveField(DispatcherCil* dispatcher, uint32_t token);
#if 0
                    static DispatcherCil::CilTypeAnalysis::FieldDescriptor
                    resolveField(DispatcherCil* dispatcher, uint32_t token)
                       {
                         if (dispatcher && dispatcher->cilMetadata())
                              return dispatcher->cilMetadata()->resolveField(token);
                         return DispatcherCil::CilTypeAnalysis::FieldDescriptor(token);
                       }
#endif               
                    void setPossibleTypes(const SValuePtr &v, const TypeSet &types);
                    void addPossibleType(const SValuePtr &v, TypeToken type);
                    TypeSet possibleDynamicTypes(const SValuePtr &v) const;
                    bool hasTypeInfo(const SValuePtr &v) const;
                    void rememberTypeDescriptor(const TypeDescriptor &type);
                    const TypeDescriptor* typeDescriptorFor(TypeToken type) const;
          
                 // DQ (6/17/2026): I can't get this to compile outside of the class definition, so leave it there.
                    static const void* key(const SValuePtr &v)
                      {
                        ASSERT_not_null(v);

                     // SValuePtr is Sawyer::SharedPointer, not std::shared_ptr,
                     // so it does not have v.get().
                        return static_cast<const void*>(v.operator->());
                      }

               private:
                    std::map<const void*, Nullness> nullness_;
                    std::map<TypeToken, TypeDescriptor> knownTypes_;

               public:
                    void setNullness(const SValuePtr &v, Nullness n);
                    Nullness nullness(const SValuePtr &v) const;
                    bool isDefinitelyNull(const SValuePtr &v) const;
                    bool isDefinitelyNonNull(const SValuePtr &v) const;
#if 0
                    bool isAssignableTo(uint32_t sourceType, const TypeDescriptor *targetType);
                    bool allAssignableTo(const DispatcherCil::CilTypeAnalysis::TypeSet &possibleTypes, const TypeDescriptor *targetType);
                    bool noneAssignableTo(const DispatcherCil::CilTypeAnalysis::TypeSet &possibleTypes, const TypeDescriptor *targetType);
#else
                 // DQ (6/28/2026): Adding function prototypes.
                    Assignability isAssignableTo(uint32_t sourceType, const TypeDescriptor *targetType);
                    bool allAssignableTo(const DispatcherCil::CilTypeAnalysis::TypeSet &possibleTypes, const TypeDescriptor *targetType);
                    bool noneAssignableTo(const DispatcherCil::CilTypeAnalysis::TypeSet &possibleTypes, const TypeDescriptor *targetType);
#endif
                    void copyFacts(const SValuePtr &dst, const SValuePtr &src);
             };

       // DQ (6/15/2026): This is defined outside of the CilTypeAnalysis class as an experiment.
       // Maybe all of what is in the CilTypeAnalysis should be declared in the DispatcherCil class?
          struct CilPendingPrefixState
             {
               bool hasUnaligned = false;
               uint8_t unalignedBytes = 0;

               bool isVolatile = false;
               bool isTail = false;

               bool hasConstrained = false;
               uint32_t constrainedTypeToken = 0;

               bool isReadonly = false;

               void clear();
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

          private:
               CilPendingPrefixState pendingPrefix_;

          public:
               CilPendingPrefixState& pendingPrefix() { return pendingPrefix_; }
               const CilPendingPrefixState& pendingPrefix() const { return pendingPrefix_; }
               void clearPendingPrefix() { pendingPrefix_.clear(); }

       // DQ (6/22/2026): Adding additional support for method calling.
          private:
               const DispatcherCil::CilTypeAnalysis::CilMetadataProvider *cilMetadata_ = nullptr;

          public:
               void cilMetadata(const DispatcherCil::CilTypeAnalysis::CilMetadataProvider *provider)
                  {
                    cilMetadata_ = provider;
                  }

               const DispatcherCil::CilTypeAnalysis::CilMetadataProvider* cilMetadata() const
                  {
                    return cilMetadata_;
                  }

          private:
               CilTypeAnalysis::CurrentMethodDescriptor currentMethod_;

          public:
               const CilTypeAnalysis::CurrentMethodDescriptor& currentMethod() const
                  {
                    return currentMethod_;
                  }

               void currentMethod(const CilTypeAnalysis::CurrentMethodDescriptor &m)
                  {
                    currentMethod_ = m;
                  }

          public:
            // DQ (6/26/2026): This constant will need to be set by the CIL loader (later).
               size_t cilPointerBits_ = 32;

               size_t
               cilPointerBits()
                  {
                 // DQ (6/24/2026): This constant will need to be set by the CIL loader (later).
                 // return 32;
                    return cilPointerBits_;
                  }

private:
    bool allowByteOnlyExceptionFallback_ = true;

public:
    bool allowByteOnlyExceptionFallback() const
    {
        return allowByteOnlyExceptionFallback_;
    }

    void allowByteOnlyExceptionFallback(bool b)
    {
        allowByteOnlyExceptionFallback_ = b;
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
