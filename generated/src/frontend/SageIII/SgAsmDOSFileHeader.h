
#ifndef ROSE_SgAsmDOSFileHeader_H
#define ROSE_SgAsmDOSFileHeader_H
#include <RoseFirst.h>
#include <Cxx_GrammarDeclarations.h>
#include <SgAsmGenericHeader.h>



/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

// WARNING -- GENERATED CODE -- DO NOT MODIFY THIS CODE -- WARNING!
//      This code is automatically generated for each 
//      terminal and non-terminal within the defined 
//      grammar.  There is a simple way to change the 
//      code to fix bugs etc.  See the ROSE README file
//      for directions.

// tps: (02/22/2010): Adding DLL export requirements
#include "rosedll.h"

// predeclarations for SgAsmDOSFileHeader

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmDOSFileHeader.h" */
/* #line 28470 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#include <Rose/BinaryAnalysis/Address.h>


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmDOSFileHeader
class ROSE_DLL_API SgAsmDOSFileHeader  : public SgAsmGenericHeader
   {
     public:


/* #line 42 "/workspace/generated/src/frontend/SageIII//SgAsmDOSFileHeader.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 28579 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmDOSFileHeader -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmDOSFileHeader");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmGenericHeader);
        s & BOOST_SERIALIZATION_NVP(p_e_last_page_size);
        s & BOOST_SERIALIZATION_NVP(p_e_total_pages);
        s & BOOST_SERIALIZATION_NVP(p_e_nrelocs);
        s & BOOST_SERIALIZATION_NVP(p_e_header_paragraphs);
        s & BOOST_SERIALIZATION_NVP(p_e_minalloc);
        s & BOOST_SERIALIZATION_NVP(p_e_maxalloc);
        s & BOOST_SERIALIZATION_NVP(p_e_ss);
        s & BOOST_SERIALIZATION_NVP(p_e_sp);
        s & BOOST_SERIALIZATION_NVP(p_e_cksum);
        s & BOOST_SERIALIZATION_NVP(p_e_ip);
        s & BOOST_SERIALIZATION_NVP(p_e_cs);
        s & BOOST_SERIALIZATION_NVP(p_e_overlay);
        s & BOOST_SERIALIZATION_NVP(p_e_relocs_offset);
        s & BOOST_SERIALIZATION_NVP(p_e_res1);
        s & BOOST_SERIALIZATION_NVP(p_relocs);
        s & BOOST_SERIALIZATION_NVP(p_rm_section);
        debugSerializationEnd("SgAsmDOSFileHeader");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
#ifdef _MSC_VER
# pragma pack (1)
#endif
    /** On-disk format of DOS file header. */
    struct DOSFileHeader_disk {
        unsigned char e_magic[2];                /**< 0x00 "MZ" */
        uint16_t      e_last_page_size;          /**< 0x02 bytes used on last page of file (1 page == 512 bytes);
                                                  *        zero implies if last page is full. */ //
        uint16_t      e_total_pages;             /**< 0x04 number of pages (inc. last possibly partial page) in file. */
        uint16_t      e_nrelocs;                 /**< 0x06 number of relocation entries stored after this header. */
        uint16_t      e_header_paragraphs;       /**< 0x08 header size in paragraphs (16-byte blocks) inc. relocations. */
        uint16_t      e_minalloc;                /**< 0x0a number of extra paragraphs needed, similar to BSS in Unix. */
        uint16_t      e_maxalloc;                /**< 0x0c max paragraphs to allocate for BSS. */
        uint16_t      e_ss;                      /**< 0x0e initial value of SS register relative to program load segment. */
        uint16_t      e_sp;                      /**< 0x10 initial value for SP register. */
        uint16_t      e_cksum;                   /**< 0x12 checksum; 16-bit sum of all words in file should be zero
                                                  *        (usually not filled in). */
        uint16_t      e_ip;                      /**< 0x14 initial value for IP register. */
        uint16_t      e_cs;                      /**< 0x16 initial value for CS register relative to program load segment. */
        uint16_t      e_relocs_offset;           /**< 0x18 file address of relocation table. */
        uint16_t      e_overlay;                 /**< 0x1a overlay number (zero indicates main program). */
        uint32_t      e_res1;                    /**< 0x1c unknown purpose. */
    }                                            /* 0x20 */
#if !defined(SWIG) && !defined(_MSC_VER)
    __attribute__((packed))
#endif
    ;

    struct DOSRelocEntry_disk {
        uint16_t      offset;                       /* 0x00 */
        uint16_t      segment;                      /* 0x02 */
    }                                               /* 0x04 */
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
    /** Property: Last page size.
     *
     *  See DOS specification. 
     *  
     *  @{ */
    uint16_t const& get_e_last_page_size() const;
    void set_e_last_page_size(uint16_t const&);
    /** @} */

public:
    /** Property: Total number of pages.
     *
     *  See DOS specification. 
     *  
     *  @{ */
    uint16_t const& get_e_total_pages() const;
    void set_e_total_pages(uint16_t const&);
    /** @} */

public:
    /** Property: Number of relocations.
     *
     *  See DOS specification. 
     *  
     *  @{ */
    uint16_t const& get_e_nrelocs() const;
    void set_e_nrelocs(uint16_t const&);
    /** @} */

public:
    /** Property: Number of header paragraphs.
     *
     *  See DOS specification. 
     *  
     *  @{ */
    uint16_t const& get_e_header_paragraphs() const;
    void set_e_header_paragraphs(uint16_t const&);
    /** @} */

public:
    /** Property: Min alloc.
     *
     *  See DOS specification. 
     *  
     *  @{ */
    uint16_t const& get_e_minalloc() const;
    void set_e_minalloc(uint16_t const&);
    /** @} */

public:
    /** Property: Max alloc.
     *
     *  See DOS specification. 
     *  
     *  @{ */
    uint16_t const& get_e_maxalloc() const;
    void set_e_maxalloc(uint16_t const&);
    /** @} */

public:
    /** Property: SS.
     *
     *  See DOS specification. 
     *  
     *  @{ */
    uint16_t const& get_e_ss() const;
    void set_e_ss(uint16_t const&);
    /** @} */

public:
    /** Property: SP.
     *
     *  See DOS specification. 
     *  
     *  @{ */
    uint16_t const& get_e_sp() const;
    void set_e_sp(uint16_t const&);
    /** @} */

public:
    /** Property: Checksum.
     *
     *  See DOS specification. 
     *  
     *  @{ */
    uint16_t const& get_e_cksum() const;
    void set_e_cksum(uint16_t const&);
    /** @} */

public:
    /** Property: IP.
     *
     *  See DOS specification. 
     *  
     *  @{ */
    uint16_t const& get_e_ip() const;
    void set_e_ip(uint16_t const&);
    /** @} */

public:
    /** Property: CS.
     *
     *  See DOS specification. 
     *  
     *  @{ */
    uint16_t const& get_e_cs() const;
    void set_e_cs(uint16_t const&);
    /** @} */

public:
    /** Property: Overlay.
     *
     *  See DOS specification. 
     *  
     *  @{ */
    uint16_t const& get_e_overlay() const;
    void set_e_overlay(uint16_t const&);
    /** @} */

public:
    /** Property: Relocs offset.
     *
     *  See DOS specification. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::Address const& get_e_relocs_offset() const;
    void set_e_relocs_offset(Rose::BinaryAnalysis::Address const&);
    /** @} */

public:
    /** Property: Reserved field 1.
     *
     *  See DOS specification. 
     *  
     *  @{ */
    unsigned const& get_e_res1() const;
    void set_e_res1(unsigned const&);
    /** @} */

public:
    /** Property: Section containing relocation information. 
     * 
     * @{ */
    SgAsmGenericSection* const& get_relocs() const;
    void set_relocs(SgAsmGenericSection* const&);
    /** @} */

public:
    /** Property: Real mode section. 
     * 
     * @{ */
    SgAsmGenericSection* const& get_rm_section() const;
    void set_rm_section(SgAsmGenericSection* const&);
    /** @} */
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    explicit SgAsmDOSFileHeader(SgAsmGenericFile*);
    virtual SgAsmDOSFileHeader *parse() override {return parse(true);}
    SgAsmDOSFileHeader *parse(bool define_rm_section);
    virtual bool reallocate() override;
    virtual void unparse(std::ostream&) const override;
    virtual void dump(FILE*, const char *prefix, ssize_t idx) const override;
    virtual const char *formatName() const override;

    /** Parses the DOS real-mode text+data section and adds it to the AST.
     *
     *  If max_offset is non-zero then use that as the maximum offset of the real-mode section. If the DOS header indicates a zero
     *  sized section then return NULL. If the section exists or is zero size due to the max_offset then return the section. See
     *  also, update_from_rm_section(). */
    SgAsmGenericSection *parseRealModeSection(Rose::BinaryAnalysis::Address max_offset=0);

    /** Update DOS header with data from real-mode section.
     *
     *  The DOS real-mode data+text section is assumed to appear immediately after the DOS Extended Header, which appears
     *  immediately after the DOS File Header, which appears at the beginning of the file. These assumptions are not checked until
     *  SgAsmDOSFileHeader::unparse() is called. See also, @ref parseRealModeSection. */
    void updateFromRealModeSection();

    /** Returns true if a cursory look at the file indicates that it could be a DOS executable file. */
    static bool isDos(SgAsmGenericFile*);

private:
    void *encode(SgAsmDOSFileHeader::DOSFileHeader_disk*) const;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deprecated 2023-11
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    virtual const char* format_name() const override ROSE_DEPRECATED("use formatName");
    SgAsmGenericSection* parse_rm_section(Rose::BinaryAnalysis::Address max_offset = 0) ROSE_DEPRECATED("use parseRealModeSection");
    void update_from_rm_section() ROSE_DEPRECATED("use updateFromRealModeSection");
    static bool is_DOS(SgAsmGenericFile*) ROSE_DEPRECATED("use isDos");
public:
    /** Destructor. */
    virtual ~SgAsmDOSFileHeader();

public:
    /** Default constructor. */
    SgAsmDOSFileHeader();

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
       // static const VariantT static_variant = V_SgAsmDOSFileHeader;
          enum { static_variant = V_SgAsmDOSFileHeader };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmDOSFileHeader* isSgAsmDOSFileHeader(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmDOSFileHeader* isSgAsmDOSFileHeader( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmDOSFileHeader * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmDOSFileHeaderStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmDOSFileHeader * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmDOSFileHeader * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmDOSFileHeader::operator delete (pointer,sizeof(SgAsmDOSFileHeader));
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
 	static SgAsmDOSFileHeader* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmDOSFileHeader* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmDOSFileHeader* sgnode);

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
       // SgAsmDOSFileHeader( SgAsmDOSFileHeaderStorageClass& source );





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
          friend class SgAsmDOSFileHeaderStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmDOSFileHeader( const SgAsmDOSFileHeaderStorageClass& source );

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
          SgAsmDOSFileHeader* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmDOSFileHeader* isSgAsmDOSFileHeader ( SgNode* s );

          typedef SgAsmGenericHeader base_node_type;


// End of memberFunctionString

















    protected:
// Start of memberFunctionString
uint16_t p_e_last_page_size;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_e_total_pages;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_e_nrelocs;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_e_header_paragraphs;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_e_minalloc;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_e_maxalloc;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_e_ss;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_e_sp;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_e_cksum;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_e_ip;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_e_cs;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_e_overlay;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_relocs_offset;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_res1;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmGenericSection* p_relocs;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmGenericSection* p_rm_section;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmDOSFileHeader>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, uint16_t,&SgAsmDOSFileHeader::p_e_last_page_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, uint16_t,&SgAsmDOSFileHeader::p_e_total_pages>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, uint16_t,&SgAsmDOSFileHeader::p_e_nrelocs>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, uint16_t,&SgAsmDOSFileHeader::p_e_header_paragraphs>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, uint16_t,&SgAsmDOSFileHeader::p_e_minalloc>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, uint16_t,&SgAsmDOSFileHeader::p_e_maxalloc>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, uint16_t,&SgAsmDOSFileHeader::p_e_ss>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, uint16_t,&SgAsmDOSFileHeader::p_e_sp>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, uint16_t,&SgAsmDOSFileHeader::p_e_cksum>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, uint16_t,&SgAsmDOSFileHeader::p_e_ip>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, uint16_t,&SgAsmDOSFileHeader::p_e_cs>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, uint16_t,&SgAsmDOSFileHeader::p_e_overlay>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, Rose::BinaryAnalysis::Address,&SgAsmDOSFileHeader::p_e_relocs_offset>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, unsigned,&SgAsmDOSFileHeader::p_e_res1>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, SgAsmGenericSection*,&SgAsmDOSFileHeader::p_relocs>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmDOSFileHeader, SgAsmGenericSection*,&SgAsmDOSFileHeader::p_rm_section>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmDOSFileHeader

/* #line 855 "/workspace/generated/src/frontend/SageIII//SgAsmDOSFileHeader.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 862 "/workspace/generated/src/frontend/SageIII//SgAsmDOSFileHeader.h" */

#endif // ROSE_SgAsmDOSFileHeader_H

