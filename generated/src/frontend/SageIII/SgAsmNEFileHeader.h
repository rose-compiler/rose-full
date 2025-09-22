
#ifndef ROSE_SgAsmNEFileHeader_H
#define ROSE_SgAsmNEFileHeader_H
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

// predeclarations for SgAsmNEFileHeader

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmNEFileHeader.h" */
/* #line 6554 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#include <Rose/BinaryAnalysis/Address.h>

#ifdef ROSE_SgAsmNEFileHeader_IMPL
#include <SgAsmDOSExtendedHeader.h>
#include <SgAsmNEEntryTable.h>
#include <SgAsmNEModuleTable.h>
#include <SgAsmNENameTable.h>
#include <SgAsmNESectionTable.h>
#endif


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmNEFileHeader
class ROSE_DLL_API SgAsmNEFileHeader  : public SgAsmGenericHeader
   {
     public:


/* #line 50 "/workspace/generated/src/frontend/SageIII//SgAsmNEFileHeader.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 6781 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmNEFileHeader -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmNEFileHeader");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmGenericHeader);
        s & BOOST_SERIALIZATION_NVP(p_e_linker_major);
        s & BOOST_SERIALIZATION_NVP(p_e_linker_minor);
        s & BOOST_SERIALIZATION_NVP(p_e_checksum);
        s & BOOST_SERIALIZATION_NVP(p_e_flags1);
        s & BOOST_SERIALIZATION_NVP(p_e_autodata_sn);
        s & BOOST_SERIALIZATION_NVP(p_e_bss_size);
        s & BOOST_SERIALIZATION_NVP(p_e_stack_size);
        s & BOOST_SERIALIZATION_NVP(p_e_csip);
        s & BOOST_SERIALIZATION_NVP(p_e_sssp);
        s & BOOST_SERIALIZATION_NVP(p_e_nsections);
        s & BOOST_SERIALIZATION_NVP(p_e_nmodrefs);
        s & BOOST_SERIALIZATION_NVP(p_e_nnonresnames);
        s & BOOST_SERIALIZATION_NVP(p_e_nmovable_entries);
        s & BOOST_SERIALIZATION_NVP(p_e_sector_align);
        s & BOOST_SERIALIZATION_NVP(p_e_nresources);
        s & BOOST_SERIALIZATION_NVP(p_e_exetype);
        s & BOOST_SERIALIZATION_NVP(p_e_flags2);
        s & BOOST_SERIALIZATION_NVP(p_e_res1);
        s & BOOST_SERIALIZATION_NVP(p_e_winvers);
        s & BOOST_SERIALIZATION_NVP(p_e_entrytab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_entrytab_size);
        s & BOOST_SERIALIZATION_NVP(p_e_sectab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_rsrctab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_resnametab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_modreftab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_importnametab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_nonresnametab_offset);
        s & BOOST_SERIALIZATION_NVP(p_e_fastload_sector);
        s & BOOST_SERIALIZATION_NVP(p_e_fastload_nsectors);
        s & BOOST_SERIALIZATION_NVP(p_dos2Header);
        s & BOOST_SERIALIZATION_NVP(p_sectionTable);
        s & BOOST_SERIALIZATION_NVP(p_residentNameTable);
        s & BOOST_SERIALIZATION_NVP(p_nonresidentNameTable);
        s & BOOST_SERIALIZATION_NVP(p_moduleTable);
        s & BOOST_SERIALIZATION_NVP(p_entryTable);
        debugSerializationEnd("SgAsmNEFileHeader");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
#ifdef _MSC_VER
# pragma pack (1)
#endif
    /* File format of an NE File Header. All fields are little endian.
     *
     * NOTES
     *
     * e_sssp: The value specified in SS is an index (1-origin) into the segment table. If SS addresses the automatic data segment
     *         and SP is zero then SP is set to the address obtained by adding the size of the automatic data segment to the size
     *         of the stack. */
    struct NEFileHeader_disk {
         unsigned char e_magic[2];           /* 0x00 magic number "NE" */
         unsigned char e_linker_major;       /* 0x02 linker major version number */
         unsigned char e_linker_minor;       /* 0x03 linker minor version number */
         uint16_t    e_entrytab_rfo;         /* 0x04 entry table offset relative to start of header */
         uint16_t    e_entrytab_size;        /* 0x06 size of entry table in bytes */
         uint32_t    e_checksum;             /* 0x08 32-bit CRC of entire file (this word is taken a zero during the calculation) */
         uint16_t    e_flags1;               /* 0x0c file-level bit flags (see HeaderFlags1) */
         uint16_t    e_autodata_sn;          /* 0x0e auto data section number if (flags & 0x3)==0; else zero */
         uint16_t    e_bss_size;             /* 0x10 num bytes added to data segment for BSS */
         uint16_t    e_stack_size;           /* 0x12 num bytes added to data segment for stack (zero of SS!=DS registers) */
         uint32_t    e_csip;                 /* 0x14 section number:offset of CS:IP */
         uint32_t    e_sssp;                 /* 0x18 section number:offset of SS:SP (see note 1 above) */
         uint16_t    e_nsections;            /* 0x1c number of entries in the section table */
         uint16_t    e_nmodrefs;             /* 0x1e number of entries in the module reference table */
         uint16_t    e_nnonresnames;         /* 0x20 number of entries in the non-resident name table */
         uint16_t    e_sectab_rfo;           /* 0x22 offset of section table relative to start of header */
         uint16_t    e_rsrctab_rfo;          /* 0x24 offset of resource table relative to start of header */
         uint16_t    e_resnametab_rfo;       /* 0x26 offset of resident name table relative to start of header */
         uint16_t    e_modreftab_rfo;        /* 0x28 offset of module reference table relative to start of header */
         uint16_t    e_importnametab_rfo;    /* 0x2a offset of imported names table relative to start of header */
         uint32_t    e_nonresnametab_offset; /* 0x2c file offset of non-resident name table */
         uint16_t    e_nmovable_entries;     /* 0x30 number of movable entries in Entry Table */
         uint16_t    e_sector_align;         /* 0x32 sector alignment shift count (log2 of segment sector size) */
         uint16_t    e_nresources;           /* 0x34 number of resource entries */
         unsigned char e_exetype;            /* 0x36 executable type (2==windows) */
         unsigned char e_flags2;             /* 0x37 additional flags (see HeaderFlags2) */
         uint16_t    e_fastload_sector;      /* 0x38 sector offset to fast-load area (only for Windows) */
         uint16_t    e_fastload_nsectors;    /* 0x3a size of fast-load area in sectors (only for Windows) */
         uint16_t    e_res1;                 /* 0x3c reserved */
         uint16_t    e_winvers;              /* 0x3e expected version number for Windows (only for Windows) */
       }                                     /* 0x40 */
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

    /* Bit flags for the NE header 'e_flags' member.
     *
     * If HF_LIBRARY (bit 15) is set then the CS:IP registers point to an initialization procedure called with the value in the AX
     * register equal to the module handle. The initialization procedure must execute a far return to the caller. The resulting
     * value in AX is a status indicator (non-zero for success, zero for failure). */
    enum HeaderFlags1 {
         HF1_RESERVED         = 0x57f4,      /* Reserved bits */
         HF1_NO_DATA          = 0x0000,      /* (flags&0x03==0) => an exe not containing a data segment */
         HF1_SINGLE_DATA      = 0x0001,      /* Executable contains one data segment; set if file is a DLL */
         HF1_MULTIPLE_DATA    = 0x0002,      /* Exe with multiple data segments; set if a windows application */
         HF1_LOADER_SEGMENT   = 0x0800,      /* First segment contains code that loads the application */
         HF1_FATAL_ERRORS     = 0x2000,      /* Errors detected at link time; module will not load */
         HF1_LIBRARY          = 0x8000       /* Module is a library */
       };

    /* Bit flags for the NE header 'e_flags2' member. */
    enum HeaderFlags2 {
         HF2_RESERVED         = 0xf1,        /* Reserved bits */
         HF2_PROTECTED_MODE   = 0x02,        /* Windows 2.x application that runs in 3.x protected mode */
         HF2_PFONTS           = 0x04,        /* Windows 2.x application that supports proportional fonts */
         HF2_FASTLOAD         = 0x08         /* Executable contains a fast-load area */
       };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Properties
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
public:
    unsigned const& get_e_linker_major() const;
    void set_e_linker_major(unsigned const&);

public:
    unsigned const& get_e_linker_minor() const;
    void set_e_linker_minor(unsigned const&);

public:
    unsigned const& get_e_checksum() const;
    void set_e_checksum(unsigned const&);

public:
    unsigned const& get_e_flags1() const;
    void set_e_flags1(unsigned const&);

public:
    unsigned const& get_e_autodata_sn() const;
    void set_e_autodata_sn(unsigned const&);

public:
    unsigned const& get_e_bss_size() const;
    void set_e_bss_size(unsigned const&);

public:
    unsigned const& get_e_stack_size() const;
    void set_e_stack_size(unsigned const&);

public:
    unsigned const& get_e_csip() const;
    void set_e_csip(unsigned const&);

public:
    unsigned const& get_e_sssp() const;
    void set_e_sssp(unsigned const&);

public:
    unsigned const& get_e_nsections() const;
    void set_e_nsections(unsigned const&);

public:
    unsigned const& get_e_nmodrefs() const;
    void set_e_nmodrefs(unsigned const&);

public:
    unsigned const& get_e_nnonresnames() const;
    void set_e_nnonresnames(unsigned const&);

public:
    unsigned const& get_e_nmovable_entries() const;
    void set_e_nmovable_entries(unsigned const&);

public:
    unsigned const& get_e_sector_align() const;
    void set_e_sector_align(unsigned const&);

public:
    unsigned const& get_e_nresources() const;
    void set_e_nresources(unsigned const&);

public:
    unsigned const& get_e_exetype() const;
    void set_e_exetype(unsigned const&);

public:
    unsigned const& get_e_flags2() const;
    void set_e_flags2(unsigned const&);

public:
    unsigned const& get_e_res1() const;
    void set_e_res1(unsigned const&);

public:
    unsigned const& get_e_winvers() const;
    void set_e_winvers(unsigned const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_entrytab_rfo() const;
    void set_e_entrytab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_entrytab_size() const;
    void set_e_entrytab_size(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_sectab_rfo() const;
    void set_e_sectab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_rsrctab_rfo() const;
    void set_e_rsrctab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_resnametab_rfo() const;
    void set_e_resnametab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_modreftab_rfo() const;
    void set_e_modreftab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_importnametab_rfo() const;
    void set_e_importnametab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_nonresnametab_offset() const;
    void set_e_nonresnametab_offset(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_fastload_sector() const;
    void set_e_fastload_sector(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_fastload_nsectors() const;
    void set_e_fastload_nsectors(Rose::BinaryAnalysis::Address const&);

public:
    SgAsmDOSExtendedHeader* const& get_dos2Header() const;
    void set_dos2Header(SgAsmDOSExtendedHeader* const&);

public:
    SgAsmNESectionTable* const& get_sectionTable() const;
    void set_sectionTable(SgAsmNESectionTable* const&);

public:
    SgAsmNENameTable* const& get_residentNameTable() const;
    void set_residentNameTable(SgAsmNENameTable* const&);

public:
    SgAsmNENameTable* const& get_nonresidentNameTable() const;
    void set_nonresidentNameTable(SgAsmNENameTable* const&);

public:
    SgAsmNEModuleTable* const& get_moduleTable() const;
    void set_moduleTable(SgAsmNEModuleTable* const&);

public:
    SgAsmNEEntryTable* const& get_entryTable() const;
    void set_entryTable(SgAsmNEEntryTable* const&);
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    SgAsmNEFileHeader(SgAsmGenericFile *f, Rose::BinaryAnalysis::Address offset);

    static bool isNe (SgAsmGenericFile*);
    static SgAsmNEFileHeader *parse(SgAsmDOSFileHeader*);
    virtual void unparse(std::ostream&) const override;
    virtual const char *formatName() const override;
    virtual void dump(FILE*, const char *prefix, ssize_t idx) const override;

private:
    void *encode(SgAsmNEFileHeader::NEFileHeader_disk*) const;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deprecated 2023-11
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    SgAsmDOSExtendedHeader* get_dos2_header() const ROSE_DEPRECATED("use get_dos2Header");
    void set_dos2_header(SgAsmDOSExtendedHeader*) ROSE_DEPRECATED("use set_dos2Header");
    SgAsmNESectionTable* get_section_table() const ROSE_DEPRECATED("use get_sectionTable");
    void set_section_table(SgAsmNESectionTable*) ROSE_DEPRECATED("use set_sectionTable");
    SgAsmNENameTable* get_resname_table() const ROSE_DEPRECATED("use get_residentNameTable");
    void set_resname_table(SgAsmNENameTable*) ROSE_DEPRECATED("use set_residentNameTable");
    SgAsmNENameTable* get_nonresname_table() const ROSE_DEPRECATED("use get_nonresidentNameTable");
    void set_nonresname_table(SgAsmNENameTable*) ROSE_DEPRECATED("use set_nonresidentNameTable");
    SgAsmNEModuleTable* get_module_table() const ROSE_DEPRECATED("use get_moduleTable");
    void set_module_table(SgAsmNEModuleTable*) ROSE_DEPRECATED("use set_moduleTable");
    SgAsmNEEntryTable* get_entry_table() const ROSE_DEPRECATED("use get_entryTable");
    void set_entry_table(SgAsmNEEntryTable*) ROSE_DEPRECATED("use set_entryTable");
    static bool is_NE (SgAsmGenericFile*) ROSE_DEPRECATED("use isNe");
    virtual const char *format_name() const override ROSE_DEPRECATED("use formatName");
public:
    /** Destructor. */
    virtual ~SgAsmNEFileHeader();

public:
    /** Default constructor. */
    SgAsmNEFileHeader();

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
       // static const VariantT static_variant = V_SgAsmNEFileHeader;
          enum { static_variant = V_SgAsmNEFileHeader };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmNEFileHeader* isSgAsmNEFileHeader(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmNEFileHeader* isSgAsmNEFileHeader( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmNEFileHeader * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmNEFileHeaderStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmNEFileHeader * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmNEFileHeader * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmNEFileHeader::operator delete (pointer,sizeof(SgAsmNEFileHeader));
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
 	static SgAsmNEFileHeader* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmNEFileHeader* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmNEFileHeader* sgnode);

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
       // SgAsmNEFileHeader( SgAsmNEFileHeaderStorageClass& source );





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
          friend class SgAsmNEFileHeaderStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmNEFileHeader( const SgAsmNEFileHeaderStorageClass& source );

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
          SgAsmNEFileHeader* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmNEFileHeader* isSgAsmNEFileHeader ( SgNode* s );

          typedef SgAsmGenericHeader base_node_type;


// End of memberFunctionString




































    protected:
// Start of memberFunctionString
unsigned p_e_linker_major;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_linker_minor;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_checksum;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_flags1;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_autodata_sn;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_bss_size;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_stack_size;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_csip;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_sssp;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_nsections;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_nmodrefs;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_nnonresnames;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_nmovable_entries;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_sector_align;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_nresources;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_exetype;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_flags2;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_res1;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_winvers;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_entrytab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_entrytab_size;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_sectab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_rsrctab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_resnametab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_modreftab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_importnametab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_nonresnametab_offset;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_fastload_sector;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_fastload_nsectors;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmDOSExtendedHeader* p_dos2Header;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmNESectionTable* p_sectionTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmNENameTable* p_residentNameTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmNENameTable* p_nonresidentNameTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmNEModuleTable* p_moduleTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmNEEntryTable* p_entryTable;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmNEFileHeader>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_linker_major>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_linker_minor>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_checksum>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_flags1>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_autodata_sn>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_bss_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_stack_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_csip>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_sssp>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_nsections>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_nmodrefs>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_nnonresnames>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_nmovable_entries>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_sector_align>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_nresources>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_exetype>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_flags2>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_res1>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, unsigned,&SgAsmNEFileHeader::p_e_winvers>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmNEFileHeader::p_e_entrytab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmNEFileHeader::p_e_entrytab_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmNEFileHeader::p_e_sectab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmNEFileHeader::p_e_rsrctab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmNEFileHeader::p_e_resnametab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmNEFileHeader::p_e_modreftab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmNEFileHeader::p_e_importnametab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmNEFileHeader::p_e_nonresnametab_offset>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmNEFileHeader::p_e_fastload_sector>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmNEFileHeader::p_e_fastload_nsectors>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, SgAsmDOSExtendedHeader*,&SgAsmNEFileHeader::p_dos2Header>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, SgAsmNESectionTable*,&SgAsmNEFileHeader::p_sectionTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, SgAsmNENameTable*,&SgAsmNEFileHeader::p_residentNameTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, SgAsmNENameTable*,&SgAsmNEFileHeader::p_nonresidentNameTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, SgAsmNEModuleTable*,&SgAsmNEFileHeader::p_moduleTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmNEFileHeader, SgAsmNEEntryTable*,&SgAsmNEFileHeader::p_entryTable>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmNEFileHeader

/* #line 1008 "/workspace/generated/src/frontend/SageIII//SgAsmNEFileHeader.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 1015 "/workspace/generated/src/frontend/SageIII//SgAsmNEFileHeader.h" */

#endif // ROSE_SgAsmNEFileHeader_H

