
#ifndef ROSE_SgAsmLEFileHeader_H
#define ROSE_SgAsmLEFileHeader_H
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

// predeclarations for SgAsmLEFileHeader

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmLEFileHeader.h" */
/* #line 8312 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#include <Rose/BinaryAnalysis/Address.h>
#include <Rose/BinaryAnalysis/ByteOrder.h>

#ifdef ROSE_SgAsmLEFileHeader_IMPL
#include <SgAsmDOSExtendedHeader.h>
#include <SgAsmLEEntryTable.h>
#include <SgAsmLENameTable.h>
#include <SgAsmLEPageTable.h>
#include <SgAsmLERelocTable.h>
#include <SgAsmLESectionTable.h>
#endif


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmLEFileHeader
class ROSE_DLL_API SgAsmLEFileHeader  : public SgAsmGenericHeader
   {
     public:


/* #line 52 "/workspace/generated/src/frontend/SageIII//SgAsmLEFileHeader.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 8649 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmLEFileHeader -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmLEFileHeader");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmGenericHeader);
        s & BOOST_SERIALIZATION_NVP(p_e_byte_order);
        s & BOOST_SERIALIZATION_NVP(p_e_word_order);
        s & BOOST_SERIALIZATION_NVP(p_e_format_level);
        s & BOOST_SERIALIZATION_NVP(p_e_cpu_type);
        s & BOOST_SERIALIZATION_NVP(p_e_os_type);
        s & BOOST_SERIALIZATION_NVP(p_e_module_version);
        s & BOOST_SERIALIZATION_NVP(p_e_flags);
        s & BOOST_SERIALIZATION_NVP(p_e_eip_section);
        s & BOOST_SERIALIZATION_NVP(p_e_esp_section);
        s & BOOST_SERIALIZATION_NVP(p_e_last_page_size);
        s & BOOST_SERIALIZATION_NVP(p_e_page_offset_shift);
        s & BOOST_SERIALIZATION_NVP(p_e_fixup_sect_cksum);
        s & BOOST_SERIALIZATION_NVP(p_e_loader_sect_cksum);
        s & BOOST_SERIALIZATION_NVP(p_e_secttab_nentries);
        s & BOOST_SERIALIZATION_NVP(p_e_rsrctab_nentries);
        s & BOOST_SERIALIZATION_NVP(p_e_fmtdirtab_nentries);
        s & BOOST_SERIALIZATION_NVP(p_e_import_modtab_nentries);
        s & BOOST_SERIALIZATION_NVP(p_e_preload_npages);
        s & BOOST_SERIALIZATION_NVP(p_e_nonresnametab_size);
        s & BOOST_SERIALIZATION_NVP(p_e_nonresnametab_cksum);
        s & BOOST_SERIALIZATION_NVP(p_e_auto_ds_section);
        s & BOOST_SERIALIZATION_NVP(p_e_debug_info_size);
        s & BOOST_SERIALIZATION_NVP(p_e_num_instance_preload);
        s & BOOST_SERIALIZATION_NVP(p_e_num_instance_demand);
        s & BOOST_SERIALIZATION_NVP(p_e_heap_size);
        s & BOOST_SERIALIZATION_NVP(p_e_npages);
        s & BOOST_SERIALIZATION_NVP(p_e_eip);
        s & BOOST_SERIALIZATION_NVP(p_e_esp);
        s & BOOST_SERIALIZATION_NVP(p_e_page_size);
        s & BOOST_SERIALIZATION_NVP(p_e_fixup_sect_size);
        s & BOOST_SERIALIZATION_NVP(p_e_loader_sect_size);
        s & BOOST_SERIALIZATION_NVP(p_e_secttab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_pagetab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_iterpages_offset);
        s & BOOST_SERIALIZATION_NVP(p_e_rsrctab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_resnametab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_entrytab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_fmtdirtab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_fixup_pagetab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_fixup_rectab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_import_modtab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_import_proctab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_ppcksumtab_rfo);
        s & BOOST_SERIALIZATION_NVP(p_e_data_pages_offset);
        s & BOOST_SERIALIZATION_NVP(p_e_nonresnametab_offset);
        s & BOOST_SERIALIZATION_NVP(p_e_debug_info_rfo);
        s & BOOST_SERIALIZATION_NVP(p_dos2Header);
        s & BOOST_SERIALIZATION_NVP(p_sectionTable);
        s & BOOST_SERIALIZATION_NVP(p_pageTable);
        s & BOOST_SERIALIZATION_NVP(p_residentNameTable);
        s & BOOST_SERIALIZATION_NVP(p_nonresidentNameTable);
        s & BOOST_SERIALIZATION_NVP(p_entryTable);
        s & BOOST_SERIALIZATION_NVP(p_relocationTable);
        debugSerializationEnd("SgAsmLEFileHeader");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
#ifdef _MSC_VER
# pragma pack (1)
#endif
    /* File format of an LE/LX File Header (they are identical except bytes 0x2c-0x2f) */
    struct LEFileHeader_disk {
        unsigned char e_magic[2];           /* 0x00 magic number "LX" */
        unsigned char e_byte_order;         /* 0x02 byte order (0=>little endian; otherwise big endian) */
        unsigned char e_word_order;         /* 0x03 word order (0=>little endian; otherwise big endian) */
        uint32_t    e_format_level;         /* 0x04 LX file format version number */
        uint16_t    e_cpu_type;             /* 0x08 1=>80286, 2=>80386, 3=>80486,4=80586, etc. (see ctor) */
        uint16_t    e_os_type;              /* 0x0a 0=>unknown, 1=>0S/2, 2=>Windows, 3=>DOS 4.x, 4=>Windows 386 */
        uint32_t    e_module_version;       /* 0x0c user-specified module version number */
        uint32_t    e_flags;                /* 0x10 bit flags (see LXFileHeaderFlags) */
        uint32_t    e_npages;               /* 0x14 number of physically contained pages (see e_page_size) */
        uint32_t    e_eip_section;          /* 0x18 the section number to which e_eip is relative */
        uint32_t    e_eip;                  /* 0x1c entry address relative to e_eip_section */
        uint32_t    e_esp_section;          /* 0x20 the section number to which e_esp is relative */
        uint32_t    e_esp;                  /* 0x24 starting stack address relative to e_esp_section */
        uint32_t    e_page_size;            /* 0x28 page size in bytes */
        uint32_t    e_lps_or_shift;         /* 0x2c size of last page (LE) or shift for page table's page offset field (LX) */
        uint32_t    e_fixup_sect_size;      /* 0x30 total size of fixup info in bytes (fixup page/record tables + import names) */
        uint32_t    e_fixup_sect_cksum;     /* 0x34 cryptographic checksum of all fixup info, or zero */
        uint32_t    e_loader_sect_size;     /* 0x38 size of memory resident tables (section table through per-page checksum table) */
        uint32_t    e_loader_sect_cksum;    /* 0x3c cryptographic checksum for all loader info, or zero */
        uint32_t    e_secttab_rfo;          /* 0x40 offset of section table relative to this header */
        uint32_t    e_secttab_nentries;     /* 0x44 number of entries in section table */
        uint32_t    e_pagetab_rfo;          /* 0x48 section page table offset relative to this header */
        uint32_t    e_iterpages_offset;     /* 0x4c section iterated pages offset (absolute file offset) */
        uint32_t    e_rsrctab_rfo;          /* 0x50 offset of resource table relative to this header */
        uint32_t    e_rsrctab_nentries;     /* 0x54 number of entries in the resource table */
        uint32_t    e_resnametab_rfo;       /* 0x58 offset of resident name table relative to this header */
        uint32_t    e_entrytab_rfo;         /* 0x5c offset of entry table relative to this header */
        uint32_t    e_fmtdirtab_rfo;        /* 0x60 offset of module format directives relative to this header */
        uint32_t    e_fmtdirtab_nentries;   /* 0x64 number of entries in module format directives table */
        uint32_t    e_fixup_pagetab_rfo;    /* 0x68 offset of fixup page table relative to this header */
        uint32_t    e_fixup_rectab_rfo;     /* 0x6c offset of fixup record table relative to this header */
        uint32_t    e_import_modtab_rfo;    /* 0x70 offset of import module name table relative to this header */
        uint32_t    e_import_modtab_nentries;/*0x74 number of entries in import module name table */
        uint32_t    e_import_proctab_rfo;   /* 0x78 offset of import procedure name table relative to this header */
        uint32_t    e_ppcksumtab_rfo;       /* 0x7c offset of per-page checksum table relative to this header */
        uint32_t    e_data_pages_offset;    /* 0x80 offset of data pages (absolute file offset) */
        uint32_t    e_preload_npages;       /* 0x84 number of preload pages (not respected by OS/2) */
        uint32_t    e_nonresnametab_offset; /* 0x88 offset of non-resident name table (absolute file offset) */
        uint32_t    e_nonresnametab_size;   /* 0x8c size of non-resident name table in bytes */
        uint32_t    e_nonresnametab_cksum;  /* 0x90 cryptographic checksum of the non-resident name table */
        uint32_t    e_auto_ds_section;      /* 0x94 auto data segment section number (not used by 32-bit modules) */
        uint32_t    e_debug_info_rfo;       /* 0x98 offset of debug information relative to this header */
        uint32_t    e_debug_info_size;      /* 0x9c size of debug information in bytes */
        uint32_t    e_num_instance_preload; /* 0xa0 number of instance data pages found in the preload section */
        uint32_t    e_num_instance_demand;  /* 0xa4 number of instance data pages found in the demand section */
        uint32_t    e_heap_size;            /* 0xa8 number of bytes added to auto data segment by loader (not used by 32-bit) */
    }                                       /* 0xac */
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

    enum LEFileHeaderFlags {
        HF_RESERVED         = 0xbffc5ccb,   /* Reserved bits */
        HF_PROC_LIB_INIT    = 0x00000004,   /* Per-process library initialization; not used for executables */
        HF_IFIXUPS_APPLIED  = 0x00000010,   /* Sections have preferred load addresses and internal relocs have been applied */
        HF_EFIXUPS_APPLIED  = 0x00000020,   /* External fixups for the module have been applied */
        HF_PM_WINDOW_NO     = 0x00000100,   /* Incompatible with PM windowing */
        HF_PM_WINDOW_OK     = 0x00000200,   /* Compatible with PM windowing */
        HF_PM_WINDOW_USE    = 0x00000300,   /* Uses PM windowing API */
        HF_NOT_LOADABLE     = 0x00002000,   /* Module is not loadable (has errors or incrementally linked) */
        HF_PROC_LIB_TERM    = 0x40000000,   /* Per-process library termination; not used for executables */

        HF_MODTYPE_MASK     = 0x00038000,   /* Module type mask */
        HF_MODTYPE_PROG     = 0x00000000,   /* Program module (other modules cannot link to this one) */
        HF_MODTYPE_LIB      = 0x00008000,   /* Library module */
        HF_MODTYPE_PLIB     = 0x00018000,   /* Protected memory library module */
        HF_MODTYPE_PDEV     = 0x00020000,   /* Physical device driver module */
        HF_MODTYPE_VDEV     = 0x00028000    /* Virtual device driver module */
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Properties
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
public:
    unsigned const& get_e_byte_order() const;
    void set_e_byte_order(unsigned const&);

public:
    unsigned const& get_e_word_order() const;
    void set_e_word_order(unsigned const&);

public:
    unsigned const& get_e_format_level() const;
    void set_e_format_level(unsigned const&);

public:
    unsigned const& get_e_cpu_type() const;
    void set_e_cpu_type(unsigned const&);

public:
    unsigned const& get_e_os_type() const;
    void set_e_os_type(unsigned const&);

public:
    unsigned const& get_e_module_version() const;
    void set_e_module_version(unsigned const&);

public:
    unsigned const& get_e_flags() const;
    void set_e_flags(unsigned const&);

public:
    unsigned const& get_e_eip_section() const;
    void set_e_eip_section(unsigned const&);

public:
    unsigned const& get_e_esp_section() const;
    void set_e_esp_section(unsigned const&);

public:
    unsigned const& get_e_last_page_size() const;
    void set_e_last_page_size(unsigned const&);

public:
    unsigned const& get_e_page_offset_shift() const;
    void set_e_page_offset_shift(unsigned const&);

public:
    unsigned const& get_e_fixup_sect_cksum() const;
    void set_e_fixup_sect_cksum(unsigned const&);

public:
    unsigned const& get_e_loader_sect_cksum() const;
    void set_e_loader_sect_cksum(unsigned const&);

public:
    unsigned const& get_e_secttab_nentries() const;
    void set_e_secttab_nentries(unsigned const&);

public:
    unsigned const& get_e_rsrctab_nentries() const;
    void set_e_rsrctab_nentries(unsigned const&);

public:
    unsigned const& get_e_fmtdirtab_nentries() const;
    void set_e_fmtdirtab_nentries(unsigned const&);

public:
    unsigned const& get_e_import_modtab_nentries() const;
    void set_e_import_modtab_nentries(unsigned const&);

public:
    unsigned const& get_e_preload_npages() const;
    void set_e_preload_npages(unsigned const&);

public:
    unsigned const& get_e_nonresnametab_size() const;
    void set_e_nonresnametab_size(unsigned const&);

public:
    unsigned const& get_e_nonresnametab_cksum() const;
    void set_e_nonresnametab_cksum(unsigned const&);

public:
    unsigned const& get_e_auto_ds_section() const;
    void set_e_auto_ds_section(unsigned const&);

public:
    unsigned const& get_e_debug_info_size() const;
    void set_e_debug_info_size(unsigned const&);

public:
    unsigned const& get_e_num_instance_preload() const;
    void set_e_num_instance_preload(unsigned const&);

public:
    unsigned const& get_e_num_instance_demand() const;
    void set_e_num_instance_demand(unsigned const&);

public:
    unsigned const& get_e_heap_size() const;
    void set_e_heap_size(unsigned const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_npages() const;
    void set_e_npages(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_eip() const;
    void set_e_eip(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_esp() const;
    void set_e_esp(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_page_size() const;
    void set_e_page_size(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_fixup_sect_size() const;
    void set_e_fixup_sect_size(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_loader_sect_size() const;
    void set_e_loader_sect_size(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_secttab_rfo() const;
    void set_e_secttab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_pagetab_rfo() const;
    void set_e_pagetab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_iterpages_offset() const;
    void set_e_iterpages_offset(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_rsrctab_rfo() const;
    void set_e_rsrctab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_resnametab_rfo() const;
    void set_e_resnametab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_entrytab_rfo() const;
    void set_e_entrytab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_fmtdirtab_rfo() const;
    void set_e_fmtdirtab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_fixup_pagetab_rfo() const;
    void set_e_fixup_pagetab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_fixup_rectab_rfo() const;
    void set_e_fixup_rectab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_import_modtab_rfo() const;
    void set_e_import_modtab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_import_proctab_rfo() const;
    void set_e_import_proctab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_ppcksumtab_rfo() const;
    void set_e_ppcksumtab_rfo(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_data_pages_offset() const;
    void set_e_data_pages_offset(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_nonresnametab_offset() const;
    void set_e_nonresnametab_offset(Rose::BinaryAnalysis::Address const&);

public:
    Rose::BinaryAnalysis::Address const& get_e_debug_info_rfo() const;
    void set_e_debug_info_rfo(Rose::BinaryAnalysis::Address const&);

public:
    SgAsmDOSExtendedHeader* const& get_dos2Header() const;
    void set_dos2Header(SgAsmDOSExtendedHeader* const&);

public:
    SgAsmLESectionTable* const& get_sectionTable() const;
    void set_sectionTable(SgAsmLESectionTable* const&);

public:
    SgAsmLEPageTable* const& get_pageTable() const;
    void set_pageTable(SgAsmLEPageTable* const&);

public:
    SgAsmLENameTable* const& get_residentNameTable() const;
    void set_residentNameTable(SgAsmLENameTable* const&);

public:
    SgAsmLENameTable* const& get_nonresidentNameTable() const;
    void set_nonresidentNameTable(SgAsmLENameTable* const&);

public:
    SgAsmLEEntryTable* const& get_entryTable() const;
    void set_entryTable(SgAsmLEEntryTable* const&);

public:
    SgAsmLERelocTable* const& get_relocationTable() const;
    void set_relocationTable(SgAsmLERelocTable* const&);
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    SgAsmLEFileHeader(SgAsmGenericFile *f, Rose::BinaryAnalysis::Address offset);
    virtual void unparse(std::ostream&) const override;
    virtual void dump(FILE*, const char *prefix, ssize_t idx) const override;

    // Overloaded base class virtual function
    const char *formatName() const override;

    static bool isLe (SgAsmGenericFile*);
    static SgAsmLEFileHeader *parse(SgAsmDOSFileHeader*);

private:
    void *encode(Rose::BinaryAnalysis::ByteOrder::Endianness sex, SgAsmLEFileHeader::LEFileHeader_disk*) const;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deprecated 2023-11
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    SgAsmDOSExtendedHeader* get_dos2_header() const ROSE_DEPRECATED("use get_dos2Header");
    void set_dos2_header(SgAsmDOSExtendedHeader*) ROSE_DEPRECATED("use set_dos2Header");
    SgAsmLESectionTable* get_section_table() const ROSE_DEPRECATED("use get_sectionTable");
    void set_section_table(SgAsmLESectionTable*) ROSE_DEPRECATED("use set_sectionTable");
    SgAsmLEPageTable* get_page_table() const ROSE_DEPRECATED("use get_pageTable");
    void set_page_table(SgAsmLEPageTable*) ROSE_DEPRECATED("use set_pageTable");
    SgAsmLENameTable* get_resname_table() const ROSE_DEPRECATED("use get_residentNameTable");
    void set_resname_table(SgAsmLENameTable*) ROSE_DEPRECATED("use set_residentNameTable");
    SgAsmLENameTable* get_nonresname_table() const ROSE_DEPRECATED("use get_nonresidentNameTable");
    void set_nonresname_table(SgAsmLENameTable*) ROSE_DEPRECATED("use set_nonresidentNameTable");
    SgAsmLEEntryTable* get_entry_table() const ROSE_DEPRECATED("use get_entryTable");
    void set_entry_table(SgAsmLEEntryTable*) ROSE_DEPRECATED("use set_entryTable");
    SgAsmLERelocTable* get_reloc_table() const ROSE_DEPRECATED("use get_relocationTable");
    void set_reloc_table(SgAsmLERelocTable*) ROSE_DEPRECATED("use set_relocationTable");
    const char *format_name() const override ROSE_DEPRECATED("use formatName");
    static bool is_LE (SgAsmGenericFile*) ROSE_DEPRECATED("use isLe");
public:
    /** Destructor. */
    virtual ~SgAsmLEFileHeader();

public:
    /** Default constructor. */
    SgAsmLEFileHeader();

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
       // static const VariantT static_variant = V_SgAsmLEFileHeader;
          enum { static_variant = V_SgAsmLEFileHeader };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmLEFileHeader* isSgAsmLEFileHeader(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmLEFileHeader* isSgAsmLEFileHeader( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmLEFileHeader * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmLEFileHeaderStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmLEFileHeader * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmLEFileHeader * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmLEFileHeader::operator delete (pointer,sizeof(SgAsmLEFileHeader));
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
 	static SgAsmLEFileHeader* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmLEFileHeader* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmLEFileHeader* sgnode);

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
       // SgAsmLEFileHeader( SgAsmLEFileHeaderStorageClass& source );





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
          friend class SgAsmLEFileHeaderStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmLEFileHeader( const SgAsmLEFileHeaderStorageClass& source );

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
          SgAsmLEFileHeader* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmLEFileHeader* isSgAsmLEFileHeader ( SgNode* s );

          typedef SgAsmGenericHeader base_node_type;


// End of memberFunctionString






















































    protected:
// Start of memberFunctionString
unsigned p_e_byte_order;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_word_order;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_format_level;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_cpu_type;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_os_type;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_module_version;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_flags;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_eip_section;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_esp_section;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_last_page_size;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_page_offset_shift;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_fixup_sect_cksum;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_loader_sect_cksum;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_secttab_nentries;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_rsrctab_nentries;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_fmtdirtab_nentries;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_import_modtab_nentries;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_preload_npages;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_nonresnametab_size;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_nonresnametab_cksum;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_auto_ds_section;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_debug_info_size;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_num_instance_preload;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_num_instance_demand;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_heap_size;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_npages;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_eip;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_esp;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_page_size;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_fixup_sect_size;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_loader_sect_size;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_secttab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_pagetab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_iterpages_offset;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_rsrctab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_resnametab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_entrytab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_fmtdirtab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_fixup_pagetab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_fixup_rectab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_import_modtab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_import_proctab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_ppcksumtab_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_data_pages_offset;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_nonresnametab_offset;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_debug_info_rfo;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmDOSExtendedHeader* p_dos2Header;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmLESectionTable* p_sectionTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmLEPageTable* p_pageTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmLENameTable* p_residentNameTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmLENameTable* p_nonresidentNameTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmLEEntryTable* p_entryTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmLERelocTable* p_relocationTable;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmLEFileHeader>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_byte_order>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_word_order>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_format_level>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_cpu_type>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_os_type>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_module_version>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_flags>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_eip_section>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_esp_section>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_last_page_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_page_offset_shift>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_fixup_sect_cksum>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_loader_sect_cksum>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_secttab_nentries>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_rsrctab_nentries>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_fmtdirtab_nentries>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_import_modtab_nentries>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_preload_npages>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_nonresnametab_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_nonresnametab_cksum>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_auto_ds_section>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_debug_info_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_num_instance_preload>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_num_instance_demand>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, unsigned,&SgAsmLEFileHeader::p_e_heap_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_npages>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_eip>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_esp>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_page_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_fixup_sect_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_loader_sect_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_secttab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_pagetab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_iterpages_offset>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_rsrctab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_resnametab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_entrytab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_fmtdirtab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_fixup_pagetab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_fixup_rectab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_import_modtab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_import_proctab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_ppcksumtab_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_data_pages_offset>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_nonresnametab_offset>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmLEFileHeader::p_e_debug_info_rfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, SgAsmDOSExtendedHeader*,&SgAsmLEFileHeader::p_dos2Header>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, SgAsmLESectionTable*,&SgAsmLEFileHeader::p_sectionTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, SgAsmLEPageTable*,&SgAsmLEFileHeader::p_pageTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, SgAsmLENameTable*,&SgAsmLEFileHeader::p_residentNameTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, SgAsmLENameTable*,&SgAsmLEFileHeader::p_nonresidentNameTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, SgAsmLEEntryTable*,&SgAsmLEFileHeader::p_entryTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmLEFileHeader, SgAsmLERelocTable*,&SgAsmLEFileHeader::p_relocationTable>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmLEFileHeader

/* #line 1218 "/workspace/generated/src/frontend/SageIII//SgAsmLEFileHeader.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 1225 "/workspace/generated/src/frontend/SageIII//SgAsmLEFileHeader.h" */

#endif // ROSE_SgAsmLEFileHeader_H

