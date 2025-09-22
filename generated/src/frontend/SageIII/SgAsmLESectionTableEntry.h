
#ifndef ROSE_SgAsmLESectionTableEntry_H
#define ROSE_SgAsmLESectionTableEntry_H
#include <RoseFirst.h>
#include <Cxx_GrammarDeclarations.h>
#include <SgAsmExecutableFileFormat.h>



/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

// WARNING -- GENERATED CODE -- DO NOT MODIFY THIS CODE -- WARNING!
//      This code is automatically generated for each 
//      terminal and non-terminal within the defined 
//      grammar.  There is a simple way to change the 
//      code to fix bugs etc.  See the ROSE README file
//      for directions.

// tps: (02/22/2010): Adding DLL export requirements
#include "rosedll.h"

// predeclarations for SgAsmLESectionTableEntry

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmLESectionTableEntry.h" */
/* #line 7673 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#include <Rose/BinaryAnalysis/Address.h>
#include <Rose/BinaryAnalysis/ByteOrder.h>


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmLESectionTableEntry
class ROSE_DLL_API SgAsmLESectionTableEntry  : public SgAsmExecutableFileFormat
   {
     public:


/* #line 43 "/workspace/generated/src/frontend/SageIII//SgAsmLESectionTableEntry.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 7719 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmLESectionTableEntry -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmLESectionTableEntry");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmExecutableFileFormat);
        s & BOOST_SERIALIZATION_NVP(p_flags);
        s & BOOST_SERIALIZATION_NVP(p_pageMapIndex);
        s & BOOST_SERIALIZATION_NVP(p_pageMapNEntries);
        s & BOOST_SERIALIZATION_NVP(p_res1);
        s & BOOST_SERIALIZATION_NVP(p_mappedSize);
        s & BOOST_SERIALIZATION_NVP(p_baseAddr);
        debugSerializationEnd("SgAsmLESectionTableEntry");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
#ifdef _MSC_VER
# pragma pack (1)
#endif
    /* File format of a section table entry. Fields are big- or little-endian depending on file header. */
    struct LESectionTableEntry_disk {
        uint32_t    mapped_size;            /* 0x00 virtual segment size in bytes */
        uint32_t    base_addr;              /* 0x04 relocation base address */
        uint32_t    flags;                  /* 0x08 bit flags, see LESectionFlags */
        uint32_t    pagemap_index;          /* 0x0c */
        uint32_t    pagemap_nentries;       /* 0x10 number of entries in the page map */
        uint32_t    res1;                   /* 0x14 reserved */
    }                                     /* 0x18 */
// DQ (3/7/2013): Adding support to restrict visability to SWIG.
#ifndef SWIG
#ifndef _MSC_VER
                __attribute__((packed))
#endif
#endif
                ;
#ifdef _MSC_VER
# pragma pack ()
#endif

    /* SF_BIG_BIT: The "big/default" bit, for data segments, controls the setting of the Big bit in the segment descriptor. (The
     *             Big bit, or B-bit, determines whether ESP or SP is used as the stack pointer.) For code segments, this bit
     *             controls the setting of the Default bit in the segment descriptor. (The Default bit, or D-bit, determines
     *             whether the default word size is 32-bits or 16-bits. It also affects the interpretation of the instruction
     *             stream.) */
    enum LESectionFlags {
        SF_RESERVED         = 0xffff0800,   /* Reserved bits (FIXME) */

        SF_READABLE         = 0x00000001,   /**< Read permission granted when mapped */
        SF_WRITABLE         = 0x00000002,   /**< Write permission granted when mapped */
        SF_EXECUTABLE       = 0x00000004,   /**< Execute permission granted when mapped */

        SF_RESOURCE         = 0x00000008,   /**< Section contains resource objects */
        SF_DISCARDABLE      = 0x00000010,   /**< Discardable section */
        SF_SHARED           = 0x00000020,   /**< Section is shared */
        SF_PRELOAD_PAGES    = 0x00000040,   /**< Section has preload pages */
        SF_INVALID_PAGES    = 0x00000080,   /**< Section has invalid pages */

        SF_TYPE_MASK        = 0x00000300,        /*NO_STRINGIFY*/
        SF_TYPE_NORMAL      = 0x00000000,
        SF_TYPE_ZERO        = 0x00000100,   /**< Section has zero-filled pages */
        SF_TYPE_RESIDENT    = 0x00000200,   /**< Section is resident (valid for VDDs and PDDs only) */
        SF_TYPE_RESCONT     = 0x00000300,   /**< Section is resident and contiguous */

        SF_RES_LONG_LOCK    = 0x00000400,   /**< Section is resident and "long-lockable" (VDDs and PDDs only) */
        SF_1616_ALIAS       = 0x00001000,   /**< 16:16 alias required (80x86 specific) */
        SF_BIG_BIT          = 0x00002000,   /**< Big/default bit setting (80x86 specific); see note above */
        SF_CODE_CONFORM     = 0x00004000,   /**< Section is conforming for code (80x86 specific) */
        SF_IO_PRIV          = 0x00008000    /**< Section I/O privilege level (80x86 specific; used only for 16:16 alias objects) */
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Properties
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
public:
    unsigned const& get_flags() const;
    void set_flags(unsigned const&);

public:
    unsigned const& get_pageMapIndex() const;
    void set_pageMapIndex(unsigned const&);

public:
    unsigned const& get_pageMapNEntries() const;
    void set_pageMapNEntries(unsigned const&);

public:
    unsigned const& get_res1() const;
    void set_res1(unsigned const&);

public:
    Rose::BinaryAnalysis::Address const& get_mappedSize() const;
    void set_mappedSize(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_baseAddr() const;
    void set_baseAddr(Rose::BinaryAnalysis::Address const&);
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    SgAsmLESectionTableEntry(Rose::BinaryAnalysis::ByteOrder::Endianness sex,
                             const SgAsmLESectionTableEntry::LESectionTableEntry_disk *disk);
    void *encode(Rose::BinaryAnalysis::ByteOrder::Endianness, SgAsmLESectionTableEntry::LESectionTableEntry_disk*) const;
    virtual void dump(FILE *f, const char *prefix, ssize_t idx) const;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deprecated 2023-11
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    unsigned get_pagemap_index() const ROSE_DEPRECATED("use get pageMapIndex");
    void set_pagemap_index(unsigned) ROSE_DEPRECATED("use set_pageMapIndex");
    unsigned get_pagemap_nentries() const ROSE_DEPRECATED("use get_pageMapNEntries");
    void set_pagemap_nentries(unsigned) ROSE_DEPRECATED("use set_pageMapNEntries");
    Rose::BinaryAnalysis::Address get_mapped_size() const ROSE_DEPRECATED("use get_mappedSize");
    void set_mapped_size(Rose::BinaryAnalysis::Address) ROSE_DEPRECATED("use set_mappedSize");
    Rose::BinaryAnalysis::Address get_base_addr() const ROSE_DEPRECATED("use get_baseAddr");
    void set_base_addr(Rose::BinaryAnalysis::Address) ROSE_DEPRECATED("use set_baseAddr");
public:
    /** Destructor. */
    virtual ~SgAsmLESectionTableEntry();

public:
    /** Default constructor. */
    SgAsmLESectionTableEntry();

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
       // static const VariantT static_variant = V_SgAsmLESectionTableEntry;
          enum { static_variant = V_SgAsmLESectionTableEntry };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmLESectionTableEntry* isSgAsmLESectionTableEntry(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmLESectionTableEntry* isSgAsmLESectionTableEntry( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmLESectionTableEntry * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmLESectionTableEntryStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmLESectionTableEntry * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmLESectionTableEntry * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmLESectionTableEntry::operator delete (pointer,sizeof(SgAsmLESectionTableEntry));
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
 	static SgAsmLESectionTableEntry* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmLESectionTableEntry* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmLESectionTableEntry* sgnode);

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
       // SgAsmLESectionTableEntry( SgAsmLESectionTableEntryStorageClass& source );





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
          friend class SgAsmLESectionTableEntryStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmLESectionTableEntry( const SgAsmLESectionTableEntryStorageClass& source );

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
          SgAsmLESectionTableEntry* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmLESectionTableEntry* isSgAsmLESectionTableEntry ( SgNode* s );

          typedef SgAsmExecutableFileFormat base_node_type;


// End of memberFunctionString







    protected:
// Start of memberFunctionString
unsigned p_flags;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_pageMapIndex;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_pageMapNEntries;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_res1;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_mappedSize;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_baseAddr;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmLESectionTableEntry>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLESectionTableEntry, unsigned,&SgAsmLESectionTableEntry::p_flags>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLESectionTableEntry, unsigned,&SgAsmLESectionTableEntry::p_pageMapIndex>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLESectionTableEntry, unsigned,&SgAsmLESectionTableEntry::p_pageMapNEntries>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLESectionTableEntry, unsigned,&SgAsmLESectionTableEntry::p_res1>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLESectionTableEntry, Rose::BinaryAnalysis::Address,&SgAsmLESectionTableEntry::p_mappedSize>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLESectionTableEntry, Rose::BinaryAnalysis::Address,&SgAsmLESectionTableEntry::p_baseAddr>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmLESectionTableEntry

/* #line 648 "/workspace/generated/src/frontend/SageIII//SgAsmLESectionTableEntry.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 655 "/workspace/generated/src/frontend/SageIII//SgAsmLESectionTableEntry.h" */

#endif // ROSE_SgAsmLESectionTableEntry_H

