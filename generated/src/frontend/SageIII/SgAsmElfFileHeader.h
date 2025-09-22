
#ifndef ROSE_SgAsmElfFileHeader_H
#define ROSE_SgAsmElfFileHeader_H
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

// predeclarations for SgAsmElfFileHeader

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmElfFileHeader.h" */
/* #line 21660 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#include <Rose/BinaryAnalysis/ByteOrder.h>


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmElfFileHeader
class ROSE_DLL_API SgAsmElfFileHeader  : public SgAsmGenericHeader
   {
     public:


/* #line 42 "/workspace/generated/src/frontend/SageIII//SgAsmElfFileHeader.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 21767 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmElfFileHeader -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmElfFileHeader");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmGenericHeader);
        s & BOOST_SERIALIZATION_NVP(p_e_ident_file_class);
        s & BOOST_SERIALIZATION_NVP(p_e_ident_data_encoding);
        s & BOOST_SERIALIZATION_NVP(p_e_ident_file_version);
        s & BOOST_SERIALIZATION_NVP(p_e_ident_padding);
        s & BOOST_SERIALIZATION_NVP(p_e_type);
        s & BOOST_SERIALIZATION_NVP(p_e_machine);
        s & BOOST_SERIALIZATION_NVP(p_e_flags);
        s & BOOST_SERIALIZATION_NVP(p_e_ehsize);
        s & BOOST_SERIALIZATION_NVP(p_phextrasz);
        s & BOOST_SERIALIZATION_NVP(p_e_phnum);
        s & BOOST_SERIALIZATION_NVP(p_shextrasz);
        s & BOOST_SERIALIZATION_NVP(p_e_shnum);
        s & BOOST_SERIALIZATION_NVP(p_e_shstrndx);
        s & BOOST_SERIALIZATION_NVP(p_sectionTable);
        s & BOOST_SERIALIZATION_NVP(p_segmentTable);
        debugSerializationEnd("SgAsmElfFileHeader");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Enum for the @ref e_type property. */
    enum ObjectType {
        ET_NONE         = 0                         /**< No file type */
        ,ET_REL          = 1                        /**< Relocatable file */
        ,ET_EXEC         = 2                        /**< Executable file */
        ,ET_DYN          = 3                        /**< Shared object file */
        ,ET_CORE         = 4                        /**< Core file */

        ,ET_LOOS         = 0xfe00                   /**< OS-specific range start */
        ,ET_HIOS         = 0xfeff                   /**< OS-specific range end */
        ,ET_LOPROC       = 0xff00                   /**< Processor-specific range start */
        ,ET_HIPROC       = 0xffff                   /**< Processor-specific range end */
    };

    // Some structures are used to represent certain things whose layout is very precise in binary files, thus we need to
    // make sure the compiler doesn't insert alignment padding between the struct members.  ROSE can be compiled on an
    // architecture that has different alignment constraints than the architecture that these structs describe. GNU
    // compilers have long used the attribute mechanism. Microsoft compilers on the other hand use pragmas. GCC versions
    // 4.0 and earlier do not recognize the Microsoft pragmas and issue compiler errors when one is encountered.
#ifdef _MSC_VER
# pragma pack (1)
#endif

    /** File format of an ELF header.
     *
     *  Byte order of members depends on e_ident value. This code comes directly from "System V Application Binary
     *  Interface, Edition 4.1" and the FreeBSD elf(5) man page, and the "Executable and Linkable Format (ELF) Portable
     *  Formats Specifications, Version 1.2" and not from any header file. */
    struct Elf32FileHeader_disk {
        unsigned char       e_ident_magic[4];       /**< 0x7f, 'E', 'L', 'F' */
        unsigned char       e_ident_file_class;     /**< 1=>32-bit; 2=>64-bit; other is error */
        unsigned char       e_ident_data_encoding;  /**< 1=>LSB; 2=>MSB; other is error */
        unsigned char       e_ident_file_version;   /**< Format version number (same as e_version); must be 1 */
        unsigned char       e_ident_padding[9];     /**< Padding to byte 16; must be zero */
        uint16_t            e_type;                 /**< Object file type: relocatable, executable, lib, core */
        uint16_t            e_machine;              /**< Required architecture for an individual file */
        uint32_t            e_version;              /**< Object file version, currently zero or one */
        uint32_t            e_entry;                /**< Entry virtual address or zero if none */
        uint32_t            e_phoff;                /**< File offset of program header table or zero if none */
        uint32_t            e_shoff;                /**< File offset of section header table or zero if none */
        uint32_t            e_flags;                /**< Processor-specific flags (EF_* constants in docs) */
        uint16_t            e_ehsize;               /**< Size of ELF header in bytes */
        uint16_t            e_phentsize;            /**< Size of each entry in the program header table */
        uint16_t            e_phnum;                /**< Number of program headers, or PN_XNUM, or zero */
        uint16_t            e_shentsize;            /**< Size of each entry in the section header table */
        uint16_t            e_shnum;                /**< Number of section headers, or zero for extended entries */
        uint16_t            e_shstrndx;             /**< Index of name section, or SHN_UNDEF, or SHN_XINDEX */
    }
#if !defined(SWIG) && !defined(_MSC_VER)
    __attribute__((packed))
#endif
    ;

    struct Elf64FileHeader_disk {
        unsigned char       e_ident_magic[4];
        unsigned char       e_ident_file_class;
        unsigned char       e_ident_data_encoding;
        unsigned char       e_ident_file_version;
        unsigned char       e_ident_padding[9];
        uint16_t            e_type;
        uint16_t            e_machine;
        uint32_t            e_version;
        uint64_t            e_entry;
        uint64_t            e_phoff;
        uint64_t            e_shoff;
        uint32_t            e_flags;
        uint16_t            e_ehsize;
        uint16_t            e_phentsize;
        uint16_t            e_phnum;
        uint16_t            e_shentsize;
        uint16_t            e_shnum;
        uint16_t            e_shstrndx;
    }
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
    /** Property: File class.
     *
     *  See ELF specification for details. 
     *  
     *  @{ */
    unsigned char const& get_e_ident_file_class() const;
    void set_e_ident_file_class(unsigned char const&);
    /** @} */

public:
    /** Property: Data encoding.
     *
     *  See ELF specification for details. 
     *  
     *  @{ */
    unsigned char const& get_e_ident_data_encoding() const;
    void set_e_ident_data_encoding(unsigned char const&);
    /** @} */

public:
    /** Property: File version.
     *
     *  See ELF specification for details. 
     *  
     *  @{ */
    unsigned char const& get_e_ident_file_version() const;
    void set_e_ident_file_version(unsigned char const&);
    /** @} */

public:
    /** Property: Padding.
     *
     *  See ELF specification for details. 
     *  
     *  @{ */
    SgUnsignedCharList const& get_e_ident_padding() const;
    void set_e_ident_padding(SgUnsignedCharList const&);
    /** @} */

public:
    /** Property: Type.
     *
     *  See ELF specification for details. 
     *  
     *  @{ */
    unsigned long const& get_e_type() const;
    void set_e_type(unsigned long const&);
    /** @} */

public:
    /** Property: Machine.
     *
     *  See ELF specification for details. 
     *  
     *  @{ */
    unsigned long const& get_e_machine() const;
    void set_e_machine(unsigned long const&);
    /** @} */

public:
    /** Property: Flags.
     *
     *  See ELF specification for details. 
     *  
     *  @{ */
    unsigned long const& get_e_flags() const;
    void set_e_flags(unsigned long const&);
    /** @} */

public:
    /** Property: ehsize.
     *
     *  See ELF specification for details. 
     *  
     *  @{ */
    unsigned long const& get_e_ehsize() const;
    void set_e_ehsize(unsigned long const&);
    /** @} */

public:
    /** Property: phextrasz.
     *
     *  See ELF specification for details. 
     *  
     *  @{ */
    unsigned long const& get_phextrasz() const;
    void set_phextrasz(unsigned long const&);
    /** @} */

public:
    /** Property: phnum.
     *
     *  See ELF specification for details. 
     *  
     *  @{ */
    unsigned long const& get_e_phnum() const;
    void set_e_phnum(unsigned long const&);
    /** @} */

public:
    /** Property: shextrasz.
     *
     *  See ELF specification for details. 
     *  
     *  @{ */
    unsigned long const& get_shextrasz() const;
    void set_shextrasz(unsigned long const&);
    /** @} */

public:
    /** Property: shnum.
     *
     *  See ELF specification for details. 
     *  
     *  @{ */
    unsigned long const& get_e_shnum() const;
    void set_e_shnum(unsigned long const&);
    /** @} */

public:
    /** Property: shstrndx.
     *
     *  See ELF specification for details. 
     *  
     *  @{ */
    unsigned long const& get_e_shstrndx() const;
    void set_e_shstrndx(unsigned long const&);
    /** @} */

public:
    /** Property: Section table.
     *
     *  Points to the AST node that represents the ELF section table that describes each section of the file. ELF sections
     *  are generally those parts of the file that are of interest to linkers, debuggers, etc. but not needed by the
     *  program loader. 
     *  
     *  @{ */
    SgAsmElfSectionTable* const& get_sectionTable() const;
    void set_sectionTable(SgAsmElfSectionTable* const&);
    /** @} */

public:
    /** Property: Segment table.
     *
     *  Points to the AST node that represents the ELF segment table that describes each segment of the file. Segments
     *  describe how parts of the file are mapped into virtual memory by the loader. 
     *  
     *  @{ */
    SgAsmElfSegmentTable* const& get_segmentTable() const;
    void set_segmentTable(SgAsmElfSegmentTable* const&);
    /** @} */
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Construct a new ELF File Header with default values.
     *
     *  The new section is placed at file offset zero and the size is initially one byte (calling @ref parse will extend it
     *  as necessary). Setting the initial size of non-parsed sections to a positive value works better when adding
     *  sections to the end-of-file since the sections will all have different starting offsets and therefore @ref
     *  SgAsmGenericFile::shiftExtend will know what order the sections should be in when they are eventually resized. */
    explicit SgAsmElfFileHeader(SgAsmGenericFile*);

    /** Maximum page size according to the ABI.
     *
     *  This is used by the loader when calculating the program base address. Since parts of the file are mapped into the
     *  process address space those parts must be aligned (both in the file and in memory) on the largest possible page
     *  boundary so that any smaller page boundary will also work correctly. */
    uint64_t maximumPageSize();

    /** Convert ELF "machine" identifier to generic instruction set architecture value. */
    static SgAsmExecutableFileFormat::InsSetArchitecture machineToIsa(unsigned machine);

    /** Convert architecture value to an ELF "machine" value. */
    unsigned isaToMachine(SgAsmExecutableFileFormat::InsSetArchitecture isa) const;

    /** Parse header from file.
     *
     *  Initialize this header with information parsed from the file and construct and parse everything that's reachable
     *  from the header. Since the size of the ELF File Header is determined by the contents of the ELF File Header as
     *  stored in the file, the size of the ELF File Header will be adjusted upward if necessary. */
    virtual SgAsmElfFileHeader *parse() override;

    virtual bool reallocate() override;

    /** Write ELF contents back to a file. */
    virtual void unparse(std::ostream&) const override;

    /** Print some debugging info */
    virtual void dump(FILE*, const char *prefix, ssize_t idx) const override;

    /** Return true if the file looks like it might be an ELF file according to the magic number. */
    static bool isElf(SgAsmGenericFile*);

    /** Get the list of sections defined in the ELF Section Table */
    SgAsmGenericSectionPtrList get_sectionTableSections();

    /** Get the list of sections defined in the ELF Segment Table */
    SgAsmGenericSectionPtrList get_segmentTableSections();

    // Overrides documented in base class
    virtual const char *formatName() const override;

private:
    void *encode(Rose::BinaryAnalysis::ByteOrder::Endianness, SgAsmElfFileHeader::Elf32FileHeader_disk*) const;
    void *encode(Rose::BinaryAnalysis::ByteOrder::Endianness, SgAsmElfFileHeader::Elf64FileHeader_disk*) const;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deprecated 2023-11
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    SgAsmElfSectionTable* get_section_table() const ROSE_DEPRECATED("use get_sectionTable");
    void set_section_table(SgAsmElfSectionTable*) ROSE_DEPRECATED("use set_sectionTable");
    SgAsmElfSegmentTable* get_segment_table() const ROSE_DEPRECATED("use get_segmentTable");
    void set_segment_table(SgAsmElfSegmentTable*) ROSE_DEPRECATED("use set_segmentTable");
    uint64_t max_page_size() ROSE_DEPRECATED("use maximumPageSize");
    static SgAsmExecutableFileFormat::InsSetArchitecture machine_to_isa(unsigned) ROSE_DEPRECATED("use machineToIsa");
    unsigned isa_to_machine(SgAsmExecutableFileFormat::InsSetArchitecture) const ROSE_DEPRECATED("use isaToMachine");
    static bool is_ELF(SgAsmGenericFile*) ROSE_DEPRECATED("use isElf");
    SgAsmGenericSectionPtrList get_sectab_sections() ROSE_DEPRECATED("use get_sectionTableSections");
    SgAsmGenericSectionPtrList get_segtab_sections() ROSE_DEPRECATED("use get_segmentTableSections");
    virtual const char *format_name() const override ROSE_DEPRECATED("use formatName");
public:
    /** Destructor. */
    virtual ~SgAsmElfFileHeader();

public:
    /** Default constructor. */
    SgAsmElfFileHeader();

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
       // static const VariantT static_variant = V_SgAsmElfFileHeader;
          enum { static_variant = V_SgAsmElfFileHeader };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmElfFileHeader* isSgAsmElfFileHeader(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmElfFileHeader* isSgAsmElfFileHeader( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmElfFileHeader * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmElfFileHeaderStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmElfFileHeader * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmElfFileHeader * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmElfFileHeader::operator delete (pointer,sizeof(SgAsmElfFileHeader));
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
 	static SgAsmElfFileHeader* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmElfFileHeader* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmElfFileHeader* sgnode);

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
       // SgAsmElfFileHeader( SgAsmElfFileHeaderStorageClass& source );





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
          friend class SgAsmElfFileHeaderStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmElfFileHeader( const SgAsmElfFileHeaderStorageClass& source );

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
          SgAsmElfFileHeader* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmElfFileHeader* isSgAsmElfFileHeader ( SgNode* s );

          typedef SgAsmGenericHeader base_node_type;


// End of memberFunctionString
















    protected:
// Start of memberFunctionString
unsigned char p_e_ident_file_class;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned char p_e_ident_data_encoding;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned char p_e_ident_file_version;
          
// End of memberFunctionString
// Start of memberFunctionString
SgUnsignedCharList p_e_ident_padding;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned long p_e_type;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned long p_e_machine;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned long p_e_flags;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned long p_e_ehsize;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned long p_phextrasz;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned long p_e_phnum;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned long p_shextrasz;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned long p_e_shnum;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned long p_e_shstrndx;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmElfSectionTable* p_sectionTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmElfSegmentTable* p_segmentTable;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmElfFileHeader>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfFileHeader, unsigned char,&SgAsmElfFileHeader::p_e_ident_file_class>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfFileHeader, unsigned char,&SgAsmElfFileHeader::p_e_ident_data_encoding>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfFileHeader, unsigned char,&SgAsmElfFileHeader::p_e_ident_file_version>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfFileHeader, SgUnsignedCharList,&SgAsmElfFileHeader::p_e_ident_padding>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfFileHeader, unsigned long,&SgAsmElfFileHeader::p_e_type>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfFileHeader, unsigned long,&SgAsmElfFileHeader::p_e_machine>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfFileHeader, unsigned long,&SgAsmElfFileHeader::p_e_flags>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfFileHeader, unsigned long,&SgAsmElfFileHeader::p_e_ehsize>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfFileHeader, unsigned long,&SgAsmElfFileHeader::p_phextrasz>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfFileHeader, unsigned long,&SgAsmElfFileHeader::p_e_phnum>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfFileHeader, unsigned long,&SgAsmElfFileHeader::p_shextrasz>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfFileHeader, unsigned long,&SgAsmElfFileHeader::p_e_shnum>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfFileHeader, unsigned long,&SgAsmElfFileHeader::p_e_shstrndx>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfFileHeader, SgAsmElfSectionTable*,&SgAsmElfFileHeader::p_sectionTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfFileHeader, SgAsmElfSegmentTable*,&SgAsmElfFileHeader::p_segmentTable>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmElfFileHeader

/* #line 917 "/workspace/generated/src/frontend/SageIII//SgAsmElfFileHeader.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 924 "/workspace/generated/src/frontend/SageIII//SgAsmElfFileHeader.h" */

#endif // ROSE_SgAsmElfFileHeader_H

