
#ifndef ROSE_SgAsmPEImportDirectory_H
#define ROSE_SgAsmPEImportDirectory_H
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

// predeclarations for SgAsmPEImportDirectory

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmPEImportDirectory.h" */
/* #line 3385 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#include <Rose/BinaryAnalysis/Address.h>
#include <Rose/BinaryAnalysis/AddressIntervalSet.h>
#include <Rose/BinaryAnalysis/RelativeVirtualAddress.h>
#include <sageContainer.h>

#ifdef ROSE_SgAsmPEImportDirectory_IMPL
#include <SgAsmGenericString.h>
#include <SgAsmPEImportItemList.h>
#endif


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmPEImportDirectory
class ROSE_DLL_API SgAsmPEImportDirectory  : public SgAsmExecutableFileFormat
   {
     public:


/* #line 50 "/workspace/generated/src/frontend/SageIII//SgAsmPEImportDirectory.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 3466 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmPEImportDirectory -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmPEImportDirectory");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmExecutableFileFormat);
        s & BOOST_SERIALIZATION_NVP(p_dllName);
        s & BOOST_SERIALIZATION_NVP(p_dllNameRva);
        s & BOOST_SERIALIZATION_NVP(p_dll_name_nalloc);
        s & BOOST_SERIALIZATION_NVP(p_time);
        s & BOOST_SERIALIZATION_NVP(p_forwarder_chain);
        s & BOOST_SERIALIZATION_NVP(p_ilt_rva);
        s & BOOST_SERIALIZATION_NVP(p_ilt_nalloc);
        s & BOOST_SERIALIZATION_NVP(p_iat_rva);
        s & BOOST_SERIALIZATION_NVP(p_iat_nalloc);
        s & BOOST_SERIALIZATION_NVP(p_imports);
        debugSerializationEnd("SgAsmPEImportDirectory");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
#ifdef _MSC_VER
# pragma pack (1)
#endif
    struct PEImportDirectory_disk {
        uint32_t ilt_rva;               /* 0x00 Import Lookup Table RVA */
        uint32_t time;                  /* 0x04 Zero until the image is bound, then time stamp of the DLL */
        uint32_t forwarder_chain;       /* 0x08 Index of the first forwarder chain */
        uint32_t dll_name_rva;          /* 0x0c address of NUL-terminated DLL name */
        uint32_t iat_rva;               /* 0x10 Import Address Table (Thunk Table) RVA */
    }                                       /* 0x14 */
#if !defined(SWIG) && !defined(_MSC_VER)
    __attribute__((packed))
#endif
    ;
#ifdef _MSC_VER
# pragma pack ()
#endif

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Properties
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
public:
    /** Property: Name of library from which to import.
     *
     *  See PE specification. 
     *  
     *  @{ */
    SgAsmGenericString* const& get_dllName() const;
    void set_dllName(SgAsmGenericString* const&);
    /** @} */

public:
    /** Property: Address of the import library name.
     *
     *  See PE specification. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::RelativeVirtualAddress const& get_dllNameRva() const;
    Rose::BinaryAnalysis::RelativeVirtualAddress& get_dllNameRva();
    void set_dllNameRva(Rose::BinaryAnalysis::RelativeVirtualAddress const&);
    /** @} */

public:
    /** Property: Bytes allocated in the file for the name.
     *
     *  See PE specification. 
     *  
     *  @{ */
    size_t const& get_dll_name_nalloc() const;
    void set_dll_name_nalloc(size_t const&);
    /** @} */

public:
    /** Property: Time.
     *
     *  See PE specification. 
     *  
     *  @{ */
    time_t const& get_time() const;
    void set_time(time_t const&);
    /** @} */

public:
    /** Property: Forwarder chain.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_forwarder_chain() const;
    void set_forwarder_chain(unsigned const&);
    /** @} */

public:
    /** Property: Starting address of the ILT.
     *
     *  See PE specification. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::RelativeVirtualAddress const& get_ilt_rva() const;
    Rose::BinaryAnalysis::RelativeVirtualAddress& get_ilt_rva();
    void set_ilt_rva(Rose::BinaryAnalysis::RelativeVirtualAddress const&);
    /** @} */

public:
    /** Property: Bytes allocated in the file for the ILT.
     *
     *  See PE specification. 
     *  
     *  @{ */
    size_t const& get_ilt_nalloc() const;
    void set_ilt_nalloc(size_t const&);
    /** @} */

public:
    /** Property: IAT RVA.
     *
     *  See PE specification. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::RelativeVirtualAddress const& get_iat_rva() const;
    Rose::BinaryAnalysis::RelativeVirtualAddress& get_iat_rva();
    void set_iat_rva(Rose::BinaryAnalysis::RelativeVirtualAddress const&);
    /** @} */

public:
    /** Property: Bytes allocated in the file for the IAT.
     *
     *  See PE specification. 
     *  
     *  @{ */
    size_t const& get_iat_nalloc() const;
    void set_iat_nalloc(size_t const&);
    /** @} */

public:
    /** Property: List of imports.
     *
     *  See PE specification. 
     *  
     *  @{ */
    SgAsmPEImportItemList* const& get_imports() const;
    void set_imports(SgAsmPEImportItemList* const&);
    /** @} */
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    explicit SgAsmPEImportDirectory(SgAsmPEImportSection *isec, const std::string &dll_name="");

    /** Parse an import directory.
     *
     *  The import directory is parsed from the specified virtual address via the PE header's loader map. Return value is
     *  this directory entry on success, or the null pointer if the entry is all zero (which marks the end of the directory
     *  list). The @p isLastEntry is true if the caller thinks this should be an all-zero entry. */
    SgAsmPEImportDirectory *parse(Rose::BinaryAnalysis::Address va, bool isLastEntry);

    /** Allocates space for this import directory's name, import lookup table, and import address table.
     *
     *  The items are allocated beginning at the specified relative virtual address. Items are reallocated if they are not
     *  allocated or if they are allocated in the same section to which start_rva points (the import section).  They are
     *  not reallocated if they already exist in some other section. The return value is the number of bytes allocated in
     *  the import section.  Upon return, this directory's address data members are initialized with possibly new
     *  values. */
    size_t reallocate(Rose::BinaryAnalysis::RelativeVirtualAddress starting_rva);

    /** Encode an import directory entry back into disk format */
    void *encode(SgAsmPEImportDirectory::PEImportDirectory_disk*) const;
    virtual void unparse(std::ostream&, const SgAsmPEImportSection*, size_t idx) const;
    virtual void dump(FILE*, const char *prefix, ssize_t idx) const;

    /** Number of bytes required for the table.
     *
     *  Returns the number of bytes required for the entire IAT or ILT (including the zero terminator) as it is currently
     *  defined in the Import Directory.  The returned size does not include space required to store any Hint/Name pairs,
     *  which are outside the ILT/IAT but pointed to by the ILT/IAT. */
    size_t iatRequiredSize() const;

    /** Find an import item in an import directory.
     *
     *  Returns the index of the specified import item in this directory, or -1 if the import item is not a child of this
     *  directory.  The hint index is checked first. */
    int findImportItem(const SgAsmPEImportItem *item, int hint=0) const;

    /** Obtains the virtual address of the Hint/Name Table.
     *
     *  The Hint/Name Table is an implicit table--the PE file format specification talks about such a table, but it is not
     *  actually defined anywhere in the PE file.  Instead, various Import Lookup Table and Import Address Table entries
     *  might point to individual Hint/Name pairs, which collectively form an implicit Hint/Name Table.  There is no
     *  requirement that the Hint/Name pairs are contiguous in the address space, and indeed they often are not.
     *  Therefore, the only way to describe the location of the Hint/Name Table is by a list of addresses.
     *
     *  This function will scan this Import Directory's import items, observe which items make references to Hint/Name
     *  pairs that have known addresses, and add those areas of virtual memory to the specified extent map.  This function
     *  returns the number of ILT entries that reference a Hint/Name pair. */
    size_t hintNameTableExtent(Rose::BinaryAnalysis::AddressIntervalSet &extent/*in,out*/) const;

private:
    void parse_ilt_iat(const Rose::BinaryAnalysis::RelativeVirtualAddress &table_start, bool assume_bound);
    void unparse_ilt_iat(std::ostream&,const Rose::BinaryAnalysis::RelativeVirtualAddress &table_start, bool assume_bound,
                         size_t nalloc) const;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deprecated 2023-11
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    SgAsmGenericString* get_dll_name() const ROSE_DEPRECATED("use get_dllName");
    void set_dll_name(SgAsmGenericString*) ROSE_DEPRECATED("use set_dllName");
    const Rose::BinaryAnalysis::RelativeVirtualAddress& get_dll_name_rva() const ROSE_DEPRECATED("use get_dllNameRva");
    Rose::BinaryAnalysis::RelativeVirtualAddress& get_dll_name_rva() ROSE_DEPRECATED("use get_dllNameRva");
    void set_dll_name_rva(const Rose::BinaryAnalysis::RelativeVirtualAddress&) ROSE_DEPRECATED("use set_dllNameRva");
    size_t iat_required_size() const ROSE_DEPRECATED("use iatRequiredSize");
    int find_import_item(const SgAsmPEImportItem*, int=0) const ROSE_DEPRECATED("use findImportItem");
    size_t hintname_table_extent(Rose::BinaryAnalysis::AddressIntervalSet&) const ROSE_DEPRECATED("use hintNameTableExtent");
public:
    /** Destructor. */
    virtual ~SgAsmPEImportDirectory();

public:
    /** Default constructor. */
    SgAsmPEImportDirectory();

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
       // static const VariantT static_variant = V_SgAsmPEImportDirectory;
          enum { static_variant = V_SgAsmPEImportDirectory };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmPEImportDirectory* isSgAsmPEImportDirectory(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmPEImportDirectory* isSgAsmPEImportDirectory( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmPEImportDirectory * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmPEImportDirectoryStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmPEImportDirectory * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmPEImportDirectory * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmPEImportDirectory::operator delete (pointer,sizeof(SgAsmPEImportDirectory));
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
 	static SgAsmPEImportDirectory* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmPEImportDirectory* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmPEImportDirectory* sgnode);

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
       // SgAsmPEImportDirectory( SgAsmPEImportDirectoryStorageClass& source );





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
          friend class SgAsmPEImportDirectoryStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmPEImportDirectory( const SgAsmPEImportDirectoryStorageClass& source );

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
          SgAsmPEImportDirectory* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmPEImportDirectory* isSgAsmPEImportDirectory ( SgNode* s );

          typedef SgAsmExecutableFileFormat base_node_type;


// End of memberFunctionString











    protected:
// Start of memberFunctionString
SgAsmGenericString* p_dllName;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::RelativeVirtualAddress p_dllNameRva;
          
// End of memberFunctionString
// Start of memberFunctionString
size_t p_dll_name_nalloc;
          
// End of memberFunctionString
// Start of memberFunctionString
time_t p_time;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_forwarder_chain;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::RelativeVirtualAddress p_ilt_rva;
          
// End of memberFunctionString
// Start of memberFunctionString
size_t p_ilt_nalloc;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::RelativeVirtualAddress p_iat_rva;
          
// End of memberFunctionString
// Start of memberFunctionString
size_t p_iat_nalloc;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmPEImportItemList* p_imports;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmPEImportDirectory>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEImportDirectory, SgAsmGenericString*,&SgAsmPEImportDirectory::p_dllName>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEImportDirectory, Rose::BinaryAnalysis::RelativeVirtualAddress,&SgAsmPEImportDirectory::p_dllNameRva>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEImportDirectory, size_t,&SgAsmPEImportDirectory::p_dll_name_nalloc>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEImportDirectory, time_t,&SgAsmPEImportDirectory::p_time>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEImportDirectory, unsigned,&SgAsmPEImportDirectory::p_forwarder_chain>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEImportDirectory, Rose::BinaryAnalysis::RelativeVirtualAddress,&SgAsmPEImportDirectory::p_ilt_rva>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEImportDirectory, size_t,&SgAsmPEImportDirectory::p_ilt_nalloc>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEImportDirectory, Rose::BinaryAnalysis::RelativeVirtualAddress,&SgAsmPEImportDirectory::p_iat_rva>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEImportDirectory, size_t,&SgAsmPEImportDirectory::p_iat_nalloc>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEImportDirectory, SgAsmPEImportItemList*,&SgAsmPEImportDirectory::p_imports>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmPEImportDirectory

/* #line 775 "/workspace/generated/src/frontend/SageIII//SgAsmPEImportDirectory.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 782 "/workspace/generated/src/frontend/SageIII//SgAsmPEImportDirectory.h" */

#endif // ROSE_SgAsmPEImportDirectory_H

