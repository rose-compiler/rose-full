
#ifndef ROSE_SgAsmInstruction_H
#define ROSE_SgAsmInstruction_H
#include <RoseFirst.h>
#include <Cxx_GrammarDeclarations.h>
#include <SgAsmStatement.h>



/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

// WARNING -- GENERATED CODE -- DO NOT MODIFY THIS CODE -- WARNING!
//      This code is automatically generated for each 
//      terminal and non-terminal within the defined 
//      grammar.  There is a simple way to change the 
//      code to fix bugs etc.  See the ROSE README file
//      for directions.

// tps: (02/22/2010): Adding DLL export requirements
#include "rosedll.h"

// predeclarations for SgAsmInstruction

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmInstruction.h" */
/* #line 43952 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#include <Rose/BinaryAnalysis/Address.h>
#include <Rose/BinaryAnalysis/Architecture/BasicTypes.h>
#include <Rose/BinaryAnalysis/MemoryMap.h>
#include <sageContainer.h>
#include <Sawyer/Cached.h>

#ifdef ROSE_SgAsmInstruction_IMPL
#include <SgAsmExprListExp.h>
#include <SgAsmOperandList.h>
#endif


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmInstruction
class ROSE_DLL_API SgAsmInstruction  : public SgAsmStatement
   {
     public:


/* #line 51 "/workspace/generated/src/frontend/SageIII//SgAsmInstruction.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 44021 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmInstruction -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmInstruction");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmStatement);
        {
            auto temp = architectureIdSerialize(p_architectureId);
            s & boost::serialization::make_nvp("p_architectureId", temp);
            p_architectureId = architectureIdDeserialize(temp);
        }
        s & BOOST_SERIALIZATION_NVP(p_rawBytes);
        s & BOOST_SERIALIZATION_NVP(p_operandList);
        s & BOOST_SERIALIZATION_NVP(p_delaySlot);
        userSerializeBoost(s);
        debugSerializationEnd("SgAsmInstruction");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
private:
    struct SemanticFailure {
        size_t n;
        SemanticFailure(): n(0) {}

#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
    private:
        friend class boost::serialization::access;
        template<class S>
        void serialize(S &s, const unsigned /*version*/) {
            s & BOOST_SERIALIZATION_NVP(n);
        }
#endif
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Properties
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
public:
    /** Property: Architecture registration ID.
     *
     *  Every instruction must belong to a registered architecture. This ID specifies the architecture of which this instruction
     *  is a member.
     *
     *  When an instruction is serialized to a file, the architecture name is saved in place of its registration ID, and when the
     *  instruction is deserialized, that name is looked up in the registry and the registration ID is saved in the reconstituted
     *  instruction. This mechanism enables the instruction to point to the correct architecture even if the writer and reader
     *  tools have slightly different sets of architectures registered. 
     *  
     *  @{ */
    uint8_t const& get_architectureId() const;
    /** @} */
    // Architecture registration IDs change from run to run, so serialize the architecture name instead. The architecture names
    // will probably not change as frequently as their registration IDs.
    std::string architectureIdSerialize(uint8_t id) const;
    uint8_t architectureIdDeserialize(const std::string &name) const;
public:
    /** Property: Raw bytes of an instruction.
     *
     *  These are the bytes that were actually decoded to obtain the instruction AST. 
     *  
     *  @{ */
    SgUnsignedCharList const& get_rawBytes() const;
    void set_rawBytes(SgUnsignedCharList const&);
    /** @} */

public:
    /** Property: AST node that holds all operands.
     *
     *  This is the @ref SgAsmOperandList AST node that holds all the operands of this instruction. A separate node is
     *  necessary (rather than storing the operand list directly in the instruction node) due to limitations of ROSETTA. 
     *  
     *  @{ */
    SgAsmOperandList* const& get_operandList() const;
    void set_operandList(SgAsmOperandList* const&);
    /** @} */

public:
    /** Property: Delay slot instructions.
     *
     *  The instruction occupying the delay slot for this instruction. A delay slot is an instruction that is executed without the
     *  effects of a preceding instruction. The most common form is a single arbitrary instruction located immediately after a
     *  branch instruction on a RISC architecture, in which case the delay instruction will execute even if the preceding branch is
     *  taken. This makes the instruction execute out-of-order compared to its location in memory or in the original assembler
     *  language code.
     *
     *  The address of the instruction pointed to by the delay slot must immediately follow this instruction. There is no AST edge
     *  from this instruction to its delay slot instruction. 
     *  
     *  @{ */
    SgAsmInstruction* const& get_delaySlot() const;
    void set_delaySlot(SgAsmInstruction* const&);
    /** @} */
    // FIXME[Robb Matzke 2023-03-18]: is the lack of serialization a bug?
public:
    /** Property: Ordered list of instruction semantics.
     *
     *  If instruction semantics are available and attached to the instruction, then this subtree will contain a list of
     *  semantic side effects of the instruction. The semantics are attached by using the @ref
     *  Rose::BinaryAnalysis::InstructionSemantics::StaticSemantics semantic domain. 
     *  
     *  @{ */
    SgAsmExprListExp* const& get_semantics() const;
    void set_semantics(SgAsmExprListExp* const&);
    /** @} */
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Non-property data members
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
private:
    SemanticFailure semanticFailure_;

public:
    /** Represents an invalid stack delta.
     *
     *  This value is used for the result of a stack delta analysis stored in the instruction AST if the stack delta
     *  analysis was not run or did not produce a numeric result. */
    static const int64_t INVALID_STACK_DELTA;           // [Robb Matzke 2024-10-01]: deprecated; use an optional type instead

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Architecture for instruction.
     *
     *  The architecture is looked up in the architecture registery in constant time by using the @ref architectureId property.
     *  It is generally unwise to change the architecture registery after instructions have been created since this may cause
     *  instructions to refer to an incorrect architecture.
     *
     *  Thread safety: This function is thread safe. */
    Rose::BinaryAnalysis::Architecture::BaseConstPtr architecture() const /*final*/;

    /** Property: Instruction mnemonic string.
     *
     *  The short string that describes the instruction. When comparing instructions, it's faster to use the @c kind property
     *  defined in the subclasses, or the @ref SgAsmInstruction::get_anyKind function instead of comparing mnemonic strings. But be
     *  aware that some architectures have mnemonics that include information about the instruction operands and this information is
     *  typically not represented by the instruction kind enum constants. */
    std::string get_mnemonic() const;

    // [Robb Matzke 2023-12-04]: deprecated
    virtual std::string description() const final ROSE_DEPRECATED("use Architecture::Base::instructionDescription");

    /** Number of operands. */
    size_t nOperands() const;

    /** Nth operand.
     *
     *  If the operand index is out of range, then null is returned. */
    SgAsmExpression* operand(size_t) const;

    // [Robb Matzke 2023-12-04]: deprecated
    virtual bool terminatesBasicBlock() final ROSE_DEPRECATED("use Architecture::Base::terminatesBasicBlock");
    virtual bool isFunctionCallFast(const std::vector<SgAsmInstruction*>&, Rose::BinaryAnalysis::Address *target,
                                    Rose::BinaryAnalysis::Address *ret) final
        ROSE_DEPRECATED("use Architecture::Base::isFunctionCallFast");
    virtual bool isFunctionCallSlow(const std::vector<SgAsmInstruction*>&, Rose::BinaryAnalysis::Address *target,
                                    Rose::BinaryAnalysis::Address *ret) final
        ROSE_DEPRECATED("use Architecture::Base::isFunctionCallSlow");
    virtual bool isFunctionReturnFast(const std::vector<SgAsmInstruction*>&) final
        ROSE_DEPRECATED("use Architecture::Base::isFunctionReturnFast");
    virtual bool isFunctionReturnSlow(const std::vector<SgAsmInstruction*>&) final
        ROSE_DEPRECATED("use Architecture::Base::isFunctionReturnSlow");
    virtual Sawyer::Optional<Rose::BinaryAnalysis::Address> branchTarget() final
        ROSE_DEPRECATED("use Architecture::Base::branchTarget");

    /** Returns true if this instruction is the first instruction in a basic block.
     *
     *  This method looks only at the AST to make this determination. */
    bool isFirstInBlock();

    /** Returns true if this instruction is the last instruction in a basic block.
     *
     *  This method looks only at the AST to make this determination. */
    bool isLastInBlock();

    /** Determines whether a single instruction has an effect.
     *
     *  An instruction has an effect if it does anything other than setting the instruction pointer to a concrete
     *  value. Instructions that have no effect are called "no-ops".  The x86 NOP instruction is an example of a no-op, but
     *  there are others also.
     *
     *  The following information about x86 no-ops is largely from Cory Cohen at CMU/SEI. In the discussion that follows,
     *  we are careful to distinguish between NOP (the mneumonic for instructions 90, and 0f1f) and "no-op" (any
     *  instruction whose only effect is to advance the instruction pointer).
     *
     * @code
     *  Opcode bytes         Intel assembly syntax
     *  -------------------- ----------------------
     *  90                   nop
     *
     *  89c0                 mov eax,eax            Intel's old recommended two-byte no-op was to
     *  89c9                 mov ecx,ecx            move a register to itself...  The second byte of these are mod/rm
     *  89d2                 mov edx,edx            bytes, and can generally be substituded wherever you see 0xc0 in
     *  89db                 mov ebx,ebx            subsequent examples.
     *  89e4                 mov esp,esp
     *  89ed                 mov ebp,ebp
     *  89f6                 mov esi,esi
     *  89ff                 mov edi,edi
     *
     *  88c0                 mov al,al              The above are also available in 8-bit form with a leading byte of 0x88
     *  6689c0               mov ax,ax              and with an operand size prefix (0x66).
     *
     *  66666689c0           mov ax,ax              The prefixes can be repeated. One source seemed to imply that up to
     *                                              three are reliably supported by the actual Intel processors. ROSE
     *                                              supports any number up to the maximum instruction size (varies by mode).
     *
     *  6688c0               mov al,al              The operand size prefix can even be nonsensical.
     *
     *  8ac0                 mov al,al              These are also presumabely no-ops.  As with most instructions, these
     *  8bc0                 mov eax,eax            will accept operand size prefixes as well.
     *
     *  f090                 lock nop               Most of these instructions will accept a lock prefix as well, which does
     *  f0f090               lock nop               not materially affect the result. As before, they can occur repeatedly,
     *  f066f090             lock nop               and even in wacky combinations.
     *  f066f06666f0f066f090 lock nop
     *
     *  f290                 repne nop              Cory Cohen strongly suspects that the other instruction prefixes are
     *  f390                 rep nop                ignored as well, although to be complete, we might want to conduct a
     *  2690                 es nop                 few tests into the behavior of common processors.
     *  2e90                 cs nop
     *  3690                 ss nop
     *  3e90                 ds nop
     *  6490                 fs nop
     *  6590                 gs nop
     *  6790                 nop
     *
     *  8d00                 lea eax,[eax]          Intel's old recommendation for larger no-ops was to use the LEA
     *  8d09                 lea ecx,[ecx]          instruction in various dereferencing modes.
     *  8d12                 lea edx,[edx]
     *  8d1b                 lea ebx,[ebx]
     *  8d36                 lea esi,[esi]
     *  8d3f                 lea edi,[edi]
     *
     *  8d4000               lea eax,[eax+0x0]
     *  8d4900               lea ecx,[ecx+0x0]
     *  8d5200               lea edx,[edx+0x0]
     *  8d5b00               lea ebx,[ebx+0x0]
     *  8d7600               lea esi,[esi+0x0]
     *  8d7f00               lea edi,[edi+0x0]
     *
     *  8d8000000000         lea eax,[eax+0x0]      This last block is really the [reg*0x1+0x0] dereferencing mode.
     *  8d8900000000         lea ecx,[ecx+0x0]
     *  8d9200000000         lea edx,[edx+0x0]
     *  8d9b00000000         lea ebx,[ebx+0x0]
     *  8db600000000         lea esi,[esi+0x0]
     *  8dbf00000000         lea edi,[edi+0x0]
     *
     *  8d0420               lea eax,[eax]          Then there's funky equivalents involving SIB bytes.
     *  8d0c21               lea ecx,[ecx]
     *  8d1422               lea edx,[edx]
     *  8d1c23               lea ebx,[ebx]
     *  8d2424               lea esp,[esp]
     *  8d3426               lea esi,[esi]
     *  8d3c27               lea edi,[edi]
     *
     *  8d442000             lea eax,[eax+0x0]
     *  8d4c2100             lea ecx,[ecx+0x0]
     *  8d542200             lea edx,[edx+0x0]
     *  8d5c2300             lea ebx,[ebx+0x0]
     *  8d642400             lea esp,[esp+0x0]
     *  8d742600             lea esi,[esi+0x0]
     *  8d7c2700             lea edi,[edi+0x0]
     *
     *  8d842000000000       lea eax,[eax+0x0]
     *  8d8c2100000000       lea ecx,[ecx+0x0]
     *  8d942200000000       lea edx,[edx+0x0]
     *  8d9c2300000000       lea ebx,[ebx+0x0]
     *  8da42400000000       lea esp,[esp+0x0]
     *  8db42600000000       lea esi,[esi+0x0]
     *  8dbc2700000000       lea edi,[edi+0x0]
     *
     *  8d2c2d00000000       lea ebp,[ebp+0x0]      The EBP variants don't exactly follow the pattern above.
     *  8d6c2500             lea ebp,[ebp+0x0]
     *  8dac2500000000       lea ebp,[ebp+0x0]
     *
     *  0f1f00               nop [eax]              P4+ adds the 0f1f instruction. Each of these can be prefixed with the
     *  0f1f4000             nop [eax+0x0]          0x66 operand size prefix. In fact, Intel recommends doing this now
     *  0f1f440000           nop [eax+0x0]          for the optimally efficient 6- and 9-byte sequences.
     *  0f1f8000000000       nop [eax+0x0]
     *  0f1f840000000000     nop [eax+0x0]
     *
     *  0f0dxx               nop [xxx]              The latest version of the manual implies that this sequence is also
     *                                              reserved for NOP, although I can find almost no references to it except
     *                                              in the latest instruction manual on page A-13 of volume 2B. It's also
     *                                              mentioned on x86asm.net. [CORY 2010-04]
     *
     *  d9d0                 fnop                   These aren't really no-ops on the chip, but are no-ops from the
     *  9b                   wait                   program's perspective. Most of these instructions are related to
     *  0f08                 invd                   improving cache efficiency and performance, but otherwise do not
     *  0f09                 wbinvd                 affect the program behavior.
     *  0f01c9               mwait
     *  0f0138               invlpg [eax]
     *  0f01bf00000000       invlpg [edi+0x0]       and more...
     *  0f18 /0              prefetchnta [xxx]
     *  0f18 /1              prefetch0 [xxx]
     *  0f18 /2              prefetch1 [xxx]
     *  0f18 /3              prefetch2 [xxx]
     *  0fae /5              lfence [xxx]
     *  0fae /6              mfence [xxx]
     *  0fae /7              sfence [xxx]
     *
     *  0f18xx through 0f1exx                       This opcode rante is officially undefined but is probably reserved
     *                                              for no-ops as well.  Any instructions encountered in this range are
     *                                              probably consequences of bad code and should be ingored.
     *
     *  JMP, Jcc, PUSH/RET, etc.                    Branches are considered no-ops if they can be proven to always branch
     *                                              to the fall-through address.
     * @endcode
     */
    virtual bool hasEffect();

    /** Determine if an instruction sequence has an effect.
     *
     *  A sequence of instructions has an effect if it does something other than setting the instruction pointer to a
     *  concrete value.
     *
     *  This is mostly a wrapper around the @ref Rose::BinaryAnalysis::NoOperation "NoOperation" analysis. The @p
     *  allow_branch and @p relax_stack_semantics are no longer supported but perhaps will be added eventually to the
     *  NoOperation analysis. */
    virtual bool hasEffect(const std::vector<SgAsmInstruction*>&, bool allow_branch=false,
                           bool relax_stack_semantics=false);

    /** Determines what subsequences of an instruction sequence have no cumulative effect.
     *
     *  The return value is a vector of pairs where each pair is the starting index and length of subsequence.  The
     *  algorithm we use is to compute the machine state after each instruction and then look for pairs of states that are
     *  identical except for the instruction pointer.
     *
     *  This is mostly a wrapper around the @ref Rose::BinaryAnalysis::NoOperation "NoOperation" analysis. The @p
     *  allow_branch and @p relax_stack_semantics are no longer supported but perhaps will be added eventually to the
     *  NoOperation analysis. */
    virtual std::vector<std::pair<size_t,size_t> >
    findNoopSubsequences(const std::vector<SgAsmInstruction*>& insns, bool allow_branch=false,
                         bool relax_stack_semantics=false);

    // [Robb Matzke 2023-12-04]: deprecated
    virtual Rose::BinaryAnalysis::AddressSet getSuccessors(bool &complete)
        ROSE_DEPRECATED("use Architecture::Base::getSuccessors");
    virtual Rose::BinaryAnalysis::AddressSet getSuccessors(const std::vector<SgAsmInstruction*> &basicBlock,
                                                           bool &complete,
                                                           const Rose::BinaryAnalysis::MemoryMap::Ptr &initial_memory =
                                                           Rose::BinaryAnalysis::MemoryMap::Ptr())
        ROSE_DEPRECATED("use Architecture::Base::getSuccessors");

    /** Returns the size of an instruction in bytes.
     *
     *  This is only a convenience function that returns the size of the instruction's raw byte vector.  If an instruction
     *  or its arguments are modified, then the size returned by this function might not reflect the true size of the
     *  modified instruction if it were to be reassembled. */
    virtual size_t get_size() const;

    // [Robb Matzke 2023-12-05]: deprecated
    virtual bool isUnknown() const final ROSE_DEPRECATED("use Architecture::Base::isUnknown");

    /** Returns instruction kind for any architecture.
     *
     *  Instruction kinds are specific to the architecture so it doesn't make sense to compare an instruction kind from x86
     *  with an instruction kind from m68k.  However, this virtual function exists so that we don't need to implement
     *  switch statements every time we want to compare two instructions from the same architecture.  For instance, instead
     *  of code like this:
     *
     * @code
     *  bool areSame(SgAsmInstruction *a, SgAsmInstruction *b) {
     *      if (a->variantT() != b->variantT())
     *          return false;
     *      if (SgAsmM68kInstruction *aa = isSgAsmM68kInstruction(a)) {
     *          SgAsmM68kInstruction *bb = isSgAsmM68kInstruction(b);
     *          return aa->get_kind() == bb->get_kind();
     *      }
     *      if (SgAsmMipsInstruction *aa = isSgAsmMipsInstruction(a)) {
     *          SgAsmMipsInstruction *bb = isSgAsmMipsInstruction(b);
     *          return aa->get_kind() == bb->get_kind();
     *      }
     *      ...
     *      ... // and many others
     *      ...
     *      ASSERT_not_reachable("architecture is not implemented yet");
     *  }
     * @endcode
     *
     *  we can write future-proof code:
     *
     * @code
     *  bool areSame(SgAsmInstruction *a, SgAsmInstruction *b) {
     *      return a->variantT()==b->variantT() && a->get_anyKind()==b->get_anyKind();
     *  }
     * @endcode */
    virtual unsigned get_anyKind() const;

    /** Converts the instruction to a string.
     *
     *  The return value is an address, colon, mnemonic, and arguments. Only one space is used between the parts. */
    virtual std::string toString() const;

    /** Converts the instruction to a string.
     *
     *  The return value is a mnemonic and arguments. Only one space is used between the parts. */
    virtual std::string toStringNoAddr() const;

    /** Converts the instruction to a string without any ANSI color escapes.
     *
     *  The return value is an address, colon, mnemonic, and arguments. Only one space is used between the parts. */
    virtual std::string toStringNoColor() const;

    /** Converts the instruction to a string without address or color.
     *
     *  The return value is a mnemonic and arguments. Only one space is used between the parts, and no ANSI CSI commands
     *  are embedded in the returned string. */
    virtual std::string toStringNoAddrNoColor() const;

    /** Explicit constants.
     *
     *  Return the set of integer constants that appear explicitly in the instruction's operands. These are called
     *  "immediates" for some architectures such as X86. */
    virtual std::set<Rose::BinaryAnalysis::Address> explicitConstants() const;

    /** Property: Whether instruction semantics failed at this location.
     *
     *  This property is incremented by various analyses that evaluate instructions semantically when semantics fails
     *  in a way that is not recoverable.  Some analyses can work around failed semantics by operating in a degraded
     *  mode, and it is up to the analysis whether to increment this property.
     *
     *  Thread safety: This method is thread safe.
     *
     * @{ */
    size_t semanticFailure() const;
    void semanticFailure(size_t);
    void incrementSemanticFailure();
    /** @} */

    /** Rewrite certain addressing modes for operands.
     *
     *  The addressing mode: `REG1 + REG2 * SIZE + OFFSET` is changed from `(+ (+ REG1 (* REG2 SIZE)) OFFSET)` to `(+ (+ REG1
     *  OFFSET) (* REG2 SIZE))`, which during instruction semantic executions causes the base register and offset to be added first
     *  to obtain the starting address of an array, and then an additional offset added to obtain the address of the desired element
     *  of that array.
     *
     *  Returns true if anything changed, false otherwise. */
    bool normalizeOperands();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Serialization
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    template<class S>
    void userSerializeBoost(S &s) {
        s & BOOST_SERIALIZATION_NVP(semanticFailure_);
    }
#endif

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deprecated
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    // [Robb Matzke 2023-11-07]: deprecated
    const SgUnsignedCharList& get_raw_bytes() const ROSE_DEPRECATED("use get_rawBytes");
    void set_raw_bytes(const SgUnsignedCharList&) ROSE_DEPRECATED("use set_rawBytes");
public:
    /** Destructor. */
    virtual ~SgAsmInstruction();

public:
    /** Default constructor. */
    SgAsmInstruction();

public:
    /** Constructor. */
    SgAsmInstruction(Rose::BinaryAnalysis::Address const& address,
                     uint8_t const& architectureId);

protected:
    /** Initialize all properties that have explicit initial values.
     *
     *  This function is mostly for use in user-defined constructors where the user desires to initialize
     *  all the properties but does not know the names of the data members that store the property values.
     *  This function initializes the properties that have explicit initializations within this class, but
     *  does not recursively initialize base classes. */
    void initializeProperties();


// End of memberFunctionString
// Start of memberFunctionString
/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/Common.code" */

// *** COMMON CODE SECTION BEGINS HERE ***

    public:

       // DQ (3/25/3006): I put this back in because it had the logic for where the copy function required 
       // and not required which is required to match the other aspects of the copy mechanism code generation.
       // Specifically it is a problem to declare the copy function everywhere because it is not implemented 
       // for the SgSymbol IR nodes. I'm not clear why it is not implemented for these IR nodes.
       /* \brief Copies AST (whole subtree, depending on the SgCopyHelp class */
       // virtual SgNode* copy ( const SgCopyHelp & help) const;

      /*! \brief returns a string representing the class name */
          virtual std::string class_name() const override;

      /*! \brief returns new style SageIII enum values */
          virtual VariantT variantT() const override; // MS: new variant used in tree traversal

      /*! \brief static variant value */
       // King84 (2010.08.16): Moved this to an enum to save space, since it's only used at compiler-time anyway.
       // static const VariantT static_variant = V_SgAsmInstruction;
          enum { static_variant = V_SgAsmInstruction };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmInstruction* isSgAsmInstruction(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmInstruction* isSgAsmInstruction( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmInstruction * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmInstructionStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmInstruction * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmInstruction * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

          /// \private
          static unsigned long getNumberOfValidNodesAndSetGlobalIndexInFreepointer(unsigned long); // 
          /// \private
          static void resetValidFreepointers(); // 
          /// \private
          static unsigned long getNumberOfLastValidPointer(); // 


#if defined(INLINE_FUNCTIONS)
      /*! \brief returns pointer to newly allocated IR node */
          inline void *operator new (size_t size);
#else
      /*! \brief returns pointer to newly allocated IR node */
          void *operator new (size_t size);
#endif
      /*! \brief deallocated memory for IR node (returns memory to memory pool for reuse) */
          void operator delete (void* pointer, size_t size);

       // DQ (4/5/2007): This is not the correct operator that we want, but appears to be required to compile ROSE with ROSE.
          void operator delete (void* pointer)
             {
            // This is the generated delete operator...
               SgAsmInstruction::operator delete (pointer,sizeof(SgAsmInstruction));
             }

      /*! \brief Returns the total number of IR nodes of this type */
          static size_t numberOfNodes();

      /*! \brief Returns the size in bytes of the total memory allocated for all IR nodes of this type */
          static size_t memoryUsage();

      // End of scope which started in IR nodes specific code 
      /* */

      /* name Internal Functions
          \brief Internal functions ... incomplete-documentation

          These functions have been made public as part of the design, but they are suggested for internal use 
          or by particularly knowledgeable users for specialized tools or applications.

          \internal We could not make these private because they are required by user for special purposes. And 
              it would be unwieldy to have many of the internal classes in ROSE be explicitly defined as friends.
         
       */

       // MS: 02/12/02 container of pointers to AST successor nodes used in the traversal
       // overridden in every class by *generated* implementation
      /*! \brief container of pointers to AST successor nodes used in the traversal overridden in every class by *generated* implementation */
          virtual std::vector<SgNode*> get_traversalSuccessorContainer() const override;
       // MS: 06/28/02 container of names of variables or container indices 
       // used used in the traversal to access AST successor nodes
       // overridden in every class by *generated* implementation
      /*! \brief container of names of variables or container indices used used in the traversal
          to access AST successor nodes overridden in every class by *generated* implementation */
          virtual std::vector<std::string> get_traversalSuccessorNamesContainer() const override;

       // GB (09/25/2007): Functions for index-based access to traversal successors; these are hopefully a lot faster
       // than all the vector copies. The implementation for these functions is generated for each class.
      /*! \brief return number of children in the traversal successor list */
          virtual size_t get_numberOfTraversalSuccessors() const override;
      /*! \brief index-based access to traversal successors by index number */
          virtual SgNode *get_traversalSuccessorByIndex(size_t idx) const override;
      /*! \brief index-based access to traversal successors by child node */
          virtual size_t get_childIndex(SgNode *child) const override;

#ifndef ROSE_USE_INTERNAL_FRONTEND_DEVELOPMENT
       // MS: 08/16/2002 method for generating RTI information
      /*! \brief return C++ Runtime-Time-Information */
          virtual RTIReturnType roseRTI() override;
#endif
      /* */



      /* name Deprecated Functions
          \brief Deprecated functions ... incomplete-documentation

          These functions have been deprecated from use.
       */
      /* */

      /*! returns a C style string (char*) representing the class name */
          virtual const char* sage_class_name() const  override ROSE_DEPRECATED_FUNCTION;

      // JJW (10/16/2008): Changed to a single function in Node.code, and put
      // getVariant() in #if 0 block to prevent confusing Doxygen
#if 0
      /*! returns old style Sage II enum values */
          virtual int variant() const ROSE_DEPRECATED_FUNCTION;
      /*! returns old style Sage II enum values */
       // virtual int getVariant() const ROSE_DEPRECATED_FUNCTION;
#endif
      /* */




     public:
      /* name Traversal Support Functions
          \brief Traversal support functions ... incomplete-documentation

          These functions have been made public as part of the design, but they are suggested for internal use 
          or by particularly knowledgable users for specialized tools or applications.
       */
      /* */

       // DQ (11/26/2005): Support for visitor pattern mechanims
       // (inferior to ROSE traversal mechanism, experimental).
      /*! \brief \b FOR \b INTERNAL \b USE Support for visitor pattern.
       */
          void executeVisitorMemberFunction (ROSE_VisitorPattern & visitor);

      /* DXN (08/09/2010): support for the classic visitor pattern done in GoF */
      /*! \brief support for the classic visitor pattern done in GoF */
          virtual void accept (ROSE_VisitorPattern & visitor) override;

       // DQ (12/26/2005): Support for traversal based on the memory pool
      /*! \brief \b FOR \b INTERNAL \b USE Support for visitor pattern over all IR nodes by type of IR node.
       */
          static void traverseMemoryPoolNodes(ROSE_VisitTraversal & visit);

      /*! \brief \b FOR \b INTERNAL \b USE Support for visitor pattern.
       */
          static void traverseMemoryPoolVisitorPattern(ROSE_VisitorPattern & visitor);

       // DQ (2/9/2006): Added to support traversal over single representative of each IR node
       // This traversal helps support internal tools that call static member functions.
       // note: this function operates on the memory pools.
      /*! \brief \b FOR \b INTERNAL \b USE Support for type-based traversal.
       */
          static void visitRepresentativeNode (ROSE_VisitTraversal & visit);
      /* */

     public: 
	/* NodeId support functions */
      /*! \brief Find a node by its variant type, pool index, and item index */
 	static SgNode* getNodeByNodeId(VariantT variantT, size_t poolIdx, size_t itemIdx);
      /*! \brief \b FOR \b INTERNAL \b USE Find an SgNode from its memory pool and location therin.
       */
 	static SgAsmInstruction* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmInstruction* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmInstruction* sgnode);

     public:
      /* name Memory Allocation Functions
          \brief Memory allocations functions ... incomplete-documentation

          These functions have been made public as part of the design, but they are suggested for internal use 
          or by particularly knowledgable users for specialized tools or applications.
       */
      /* */

      /*! \brief \b FOR \b INTERNAL \b USE This is used in internal tests to verify that all IR nodes are allocated from the heap.

          The AST File I/O depends upon the allocation of IR nodes being from the heap, stack based or global IR nodes should
          not appear in the AST if it will be written out to a file and read back in.  To enforce this concept, this function
          implements a test to verify that the IR node can be found on the heap and is part of a larger test of the whole AST.
          This test must pass before the AST can be written out to a file.  This is part of a compromise in the design of the 
          AST File I/O to support binary streaming of data to files; for performance.  It is also rather difficult, but possible, 
          to build a useful AST with IR nodes allocated on the stack or frm global scope, this test filters out such cased from
          being used with the AST File I/O mechanism.
       */
          virtual bool isInMemoryPool() override;

      /*! \brief \b FOR \b INTERNAL \b USE This is used in internal tests to verify that all IR nodes are allocated from the heap.

          The AST File I/O depends upon the allocation of IR nodes being from the heap, stack based or global IR nodes should
          not appear in the AST if it will be written out to a file and read back in.  To enforce this concept, this function
          implements a test to verify that the IR node can be found on the heap and is part of a larger test of the whole AST.
          This test must pass before the AST can be written out to a file.  This is part of a compromise in the design of the 
          AST File I/O to support binary streaming of data to files; for performance.  It is also rather difficult, but possible, 
          to build a useful AST with IR nodes allocated on the stack or frm global scope, this test filters out such cased from
          being used with the AST File I/O mechanism.
       */
          virtual void checkDataMemberPointersIfInMemoryPool() override;

      // DQ (4/30/2006): Modified to be a const function.
      /*! \brief \b FOR \b INTERNAL \b USE Returns STL vector of pairs of SgNode* and strings for use in AST tools

          This functions is part of general support for many possible tools to operate 
          on the AST.  The forms a list of ALL IR node pointers used by each IR node,
          and is a supperset of the get_traversalSuccessorContainer().  It is (I think)
          less than the set of pointers used by the AST file I/O. This is part of
          work implemented by Andreas, and support tools such as the AST graph generation.

          \warning This function can return unexpected data members and thus the 
                   order and the number of elements is unpredicable and subject 
                   to change.

          \returns STL vector of pairs of SgNode* and strings
       */
          virtual std::vector<std::pair<SgNode*,std::string> > returnDataMemberPointers() const override;

      /*! \brief \b FOR \b INTERNAL \b USE Processes pairs of references to SgNode* and strings for use in AST tools

          This functions similar to returnDataMemberPointers() except that it passes references to a handler object.
          As a result there is FAR more damage that can be done by using this function, but it is type-safe.
          This is provided for support of internal tools that operate on the AST, e.g the AST Merge mechanism.

          \warning This function can return unexpected data members and thus the order and the number of elements is unpredicable 
                   and subject to change.
       */
          virtual void processDataMemberReferenceToPointers(ReferenceToPointerHandler*) override;

      /*! \brief \b FOR \b INTERNAL \b USE Returns a unique index value for the childNode in the list of children at this IR node.

          This function returns a unique value for the input \b childNode in set of children at this IR node. Note
          that a negative value indicates that the input node is not a child.  This is the basis for the implementation
          of the isChild(SgNode*) member function.  Data members that are NULL in the IR node are counted internally
          (so that this function returns value that could be statically defined, and so are not dynamically determined).

          \warning The mapping on children to integer values could change from release to release of ROSE.

          \returns long
       */
          virtual long getChildIndex( SgNode* childNode ) const override;

      // DQ (9/2/2015): Since this function is generated by ROSETTA, we can't define the 
      // comment here (changed to be a C style comment and not be a doxygen comment).
      /* \brief Constructor for use by AST File I/O Mechanism

          This constructor permits the IR node to be rebuilt from the contiguously arranged data in memory 
          which obtained via fast binary file I/O from disk.
       */
       // SgAsmInstruction( SgAsmInstructionStorageClass& source );





 // JH (10/24/2005): methods added to support the ast file IO
    private:

      /* name AST Memory Allocation Support Functions
          \brief Memory allocations support....

          These functions handle the low leve support of the memory allocation scheme which permits IR nodes to be allocated 
          in large contiguous blocks to reduce memory fragmentation, improve performance, support specialized access (AST traversals),
          and support the AST File I/O Mechanism.
       */
      /* */

       /* JH (10/24/2005): Two typedefs. The TestType notes the type every pointer is cast to before
          we compare them. Since I had several problems with this, I decided to make a typdef to ensure
          that I use the same type everywhere, if any changes are made. THe second one declares the type
          (actually unsigned long) where teh pointer address gets converted to. On 64 bit platforms this
          might got changed, but unfortunatly, the return types are still unsigned longs. There exists
          a correspinding one in the AST_FILE_IO class!
       */
      // DQ (9/2/2015): This typedef is no longer used, we can't define the 
      // comment here (changed to be a C style comment and not be a doxygen comment).
      /* \brief Typedef used for low level memory access.
       */
       // typedef unsigned char* TestType;

      // DQ (9/2/2015): This typedef is no longer used, we can't define the 
      // comment here (changed to be a C style comment and not be a doxygen comment).
      /* \brief Typedef used to hold memory addresses as values.
       */
       // typedef unsigned long  AddressType;



       // necessary, to have direct access to the p_freepointer and the private methods !
      /*! \brief friend class declaration to support AST File I/O */
          friend class AST_FILE_IO;

      /*! \brief friend class declaration to support AST File I/O */
          friend class SgAsmInstructionStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmInstruction( const SgAsmInstructionStorageClass& source );

 // private: // JJW hack
       /*
          name AST Memory Allocation Support Variables
          Memory allocations support variables 

          These variables handle the low level support of the memory allocation scheme which permits IR nodes to be allocated 
          in large contiguous blocks to reduce memory fragmentation, improve performance, support specialized access (AST traversals),
          and support the AST File I/O Mechanism.
       */
      /* */

    public:

      // DQ (11/21/2009): Added function to add new Regular Expression attributes and return pointer 
      // to current node (so that it will work cleanly with build functions to specify patterns).
      // virtual SgNode* addRegExpAttribute();
      /*! \brief Support for AST matching using regular expression.

          This support is incomplete and the subject of current research to define 
          RegEx trees to support inexact matching.
       */
          SgAsmInstruction* addRegExpAttribute(std::string s, AstRegExAttribute* a);

#ifndef _MSC_VER
// Rasmussen (04/17/2019): Support for ATerms has been deprecated as it is no longer needed
// and likely never fully implemented nor tested.  Files remain in the src tree but are no
// longer built.
#define BUILD_ATERM_SUPPORT 0
   #if BUILD_ATERM_SUPPORT
   #ifdef ROSE_USE_ROSE_ATERM_SUPPORT
      // DQ (10/4/2014): Adding ATerm support to ROSE.
      /*! \brief Support for generation of ATerms.

          This support implements the generation of ATerms (consistant with the ROSE AST).
          ROSE IR nodes that are traversed are translated as ATerms, and all other IR node 
          date are attached as ATerm annotations.  This is a bulk translation of ROSE subtrees
          to ATerms, can be called on any ROSE subtree.  An ATerm interface to ROSE IR nodes
          is also implemented, but it only works with tools obaying the ATerm API (note that
          unfortunately SDF tools and Stratego both fail to obay the ATerm API).
       */
       // Rasmussen (1/7/2019): Added override to kill warning messages of overridden virtual function
          virtual ATerm generate_ATerm() override;

      /*! \brief Support for generation of ATerms. */
          virtual void generate_ATerm_Annotation(ATerm & term) override;
   #endif
   #endif // BUILD_ATERM_SUPPORT
#endif
       // These can't be virtual functions since we don't yet know what IR node to build (until we have read the aterm).
       // virtual generate_AST(ATerm & term);
       // virtual void read_ATerm_Annotation(ATerm & term);

// *** COMMON CODE SECTION ENDS HERE ***


// End of memberFunctionString
// Start of memberFunctionString
/* #line 670 "/workspace/generated/src/ROSETTA/Grammar/Node.code" */

     // the generated cast function
     // friend ROSE_DLL_API SgAsmInstruction* isSgAsmInstruction ( SgNode* s );

          typedef SgAsmStatement base_node_type;


// End of memberFunctionString






    protected:
// Start of memberFunctionString
uint8_t p_architectureId;
          
// End of memberFunctionString
// Start of memberFunctionString
SgUnsignedCharList p_rawBytes;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmOperandList* p_operandList;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmInstruction* p_delaySlot;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmExprListExp* p_semantics;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmInstruction>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmInstruction, uint8_t,&SgAsmInstruction::p_architectureId>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmInstruction, SgUnsignedCharList,&SgAsmInstruction::p_rawBytes>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmInstruction, SgAsmOperandList*,&SgAsmInstruction::p_operandList>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmInstruction, SgAsmInstruction*,&SgAsmInstruction::p_delaySlot>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmInstruction, SgAsmExprListExp*,&SgAsmInstruction::p_semantics>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmInstruction

/* #line 994 "/workspace/generated/src/frontend/SageIII//SgAsmInstruction.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 1001 "/workspace/generated/src/frontend/SageIII//SgAsmInstruction.h" */

#endif // ROSE_SgAsmInstruction_H

