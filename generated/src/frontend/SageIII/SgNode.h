
#ifndef ROSE_SgNode_H
#define ROSE_SgNode_H
#include <RoseFirst.h>
#include <Cxx_GrammarDeclarations.h>



/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

// WARNING -- GENERATED CODE -- DO NOT MODIFY THIS CODE -- WARNING!
//      This code is automatically generated for each 
//      terminal and non-terminal within the defined 
//      grammar.  There is a simple way to change the 
//      code to fix bugs etc.  See the ROSE README file
//      for directions.

// tps: (02/22/2010): Adding DLL export requirements
#include "rosedll.h"

// predeclarations for SgNode

/* #line 24 "/workspace/generated/src/frontend/SageIII//SgNode.h" */
/* #line 2 "/workspace/generated/src/ROSETTA/Grammar/Node.code" */


#include <ROSE_DEPRECATED.h>
#include <semaphore.h>
#include <rosePublicConfig.h>
#include "setup.h"
#include <sageContainer.h>
#include <boost/format.hpp>

#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
#include <boost/serialization/access.hpp>
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/map.hpp>
#include <boost/serialization/set.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/version.hpp>
#endif

#include <Sawyer/CommandLine.h>
#include <Sawyer/Interval.h>
#include <Sawyer/IntervalSet.h>

#include "processSupport.h"
#define __builtin_constant_p(exp) (0)

#ifdef ROSE_ENABLE_BINARY_ANALYSIS
#include <Rose/BinaryAnalysis/AddressSet.h>
#include <Rose/BinaryAnalysis/RelativeVirtualAddress.h>
#include <Rose/BinaryAnalysis/AddressInterval.h>
#include <Rose/BinaryAnalysis/AddressIntervalSet.h>
#include <rose_extent.h>                                // deprecated
#include <Rose/BinaryAnalysis/RegisterDescriptor.h>
#include <Rose/BinaryAnalysis/InstructionMap.h>
#include <ROSE_NELMTS.h>
#endif

#include <Rose/Constants.h>
#include <sageHash.h>
#include <sageTraversal.h>
#include <sageRti.h>
#include <sageCopy.h>
#include <sageMemory.h>
#include <Cxx_GrammarVariants.h>
#include <Cxx_GrammarStorageClasses.h>
#include <virtualCFG.h>

namespace Rose { namespace Traits { namespace generated { template <typename NodeT> struct describe_node_t; } } }
namespace Rose { namespace Traits { namespace generated { template <typename NodeT, typename FieldT, FieldT NodeT::* fld_ptr> struct describe_field_t; } } }

#ifdef ROSE_ENABLE_BINARY_ANALYSIS
// Version numbers for SgAsm* nodes. Used for backward compatibility. */
BOOST_CLASS_VERSION(SgAsmInstruction, 1);
#endif

class PreprocessingInfo;
class AstRegExAttribute;
class AstAttribute;
class AstAttributeMechanism;
struct ReferenceToPointerHandler;

// DQ (3/18/2006): Forward declarations of classes used to control and tailor the code generation.
class UnparseDelegate;
class UnparseFormatHelp;

// DQ (4/32/2006): g++ 4.0.2 requires a forward declaration for this (a friend class declaration is not sufficient!)
class AstSpecificDataManagingClassStorageClass;



/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if 1
// Class Definition for SgNode
class ROSE_DLL_API SgNode  
   {
     public:


/* #line 106 "/workspace/generated/src/frontend/SageIII//SgNode.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const;
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
          virtual std::string class_name() const;

      /*! \brief returns new style SageIII enum values */
          virtual VariantT variantT() const; // MS: new variant used in tree traversal

      /*! \brief static variant value */
       // King84 (2010.08.16): Moved this to an enum to save space, since it's only used at compiler-time anyway.
       // static const VariantT static_variant = V_SgNode;
          enum { static_variant = V_SgNode };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgNode* isSgNode(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgNode* isSgNode( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgNode * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgNodeStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgNode * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgNode * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgNode::operator delete (pointer,sizeof(SgNode));
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
          virtual std::vector<SgNode*> get_traversalSuccessorContainer() const;
       // MS: 06/28/02 container of names of variables or container indices 
       // used used in the traversal to access AST successor nodes
       // overridden in every class by *generated* implementation
      /*! \brief container of names of variables or container indices used used in the traversal
          to access AST successor nodes overridden in every class by *generated* implementation */
          virtual std::vector<std::string> get_traversalSuccessorNamesContainer() const;

       // GB (09/25/2007): Functions for index-based access to traversal successors; these are hopefully a lot faster
       // than all the vector copies. The implementation for these functions is generated for each class.
      /*! \brief return number of children in the traversal successor list */
          virtual size_t get_numberOfTraversalSuccessors() const;
      /*! \brief index-based access to traversal successors by index number */
          virtual SgNode *get_traversalSuccessorByIndex(size_t idx) const;
      /*! \brief index-based access to traversal successors by child node */
          virtual size_t get_childIndex(SgNode *child) const;

#ifndef ROSE_USE_INTERNAL_FRONTEND_DEVELOPMENT
       // MS: 08/16/2002 method for generating RTI information
      /*! \brief return C++ Runtime-Time-Information */
          virtual RTIReturnType roseRTI();
#endif
      /* */



      /* name Deprecated Functions
          \brief Deprecated functions ... incomplete-documentation

          These functions have been deprecated from use.
       */
      /* */

      /*! returns a C style string (char*) representing the class name */
          virtual const char* sage_class_name() const  ROSE_DEPRECATED_FUNCTION;

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
          virtual void accept (ROSE_VisitorPattern & visitor);

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
 	static SgNode* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgNode* sgnode);
 	static std::string getNodeIdStringInternal(SgNode* sgnode);

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
          virtual bool isInMemoryPool();

      /*! \brief \b FOR \b INTERNAL \b USE This is used in internal tests to verify that all IR nodes are allocated from the heap.

          The AST File I/O depends upon the allocation of IR nodes being from the heap, stack based or global IR nodes should
          not appear in the AST if it will be written out to a file and read back in.  To enforce this concept, this function
          implements a test to verify that the IR node can be found on the heap and is part of a larger test of the whole AST.
          This test must pass before the AST can be written out to a file.  This is part of a compromise in the design of the 
          AST File I/O to support binary streaming of data to files; for performance.  It is also rather difficult, but possible, 
          to build a useful AST with IR nodes allocated on the stack or frm global scope, this test filters out such cased from
          being used with the AST File I/O mechanism.
       */
          virtual void checkDataMemberPointersIfInMemoryPool();

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
          virtual std::vector<std::pair<SgNode*,std::string> > returnDataMemberPointers() const;

      /*! \brief \b FOR \b INTERNAL \b USE Processes pairs of references to SgNode* and strings for use in AST tools

          This functions similar to returnDataMemberPointers() except that it passes references to a handler object.
          As a result there is FAR more damage that can be done by using this function, but it is type-safe.
          This is provided for support of internal tools that operate on the AST, e.g the AST Merge mechanism.

          \warning This function can return unexpected data members and thus the order and the number of elements is unpredicable 
                   and subject to change.
       */
          virtual void processDataMemberReferenceToPointers(ReferenceToPointerHandler*);

      /*! \brief \b FOR \b INTERNAL \b USE Returns a unique index value for the childNode in the list of children at this IR node.

          This function returns a unique value for the input \b childNode in set of children at this IR node. Note
          that a negative value indicates that the input node is not a child.  This is the basis for the implementation
          of the isChild(SgNode*) member function.  Data members that are NULL in the IR node are counted internally
          (so that this function returns value that could be statically defined, and so are not dynamically determined).

          \warning The mapping on children to integer values could change from release to release of ROSE.

          \returns long
       */
          virtual long getChildIndex( SgNode* childNode ) const;

      // DQ (9/2/2015): Since this function is generated by ROSETTA, we can't define the 
      // comment here (changed to be a C style comment and not be a doxygen comment).
      /* \brief Constructor for use by AST File I/O Mechanism

          This constructor permits the IR node to be rebuilt from the contiguously arranged data in memory 
          which obtained via fast binary file I/O from disk.
       */
       // SgNode( SgNodeStorageClass& source );





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
          friend class SgNodeStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgNode( const SgNodeStorageClass& source );

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
          SgNode* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
       // Rasmussen (1/7/2019): Added to kill warning messages of overridden virtual function
          virtual ATerm generate_ATerm();

      /*! \brief Support for generation of ATerms. */
          virtual void generate_ATerm_Annotation(ATerm & term);
   #endif
   #endif // BUILD_ATERM_SUPPORT
#endif
       // These can't be virtual functions since we don't yet know what IR node to build (until we have read the aterm).
       // virtual generate_AST(ATerm & term);
       // virtual void read_ATerm_Annotation(ATerm & term);

// *** COMMON CODE SECTION ENDS HERE ***


// End of memberFunctionString
// Start of memberFunctionString
/* #line 72 "/workspace/generated/src/ROSETTA/Grammar/Node.code" */

     public:

      /*! \brief All nodes in the AST contain a isModified flag used to track changes to the AST.

           This flag can be set but this is typically an internal function used to track the modifications to AST.
           Within future unparsing this flag will control where the token stream is used alternatively to the
           code generation from the AST.
       */
          void set_isModified( bool isModified );

      /*! \brief Many nodes can hide other AST nodes and we need to track when outer nodes contain modified nodes even if they are not themselves modified.

          This flag is required to support the unparsing using the token stream.
       */
          void set_containsTransformation( bool containsTransformation );


      /*! \brief Acess function for isModified flag

          This flag records if the current IR node has been modified.
          It is set to false after and ROSE front-end processing.
       */
          bool get_isModified() const;

      /*! \brief Acess function for containsTransformation flag

          This flag records if the current IR node has a nested AST node that is marked as being modified.
       */
          bool get_containsTransformation() const;

      //! All nodes in the AST contain a reference to a parent node
          void set_parent ( SgNode* parent );

      //! Access function for parent node.
          SgNode* get_parent () const;

       // DQ (3/4/2022): Added access function for p_parent for debugging.
      //! Access function for direct access to uncomputed value of parent node.
          SgNode* get_raw_parent () const;

      //! Query function for if the input IR nodes is a child of the current IR node.
          bool isChild ( SgNode* node ) const;

       //! This function unparses the AST node (excluding comments and unnecessary white space)
           virtual std::string unparseToString(SgUnparse_Info* info) const;

           std::string unparseToString() const;

       //! This function unparses the AST node (including comments and white space)
          std::string unparseToCompleteString();

      /*! \brief Command line support for this compilation
          The command line is saved as a static variable so that it will be available to
          support the rewrite mechanism.

          \param argv - vector of strings holding command line arguments
          \param newFileName - current file name being used (part of support for multiple files on command line).
          \return returns vector of strings.
       */
          static std::vector<std::string> buildCommandLineToSubstituteTransformationFile( const std::vector<std::string>& argv, std::string newFileName );

       // JJW (10/16/2008): Replace variant() by variantT() and a cast (the
       // numbers are the same, but the enumerator names are different)
          int variant() const ROSE_DEPRECATED_FUNCTION {return (int)this->variantT();}

       // AS (10/22/2007): build function to return class hierachy subtree of a VariantT
          static std::vector<VariantT> getClassHierarchySubTreeFunction( VariantT v);
          static void getClassHierarchySubTreeFunction( VariantT v, std::vector<VariantT>&);

      /*! \brief DOCS IN HEADER: Access function for p_isVisited flag used previously by the AST traversals.

          \deprecated This function is not used and will be removed.
          \return Returns bool; true if previously visited within current AST traversal.
       */
          bool get_isVisited () const ROSE_DEPRECATED_FUNCTION;

      /*! \brief Access function for p_isVisited flag used previously by the AST traversals.

          \deprecated This function is not used and will be removed.
       */
          void set_isVisited ( bool isVisited ) ROSE_DEPRECATED_FUNCTION;

      /*! \brief Access function for performance optimizing global mangled name map.

          This mangle name caching is implemented to support better performance.
       */
          static std::map<SgNode*,std::string> & get_globalMangledNameMap();

      /*! \brief Support to clear the performance optimizing global mangled name map.
       */
          static void clearGlobalMangledNameMap();

      /*! \brief Access function for lower level optimizing of global mangled name map.

          This mangle name caching is implemented to shorter strings used in the globalMangledNameMap
          mechanism.
       */
          static std::map<std::string, uint64_t> & get_shortMangledNameCache();


      /*! \brief Access function for name qualification support (for names).

          This qualified name is stored with reference to where the name is used (as required) instead
          of with the IR node of what is names (e.g. function declaration, variable declaration, etc.).
       */
       // DQ (8/11/2025): Adding support for unordered maps for name qualification.
       // static std::map<SgNode*,std::string> & get_globalQualifiedNameMapForNames();
          static SgUnorderedMapNodeToString & get_globalQualifiedNameMapForNames();

      /*! \brief Access function for name qualification support (for names).

          This qualified name is stored with reference to where the name is used (as required) instead
          of with the IR node of what is names (e.g. function declaration, variable declaration, etc.).
       */
       // DQ (8/11/2025): Adding support for unordered maps for name qualification.
       // static void set_globalQualifiedNameMapForNames ( const std::map<SgNode*,std::string> & X );
          static void set_globalQualifiedNameMapForNames ( const SgUnorderedMapNodeToString & X );

      /*! \brief Access function for name qualification support (for type).

          This qualified name is stored with reference to where the type is used (as required) instead
          of with the IR node representing the type (which are typically shared) (e.g. function return
          type, variable type, etc.).
       */
       // DQ (8/11/2025): Adding support for unordered maps for name qualification.
       // static std::map<SgNode*,std::string> & get_globalQualifiedNameMapForTypes();
          static SgUnorderedMapNodeToString & get_globalQualifiedNameMapForTypes();

      /*! \brief Access function for name qualification support (for type).

          This qualified name is stored with reference to where the type is used (as required) instead
          of with the IR node representing the type (which are typically shared) (e.g. function return
          type, variable type, etc.).
       */
       // DQ (8/11/2025): Adding support for unordered maps for name qualification.
       // static void set_globalQualifiedNameMapForTypes ( const std::map<SgNode*,std::string> & X );
          static void set_globalQualifiedNameMapForTypes ( const SgUnorderedMapNodeToString & X );

       // DQ (3/13/2019): Added name qualification support for references to types than can embed many types.
      /*! \brief Access function for name qualification support (for maps of types).

          This qualified name is stored with reference to where the type is used (as required) instead
          of with the IR node representing the type (which are typically shared) (e.g. function return
          type, variable type, etc.).
       */
       // DQ (8/11/2025): Adding support for unordered maps for name qualification.
       // static std::map<SgNode*,std::map<SgNode*,std::string> > & get_globalQualifiedNameMapForMapsOfTypes();
          static std::map<SgNode*,SgUnorderedMapNodeToString> & get_globalQualifiedNameMapForMapsOfTypes();

       // DQ (3/13/2019): Added name qualification support for references to types than can embed many types.
      /*! \brief Access function for name qualification support (for maps of types).

          This qualified name is stored with reference to where the type is used (as required) instead
          of with the IR node representing the type (which are typically shared) (e.g. function return
          type, variable type, etc.).
       */
       // DQ (8/11/2025): Adding support for unordered maps for name qualification.
       // static void set_globalQualifiedNameMapForMapsOfTypes ( const std::map<SgNode*,std::map<SgNode*,std::string> > & X );
          static void set_globalQualifiedNameMapForMapsOfTypes ( const std::map<SgNode*,SgUnorderedMapNodeToString> & X );

      /*! \brief Access function for name qualification support (for template headers in template declarations).

          This name is stored with reference to where the template declaration is used (as required) instead
          of with the IR node (where it could be incorrect).  This design allows it to be computed as needed.
          Note that template headers are the substrings "template<typename T>" that apepar in header declarations.
          These can be repeated as required for deeply nested templated classes and thus are associated with
          name qualification of template declarations (along with the more common form of name qualication
          that also applies to template declarations).
       */
       // DQ (8/11/2025): Adding support for unordered maps for name qualification.
       // static std::map<SgNode*,std::string> & get_globalQualifiedNameMapForTemplateHeaders();
          static SgUnorderedMapNodeToString & get_globalQualifiedNameMapForTemplateHeaders();

      /*! \brief Access function for name qualification support (for template headers in template declarations).

          See documentation in get_globalQualifiedNameMapForTemplateHeaders() (above).
       */
       // static void set_globalQualifiedNameMapForTemplateHeaders ( const std::map<SgNode*,std::string> & X );
          static void set_globalQualifiedNameMapForTemplateHeaders ( const SgUnorderedMapNodeToString & X );

      /*! \brief Access function for name qualification support (for names of types).

          This type name is stored with reference to where the type is used (as required) instead
          of with the IR node representing the type (which are typically shared) (e.g. function return
          type, variable type, etc.).
       */
          static SgUnorderedMapNodeToString& get_globalTypeNameMap();

      /*! \brief Access function for name qualification support (for names of types).

          This qualified name is stored with reference to where the name is used (as required) instead
          of with the IR node of what is names (e.g. function declaration, variable declaration, etc.).
       */
          static void set_globalTypeNameMap ( const SgUnorderedMapNodeToString& X );

     /* name Persistant Attribute Mechanism

         This is the persistant attribute mechanism for attaching attributed to IR nodes across
         multiple passes. Note that these attributes are persistant in that they are preserved
         if the AST is written out to a file and read in from a file.  However, virtual function
         in the user-defined class derived from the AstAttribute must be defined for the attribute
         to be defined across the boundary of File I/O (simple pack and unpack functions).  More
         sophisticated mechanisms are available within the AstAttributeMechanism object
         (e.g iterating though attributes, etc; get_attributeMechanism() is available if direct
         access is required, however mostly only internal tools use this lower level support).

         \internal This used to be a public data member, but has been changed to be a protected
         pointer instead.  The functional interface of the AstAttributeMechanism is presevered
         but some of the names and the syntax for calling the interface have changed. The
         pointer to the AstAttributeMechanism is now generated by ROSETTA.
      */
     /* */
     //! Add a new attribute represented by the named string.
         virtual void addNewAttribute(std::string s,AstAttribute* a);
     //! Returns attribute of name 's'.
         virtual AstAttribute* getAttribute(std::string s) const;
     //! Replace existing attribute of name 's' with new AstAttribute.
         virtual void updateAttribute(std::string s,AstAttribute* a);  // formerly called: replace in AstAttributeMechanism
     /*! \brief This is a wrapper function with the following semantics:
         if no attribute of name 's' exists then \b addNewAttribute(s,a); is called,
         otherwise \b updateAttribute(s,a); is called.
      */
         virtual void setAttribute(std::string s,AstAttribute* a);
     //! Remove attribute of name 's' if present.
         virtual void removeAttribute(std::string s);
     //! Tests if attribute of name 's' is present.
         virtual bool attributeExists(std::string s) const;
     //! Returns the number of attributes on this IR node.
         virtual int numberOfAttributes() const;

     /*! \brief \b FOR \b INTERNAL \b USE Access function; if an attribute exists then
                a pointer to it is returned, else error.

         This is an access function used for getting the interally held pointer to a valid
         AstAttributeMechanism. It provides access to lower level functionality of the
         AstAttributeMechanism, put is mostly of use to internal tools.
      */
         virtual AstAttributeMechanism* get_attributeMechanism() const;
     /*!
         \brief \b FOR \b INTERNAL \b USE Access function; sets poiner to value AstAttributeMechanism.

         This is an access function used for setting the interally held pointer to a valid
         AstAttributeMechanism.
      */
         virtual void set_attributeMechanism(AstAttributeMechanism* a);

#if ALT_FIXUP_COPY
      /* name AST Copy Support Functions

          Support for IR node specific fixup of copy operation.
          This function helps reset scopes and build untraversed parts of the
          AST that are difficult to have be constructed using the automatically
          generated copy functions.

          \implementation These functions are used internally inside the AST copy mechanism.
           The public interface for this functionality is given below this section.
       */
          virtual void fixupCopy_scopes     (SgNode* copy, SgCopyHelp & help) const;
          virtual void fixupCopy_symbols    (SgNode* copy, SgCopyHelp & help) const;
          virtual void fixupCopy_references (SgNode* copy, SgCopyHelp & help) const;
#else
          virtual void fixupCopy(SgNode* copy, SgCopyHelp & help) const;
#endif

      /* name Source Position Information
          \brief Support for source code position information of all IR nodes.

          These are the virtual function definitions, they are overloaded for SgLocatedNode
          and a few of the SgSupport IR nodes.
       */

      /*! \brief File information containing filename, line number, column number,
                 and if the SgNode is a part of a new transformation, etc.

          \internal This function is only defined here to make get_file_info usable
                    without casting for for different types in polymorphic lists
                    actually only defined in SgLocatedNode(s).  It used to be defined
                    in the SgLocatedNode class.
       */
          virtual Sg_File_Info* get_file_info(void) const { return nullptr; }

      /*! \brief New function interface for Sg_File_Info data stores starting
                 location of contruct (typically the opening brace or first letter of keyword).
       */
          virtual Sg_File_Info* get_startOfConstruct(void) const {return nullptr;}

    /*! \brief New function interface for Sg_File_Info data stores ending
               location of contruct (typically the closing brace).
     */
          virtual Sg_File_Info* get_endOfConstruct(void) const { return nullptr; }

      /* name Control flow graph public functions

          These functions return control flow graph nodes for various positions
          around a construct. */
      /* */

#ifndef ROSE_USE_INTERNAL_FRONTEND_DEVELOPMENT
     /*! \brief Returns the CFG node for just before this AST node */
          VirtualCFG::CFGNode cfgForBeginning();
      /*! \brief Returns the CFG node for just after this AST node */
          VirtualCFG::CFGNode cfgForEnd();
#endif

#ifndef ROSE_USE_INTERNAL_FRONTEND_DEVELOPMENT
      /* name Control flow graph view helper functions

          These functions are used internally inside the control flow graph
          view code.  The public interface for this functionality is given
          below this section. */
      /* */

      /*! \brief Determine the CFG index for the end of this construct. */
          virtual unsigned int cfgIndexForEnd() const;

      /*! \brief Determine whether a particular CFG node index is "interesting"
          for this kind of node. */
          virtual bool cfgIsIndexInteresting(unsigned int index) const;

      /*! \brief Find the index of n in this node's CFG children. */
          virtual unsigned int cfgFindChildIndex(SgNode* n);

      /*! \brief Find the index just after n in this node's CFG children. */
          virtual unsigned int cfgFindNextChildIndex(SgNode* n);

      /*! \brief Find the out edges of a CFG node -- internal version. */
          virtual std::vector<VirtualCFG::CFGEdge> cfgOutEdges(unsigned int index = false);

      /*! \brief Find the in edges of a CFG node -- internal version. */
          virtual std::vector<VirtualCFG::CFGEdge> cfgInEdges(unsigned int index = false);
#endif

       //! Access function for symbol table specific to function types.
          static SgFunctionTypeTable* get_globalFunctionTypeTable();
       //! Access function for symbol table specific to function types.
          static void set_globalFunctionTypeTable(SgFunctionTypeTable* globalFunctionTypeTable);

       //! Access function for symbol table specific to non-function types.
          static SgTypeTable* get_globalTypeTable();
       //! Access function for symbol table specific to non-function types.
          static void set_globalTypeTable(SgTypeTable* globalTypeTable);

     protected:
          static std::vector<std::tuple<unsigned char*, unsigned, VariantT>> all_pools;
     public:
          static VariantT variantFromPool(SgNode const * n);

      /* \brief Mangled name cache for improved performance of mangled name generation
          This mangle name caching is implemented to support better performance.
       */

      /*! \brief Computes the number of nodes in the defined subtree of the AST.

          This function is used as a basis for steps in AST isomophism tests.
          The implementation uses a traversal of the AST subtree to count the
          number of IR nodes. So the complexity if order N in the size of the subtree.
       */
          int numberOfNodesInSubtree();

      /*! \brief Computes the depth of the current defined subtree of the AST.

          This function is used as a basis for steps in AST isomophism tests.
          The implementation uses a traversal of the AST subtree to count the
          depth of the AST traversal. So the complexity if order N in the size
          of the subtree.
       */
          int depthOfSubtree();

     protected:

        /*! \brief Final initialization for constructors
            This function is called at the end of generated constructors
            to allow the specification writer to add special initialization
            functions or tests.  Default is to do nothing.  Otherwise it should
            be overridden in the spec file, in NewHeaderCode/NewOutlinedCode.
        */
          virtual void post_construction_initialization();

     private:
       // Make the copy constructor private (to avoid it being used)
       /* We have to make the copy constructor available so that the SgUnparse_Info
          copy constructor can access it, I'm not clear if this is a good idea.
        */
       // SgNode(const SgNode &); /* private so it can't be used. */

      //! Delete operator= (to avoid it being used)
          SgNode & operator= (const SgNode &) = delete;

public:
    /** Allocate and return a new node after setting its parent.
     *
     *  ROSE's AST has this annoying, error-prone process for adding a node to the tree. One has to not only add the downward edge
     *  from parent to child, but also explicitly add the upward edge from child to parent. This two-step process makes it difficult
     *  to create child nodes and link them into the parent while the parent is being constructed. This function attempts to make
     *  this easier by doing everything in one step.
     *
     *  Use it like this:
     *
     * @code
     *  Parent::Parent(int foo, int bar)
     *      : p_child(createAndParent<Child>(this), p_foo(foo), p_bar(bar) {}
     * @endcode */
    template<class T>
    static typename std::enable_if<std::is_base_of<SgNode, T>::value, T*>::type
    createAndParent(SgNode *parent) {
        auto node = new T;
        node->set_parent(parent);
        return node;
    }

    /** Generated for tree edge data member initializations.
     *
     *  When initializing a data member that's an edge in the tree, this sets the nodes parent pointer to this object and then
     *  returns the node. It is used in generated code for constructors, like this:
     *
     * @code
     *  Foo::Foo(Bar *bar)
     *      : p_bar(adjustParent(bar, this)) {}
     * @endcode */
    template<class T>
    T* initParentPointer(T *child, SgNode *parent) {
        ASSERT_not_null(parent);
        if (child) {
#ifndef NDEBUG
            auto toString = [](SgNode *node) {
                if (node) {
                    return (boost::format("(%s*)%p") % node->class_name() % node).str();
                } else {
                    return std::string("nullptr");
                }
            };

            ASSERT_require2(child->get_parent() == nullptr,
                            "child " + toString(child) +
                            " cannot be inserted into " + toString(parent) +
                            " because it is already a child of " + toString(child->get_parent()));
#endif
            child->set_parent(this);
        }
        return child;
    }

    /** Set a child edge in a tree to point to a specific child.
     *
     *  Normally one has to remember to set the parent pointer when adding a child to a tree, and also be careful that the result is
     *  still a tree. This helper function tries to make that easier by checking some things and setting the parent pointer
     *  automatically.
     *
     *  For instance, this should work:
     *
     * @code
     *  SgAsmBinaryExpression *parent = ...;
     *  SgAsmBinaryExpression *child1 = ...;
     *  SgAsmBinaryExpression *child2 = ...;
     *
     *  parent->set_lhs(child1);
     *  ASSERT_require(child1->get_parent() == parent);
     *
     *  parent->set_lhs(child2);
     *  ASSERT_require(child1->get_parent() == nullptr);
     *  ASSERT_require(child2->get_parent() == parent);
     *
     *  parent->set_lhs(nullptr);
     *  ASSERT_require(child2->get_parent() == nullptr);
     * @endcode
     *
     *  The following should not work when assertions are enabled:
     *
     * @code
     *  SgAsmBinaryExpression *parent = ...;
     *  SgAsmBinaryExpression *child1 = ...;
     *  SgAsmBinaryExpression *child2 = ...;
     *
     *  parent->set_lhs(child1);
     *  parent->set_rhs(child1); // no longer a tree, but still acyclic
     * @endcode
     *
     * @{ */
    template<class T>
    typename std::enable_if<
        std::is_pointer<T>::value,
        void>::type
    changeChildPointer(T& edge, T const& child) {
#ifndef NDEBUG
        auto toString = [](SgNode *node) {
            if (node) {
                return (boost::format("(%s*)%p") % node->class_name() % node).str();
            } else {
                return std::string("nullptr");
            }
        };
#endif

        if (child != edge) {
            // If there is an old child, check that it has the correct parent and then remove it.
            if (edge) {
                ASSERT_require2(edge->get_parent() == this,
                                "node " + toString(edge) +
                                " is a child of " + toString(this) +
                                " but has wrong parent " + toString(edge->get_parent()));
                edge->set_parent(nullptr);
                edge = nullptr;
            }

            // If there is a new child, check its parent pointer and then insert it.
            if (child) {
                ASSERT_require2(child->get_parent() == nullptr,
                                "node " + toString(child) +
                                " is to be a child of " + toString(this) +
                                " but is already a child of " + toString(child->get_parent()));
                child->set_parent(this);
                edge = child;
            }
        }
    }

    // This gets called for non-pointers, which is the situation for nodes that are only lists of other nodes. We're currently
    // not checking them because the ROSETTA-generated API has too many ways to get around this check, most of which make it
    // impossible to enforce constraints regarding the parent/child consistency. For example:
    //
    //    node->children().clear(); // removes a whole bunch of children but doesn't clear their parent pointers
    //    node->children()[i] = child; // changes the ith child, but doesn't clear the previous ith child's parent pointer
    //    for (auto &tmp: node->children()) tmp = nullptr; // changes each child but doesn't clear parent pointers
    //    ad nausiam...
    template<class T>
    typename std::enable_if<
        !std::is_pointer<T>::value,
        void>::type
    changeChildPointer(T& edge, T const& child) {
        edge = child;
    }
    /** @} */


private:
    // This is called by the debugSerializationBegin and debugSerializationEnd that are in turn called at the beginning and end of
    // each AST node's serialization function. The implementation below uses two counters: classSerializationDepth shared by all
    // instances of this class, and objectSerializationDepth_ which is a per-instance counter. The relationship of these two
    // counters can tell us how deeply nested these recursive calls are, and which of those recursion levels are due to traversing
    // through the base classes versus traversing through data members. In the output, we use one character of indentation per
    // recursion level, with spaces (' ') representing recursion due to data members and dots ('.') representing recursion due to
    // base classes.
    void debugSerializationHelper(const char*, bool) {}

protected:
    /** This gets called by all Rosebud-generated destructors.
     *
     *  Rosebud generates a call to @p destructorHelper from every destructor implementation. This gives the user a chance to
     *  do something special. There are some things to be aware of when reimplementing this function, and you should be well
     *  versed in the C++ rules about calling virtual functions from destructors.
     *
     *  @li The implementation must not attempt to access any data members of derived classes. These data members have already
     *  been destroyed by time this function is called.
     *
     *  @li Any calls you make to virtual functions declared in this class will dispatch only to implementations in this class
     *  or its base classes, not any derived classes.
     *
     *  @li Your implementation must expect to be called multiple times for the same object. This occurs when this class implements
     *  this function but its derived class does not. During destruction of a derived object, the derived class's Rosebud-generated
     *  destructor will call @p destructorHelper, which will dispatch to the implementation in this class. Then, when the part of
     *  the object corresponding to this class is being destroyed, the destructor will call @p destructorHelper again, which will
     *  dispatch to this implementation again. This may happen recursively mutliple times.
     *
     *  @li Your implementation should not destroy anything that a subclass might need during its destruction. This follows from the
     *  rule above, but is generally not a problem in practice. The reason it's not a problem is that the derived classes are
     *  usually Rosebud-generated and thus their destructors only call @p destructorHelper. Therefore, in order for any derived
     *  class to any work, it must be done in its @p destructorHelper, which would be called before the implementation of @p
     *  destructorHelper in this class is called.
     *
     *  All attempts should be made to avoid having to implement a @p destructorHelper in any class but the most base class (and
     *  that one does nothing). Instead, use data members whose own destructors do their cleanup. For instance, if this class needs
     *  a pointer to data allocated on the stack, then instead of using a raw pointer which needs to be deleted in this class's
     *  destructor, use a smart pointer whose own destructor deletes the data. If you follow this advice, then you don't need to
     *  be well-versed in the details of C++ object destruction. */
     virtual void destructorHelper() {}

protected:
    /** Called by generated serializers.
     *
     *  All generated serialization functions call this function as the first or last thing they do. This is a convenient place to
     *  put temporary debugging code or breakpoints if you're trying to figure out what went wrong. You can also it in
     *  particular derived classes if you need to debug just one class.
     *
     * @{ */
    virtual void debugSerializationBegin(const char *className) {
        debugSerializationHelper(className, true);
    }
    virtual void debugSerializationEnd(const char *className) {
        debugSerializationHelper(className, false);
    }
    /** @} */

     public:



// End of memberFunctionString




     public: 
         SgNode* get_freepointer() const;
         void set_freepointer(SgNode* freepointer);











     public: 
         virtual ~SgNode();


     public: 
         SgNode(); 

    protected:
// Start of memberFunctionString
SgNode* p_parent;
          
// End of memberFunctionString
// Start of memberFunctionString
bool p_isModified;
          
// End of memberFunctionString
// Start of memberFunctionString
bool p_containsTransformation;
          
// End of memberFunctionString
// Start of memberFunctionString
SgNode* p_freepointer;
          
// End of memberFunctionString
// Start of memberFunctionString
static SgFunctionTypeTable* p_globalFunctionTypeTable;
          
// End of memberFunctionString
// Start of memberFunctionString
static SgTypeTable* p_globalTypeTable;
          
// End of memberFunctionString
// Start of memberFunctionString
static std::map<SgNode*,std::string> p_globalMangledNameMap;
          
// End of memberFunctionString
// Start of memberFunctionString
static std::map<std::string, uint64_t> p_shortMangledNameCache;
          
// End of memberFunctionString
// Start of memberFunctionString
static std::unordered_map<SgNode*,std::string> p_globalQualifiedNameMapForNames;
          
// End of memberFunctionString
// Start of memberFunctionString
static std::unordered_map<SgNode*,std::string> p_globalQualifiedNameMapForTypes;
          
// End of memberFunctionString
// Start of memberFunctionString
static std::unordered_map<SgNode*,std::string> p_globalQualifiedNameMapForTemplateHeaders;
          
// End of memberFunctionString
// Start of memberFunctionString
static std::unordered_map<SgNode*,std::string> p_globalTypeNameMap;
          
// End of memberFunctionString
// Start of memberFunctionString
static std::map<SgNode*,std::unordered_map<SgNode*,std::string> > p_globalQualifiedNameMapForMapsOfTypes;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgNode>;
    friend struct Rose::Traits::generated::describe_field_t<SgNode, SgNode*,&SgNode::p_parent>;
    friend struct Rose::Traits::generated::describe_field_t<SgNode, bool,&SgNode::p_isModified>;
    friend struct Rose::Traits::generated::describe_field_t<SgNode, bool,&SgNode::p_containsTransformation>;
    friend struct Rose::Traits::generated::describe_field_t<SgNode, SgNode*,&SgNode::p_freepointer>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgNode

/* #line 1198 "/workspace/generated/src/frontend/SageIII//SgNode.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 1205 "/workspace/generated/src/frontend/SageIII//SgNode.h" */

#endif // ROSE_SgNode_H

