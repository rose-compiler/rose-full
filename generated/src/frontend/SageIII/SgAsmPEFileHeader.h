
#ifndef ROSE_SgAsmPEFileHeader_H
#define ROSE_SgAsmPEFileHeader_H
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

// predeclarations for SgAsmPEFileHeader

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmPEFileHeader.h" */
/* #line 3722 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#include <Rose/BinaryAnalysis/Address.h>
#include <Rose/BinaryAnalysis/RelativeVirtualAddress.h>

#ifdef ROSE_SgAsmPEFileHeader_IMPL
#include <SgAsmCoffSymbolTable.h>
#include <SgAsmPERVASizePairList.h>
#include <SgAsmPESectionTable.h>
#endif


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmPEFileHeader
class ROSE_DLL_API SgAsmPEFileHeader  : public SgAsmGenericHeader
   {
     public:


/* #line 49 "/workspace/generated/src/frontend/SageIII//SgAsmPEFileHeader.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 3969 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmPEFileHeader -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmPEFileHeader");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmGenericHeader);
        s & BOOST_SERIALIZATION_NVP(p_e_cpu_type);
        s & BOOST_SERIALIZATION_NVP(p_e_nsections);
        s & BOOST_SERIALIZATION_NVP(p_e_time);
        s & BOOST_SERIALIZATION_NVP(p_e_coff_symtab);
        s & BOOST_SERIALIZATION_NVP(p_e_nt_hdr_size);
        s & BOOST_SERIALIZATION_NVP(p_e_coff_nsyms);
        s & BOOST_SERIALIZATION_NVP(p_e_flags);
        s & BOOST_SERIALIZATION_NVP(p_e_opt_magic);
        s & BOOST_SERIALIZATION_NVP(p_e_lmajor);
        s & BOOST_SERIALIZATION_NVP(p_e_lminor);
        s & BOOST_SERIALIZATION_NVP(p_e_code_size);
        s & BOOST_SERIALIZATION_NVP(p_e_data_size);
        s & BOOST_SERIALIZATION_NVP(p_e_bss_size);
        s & BOOST_SERIALIZATION_NVP(p_e_code_rva);
        s & BOOST_SERIALIZATION_NVP(p_e_data_rva);
        s & BOOST_SERIALIZATION_NVP(p_e_section_align);
        s & BOOST_SERIALIZATION_NVP(p_e_file_align);
        s & BOOST_SERIALIZATION_NVP(p_e_os_major);
        s & BOOST_SERIALIZATION_NVP(p_e_os_minor);
        s & BOOST_SERIALIZATION_NVP(p_e_user_major);
        s & BOOST_SERIALIZATION_NVP(p_e_user_minor);
        s & BOOST_SERIALIZATION_NVP(p_e_subsys_major);
        s & BOOST_SERIALIZATION_NVP(p_e_subsys_minor);
        s & BOOST_SERIALIZATION_NVP(p_e_reserved9);
        s & BOOST_SERIALIZATION_NVP(p_e_image_size);
        s & BOOST_SERIALIZATION_NVP(p_e_header_size);
        s & BOOST_SERIALIZATION_NVP(p_e_file_checksum);
        s & BOOST_SERIALIZATION_NVP(p_e_subsystem);
        s & BOOST_SERIALIZATION_NVP(p_e_dll_flags);
        s & BOOST_SERIALIZATION_NVP(p_e_stack_reserve_size);
        s & BOOST_SERIALIZATION_NVP(p_e_stack_commit_size);
        s & BOOST_SERIALIZATION_NVP(p_e_heap_reserve_size);
        s & BOOST_SERIALIZATION_NVP(p_e_heap_commit_size);
        s & BOOST_SERIALIZATION_NVP(p_e_loader_flags);
        s & BOOST_SERIALIZATION_NVP(p_e_num_rvasize_pairs);
        s & BOOST_SERIALIZATION_NVP(p_rvaSizePairs);
        s & BOOST_SERIALIZATION_NVP(p_sectionTable);
        s & BOOST_SERIALIZATION_NVP(p_coffSymbolTable);
        debugSerializationEnd("SgAsmPEFileHeader");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
#ifdef _MSC_VER
# pragma pack (1)
#endif
    /* File format of a PE File Header. All fields are little endian. */
    struct PEFileHeader_disk {
        unsigned char e_magic[4];       /* 0x00 magic number "PE\0\0" */
        uint16_t    e_cpu_type;         /* 0x04 e.g., 0x014c = Intel 386 */
        uint16_t    e_nsections;        /* 0x06 number of sections defined in the Section Table */
        uint32_t    e_time;             /* 0x08 time and date file was created or modified by the linker */
        uint32_t    e_coff_symtab;      /* 0x0c offset to COFF symbol table */
        uint32_t    e_coff_nsyms;       /* 0x10 number of symbols in COFF symbol table */
        uint16_t    e_nt_hdr_size;      /* 0x14 num remaining bytes in the header following the 'flags' field */
        uint16_t    e_flags;            /* 0x16 Bit flags: exe file, program/library image, fixed address, etc. */
    }                                       /* 0x18 */
#if !defined(SWIG) && !defined(_MSC_VER)
    __attribute__((packed))
#endif
    ;

    struct PE32OptHeader_disk {
        uint16_t    e_opt_magic;        /* 0x18 magic number */
        uint16_t    e_lmajor;           /* 0x1a linker version */
        uint16_t    e_lminor;           /* 0x1c */
        uint16_t    e_code_size;        /* 0x1e Size of .text or sum of all code sections */
        uint32_t    e_data_size;        /* 0x20 Sum size of initialized data */
        uint32_t    e_bss_size;         /* 0x24 Sum size of uninitialized data */
        uint32_t    e_entrypoint_rva;   /* 0x28 RVA="relative virtual address"; relative to 'image_base', below */
        uint32_t    e_code_rva;         /* 0x2c Addr relative to image base for code section when memory mapped */
        uint32_t    e_data_rva;         /* 0x30 Address relative to image base for data section */
        uint32_t    e_image_base;       /* 0x34 Virt base of image (first byte of file, DOS header). 64k aligned */
        uint32_t    e_section_align;    /* 0x38 Alignment of sections in memory. Power of two 512<=x<=256M */
        uint32_t    e_file_align;       /* 0x3c Alignment factor (in bytes) for image pages */
        uint16_t    e_os_major;         /* 0x40 OS version number required to run this image */
        uint16_t    e_os_minor;         /* 0x42 */
        uint16_t    e_user_major;       /* 0x44 User-specified for differentiating between image revs */
        uint16_t    e_user_minor;       /* 0x46 */
        uint16_t    e_subsys_major;     /* 0x48 Subsystem version number */
        uint16_t    e_subsys_minor;     /* 0x4a */
        uint32_t    e_reserved9;        /* 0x4c */
        uint32_t    e_image_size;       /* 0x50 Virtual size of the image inc. all headers; section_align */
        uint32_t    e_header_size;      /* 0x54 Total header size (DOS Header + PE Header + Section table */
        uint32_t    e_file_checksum;    /* 0x58 Checksum for entire file; Set to zero by the linker */
        uint16_t    e_subsystem;        /* 0x5c Native, WindowsGUI, WindowsCharacter, OS/2 Character, etc. */
        uint16_t    e_dll_flags;        /* 0x5e Bit flags for library init/terminate per process or thread */
        uint32_t    e_stack_reserve_size;/*0x60 Virtual mem reserved for stack; non-committed pages are guards */
        uint32_t    e_stack_commit_size;/* 0x64 Size of valid stack; other pages are guards; <=stack_reserve_size*/
        uint32_t    e_heap_reserve_size;/* 0x68 Size (bytes) of local heap to reserve */
        uint32_t    e_heap_commit_size; /* 0x6c Size (bytes) of valid local heap */
        uint32_t    e_loader_flags;     /* 0x70 Reserved, must be zero */
        uint32_t    e_num_rvasize_pairs;/* 0x74 Num RVASizePair entries that follow this member; part of header */
    }                                       /* 0x78 */
#if !defined(SWIG) && !defined(_MSC_VER)
    __attribute__((packed))
#endif
    ;

    struct PE64OptHeader_disk {
        uint16_t    e_opt_magic;        /* 0x18 */
        uint16_t    e_lmajor;           /* 0x1a */
        uint16_t    e_lminor;           /* 0x1c */
        uint16_t    e_code_size;        /* 0x1e */
        uint32_t    e_data_size;        /* 0x20 */
        uint32_t    e_bss_size;         /* 0x24 */
        uint32_t    e_entrypoint_rva;   /* 0x28 */
        uint32_t    e_code_rva;         /* 0x2c */
        // uint32_t  e_data_rva;             /* Not present in PE32+ */
        uint64_t    e_image_base;       /* 0x30 */
        uint32_t    e_section_align;    /* 0x38 */
        uint32_t    e_file_align;       /* 0x3c */
        uint16_t    e_os_major;         /* 0x40 */
        uint16_t    e_os_minor;         /* 0x42 */
        uint16_t    e_user_major;       /* 0x44 */
        uint16_t    e_user_minor;       /* 0x46 */
        uint16_t    e_subsys_major;     /* 0x48 */
        uint16_t    e_subsys_minor;     /* 0x4a */
        uint32_t    e_reserved9;        /* 0x4c */
        uint32_t    e_image_size;       /* 0x50 */
        uint32_t    e_header_size;      /* 0x54 */
        uint32_t    e_file_checksum;    /* 0x58 */
        uint16_t    e_subsystem;        /* 0x5c */
        uint16_t    e_dll_flags;        /* 0x5e */
        uint64_t    e_stack_reserve_size;/*0x60 */
        uint64_t    e_stack_commit_size;/* 0x68 */
        uint64_t    e_heap_reserve_size;/* 0x70 */
        uint64_t    e_heap_commit_size; /* 0x78 */
        uint32_t    e_loader_flags;     /* 0x80 */
        uint32_t    e_num_rvasize_pairs;/* 0x84 */
    }                                       /* 0x88 */
#if !defined(SWIG) && !defined(_MSC_VER)
    __attribute__((packed))
#endif
        ;
#ifdef _MSC_VER
# pragma pack ()
#endif

    /* Bit flags for the PE header 'flags' member */
    enum HeaderFlags {
        HF_PROGRAM          = 0x0000,       /* Program image (no non-reserved bits set) */
        HF_EXECUTABLE       = 0x0002,       /* Clear indicates can't load: link errors or incrementally linked */
        HF_FIXED            = 0x0200,       /* Image *must* be loaded at image_base address or error */
        HF_LIBRARY          = 0x2000,       /* Library image */
        HF_RESERVED_MASK    = 0xddfd        /* Reserved bits */
    };

    /* Values for the PE header 'subsystem' member */
    enum Subsystem {
        HF_SPEC_UNKNOWN     = 0x0000,       /* Specified as 'unknown' in the file */
        HF_NATIVE           = 0x0001,       /* Native */
        HF_WINGUI           = 0x0002,       /* Windows GUI */
        HF_WINCHAR          = 0x0003,       /* Windows character */
        HF_OS2CHAR          = 0x0005,       /* OS/2 character */
        HF_POSIX            = 0x0007        /* POSIX character */
    };

    /* Bit flags for the PE header 'dll_flags' member */
    enum DLLFlags {
        DLL_PROC_INIT       = 0x0001,       /* Per-process library initialization */
        DLL_PROC_TERM       = 0x0002,       /* Per-process library termination */
        DLL_THRD_INIT       = 0x0004,       /* Per-thread library initialization */
        DLL_THRD_TERM       = 0x0008,       /* Per-thread library termination */
        DLL_RESERVED_MASK   = 0xfff0        /* Reserved bits */
    };

    /** Reason for each rva/size pair in the PE header. */
    enum PairPurpose {              // Values are important
        PAIR_EXPORTS            = 0,
        PAIR_IMPORTS            = 1,
        PAIR_RESOURCES          = 2,
        PAIR_EXCEPTIONS         = 3,
        PAIR_CERTIFICATES       = 4,
        PAIR_BASERELOCS         = 5,
        PAIR_DEBUG              = 6,
        PAIR_ARCHITECTURE       = 7,
        PAIR_GLOBALPTR          = 8,
        PAIR_TLS                = 9,    // Thread local storage
        PAIR_LOADCONFIG         = 10,
        PAIR_BOUNDIMPORT        = 11,
        PAIR_IAT                = 12,   // Import address table
        PAIR_DELAYIMPORT        = 13,   // Delay import descriptor
        PAIR_CLRRUNTIME         = 14,   // CLR(?) runtime header
        PAIR_RESERVED15         = 15    // Reserved (always zero according to specification)
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Properties
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
public:
    /** Property: CPU type.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_cpu_type() const;
    void set_e_cpu_type(unsigned const&);
    /** @} */

public:
    /** Property: Number of sections.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_nsections() const;
    void set_e_nsections(unsigned const&);
    /** @} */

public:
    /** Property: Time.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_time() const;
    void set_e_time(unsigned const&);
    /** @} */

public:
    /** Property: COFF symbol table.
     *
     *  See PE specification. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::Address const& get_e_coff_symtab() const;
    void set_e_coff_symtab(Rose::BinaryAnalysis::Address const&);
    /** @} */

public:
    /** Property: Size of NT header.
     *
     *  See PE specification. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::Address const& get_e_nt_hdr_size() const;
    void set_e_nt_hdr_size(Rose::BinaryAnalysis::Address const&);
    /** @} */

public:
    /** Property: Number of COFF symbols.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_coff_nsyms() const;
    void set_e_coff_nsyms(unsigned const&);
    /** @} */

public:
    /** Property: Flags
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_flags() const;
    void set_e_flags(unsigned const&);
    /** @} */

public:
    /** Property: Magic.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_opt_magic() const;
    void set_e_opt_magic(unsigned const&);
    /** @} */

public:
    /** Property: lmajor.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_lmajor() const;
    void set_e_lmajor(unsigned const&);
    /** @} */

public:
    /** Property: lminor.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_lminor() const;
    void set_e_lminor(unsigned const&);
    /** @} */

public:
    /** Property: Code size.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_code_size() const;
    void set_e_code_size(unsigned const&);
    /** @} */

public:
    /** Property: Data size.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_data_size() const;
    void set_e_data_size(unsigned const&);
    /** @} */

public:
    /** Property: BSS size.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_bss_size() const;
    void set_e_bss_size(unsigned const&);
    /** @} */

public:
    /** Property: Code RVA.
     *
     *  See PE specification. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::RelativeVirtualAddress const& get_e_code_rva() const;
    Rose::BinaryAnalysis::RelativeVirtualAddress& get_e_code_rva();
    void set_e_code_rva(Rose::BinaryAnalysis::RelativeVirtualAddress const&);
    /** @} */

public:
    /** Property: Data RVA.
     *
     *  See PE specification. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::RelativeVirtualAddress const& get_e_data_rva() const;
    Rose::BinaryAnalysis::RelativeVirtualAddress& get_e_data_rva();
    void set_e_data_rva(Rose::BinaryAnalysis::RelativeVirtualAddress const&);
    /** @} */

public:
    /** Property: Section alignment.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_section_align() const;
    void set_e_section_align(unsigned const&);
    /** @} */

public:
    /** Property: File alignment.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_file_align() const;
    void set_e_file_align(unsigned const&);
    /** @} */

public:
    /** Property: OS major number.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_os_major() const;
    void set_e_os_major(unsigned const&);
    /** @} */

public:
    /** Property: OS minor number.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_os_minor() const;
    void set_e_os_minor(unsigned const&);
    /** @} */

public:
    /** Property: User major number.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_user_major() const;
    void set_e_user_major(unsigned const&);
    /** @} */

public:
    /** Property: User minor number.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_user_minor() const;
    void set_e_user_minor(unsigned const&);
    /** @} */

public:
    /** Property: Subsystem major number.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_subsys_major() const;
    void set_e_subsys_major(unsigned const&);
    /** @} */

public:
    /** Property: Subsystem minor number.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_subsys_minor() const;
    void set_e_subsys_minor(unsigned const&);
    /** @} */

public:
    /** Property: Reserved area #9.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_reserved9() const;
    void set_e_reserved9(unsigned const&);
    /** @} */

public:
    /** Property: Image size.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_image_size() const;
    void set_e_image_size(unsigned const&);
    /** @} */

public:
    /** Property: Header size.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_header_size() const;
    void set_e_header_size(unsigned const&);
    /** @} */

public:
    /** Property: File checksum.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_file_checksum() const;
    void set_e_file_checksum(unsigned const&);
    /** @} */

public:
    /** Property: Subsystem.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_subsystem() const;
    void set_e_subsystem(unsigned const&);
    /** @} */

public:
    /** Property: DLL flags.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_dll_flags() const;
    void set_e_dll_flags(unsigned const&);
    /** @} */

public:
    /** Property: Stack reserve size.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_stack_reserve_size() const;
    void set_e_stack_reserve_size(unsigned const&);
    /** @} */

public:
    /** Property: Stack commit size.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_stack_commit_size() const;
    void set_e_stack_commit_size(unsigned const&);
    /** @} */

public:
    /** Property: Heap reserve size.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_heap_reserve_size() const;
    void set_e_heap_reserve_size(unsigned const&);
    /** @} */

public:
    /** Property: Heap commit size.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_heap_commit_size() const;
    void set_e_heap_commit_size(unsigned const&);
    /** @} */

public:
    /** Property: Loader flags.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_loader_flags() const;
    void set_e_loader_flags(unsigned const&);
    /** @} */

public:
    /** Property: Number of RVA/size pairs.
     *
     *  See PE specification. 
     *  
     *  @{ */
    unsigned const& get_e_num_rvasize_pairs() const;
    void set_e_num_rvasize_pairs(unsigned const&);
    /** @} */

public:
    /** Property: RVA/size pairs.
     *
     *  See PE specification. 
     *  
     *  @{ */
    SgAsmPERVASizePairList* const& get_rvaSizePairs() const;
    void set_rvaSizePairs(SgAsmPERVASizePairList* const&);
    /** @} */

public:
    /** Property: Section table.
     *
     *  See PE specification. 
     *  
     *  @{ */
    SgAsmPESectionTable* const& get_sectionTable() const;
    void set_sectionTable(SgAsmPESectionTable* const&);
    /** @} */

public:
    /** Property: COFF symbol table.
     *
     *  See PE specification. 
     *  
     *  @{ */
    SgAsmCoffSymbolTable* const& get_coffSymbolTable() const;
    void set_coffSymbolTable(SgAsmCoffSymbolTable* const&);
    /** @} */
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    explicit SgAsmPEFileHeader(SgAsmGenericFile*);

    virtual const char* formatName() const override;

    /** Return true if the file looks like it might be a PE file according to the magic number.
     *
     *  The file must contain what appears to be a DOS File Header at address zero, and what appears to be a PE File Header
     *  at a file offset specified in part of the DOS File Header (actually, in the bytes that follow the DOS File
     *  Header). */
    static bool isPe(SgAsmGenericFile*);

    /** Convert an RVA/Size Pair index number into a section name.
     *
     *  The enum value passed as the first argument is looked up in an internal table and its full, static name from the PE
     *  documentation is returned. Additionally, if @p short_name is non-null then it points to a static abbreviated name. For
     *  example, if the first argument is @c PAIR_EXPORTS from the @ref SgAsmPEFileHeader::PairPurpose enum, then this function
     *  returns "Export Table" as the full name, and "Exports" as the abbreviated name. */
    std::string rvaSizePairName(PairPurpose, const char **short_name);

    /** Define an RVA/Size pair in the PE file header. */
    void set_rvaSizePair(PairPurpose, SgAsmPESection*);

    /** Update all the RVA/Size pair info from the section to which it points. */
    void updateRvaSizePairs();

    void addRvaSizePairs();

    virtual SgAsmPEFileHeader *parse() override;
    virtual bool reallocate() override;
    virtual void unparse(std::ostream&) const override;
    virtual void dump(FILE*, const char *prefix, ssize_t idx) const override;
    void createTableSections();

    /* Loader memory maps */
    Rose::BinaryAnalysis::MemoryMap::Ptr get_loaderMap() const;
    void set_loaderMap(const Rose::BinaryAnalysis::MemoryMap::Ptr&);

private:
    void *encode(SgAsmPEFileHeader::PEFileHeader_disk*) const;
    void *encode(SgAsmPEFileHeader::PE32OptHeader_disk*) const;
    void *encode(SgAsmPEFileHeader::PE64OptHeader_disk*) const;
    Rose::BinaryAnalysis::MemoryMap::Ptr p_loader_map;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deprecated 2023-11
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    SgAsmPERVASizePairList* get_rvasize_pairs() const ROSE_DEPRECATED("use get_rvaSizePairs");
    void set_rvasize_pairs(SgAsmPERVASizePairList*) ROSE_DEPRECATED("use set_rvaSizePairs");
    SgAsmPESectionTable* get_section_table() const ROSE_DEPRECATED("use get_sectionTable");
    void set_section_table(SgAsmPESectionTable*) ROSE_DEPRECATED("use set_sectionTable");
    SgAsmCoffSymbolTable* get_coff_symtab() const ROSE_DEPRECATED("use get_coffSymbolTable");
    void set_coff_symtab(SgAsmCoffSymbolTable*) ROSE_DEPRECATED("use set_coffSymbolTable");
    virtual const char *format_name() const override ROSE_DEPRECATED("use formatName");
    static bool is_PE (SgAsmGenericFile*) ROSE_DEPRECATED("use isPe");
    std::string rvasize_pair_name(PairPurpose, const char**) ROSE_DEPRECATED("use rvaSizePairName");
    void set_rvasize_pair(PairPurpose, SgAsmPESection*) ROSE_DEPRECATED("use set_rvaSizePair");
    void update_rvasize_pairs() ROSE_DEPRECATED("use updateRvaSizePairs");
    void add_rvasize_pairs() ROSE_DEPRECATED("use addRvaSizePairs");
    void create_table_sections() ROSE_DEPRECATED("use createTableSections");
    Rose::BinaryAnalysis::MemoryMap::Ptr get_loader_map() const ROSE_DEPRECATED("use get_loaderMap");
    void set_loader_map(const Rose::BinaryAnalysis::MemoryMap::Ptr&) ROSE_DEPRECATED("use set_loaderMap");
public:
    /** Destructor. */
    virtual ~SgAsmPEFileHeader();

public:
    /** Default constructor. */
    SgAsmPEFileHeader();

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
       // static const VariantT static_variant = V_SgAsmPEFileHeader;
          enum { static_variant = V_SgAsmPEFileHeader };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmPEFileHeader* isSgAsmPEFileHeader(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmPEFileHeader* isSgAsmPEFileHeader( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmPEFileHeader * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmPEFileHeaderStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmPEFileHeader * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmPEFileHeader * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmPEFileHeader::operator delete (pointer,sizeof(SgAsmPEFileHeader));
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
 	static SgAsmPEFileHeader* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmPEFileHeader* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmPEFileHeader* sgnode);

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
       // SgAsmPEFileHeader( SgAsmPEFileHeaderStorageClass& source );





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
          friend class SgAsmPEFileHeaderStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmPEFileHeader( const SgAsmPEFileHeaderStorageClass& source );

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
          SgAsmPEFileHeader* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmPEFileHeader* isSgAsmPEFileHeader ( SgNode* s );

          typedef SgAsmGenericHeader base_node_type;


// End of memberFunctionString







































    protected:
// Start of memberFunctionString
unsigned p_e_cpu_type;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_nsections;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_time;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_coff_symtab;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_e_nt_hdr_size;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_coff_nsyms;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_flags;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_opt_magic;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_lmajor;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_lminor;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_code_size;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_data_size;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_bss_size;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::RelativeVirtualAddress p_e_code_rva;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::RelativeVirtualAddress p_e_data_rva;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_section_align;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_file_align;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_os_major;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_os_minor;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_user_major;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_user_minor;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_subsys_major;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_subsys_minor;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_reserved9;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_image_size;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_header_size;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_file_checksum;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_subsystem;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_dll_flags;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_stack_reserve_size;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_stack_commit_size;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_heap_reserve_size;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_heap_commit_size;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_loader_flags;
          
// End of memberFunctionString
// Start of memberFunctionString
unsigned p_e_num_rvasize_pairs;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmPERVASizePairList* p_rvaSizePairs;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmPESectionTable* p_sectionTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCoffSymbolTable* p_coffSymbolTable;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmPEFileHeader>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_cpu_type>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_nsections>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_time>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmPEFileHeader::p_e_coff_symtab>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, Rose::BinaryAnalysis::Address,&SgAsmPEFileHeader::p_e_nt_hdr_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_coff_nsyms>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_flags>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_opt_magic>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_lmajor>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_lminor>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_code_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_data_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_bss_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, Rose::BinaryAnalysis::RelativeVirtualAddress,&SgAsmPEFileHeader::p_e_code_rva>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, Rose::BinaryAnalysis::RelativeVirtualAddress,&SgAsmPEFileHeader::p_e_data_rva>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_section_align>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_file_align>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_os_major>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_os_minor>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_user_major>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_user_minor>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_subsys_major>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_subsys_minor>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_reserved9>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_image_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_header_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_file_checksum>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_subsystem>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_dll_flags>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_stack_reserve_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_stack_commit_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_heap_reserve_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_heap_commit_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_loader_flags>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, unsigned,&SgAsmPEFileHeader::p_e_num_rvasize_pairs>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, SgAsmPERVASizePairList*,&SgAsmPEFileHeader::p_rvaSizePairs>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, SgAsmPESectionTable*,&SgAsmPEFileHeader::p_sectionTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmPEFileHeader, SgAsmCoffSymbolTable*,&SgAsmPEFileHeader::p_coffSymbolTable>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmPEFileHeader

/* #line 1371 "/workspace/generated/src/frontend/SageIII//SgAsmPEFileHeader.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 1378 "/workspace/generated/src/frontend/SageIII//SgAsmPEFileHeader.h" */

#endif // ROSE_SgAsmPEFileHeader_H

