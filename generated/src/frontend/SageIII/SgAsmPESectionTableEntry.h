
#ifndef ROSE_SgAsmPESectionTableEntry_H
#define ROSE_SgAsmPESectionTableEntry_H
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

// predeclarations for SgAsmPESectionTableEntry

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmPESectionTableEntry.h" */
/* #line 2205 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#include <Rose/BinaryAnalysis/Address.h>


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmPESectionTableEntry
class ROSE_DLL_API SgAsmPESectionTableEntry  : public SgAsmExecutableFileFormat
   {
     public:


/* #line 42 "/workspace/generated/src/frontend/SageIII//SgAsmPESectionTableEntry.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 2269 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmPESectionTableEntry -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmPESectionTableEntry");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmExecutableFileFormat);
        s & BOOST_SERIALIZATION_NVP(p_name);
        s & BOOST_SERIALIZATION_NVP(p_virtual_size);
        s & BOOST_SERIALIZATION_NVP(p_rva);
        s & BOOST_SERIALIZATION_NVP(p_physical_size);
        s & BOOST_SERIALIZATION_NVP(p_physical_offset);
        s & BOOST_SERIALIZATION_NVP(p_coff_line_nums);
        s & BOOST_SERIALIZATION_NVP(p_n_relocs);
        s & BOOST_SERIALIZATION_NVP(p_n_coff_line_nums);
        s & BOOST_SERIALIZATION_NVP(p_flags);
        debugSerializationEnd("SgAsmPESectionTableEntry");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
#ifdef _MSC_VER
# pragma pack (1)
#endif
    /* File format of a section table entry. All fields are little endian. Sections are ordered by RVA. */
    struct PESectionTableEntry_disk {
        char     name[8];          /* NUL-padded */
        uint32_t virtual_size;     /* virtual memory size, >= physical_size and difference is zero filled */
        uint32_t rva;              /* relative virt addr wrt Image Base; multiple of section_align; dense space */
        uint32_t physical_size;    /* bytes of initialized data on disk; multiple of file_align & <= virtual_size*/
        uint32_t physical_offset;  /* location of initialized data on disk; multiple of file_align */
        uint32_t coff_line_nums;   /* file offset of COFF line number info or zero */
        uint32_t n_relocs;         /* number of relocation entries; should be zero for executables */
        uint32_t n_coff_line_nums; /* number of COFF line number entries */
        uint32_t flags;            /* PESectionFlags bits: code, data, caching, paging, shared, permissions, etc.*/
    }
#if !defined(SWIG) && !defined(_MSC_VER)
    __attribute__((packed))
#endif
    ;
#ifdef _MSC_VER
# pragma pack ()
#endif

    /* These come from the windows PE documentation and
     * http://en.wikibooks.org/wiki/X86_Disassembly/Windows_Executable_Files */
    enum PESectionFlags {
        OF_CODE             = 0x00000020,   /* section contains code */
        OF_IDATA            = 0x00000040,   /* initialized data */
        OF_UDATA            = 0x00000080,   /* uninitialized data */
        OF_INFO             = 0x00000200,   /* comments or some other type of info */
        OF_REMOVE           = 0x00000800,   /* section will not become part of image */
        OF_COMDAT           = 0x00001000,   /* section contains comdat */
        OF_NO_DEFER_SPEC_EXC= 0x00004000,   /* reset speculative exception handling bits in the TLB entires for
                                             * this section */
        OF_GPREL            = 0x00008000,   /* section content can be access relative to GP */
        OF_ALIGN_1          = 0x00100000,   /* no alignment */
        OF_ALIGN_2          = 0x00200000,   /* 2-byte alignment */
        OF_ALIGN_4          = 0x00300000,   /* 4-byte alignment */
        OF_ALIGN_8          = 0x00400000,   /* 8-byte alignment */
        OF_ALIGN_16         = 0x00500000,   /* 16-byte alignment (default if not other alignment specified) */
        OF_ALIGN_32         = 0x00600000,   /* 32-byte alignment */
        OF_ALIGN_64         = 0x00700000,   /* 64-byte alignment */
        OF_ALIGN_128        = 0x00800000,   /* 128-byte alignment */
        OF_ALIGN_256        = 0x00900000,   /* 256-byte alignment */
        OF_ALIGN_512        = 0x00a00000,   /* 512-byte alignment */
        OF_ALIGN_1k         = 0x00b00000,   /* 1024-byte alignment */
        OF_ALIGN_2k         = 0x00c00000,   /* 2048-byte alignment */
        OF_ALIGN_4k         = 0x00d00000,   /* 4096-byte alignment */
        OF_ALIGN_8k         = 0x00e00000,   /* 8192-byte alignment */
        OF_ALIGN_MASK       = 0x00f00000,   /* mask for alignment value */
        OF_NRELOC_OVFL      = 0x01000000,   /* section contains extended relocations */
        OF_DISCARDABLE      = 0x02000000,   /* can be discarded */
        OF_NO_CACHE         = 0x04000000,   /* section must not be cached */
        OF_NO_PAGING        = 0x08000000,   /* section is not pageable */
        OF_SHARED           = 0x10000000,   /* section is shared */
        OF_EXECUTABLE       = 0x20000000,   /* execute permission */
        OF_READABLE         = 0x40000000,   /* read permission */
        OF_WRITABLE         = 0x80000000    /* write permission */
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Properties
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
public:
    /** Property: Name.
     *
     *  See PE specification. 
     *  
     *  @{ */
    std::string const& get_name() const;
    void set_name(std::string const&);
    /** @} */

public:
    /** Property: Virtual size.
     *
     *  See PE specification. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::Address const& get_virtual_size() const;
    void set_virtual_size(Rose::BinaryAnalysis::Address const&);
    /** @} */

public:
    /** Property: RVA.
     *
     *  See PE specification. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::Address const& get_rva() const;
    void set_rva(Rose::BinaryAnalysis::Address const&);
    /** @} */

public:
    /** Property: Physical size.
     *
     *  See PE specification. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::Address const& get_physical_size() const;
    void set_physical_size(Rose::BinaryAnalysis::Address const&);
    /** @} */

public:
    /** Property: Physical offset.
     *
     *  See PE specification. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::Address const& get_physical_offset() const;
    void set_physical_offset(Rose::BinaryAnalysis::Address const&);
    /** @} */

public:
    /** Property: COFF line numbers.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_coff_line_nums() const;
    void set_coff_line_nums(unsigned const&);
    /** @} */

public:
    /** Property: Number of relocations.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_n_relocs() const;
    void set_n_relocs(unsigned const&);
    /** @} */

public:
    /** Property: Number of COFF line numbers.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_n_coff_line_nums() const;
    void set_n_coff_line_nums(unsigned const&);
    /** @} */

public:
    /** Property: Flags.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_flags() const;
    void set_flags(unsigned const&);
    /** @} */
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    explicit SgAsmPESectionTableEntry(const SgAsmPESectionTableEntry::PESectionTableEntry_disk *disk);

    /** Update this section table entry with newer information from the section */
    void updateFromSection(SgAsmPESection *section);
    void *encode(SgAsmPESectionTableEntry::PESectionTableEntry_disk*) const;
    virtual void dump(FILE*, const char *prefix, ssize_t idx) const;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deprecated 2023-11
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    void update_from_section(SgAsmPESection*) ROSE_DEPRECATED("use updateFromSection");
public:
    /** Destructor. */
    virtual ~SgAsmPESectionTableEntry();

public:
    /** Default constructor. */
    SgAsmPESectionTableEntry();

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
       // static const VariantT static_variant = V_SgAsmPESectionTableEntry;
          enum { static_variant = V_SgAsmPESectionTableEntry };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmPESectionTableEntry* isSgAsmPESectionTableEntry(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmPESectionTableEntry* isSgAsmPESectionTableEntry( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmPESectionTableEntry * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmPESectionTableEntryStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmPESectionTableEntry * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmPESectionTableEntry * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmPESectionTableEntry::operator delete (pointer,sizeof(SgAsmPESectionTableEntry));
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
 	static SgAsmPESectionTableEntry* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmPESectionTableEntry* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmPESectionTableEntry* sgnode);

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
       // SgAsmPESectionTableEntry( SgAsmPESectionTableEntryStorageClass& source );





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
          friend class SgAsmPESectionTableEntryStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmPESectionTableEntry( const SgAsmPESectionTableEntryStorageClass& source );

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
          SgAsmPESectionTableEntry* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmPESectionTableEntry* isSgAsmPESectionTableEntry ( SgNode* s );

          typedef SgAsmExecutableFileFormat base_node_type;


// End of memberFunctionString










    protected:
// Start of memberFunctionString
std::string p_name;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_virtual_size;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_rva;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_physical_size;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_physical_offset;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_coff_line_nums;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_n_relocs;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_n_coff_line_nums;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_flags;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmPESectionTableEntry>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPESectionTableEntry, std::string,&SgAsmPESectionTableEntry::p_name>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPESectionTableEntry, Rose::BinaryAnalysis::Address,&SgAsmPESectionTableEntry::p_virtual_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPESectionTableEntry, Rose::BinaryAnalysis::Address,&SgAsmPESectionTableEntry::p_rva>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPESectionTableEntry, Rose::BinaryAnalysis::Address,&SgAsmPESectionTableEntry::p_physical_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPESectionTableEntry, Rose::BinaryAnalysis::Address,&SgAsmPESectionTableEntry::p_physical_offset>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPESectionTableEntry, unsigned,&SgAsmPESectionTableEntry::p_coff_line_nums>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPESectionTableEntry, unsigned,&SgAsmPESectionTableEntry::p_n_relocs>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPESectionTableEntry, unsigned,&SgAsmPESectionTableEntry::p_n_coff_line_nums>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPESectionTableEntry, unsigned,&SgAsmPESectionTableEntry::p_flags>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmPESectionTableEntry

/* #line 735 "/workspace/generated/src/frontend/SageIII//SgAsmPESectionTableEntry.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 742 "/workspace/generated/src/frontend/SageIII//SgAsmPESectionTableEntry.h" */

#endif // ROSE_SgAsmPESectionTableEntry_H

