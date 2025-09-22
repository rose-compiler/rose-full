
#ifndef ROSE_SgAsmFunction_H
#define ROSE_SgAsmFunction_H
#include <RoseFirst.h>
#include <Cxx_GrammarDeclarations.h>
#include <SgAsmSynthesizedDeclaration.h>



/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

// WARNING -- GENERATED CODE -- DO NOT MODIFY THIS CODE -- WARNING!
//      This code is automatically generated for each 
//      terminal and non-terminal within the defined 
//      grammar.  There is a simple way to change the 
//      code to fix bugs etc.  See the ROSE README file
//      for directions.

// tps: (02/22/2010): Adding DLL export requirements
#include "rosedll.h"

// predeclarations for SgAsmFunction

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmFunction.h" */
/* #line 16310 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#include <Rose/BinaryAnalysis/Address.h>
#include <Rose/BinaryAnalysis/AddressIntervalSet.h>
#include <sageContainer.h>

#ifdef ROSE_SgAsmFunction_IMPL
#include <SgAsmInstruction.h>
#endif


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmFunction
class ROSE_DLL_API SgAsmFunction  : public SgAsmSynthesizedDeclaration
   {
     public:


/* #line 48 "/workspace/generated/src/frontend/SageIII//SgAsmFunction.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 16418 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmFunction -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmFunction");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmSynthesizedDeclaration);
        s & BOOST_SERIALIZATION_NVP(p_name);
        s & BOOST_SERIALIZATION_NVP(p_reason);
        s & BOOST_SERIALIZATION_NVP(p_reasonComment);
        s & BOOST_SERIALIZATION_NVP(p_functionKind);
        s & BOOST_SERIALIZATION_NVP(p_mayReturn);
        s & BOOST_SERIALIZATION_NVP(p_nameMd5);
        s & BOOST_SERIALIZATION_NVP(p_statementList);
        s & BOOST_SERIALIZATION_NVP(p_dest);
        s & BOOST_SERIALIZATION_NVP(p_entryVa);
        s & BOOST_SERIALIZATION_NVP(p_cachedVertex);
        s & BOOST_SERIALIZATION_NVP(p_stackDelta);
        s & BOOST_SERIALIZATION_NVP(p_callingConvention);
        debugSerializationEnd("SgAsmFunction");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Whether a function returns. */
    enum MayReturn {
            RET_UNKNOWN,                    /**< It is unknown whether this function ever returns or not. */
            RET_NEVER,                      /**< This function is known to never return. */
            RET_SOMETIMES,                  /**< This function may return or not, depending on how it is called. */
            RET_ALWAYS                      /**< This function returns each time it is called. */
    };

    /** Reasons why an instruction might be considered the beginning of a function. These bit flags are also used by
     *  the instruction partitioner (Partitioner class) to determine what heuristics are used when partitioning
     *  instructions into functions. */
    enum FunctionReason {
            // NOTE: If you add more here, then fix Partitioner::parse_switches()
            //       Also fix SgAsmFunction::reason_key()
            FUNC_NONE        = 0x00000000,  /**< Used for initialization; not a bit flag. */
            FUNC_THUNK_TARGET= 0x00004000,  /**< Function is the target of a thunk. */
            FUNC_EXCEPTION_HANDLER
                             = 0x00008000,  /**< Function for handling an exception. */
            FUNC_ENTRY_POINT = 0x00010000,  /**< An entry point specified in the file header. */
            FUNC_CALL_TARGET = 0x00020000,  /**< Target of a function call instruction sequence in the CFG. When used as
                                             *   a partitioning heuristic, the partitioner will create new functions when
                                             *   it discovers a call-like sequence while traversing the CFG. */
            FUNC_CALL_INSN   = 0x00040000,  /**< Target of call, possibly not in the CFG (see Partitioner::mark_call_insns).
                                             *   When used as a partitioning heuristic, the partitioner will search all
                                             *   available instructions for instances of call-like instructions and define
                                             *   a function for each target. The function entry points added in this way
                                             *   become initial nodes of the CFG which is used by some of
                                             *   the other function discovery methods, including FUNC_CALL_TARGET. */
            FUNC_EH_FRAME    = 0x00080000,  /**< Address mentioned in the ELF .eh_frame section. */
            FUNC_SYMBOL      = 0x00100000,  /**< Address of a function symbol in a symbol table. */
            FUNC_PATTERN     = 0x00200000,  /**< Appears to be a function based on pattern of instructions. When used as
                                             *   a partitioning heuristic, the partitioner will search through all available
                                             *   instructions and create function entry points. The function entry points are
                                             *   added to the CFG which is used by some of the other function discovery
                                             *   methods. */
            FUNC_GRAPH       = 0x00400000,  /**< Implied by inter-basicblock branching. When used as a partitioning
                                             *   heuristic, the partitioner creates a new function when it discovers, by
                                             *   CFG traversal, that two different functions branch to a common basic block.
                                             *   The block in common becomes a new function under this rule. */
            FUNC_USERDEF     = 0x00800000,  /**< User-defined algorithm. See Partitioner::addFunctionDetector(). */
            FUNC_PADDING     = 0x01000000,  /**< Created to represent NOP padding between other functions. When used as a
                                             *   partitioning heuristic, the partitioner searches for padding after all
                                             *   CFG-based analysis has completed.  Padding can consist of either NOP
                                             *   instructions or zero bytes. The former requires that instructions at the
                                             *   interfunction addresses have been disassembled. */
            FUNC_DISCONT     = 0x02000000,  /**< Blocks of function are not contiguous in memory. This is not a partitioner
                                             *   heuristic, but rather only an indication of whether the function's basic
                                             *   blocks occupy contiguous memory locations. */
            FUNC_INSNHEAD    = 0x04000000,  /**< Initial instructions not in any other function. (UNUSED?) */
            FUNC_IMPORT      = 0x08000000,  /**< Functions dynamically linked. For ELF containers, these are the entries
                                             *   in the procedure lookup table (PLT). When used as a partitioning heuristic,
                                             *   the partitioner will scan the PLT and define a function for each entry. */
            FUNC_LEFTOVERS   = 0x10000000,  /**< Generated function to hold blocks that are otherwise not part of
                                             *   any function.  If this bit is turned off then the instruction
                                             *   Partitioner will delete instructions that it couldn't assign to
                                             *   a function. */
            FUNC_INTRABLOCK  = 0x20000000,  /**< Function contains basic blocks that were inserted by searching the
                                             *   address space between the blocks discovered by analyzing the control flow.
                                             *   Blocks added by this algorithm do not take control flow into account, and
                                             *   therefore, the global control flow graph (CFG) may have edges into the
                                             *   middle of such blocks, or such blocks may have edges into the middle of
                                             *   other blocks, including inter-function edges.  Also, blocks added by this
                                             *   method might not represent true instructions, but rather data that was
                                             *   disassembled as instructions. */
            FUNC_THUNK       = 0x40000000,  /**< Function is a thunk.  Thunks are small pieces of code whose only purpose
                                             *   is to branch to another function.  Depending on how the disassembler and
                                             *   partitioner are run, a thunk can exist either as its own function or the
                                             *   thunk's instructions will be subsumed by the called function.  The
                                             *   partitioner only sets this flag for functions that are created due to
                                             *   the thunk recognition pass; other functions that don't have this bit set
                                             *   might also be thunks, and functions that have this bit set might not
                                             *   be a thunk.  The Partitioner::is_thunk() method will return true for
                                             *   functions whose content looks like a thunk. */
            FUNC_EXPORT      = 0x80000000,  /**< Exported function. These are the functions that appear in a PE export
                                             *   table. */
            FUNC_DEFAULT     = 0xefff80ff,  /**< Default value for Partitioner class. */

            /*========= Miscellaneous Reasons ===========================================================================
             * The first half of the range (1-127, inclusive) is used for algorithms defined by ROSE.  The second half is
             * availalble for users to use as they see fit. */
            FUNC_MISCMASK    = 0x000000ff,  /**< Miscellaneous.  These are all the other special purpose function detectors
                                             *   that are implemented in the Partitioner. Each one is identified by an
                                             *   eight-bit integer stored in the low order bits.  Only one such reason can
                                             *   be stored at a time.  These are not used to control which partitioning
                                             *   heuristics to use, but rather to indicate which one (of possibly many)
                                             *   that detected the function. */
            FUNC_INTERPADFUNC = 1,          /**< Detected by Partitioner::FindInterPadFunctions, which looks for unassigned
                                             *   space between two inter-function padding blocks and makes the first such
                                             *   address the beginning of one of these functions. */
            FUNC_PESCRAMBLER_DISPATCH = 2, /**<  Dispatcher function for code generated by pescrambler. */
            FUNC_CONFIGURED = 3,           /**<  Function is defined in a configuration file. */
            FUNC_CMDLINE = 4,              /**<  Function mentioned on the command-line. */
            FUNC_SCAN_RO_DATA = 5,         /**<  Address was found in read-only data area by scanning the data. */
            FUNC_INSN_RO_DATA = 6,         /**<  Address was found in read-only data referenced by an existing
                                            *    instruction. */
    };

    /** Constants for the "function_kind" property. */
    enum function_kind_enum {
        e_unknown  = 0,
        e_standard = 1,
        e_library  = 2,
        e_imported = 3,
        e_thunk     = 4,
        e_last
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Properties
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
public:
    /** Property: Name.
     *
     *  The optional string name of a function. 
     *  
     *  @{ */
    std::string const& get_name() const;
    void set_name(std::string const&);
    /** @} */

public:
    /** Property: Reason that function exists.
     *
     *  This is a bit vector of enum constants that describe why this function was created. See @ref
     *  SgAsmFunction::FunctionReason for details. 
     *  
     *  @{ */
    unsigned const& get_reason() const;
    void set_reason(unsigned const&);
    /** @} */

public:
    /** Property: Additional function existance reason comment.
     *
     *  This reason comment gets filled in automatically by certain function analyses. It's a free-form string that
     *  contains additional information about why this function exists and is used in conjunction with the @ref reason
     *  property. 
     *  
     *  @{ */
    std::string const& get_reasonComment() const;
    void set_reasonComment(std::string const&);
    /** @} */

public:
    /** Property: Kind of function.
     *
     *  This enum constant describes the kind of function. See @ref SgAsmFunction::function_kind_enum for details. 
     *  
     *  @{ */
    SgAsmFunction::function_kind_enum const& get_functionKind() const;
    void set_functionKind(SgAsmFunction::function_kind_enum const&);
    /** @} */

public:
    /** Property: Whether a function could return to its caller. 
     * 
     * @{ */
    SgAsmFunction::MayReturn const& get_mayReturn() const;
    void set_mayReturn(SgAsmFunction::MayReturn const&);
    /** @} */

public:
    /** Property: Hash of the function.
     *
     *  This is unused by ROSE, but can be set by users to identify a function by hash string. 
     *  
     *  @{ */
    std::string const& get_nameMd5() const;
    void set_nameMd5(std::string const&);
    /** @} */

public:
    /** Property: Statements that make up a function.
     *
     *  The "statements" of a function are things like instructions, static data blocks, etc. 
     *  
     *  @{ */
    SgAsmStatementPtrList const& get_statementList() const;
    SgAsmStatementPtrList& get_statementList();
    void set_statementList(SgAsmStatementPtrList const&);
    /** @} */
    // FIXME[Robb P Matzke 2017-02-13]: unused?
public:
    SgAsmStatementPtrList const& get_dest() const;
    void set_dest(SgAsmStatementPtrList const&);

public:
    /** Property: Primary entry address.
     *
     *  Every function has one primary entry address that uniquely identifies the function in the AST. This is the starting
     *  address of the function's entry instruction.  The abbreviation "va" means "virtual address". 
     *  
     *  @{ */
    Rose::BinaryAnalysis::Address const& get_entryVa() const;
    void set_entryVa(Rose::BinaryAnalysis::Address const&);
    /** @} */

public:
    /** Property: Symbol table.
     *
     *  A ROSE symbol table associated with this function. This is not the same as the symbol table that appears in the
     *  binary specimen, such as ELF or PE symbol tables. 
     *  
     *  @{ */
    SgSymbolTable* const& get_symbolTable() const;
    void set_symbolTable(SgSymbolTable* const&);
    /** @} */
    // FIXME[Robb P Matzke 2017-02-13]: what is this?
public:
    size_t const& get_cachedVertex() const;
    void set_cachedVertex(size_t const&);

public:
    /** Property: Net effect of function on the stack pointer.
     *
     *  Net effect that this function has on the machine's stack pointer register.  For most x86 Linux ELF specimens the
     *  net effect is to pop the return address from the stack, thus +4 for 32-bit specimens and +8 for 64-bit specimens.
     *
     *  If the stack delta analysis has not run or could not determine a constant stack delta, then the special value @c
     *  SgAsmInstruction::INVALID_STACK_DELTA is used. 
     *  
     *  @{ */
    int64_t const& get_stackDelta() const;
    void set_stackDelta(int64_t const&);
    /** @} */

public:
    /** Property: Primary calling convention.
     *
     *  This is the name of the primary calling convention for this function. When the semantics of the function match
     *  multiple calling convention definitions, this property holds the "best" one for some definition of "best". It is
     *  also possible for the semantics to not match any calling convention definition in which case this property is
     *  empty. It is also empty if the calling convention analysis was not performed. 
     *  
     *  @{ */
    std::string const& get_callingConvention() const;
    void set_callingConvention(std::string const&);
    /** @} */
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Adds statement to end of statement list. */
    void appendStatement(SgAsmStatement*);

    /** Erases statement from statement list.
     *
     *  If the specified statement is found in the list of statements then it is erased without being deleted. */
    void removeStatement(SgAsmStatement* statement);

    /** Function entry basic block.
     *
     *  Returns the basic block that represents the function primary entry point. Returns null for a function
     *  that contains no instructions. */
    SgAsmBlock* get_entryBlock() const;

    /** Multi-line description of function reason keys from unparser.
     *
     *  Returns a string that describes what the one-letter function reasons mean in the unparser output. */
    static std::string reasonKey(const std::string &prefix = "");

    /** Returns a very short string describing the reason mask. */
    std::string reasonString(bool pad) const;

    /** Class method that converts a reason bit vector to a human-friendly string.
     *
     *  The second argument is the bit vector of SgAsmFunction::FunctionReason bits. */
    static std::string reasonString(bool pad, unsigned reason);

    /** Selection functor for SgAsmFunction::get_extent(). */
    class NodeSelector {
    public:
            virtual ~NodeSelector() {}
            virtual bool operator()(SgNode*) = 0;
    };

    /** Returns information about the function addresses.
     *
     *  Every non-empty function has a minimum (inclusive) and maximum (exclusive) address which are returned by reference,
     *  but not all functions own all the bytes within that range of addresses. Therefore, the exact bytes are returned by
     *  adding them to the optional ExtentMap argument.  This function returns the number of nodes (instructions and static
     *  data items) in the function.  If the function contains no nodes then @p extents is not modified and the low and
     *  high addresses are both set to zero.
     *
     *  If an @p selector functor is provided, then only nodes for which it returns true are considered part of the
     *  function.  This can be used for such things as filtering out data blocks that are marked as padding.  For example:
     *
     *  @code
     *  class NotPadding: public SgAsmFunction::NodeSelector {
     *  public:
     *      virtual bool operator()(SgNode *node) {
     *          SgAsmStaticData *data = isSgAsmStaticData(node);
     *          SgAsmBlock *block = SageInterface::getEnclosingNode<SgAsmBlock>(data);
     *          return !data || !block || block->get_reason()!=SgAsmBlock::BLK_PADDING;
     *      }
     *  } notPadding;
     *
     *  Rose::BinaryAnalysis::AddressIntervalSet extents;
     *  function->get_extent(&extents, NULL, NULL, &notPadding);
     *  @endcode
     *
     *  Here's another example that calculates the extent of only the padding data, based on the negation of the filter in
     *  the previous example:
     *
     *  @code
     *  class OnlyPadding: public NotPadding {
     *  public:
     *      virtual bool operator()(SgNode *node) {
     *          return !NotPadding::operator()(node);
     *      }
     *  } onlyPadding;
     *
     *  Rose::BinaryAnalysis::AddressIntervalSet extents;
     *  function->get_extent(&extents, NULL, NULL, &onlyPadding);
     *  @endcode */
    size_t get_extent(Rose::BinaryAnalysis::AddressIntervalSet *emap=NULL, Rose::BinaryAnalysis::Address *lo_addr=NULL,
                      Rose::BinaryAnalysis::Address *hi_addr=NULL, NodeSelector *selector=NULL);

    /** Computes the SHA1 message digest for the bytes of a function.
     *
     *  Returns true if the SHA1 is available, false if the message digest cannot be computed because the prerequisite
     *  gcrypt functions are not available. The optional @p selector argument can be used to limit the digest to only
     *  certain nodes of the function; by default, all instructions and static data are accumulated. */
    bool get_sha1(uint8_t digest[20]/*out*/, NodeSelector *selector=NULL);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deprecated 2023-11
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    function_kind_enum get_function_kind() const ROSE_DEPRECATED("use get_functionKind");
    void set_function_kind(function_kind_enum) ROSE_DEPRECATED("use set_functionKind");
    MayReturn get_may_return() const ROSE_DEPRECATED("use get_mayReturn");
    void set_may_return(MayReturn) ROSE_DEPRECATED("use set_mayReturn");
    const std::string& get_name_md5() const ROSE_DEPRECATED("use get_nameMd5");
    void set_name_md5(const std::string&) ROSE_DEPRECATED("use set_nameMd5");
    Rose::BinaryAnalysis::Address get_entry_va() const ROSE_DEPRECATED("use get_entryVa");
    void set_entry_va(Rose::BinaryAnalysis::Address) ROSE_DEPRECATED("use set_entryVa");
    SgSymbolTable* get_symbol_table() const ROSE_DEPRECATED("use get_symbolTable");
    void set_symbol_table(SgSymbolTable*) ROSE_DEPRECATED("use set_symbolTable");
    size_t get_cached_vertex() const ROSE_DEPRECATED("use get_cachedVertex");
    void set_cached_vertex(size_t) ROSE_DEPRECATED("use set_cachedVertex");
    void append_statement(SgAsmStatement*) ROSE_DEPRECATED("use appendStatement");
    void remove_statement(SgAsmStatement* statement) ROSE_DEPRECATED("use removeStatement");
    SgAsmBlock* get_entry_block() const ROSE_DEPRECATED("use get_entryBlock");
    static std::string reason_key(const std::string &prefix="") ROSE_DEPRECATED("use reasonKey");
    std::string reason_str(bool) const ROSE_DEPRECATED("use reasonString");
    static std::string reason_str(bool, unsigned) ROSE_DEPRECATED("use reasonString");
public:
    /** Destructor. */
    virtual ~SgAsmFunction();

public:
    /** Default constructor. */
    SgAsmFunction();

public:
    /** Constructor. */
    SgAsmFunction(Rose::BinaryAnalysis::Address const& address,
                  std::string const& name,
                  unsigned const& reason,
                  SgAsmFunction::function_kind_enum const& functionKind);

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
       // static const VariantT static_variant = V_SgAsmFunction;
          enum { static_variant = V_SgAsmFunction };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmFunction* isSgAsmFunction(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmFunction* isSgAsmFunction( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmFunction * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmFunctionStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmFunction * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmFunction * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmFunction::operator delete (pointer,sizeof(SgAsmFunction));
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
 	static SgAsmFunction* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmFunction* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmFunction* sgnode);

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
       // SgAsmFunction( SgAsmFunctionStorageClass& source );





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
          friend class SgAsmFunctionStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmFunction( const SgAsmFunctionStorageClass& source );

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
          SgAsmFunction* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmFunction* isSgAsmFunction ( SgNode* s );

          typedef SgAsmSynthesizedDeclaration base_node_type;


// End of memberFunctionString














    protected:
// Start of memberFunctionString
std::string p_name;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_reason;
          
// End of memberFunctionString
// Start of memberFunctionString
std::string p_reasonComment;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmFunction::function_kind_enum p_functionKind;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmFunction::MayReturn p_mayReturn;
          
// End of memberFunctionString
// Start of memberFunctionString
std::string p_nameMd5;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmStatementPtrList p_statementList;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmStatementPtrList p_dest;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_entryVa;
          
// End of memberFunctionString
// Start of memberFunctionString
SgSymbolTable* p_symbolTable;
          
// End of memberFunctionString
// Start of memberFunctionString
size_t p_cachedVertex;
          
// End of memberFunctionString
// Start of memberFunctionString
int64_t p_stackDelta;
          
// End of memberFunctionString
// Start of memberFunctionString
std::string p_callingConvention;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmFunction>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmFunction, std::string,&SgAsmFunction::p_name>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmFunction, unsigned,&SgAsmFunction::p_reason>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmFunction, std::string,&SgAsmFunction::p_reasonComment>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmFunction, SgAsmFunction::function_kind_enum,&SgAsmFunction::p_functionKind>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmFunction, SgAsmFunction::MayReturn,&SgAsmFunction::p_mayReturn>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmFunction, std::string,&SgAsmFunction::p_nameMd5>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmFunction, SgAsmStatementPtrList,&SgAsmFunction::p_statementList>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmFunction, SgAsmStatementPtrList,&SgAsmFunction::p_dest>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmFunction, Rose::BinaryAnalysis::Address,&SgAsmFunction::p_entryVa>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmFunction, SgSymbolTable*,&SgAsmFunction::p_symbolTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmFunction, size_t,&SgAsmFunction::p_cachedVertex>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmFunction, int64_t,&SgAsmFunction::p_stackDelta>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmFunction, std::string,&SgAsmFunction::p_callingConvention>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmFunction

/* #line 954 "/workspace/generated/src/frontend/SageIII//SgAsmFunction.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 961 "/workspace/generated/src/frontend/SageIII//SgAsmFunction.h" */

#endif // ROSE_SgAsmFunction_H

