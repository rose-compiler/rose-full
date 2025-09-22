
#ifndef ROSE_SgAsmExecutableFileFormat_H
#define ROSE_SgAsmExecutableFileFormat_H
#include <RoseFirst.h>
#include <Cxx_GrammarDeclarations.h>
#include <SgAsmNode.h>



/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

// WARNING -- GENERATED CODE -- DO NOT MODIFY THIS CODE -- WARNING!
//      This code is automatically generated for each 
//      terminal and non-terminal within the defined 
//      grammar.  There is a simple way to change the 
//      code to fix bugs etc.  See the ROSE README file
//      for directions.

// tps: (02/22/2010): Adding DLL export requirements
#include "rosedll.h"

// predeclarations for SgAsmExecutableFileFormat

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmExecutableFileFormat.h" */
/* #line 42777 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#include <Rose/BinaryAnalysis/Address.h>
#include <Rose/Exception.h>


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmExecutableFileFormat
class ROSE_DLL_API SgAsmExecutableFileFormat  : public SgAsmNode
   {
     public:


/* #line 43 "/workspace/generated/src/frontend/SageIII//SgAsmExecutableFileFormat.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 42788 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmExecutableFileFormat -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmExecutableFileFormat");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmNode);
        debugSerializationEnd("SgAsmExecutableFileFormat");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Exception for reading past the end of something.
     *
     *  This object is thrown when an attempt is made to read past the end of a file, section, header, segment, etc. */
    class ShortRead: public Rose::Exception {
    public:
        const SgAsmGenericSection *section;         /**< Section from which read occurred; null implies file-level write. */
        Rose::BinaryAnalysis::Address offset;       /**< Byte offset into section (or file). */
        Rose::BinaryAnalysis::Address size;         /**< Number of bytes of attempted read. */

        ShortRead(const class SgAsmGenericSection *section, size_t offset, size_t size)
            : Rose::Exception("short read"), section(section), offset(offset), size(size) {}
        ShortRead(const class SgAsmGenericSection *section, size_t offset, size_t size, const std::string &mesg)
            : Rose::Exception(mesg), section(section), offset(offset), size(size) {}
        ShortRead(const class SgAsmGenericSection *section, size_t offset, size_t size, const char *mesg)
            : Rose::Exception(mesg), section(section), offset(offset), size(size) {}
        ~ShortRead() throw () {}
    };

    /** Exception for writing past the end of something.
     *
     *  This object is thrown when an attempt is made to write past the end of a file, section, header, segment, etc. */
    class ShortWrite: public Rose::Exception {
    public:
        const SgAsmGenericSection *section;         /**< Section to which write occurred; null implies file-level write. */
        Rose::BinaryAnalysis::Address offset;       /**< Byte offset into section (or file). */
        Rose::BinaryAnalysis::Address size;         /**< Number of bytes of attempted write. */

        ShortWrite(const class SgAsmGenericSection *section, size_t offset, size_t size)
            : Rose::Exception(""), section(section), offset(offset), size(size) {}
        ShortWrite(const class SgAsmGenericSection *section, size_t offset, size_t size, const std::string &mesg)
            : Rose::Exception(mesg), section(section), offset(offset), size(size) {}
        ShortWrite(const class SgAsmGenericSection *section, size_t offset, size_t size, const char *mesg)
            : Rose::Exception(mesg), section(section), offset(offset), size(size) {}
    };

    /** Exception for container syntax errors.
     *
     *  This object is thrown when the file contains an error that prevents ROSE from parsing it. */
    class FormatError: public Rose::Exception {
    public:
        FormatError(const std::string &mesg)
            : Rose::Exception(mesg) {}
        FormatError(const char *mesg)
            : Rose::Exception(mesg) {}
        ~FormatError() throw () {}
    };

    /** Information about the file in the filesystem. */
    typedef struct stat fileDetails;

    /** Architecture family. */
    enum ExecFamily {
        FAMILY_UNSPECIFIED,                         /**< Unspecified family. */
        FAMILY_DOS,                                 /**< Microsoft DOS format. */
        FAMILY_ELF,                                 /**< Unix Executable and Linking Format. */
        FAMILY_JVM,                                 /**< Java Virtual Machine (JVM) format. */
        FAMILY_LE,                                  /**< Microsft Linear Executable format. */
        FAMILY_LX,                                  /**< OS/2 LX (Windows 9x VxD device drivers, extension of LE). */
        FAMILY_NE,                                  /**< Microsoft New Executable Format. */
        FAMILY_PE                                   /**< Microsoft Portable Executable Format. */
    };

    /** Application binary interface. */
    enum ExecABI {
        ABI_UNSPECIFIED,                            /**< Not specified in file and could not be inferred */
        ABI_OTHER,                                  /**< Anything other than values below */
        ABI_86OPEN,                                 /**< 86Open Common IA32 */
        ABI_AIX,                                    /**< AIX */
        ABI_ARM,                                    /**< ARM architecture */
        ABI_FREEBSD,                                /**< FreeBSD */
        ABI_HPUX,                                   /**< HP/UX */
        ABI_IRIX,                                   /**< IRIX */
        ABI_HURD,                                   /**< GNU/Hurd */
        ABI_JVM,                                    /**< Java Virtual Machine (JVM). */
        ABI_LINUX,                                  /**< GNU/Linux */
        ABI_MODESTO,                                /**< Novell Modesto */
        ABI_MONTEREY,                               /**< Monterey project */
        ABI_MSDOS,                                  /**< Microsoft DOS */
        ABI_NT,                                     /**< Windows NT */
        ABI_NETBSD,                                 /**< NetBSD */
        ABI_OS2,                                    /**< OS/2 */
        ABI_SOLARIS,                                /**< Sun Solaris */
        ABI_SYSV,                                   /**< SysV R4 */
        ABI_TRU64,                                  /**< Compaq TRU64 UNIX */
        ABI_WIN386                                  /**< Microsoft Windows */
    };

    /** Instruction sets organized by families */
    enum InsSetArchitecture {
        ISA_UNSPECIFIED             = 0x0000,       /**< File does not specify an architecture */
        ISA_OTHER                   = 0xffff,       /**< Architecture is something other than below */
        ISA_FAMILY_MASK             = 0xff00,       /**< Mask to get family part of ISA */

        ISA_IA32_Family             = 0x0100,       /**< x86 IA-32 family of architectures; Intel, AMD, VIA, ... */
        ISA_IA32_286                = 0x0101,       /**< 80286 */
        ISA_IA32_386                = 0x0102,       /**< MMU with paging */
        ISA_IA32_486                = 0x0103,       /**< risc-like pipelining, integrated FPU, on-chip cache */
        ISA_IA32_Pentium            = 0x0104,       /**< superscalar, 64-bit databus, MMX */
        ISA_IA32_Cyrix6x86          = 0x0105,       /**< register renaming, speculative execution */
        ISA_IA32_AMDK5              = 0x0106,       /**< micro-op translation */
        ISA_IA32_PentiumPro         = 0x0107,       /**< PAE, integrated L2 cache */
        ISA_IA32_PentiumII          = 0x0108,       /**< L3-cache, 3D Now, SSE */
        ISA_IA32_Athlon             = 0x0109,       /**< superscalar FPU, wide design */
        ISA_IA32_Pentium4           = 0x010a,       /**< deeply pipelined, high frequency, SSE2, hyper-threading */
        ISA_IA32_PentiumM           = 0x010b,       /**< low power */

        ISA_X8664_Family            = 0x0200,       /**< x86-64 family of architectures: Intel, AMD, VIA, ... */
        ISA_X8664_Athlon64          = 0x0201,       /**< on-die memory controller, 40-bit phys address space */
        ISA_X8664_Prescott          = 0x0202,       /**< deeply pipelined, high frequency, SSE3 */
        ISA_X8664_IntelCore         = 0x0203,       /**< low power, multi-core, lower clock frequency */
        ISA_X8664_AMDPhenom         = 0x0204,       /**< quad core, 128-bit FPUs, SSE4a, native mem ctrl, on-die L3 cache */

        ISA_SPARC_Family            = 0x0300,       /**< SPARC family of architectures; Sun Microsystems */
        ISA_SPARC_V7                = 0x0301,
        ISA_SPARC_V8                = 0x0302,
        ISA_SPARC_V8E               = 0x0303,
        ISA_SPARC_V9                = 0x0304,
        ISA_SPARC_V9JPS1            = 0x0305,
        ISA_SPARC_V9UA              = 0x0306,
        ISA_SPARC_V9JPS2            = 0x0307,

        ISA_M68K_Family             = 0x0400,       /**< Motorala m68k family */
        ISA_M68K_68000              = 0x0401,       /**< generation one: 16/32 internal; 8-, 16-, 32-bit interface */
        ISA_M68K_68EC000            = 0x0402,
        ISA_M68K_68HC000            = 0x0403,
        ISA_M68K_68008              = 0x0404,
        ISA_M68K_68010              = 0x0405,
        ISA_M68K_68012              = 0x0406,
        ISA_M68K_68020              = 0x0407,       /**< generation two: fully 32-bit */
        ISA_M68K_68EC020            = 0x0408,
        ISA_M68K_68030              = 0x0409,
        ISA_M68K_68EC030            = 0x040a,
        ISA_M68K_68040              = 0x040b,       /**< generation three: pipelined */
        ISA_M68K_68EC040            = 0x040c,
        ISA_M68K_68LC040            = 0x040d,
        ISA_M68K_68060              = 0x040e,       /**< generation four: superscalar */
        ISA_M68K_ColdFire           = 0x040f,       /**< other */
        ISA_M68K_DragonBall         = 0x0410,       /**< other */

        ISA_M88K_Family             = 0x0500,       /**< Motorola m88k family (not very popular) */
        ISA_M88K_88100              = 0x0501,       /**< 32-bit, integrated FPU mated with 88200 MMU and cache controller */
        ISA_M88K_88110              = 0x0502,       /**< single package of 88100+88200 */
        ISA_M88K_88110MP            = 0x0503,       /**< on-chip comm for use in multi-processor systems */
        ISA_M88K_88120              = 0x0504,       /**< superscalar (never actually released) */

        ISA_MIPS_Family             = 0x0600,       /**< 32/64-bit RISC; MIPS Technologies, Inc. */
        ISA_MIPS_MarkI              = 0x0601,       /**< R2000, R3000 */
        ISA_MIPS_MarkII             = 0x0602,       /**< R6000 */
        ISA_MIPS_MarkIII            = 0x0603,       /**< R4000 */
        ISA_MIPS_R2000              = 0x0604,       /**< 32-bit, Big or little endian */
        ISA_MIPS_R3000              = 0x0605,       /**< virtual identical: Pacempi's R3400, IDT's R3500, Toshiba R3900 */
        ISA_MIPS_R4000              = 0x0606,       /**< 64-bit; others in the series had larger caches and bug fixes */
        ISA_MIPS_R4200              = 0x0607,       /**< low-cost version of R4000 */
        ISA_MIPS_R4300              = 0x0608,       /**< low-cost version of R4000 with 32-bit external bus */
        ISA_MIPS_R4600              = 0x0609,       /**< "Orion" by Qauntum Effect Devices (QED); larger caches */
        ISA_MIPS_R4650              = 0x060a,       /**< by QED */
        ISA_MIPS_R4700              = 0x060b,       /**< "Orion" by QED */
        ISA_MIPS_R5000              = 0x060c,       /**< by QED */
        ISA_MIPS_RM7000             = 0x060d,       /**< by PMC-Sierra; 256kB L2 and optional L3 */
        ISA_MIPS_R8000              = 0x060e,       /**< superscalar, fairly rare */
        ISA_MIPS_R10000             = 0x060f,       /**< R8000 on a single chip; 32kB caches; out-of-order */
        ISA_MIPS_R12000             = 0x0610,       /**< R10000 + higher clock rates */
        ISA_MIPS_R14000             = 0x0611,       /**< R12000 + support for DDR SRAM; 200MHz front side bus */
        ISA_MIPS_R16000             = 0x0612,       /**< R14000 + increased freq, more L1, smaller die */
        ISA_MIPS_R16000A            = 0x0613,
        ISA_MIPS_16                 = 0x0614,       /**< Unknown. Windows PE architecture 0x266 "MIPS16" */
        ISA_MIPS_FPU                = 0x0615,       /**< Unknown. Windows PE architecture 0x366 "MIPS with FPU" */
        ISA_MIPS_16FPU              = 0x0616,       /**< Unknown. Windows PE architecture 0x466 "MIPS16 with FPU" */

        ISA_I860_Family             = 0x0700,       /**< Intel i860 family; 1989-mid 90's; RISC VLIW */
        ISA_I860_860XR              = 0x0701,       /**< (code named N10) 25-40MHz */
        ISA_I860_860XP              = 0x0702,       /**< (code named N11) larger caches; 40-50MHz; same IS as XR */

        ISA_IA64_Family             = 0x0800,       /**< Intel 64-bit architecture */
        ISA_IA64_Itanium            = 0x0801,       /**< First generation */
        ISA_IA64_Itanium2           = 0x0802,       /**< Second generation starting Nov 2007 */

        // See http://en.wikipedia.org/wiki/ARM_architecture
        ISA_ARM_Family              = 0x0900,       /**< Acorn RISC Machine, Advanced RISC Machines, ARM Limited */
        ISA_ARM_ARM1                = 0x0901,       /**< ARM evaluation system */
        ISA_ARM_ARM2                = 0x0902,       /**< ARM2, ARM250 cores */
        ISA_ARM_ARM3                = 0x0903,       /**< ARM2a core */
        ISA_ARM_ARM6                = 0x0904,       /**< ARM60, ARM600, ARM610 cores */
        ISA_ARM_ARM7                = 0x0905,       /**< ARM{700,710,710a,7100,7500,7500FE} cores */
        ISA_ARM_ARM7TDMI            = 0x0906,       /**< ARM{7TDMI,7TDMI-S,710T,720T,740T,7EJ-S} cores */
        ISA_ARM_StrongARM           = 0x0907,       /**< SA-110, SA-1110 cores */
        ISA_ARM_ARM8                = 0x0908,       /**< ARM810 core */
        ISA_ARM_ARM9TDMI            = 0x0909,       /**< ARM{9TDMI,920T,922T,940T} cores */
        ISA_ARM_ARM9E               = 0x090a,       /**< ARM{946E-S,966E-S,968E-S,926EJ-S,966HS} cores */
        ISA_ARM_ARM10E              = 0x090b,       /**< ARM{1020E,1022E,1026EJ-S} cores */
        ISA_ARM_XScale              = 0x090c,       /**< 80200, IOP310, IOP315, 80219, IOP321, IOP33x, IOP34x, PXA210,
                                                     *   PXA250, PXA255, PXA26x, PXA27x, PXA800(E)F, Monahans, PXA900,
                                                     *   IXC1100, IXP2400, IXP2800, IXP2850, IXP2325, IXP2350, IXP42x,
                                                     *   IXP460, IXP465 cores */
        ISA_ARM_ARM11               = 0x090d,       /**< ARMv{6,6T2,6KZ,6K} cores */
        ISA_ARM_Cortex              = 0x090e,       /**< Cortex-{A8,A9,A9 MPCore,R4(F),M3,M1} cores */
        ISA_ARM_A64                 = 0x090f,       /**< ARM AArch64 A64 instruction set. */

        ISA_JVM                     = 0x0a00,       /**< Java Virtual Machine (JVM) instruction set. */

        // Others, not yet incorporated into this enum
        ISA_OTHER_Family            = 0xf000,

        ISA_ATT_WE_32100            = 0xf001,       /**< Sometimes simply "M32" */
        ISA_IBM_System_370          = 0xf002,
        ISA_HPPA                    = 0xf003,
        ISA_Fujitsu_VPP500          = 0xf004,
        ISA_Sun_v8plus              = 0xf005,
        ISA_PowerPC                 = 0xf006,
        ISA_PowerPC_64bit           = 0xf007,
        ISA_IBM_S390                = 0xf008,
        ISA_NEC_V800_series         = 0xf009,
        ISA_Fujitsu_FR20            = 0xf00a,
        ISA_TRW_RH_32               = 0xf00b,
        ISA_Motorola_RCE            = 0xf00c,
        ISA_Digital_Alpha_fake      = 0xf00e,
        ISA_Hitachi_SH              = 0xf00f,
        ISA_Siemens_Tricore         = 0xf010,
        ISA_Argonaut_RISC_Core      = 0xf011,
        ISA_Hitachi_H8_300          = 0xf012,
        ISA_Hitachi_H8_300H         = 0xf013,
        ISA_Hitachi_H8S             = 0xf014,
        ISA_Hitachi_H8_500          = 0xf015,
        ISA_Stanford_MIPS_X         = 0xf016,
        ISA_Motorola_M68HC12        = 0xf017,
        ISA_Fujitsu_MMA_Multimedia_Accelerator=0xf018,
        ISA_Siemens_PCP             = 0xf019,
        ISA_Sony_nCPU_embeeded_RISC = 0xf01a,
        ISA_Denso_NDR1_microprocessor=0xf01b,
        ISA_Motorola_Start_Core_processor=0xf01c,
        ISA_Toyota_ME16_processor   = 0xf01d,
        ISA_STMicroelectronic_ST100_processor=0xf01e,
        ISA_Advanced_Logic_Corp_Tinyj_emb_family=0xf01f,
        ISA_AMD_x86_64_architecture = 0xf020,
        ISA_Sony_DSP_Processor      = 0xf021,
        ISA_Siemens_FX66_microcontroller=0xf022,
        ISA_STMicroelectronics_ST9_plus_8_16_microcontroller=0xf023,
        ISA_STMicroelectronics_ST7_8bit_microcontroller=0xf024,
        ISA_Motorola_MC68HC16_microcontroller=0xf025,
        ISA_Motorola_MC68HC11_microcontroller=0xf026,
        ISA_Motorola_MC68HC08_microcontroller=0xf027,
        ISA_Motorola_MC68HC05_microcontroller=0xf028,
        ISA_Silicon_Graphics_SVx    = 0xf029,
        ISA_STMicroelectronics_ST19_8bit_microcontroller=0xf02a,
        ISA_Digital_VAX             = 0xf02b,
        ISA_Axis_Communications_32bit_embedded_processor=0xf02c,
        ISA_Infineon_Technologies_32bit_embedded_processor=0xf02d,
        ISA_Element_14_64bit_DSP_Processor=0xf02e,
        ISA_LSI_Logic_16bit_DSP_Processor=0xf02f,
        ISA_Donald_Knuths_educational_64bit_processor=0xf030,
        ISA_Harvard_University_machine_independent_object_files=0xf031,
        ISA_SiTera_Prism            = 0xf032,
        ISA_Atmel_AVR_8bit_microcontroller=0xf033,
        ISA_Fujitsu_FR30            = 0xf034,
        ISA_Mitsubishi_D10V         = 0xf035,
        ISA_Mitsubishi_D30V         = 0xf036,
        ISA_NEC_v850                = 0xf037,
        ISA_Mitsubishi_M32R         = 0xf038,
        ISA_Matsushita_MN10300      = 0xf039,
        ISA_Matsushita_MN10200      = 0xf03a,
        ISA_picoJava                = 0xf03b,
        ISA_OpenRISC_32bit_embedded_processor=0xf03c,
        ISA_ARC_Cores_Tangent_A5    = 0xf03d,
        ISA_Tensilica_Xtensa_Architecture=0xf03e,
        ISA_Digital_Alpha         = 0xf03f,
        ISA_Matsushita_AM33         = 0xf040,
        ISA_EFI_ByteCode            = 0xf041
    };

    /** General purpose of a binary executable file. */
    enum ExecPurpose {
        PURPOSE_UNSPECIFIED,                        /**< Purpose is not specified and could not be inferred */
        PURPOSE_OTHER,                              /**< A purpose other than any defined below */
        PURPOSE_EXECUTABLE,                         /**< Executable program */
        PURPOSE_LIBRARY,                            /**< Library (shared or relocatable) */
        PURPOSE_CORE_DUMP,                          /**< Post mortem image */
        PURPOSE_OS_SPECIFIC,                        /**< Some operating system specific purpose */
        PURPOSE_PROC_SPECIFIC                       /**< Some processor specific purpose */
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Factory method that parses a binary file. */
    static SgAsmGenericFile *parseBinaryFormat(const char *name);

    /** Dump debugging information into a named text file.
     *
     *  Writes a new file from the IR node for a parsed executable file. Warning: This function might modify the AST by calling @ref
     *  SgAsmGenericSection::reallocate, which makes sure all parts of the AST are consistent with respect to each other. */
    static void unparseBinaryFormat(const std::string &name, SgAsmGenericFile*);

    /** Dump debugging information to specified stream.
     *
     *  Unparses an executable file into the supplied output stream. Warning: This function might modify the AST by calling @ref
     *  SgAsmGenericSection::reallocate, which makes sure all parts of the AST are consistent with respect to each other. */
    static void unparseBinaryFormat(std::ostream&, SgAsmGenericFile*);

    /** Diagnostic stream. */
    static Sawyer::Message::Facility mlog;

    /** Initialize diagnostic streams.
     *
     *  This is called automatically by @ref Rose::initialize. */
    static void initDiagnostics();

    // These convert enums to strings. It is better to use the automatic enum stringification instead. They have names like
    // Rose::stringifySgAsmExecutableFileFormatInsnSetArchitecture, etc. */
    static std::string isaFamilyToString(SgAsmExecutableFileFormat::InsSetArchitecture);
    static std::string isaToString(SgAsmExecutableFileFormat::InsSetArchitecture);
    static std::string toString(SgAsmExecutableFileFormat::InsSetArchitecture);
    static std::string toString(SgAsmExecutableFileFormat::ExecFamily);
    static std::string toString(SgAsmExecutableFileFormat::ExecABI);
    static std::string toString(SgAsmExecutableFileFormat::ExecPurpose);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deprecated 2023-11
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    static std::string isa_family_to_string(SgAsmExecutableFileFormat::InsSetArchitecture) ROSE_DEPRECATED("use isaFamilyToString");
    static std::string isa_to_string(SgAsmExecutableFileFormat::InsSetArchitecture) ROSE_DEPRECATED("use isaToString");
    static std::string to_string(SgAsmExecutableFileFormat::InsSetArchitecture) ROSE_DEPRECATED("use toString");
    static std::string to_string(SgAsmExecutableFileFormat::ExecFamily) ROSE_DEPRECATED("use toString");
    static std::string to_string(SgAsmExecutableFileFormat::ExecABI) ROSE_DEPRECATED("use toString");
    static std::string to_string(SgAsmExecutableFileFormat::ExecPurpose) ROSE_DEPRECATED("use toString");
public:
    /** Destructor. */
    virtual ~SgAsmExecutableFileFormat();

protected:
    /** Default constructor. */
    SgAsmExecutableFileFormat();

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
       // static const VariantT static_variant = V_SgAsmExecutableFileFormat;
          enum { static_variant = V_SgAsmExecutableFileFormat };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmExecutableFileFormat* isSgAsmExecutableFileFormat(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmExecutableFileFormat* isSgAsmExecutableFileFormat( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmExecutableFileFormat * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmExecutableFileFormatStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmExecutableFileFormat * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmExecutableFileFormat * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmExecutableFileFormat::operator delete (pointer,sizeof(SgAsmExecutableFileFormat));
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
 	static SgAsmExecutableFileFormat* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmExecutableFileFormat* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmExecutableFileFormat* sgnode);

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
       // SgAsmExecutableFileFormat( SgAsmExecutableFileFormatStorageClass& source );





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
          friend class SgAsmExecutableFileFormatStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmExecutableFileFormat( const SgAsmExecutableFileFormatStorageClass& source );

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
          SgAsmExecutableFileFormat* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmExecutableFileFormat* isSgAsmExecutableFileFormat ( SgNode* s );

          typedef SgAsmNode base_node_type;


// End of memberFunctionString

    protected:

    friend struct Rose::Traits::generated::describe_node_t<SgAsmExecutableFileFormat>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmExecutableFileFormat

/* #line 830 "/workspace/generated/src/frontend/SageIII//SgAsmExecutableFileFormat.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 837 "/workspace/generated/src/frontend/SageIII//SgAsmExecutableFileFormat.h" */

#endif // ROSE_SgAsmExecutableFileFormat_H

