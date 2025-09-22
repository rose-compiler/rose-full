
#ifndef ROSE_SgAsmBlock_H
#define ROSE_SgAsmBlock_H
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

// predeclarations for SgAsmBlock

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmBlock.h" */
/* #line 41243 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#include <Rose/BinaryAnalysis/Address.h>

#include <sageContainer.h>

#ifdef ROSE_SgAsmBlock_IMPL
#include <SgAsmInstruction.h>                           // for SgAsmInstruction::INVALID_STACK_DELTA
#endif


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmBlock
class ROSE_DLL_API SgAsmBlock  : public SgAsmStatement
   {
     public:


/* #line 48 "/workspace/generated/src/frontend/SageIII//SgAsmBlock.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 41332 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmBlock -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmBlock");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmStatement);
        s & BOOST_SERIALIZATION_NVP(p_reason);
        s & BOOST_SERIALIZATION_NVP(p_statementList);
        s & BOOST_SERIALIZATION_NVP(p_successors);
        s & BOOST_SERIALIZATION_NVP(p_successorsComplete);
        s & BOOST_SERIALIZATION_NVP(p_immediateDominator);
        s & BOOST_SERIALIZATION_NVP(p_cachedVertex);
        s & BOOST_SERIALIZATION_NVP(p_codeLikelihood);
        s & BOOST_SERIALIZATION_NVP(p_stackDeltaOut);
        debugSerializationEnd("SgAsmBlock");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Reasons why a basic block might have been assigned to a function. */
    enum Reason {
        // Please update SgAsmBlock::reasonString() if you change this enum!
        BLK_NONE        = 0x00000000,           /**< No particular reason.  Mostly just for initialization. */
        BLK_ENTRY_POINT = 0x00010000,           /**< Block is an entry point for the function. */
        BLK_PADDING     = 0x00020000,           /**< Block is used for padding. */
        BLK_FRAGMENT    = 0x00080000,           /**< This block created because it seems to belong to the function although
                                                 *   CFG traversal did not find it. */
        BLK_CFGHEAD     = 0x00100000,           /**< Block serves as an explicit starting point for CFG analysis. */
        BLK_USERDEF     = 0x00200000,           /**< User says block belongs to the function. */
        BLK_LEFTOVERS   = 0x00400000,           /**< Block is being assigned to a FUNC_LEFTOVERS function because it could
                                                 *   not be assigned to any other function. */
        BLK_JUMPTABLE   = 0x00800000,           /**< Table of code addresses used by indirect branches. */
        BLK_GRAPH1      = 0x01000000,           /**< Block was added by the main CFG analysis. */
        BLK_GRAPH2      = 0x02000000,           /**< Block was added by a second pass of CFG analysis. */
        BLK_GRAPH3      = 0x04000000,           /**< Block was added by a third pass of CFG analysis. */

        BLK_DEFAULT     = BLK_NONE,             //NO_STRINGIFY

        // ========= Miscellaneous Reasons ===========================================================================
        // The first half of the range (1-127, inclusive) is used for algorithms defined by ROSE.  The second half is
        // availalble for users to use as they see fit.
        BLK_MISCMASK    = 0x000000ff,           /**< Miscellaneous reasons go here. We can store only one such reason at
                                                 *   a time. */
        BLK_FINDDATA    = 0x00000001,           /**< Added by Partitioner::FindData, which attaches unassigned parts of the
                                                 *   disassembly address space to the preceding function. */
        BLK_POSTFUNC    = 0x00000002            /**< Added by Partitioner::FindPostFunctionInsns, which adds unassigned
                                                 *   instructions to the immediately preceding function. */
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Properties
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:

    // FIXME[Robb Matzke 2023-03-18]: is the lack of serialization a bug?
public:
    /** Property: Identification.
     *
     *  Block unique identification number. Not used by ROSE. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::Address const& get_id() const;
    void set_id(Rose::BinaryAnalysis::Address const&);
    /** @} */

public:
    /** Property: Reasons this block was created.
     *
     *  This property holds a bit mask of @ref SgAsmBlock::Reason bits that indicate why this block was created. 
     *  
     *  @{ */
    unsigned const& get_reason() const;
    void set_reason(unsigned const&);
    /** @} */
    // statementList and successors should have been pointers to nodes that contain the list rather than being the lists
    // themselves because ROSETTA doesn't allow traversals on multiple list data members--we can traverse either one list or
    // the other, but not both.  It's too late to change how this part of the AST is structured because so much user code
    // already depends on it, therefore we can only traverse statementList and not successors. [Robb Matzke 2016-02-25]
public:
    /** Property: Statements of which this block is composed.
     *
     *  This is the list of "statements" that belong to this block. Statements are usually instructions, but historical
     *  code may have used basic blocks with other children. 
     *  
     *  @{ */
    SgAsmStatementPtrList const& get_statementList() const;
    SgAsmStatementPtrList& get_statementList();
    void set_statementList(SgAsmStatementPtrList const&);
    /** @} */
    // statementList and successors should have been pointers to nodes that contain the list rather than being the lists
    // themselves because ROSETTA doesn't allow traversals on multiple list data members--we can traverse either one list or
    // the other, but not both.  It's too late to change how this part of the AST is structured because so much user code
    // already depends on it, therefore we can only traverse statementList and not successors. [Robb Matzke 2016-02-25]
public:
    /** Property: Control flow successors.
     *
     *  This property holds the list of addresses which are control flow successors of this block.  The @ref
     *  Rose::BinaryAnalysis::Partitioner2 "Partitioner2" name space has a more useful definition of control flow graph
     *  that can reference indeterminate addresses and store data in the edges, and which is copiable. 
     *  
     *  @{ */
    SgAsmIntegerValuePtrList const& get_successors() const;
    SgAsmIntegerValuePtrList& get_successors();
    void set_successors(SgAsmIntegerValuePtrList const&);
    /** @} */

public:
    /** Property: Whether the successors list is complete.
     *
     *  This property is true if the "successors" property holds an incomplete list of successors. Since this
     *  representation of a control flow graph is unable to represent edges that point to indeterminate addresses (e.g.,
     *  computed branches), the "successors_complete" property can be used.
     *
     *  The @ref Rose::BinaryAnalysis::Partitioner2 "Partitioner2" name space has a more useful definition of control flow
     *  graph that can reference indeterminate addresses and store data in the edges, and which is copiable. 
     *  
     *  @{ */
    bool const& get_successorsComplete() const;
    void set_successorsComplete(bool const&);
    /** @} */

public:
    /** Property: Holds the immediate dominator block in the control flow graph.
     *
     *  The immediate dominator is the closest block to this one (by following reverse control flow edges) through which
     *  all control paths pass in order to get from the function entry block to this block.
     *
     *  The @ref Rose::BinaryAnalysis::Partitioner2 "Partitioner2" name space has a more useful definition of control flow
     *  graph that can reference indeterminate addresses and store data in the edges, and which is copiable. 
     *  
     *  @{ */
    SgAsmBlock* const& get_immediateDominator() const;
    void set_immediateDominator(SgAsmBlock* const&);
    /** @} */

public:
    /** Property: Cached vertex for control flow graphs.
     *
     *  This property is used by the virtual control flow graph mechanism.
     *
     *  The @ref Rose::BinaryAnalysis::Partitioner2 "Partitioner2" name space has a more useful definition of control flow
     *  graph that can reference indeterminate addresses and store data in the edges, and which is copiable. 
     *  
     *  @{ */
    size_t const& get_cachedVertex() const;
    void set_cachedVertex(size_t const&);
    /** @} */
 // see BinaryAnalysis::ControlFlow
public:
    /** Property: Likelihood that this block represents real instructions.
     *
     *  This property holds the results of an analysis that determines how likely it is that the memory from which this
     *  basic block was disassembled represents actual instructions that would be executed when the specimen runs. 
     *  
     *  @{ */
    double const& get_codeLikelihood() const;
    void set_codeLikelihood(double const&);
    /** @} */

public:
    /** Property: Stack pointer at block exit w.r.t. stack pointer at function entry.
     *
     *  This is the difference between the stack pointer after the last instruction of this block executes and the stack
     *  pointer when this block's function was entered.  It stores the result of a stack delta analysis. If stack delta
     *  analysis hasn't run, or was unable to determine a constant delta, then the special value @ref
     *  SgAsmInstruction::INVALID_STACK_DELTA is stored. 
     *  
     *  @{ */
    int64_t const& get_stackDeltaOut() const;
    void set_stackDeltaOut(int64_t const&);
    /** @} */
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Add the specified statement to the end of the statement list.
     *
     *  This is is usually used to add the next instruction to the end of a basic block. */
    void appendStatement(SgAsmStatement*);

    /** Erase the specified statement.
     *
     *  If the specified statement exists in the "statementList" property then it is erased but not deleted. */
    void removeStatement(SgAsmStatement*);

    // FIXME[Robb P Matzke 2017-02-13]: wrong name -- erases only statements, not all children
    /** Removes all statements from the block.
     *
     *  This makes the block empty, and not having a unique starting virtual address. It does not erase all children, just
     *  the statement children.  None of the statements that are erased are deleted. */
    void removeChildren();

    /** Fall-through virtual address.
     *
     *  A block's fall-through address is the virtual address that follows the last byte of the block's last instruction.
     *  The block must have instructions (e.g., it cannot be a strict data block). */
    Rose::BinaryAnalysis::Address get_fallthroughVa();

    /** Returns the function that owns this block.
     *
     *  This is just a convenience wrapper around @ref SageInterface::getEnclosingNode. */
    SgAsmFunction *get_enclosingFunction() const;

    /** Determins if a block contains instructions.
     *
     *  Returns true if the block has instructions, false otherwise. We look only at the immediate descendants of this
     *  block.  See also, @ref SageInterface::querySubTree in order to get the list of all instructions or to consider all
     *  descendants. */
    bool hasInstructions() const;

    /** Determine if a block contains instructions.
     *
     *  Returns true if the block has instructions, false otherwise. We look only at the immediate descendants of this
     *  block.  See also, @ref SageInterface::querySubTree in order to get the list of all instructions or to consider all
     *  descendants. */
    bool isBasicBlock() const;

    /** Returns true if basic block appears to be a function call.
     *
     *  If the target address is known and is a single value then it is stored in the @p target_va argument, otherwise we
     *  store the maximum 64-bit address.  If the return address for the function call is known then it is stored in the @p
     *  return_va argument, otherwise @p return_va will contain the maximum 64-bit address. The return address is usually
     *  the fall-through address of the basic block.
     *
     * Note: Use this function in preference to SgAsmInstruction::isFunctionCallSlow() because the latter is intended to be
     * used by the Partitioner before an AST is created and might not be as accurate. */
    bool isFunctionCall(Rose::BinaryAnalysis::Address &target_va/*out*/, Rose::BinaryAnalysis::Address &return_va/*out*/);

    /** Multi-line string describing the letters used for basic block reasons.
     *
     *  The letters are returned by the padding version of @ref reasonString and appear in unparser output. */
    static std::string reasonKey(const std::string &prefix = "");

    /** Returns reason string for this block.
     *
     *  The reason string is a very short string describing the reason that the block was created. */
    std::string reasonString(bool pad) const;

    /** Converts a reason bit vector to a human-friendly string.
     *
     *  The second argument is the bit vector of @ref SgAsmBlock::Reason bits.  Some of the positions in the padded return
     *  value are used for more than one bit.  For instance, the first character can be "L" for leftovers, "N" for padding,
     *  "E" for entry point, or "-" for none of the above. */
    static std::string reasonString(bool pad, unsigned reason);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deprecated
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // [Robb Matzke 2023-11-06]: deprecated 2023-11
    bool get_successors_complete() const ROSE_DEPRECATED("use get_successorsComplete");
    void set_successors_complete(bool) ROSE_DEPRECATED("use get_successorsComplete");
    SgAsmBlock* get_immediate_dominator() const ROSE_DEPRECATED("use get_immediateDominator");
    void set_immediate_dominator(SgAsmBlock*) ROSE_DEPRECATED("use set_immediateDominator");
    size_t get_cached_vertex() const ROSE_DEPRECATED("use get_cachedVertex");
    void set_cached_vertex(size_t) ROSE_DEPRECATED("use set_cachedVertex");
    double get_code_likelihood() const ROSE_DEPRECATED("use get_codeLikelihood");
    void set_code_likelihood(double) ROSE_DEPRECATED("use set_codeLikelihood");
    void append_statement(SgAsmStatement*) ROSE_DEPRECATED("use appendStatement");
    void remove_statement(SgAsmStatement*) ROSE_DEPRECATED("use removeStatement");
    void remove_children() ROSE_DEPRECATED("use removeChildren");
    Rose::BinaryAnalysis::Address get_fallthrough_va() ROSE_DEPRECATED("use getFallthroughVa");
    SgAsmFunction* get_enclosing_function() const ROSE_DEPRECATED("use get_enclosingFunction");
    bool has_instructions() const ROSE_DEPRECATED("use hasInstructions");
    bool is_basic_block() const ROSE_DEPRECATED("use isBasicBlock");
    bool is_function_call(Rose::BinaryAnalysis::Address&, Rose::BinaryAnalysis::Address&) ROSE_DEPRECATED("use isFunctionCall");
    static std::string reason_key(const std::string& = "") ROSE_DEPRECATED("use reasonKey");
    std::string reason_str(bool) const ROSE_DEPRECATED("use reasonString");
    static std::string reason_str(bool, unsigned) ROSE_DEPRECATED("use reasonString");
public:
    /** Destructor. */
    virtual ~SgAsmBlock();

public:
    /** Default constructor. */
    SgAsmBlock();

public:
    /** Constructor. */
    explicit SgAsmBlock(Rose::BinaryAnalysis::Address const& address);

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
       // static const VariantT static_variant = V_SgAsmBlock;
          enum { static_variant = V_SgAsmBlock };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmBlock* isSgAsmBlock(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmBlock* isSgAsmBlock( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmBlock * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmBlockStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmBlock * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmBlock * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmBlock::operator delete (pointer,sizeof(SgAsmBlock));
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
 	static SgAsmBlock* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmBlock* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmBlock* sgnode);

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
       // SgAsmBlock( SgAsmBlockStorageClass& source );





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
          friend class SgAsmBlockStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmBlock( const SgAsmBlockStorageClass& source );

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
          SgAsmBlock* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmBlock* isSgAsmBlock ( SgNode* s );

          typedef SgAsmStatement base_node_type;


// End of memberFunctionString










    protected:
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_id;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_reason;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmStatementPtrList p_statementList;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmIntegerValuePtrList p_successors;
          
// End of memberFunctionString
// Start of memberFunctionString
bool p_successorsComplete;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmBlock* p_immediateDominator;
          
// End of memberFunctionString
// Start of memberFunctionString
size_t p_cachedVertex;
          
// End of memberFunctionString
// Start of memberFunctionString
double p_codeLikelihood;
          
// End of memberFunctionString
// Start of memberFunctionString
int64_t p_stackDeltaOut;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmBlock>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmBlock, Rose::BinaryAnalysis::Address,&SgAsmBlock::p_id>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmBlock, unsigned,&SgAsmBlock::p_reason>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmBlock, SgAsmStatementPtrList,&SgAsmBlock::p_statementList>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmBlock, SgAsmIntegerValuePtrList,&SgAsmBlock::p_successors>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmBlock, bool,&SgAsmBlock::p_successorsComplete>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmBlock, SgAsmBlock*,&SgAsmBlock::p_immediateDominator>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmBlock, size_t,&SgAsmBlock::p_cachedVertex>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmBlock, double,&SgAsmBlock::p_codeLikelihood>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmBlock, int64_t,&SgAsmBlock::p_stackDeltaOut>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmBlock

/* #line 825 "/workspace/generated/src/frontend/SageIII//SgAsmBlock.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 832 "/workspace/generated/src/frontend/SageIII//SgAsmBlock.h" */

#endif // ROSE_SgAsmBlock_H

