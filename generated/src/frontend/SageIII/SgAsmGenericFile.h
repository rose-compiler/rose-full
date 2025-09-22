
#ifndef ROSE_SgAsmGenericFile_H
#define ROSE_SgAsmGenericFile_H
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

// predeclarations for SgAsmGenericFile

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmGenericFile.h" */
/* #line 15524 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#include <Rose/BinaryAnalysis/Address.h>
#include <Rose/BinaryAnalysis/MemoryMap.h>
#include <Rose/BinaryAnalysis/AddressIntervalSet.h>

#include "DataConversion.h"
#include "StatSerializer.h"                         // non-intrusive serialization of struct stat

#ifdef ROSE_SgAsmGenericFile_IMPL
#include <SgAsmDwarfCompilationUnitList.h>
#include <SgAsmGenericSectionList.h>
#include <SgAsmGenericHeaderList.h>
#endif

#include <sys/stat.h>


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmGenericFile
class ROSE_DLL_API SgAsmGenericFile  : public SgAsmExecutableFileFormat
   {
     public:


/* #line 55 "/workspace/generated/src/frontend/SageIII//SgAsmGenericFile.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 15613 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmGenericFile -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmGenericFile");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmExecutableFileFormat);
        s & BOOST_SERIALIZATION_NVP(p_dwarfInfo);
        s & BOOST_SERIALIZATION_NVP(p_name);
        s & BOOST_SERIALIZATION_NVP(p_sb);
        s & BOOST_SERIALIZATION_NVP(p_data);
        s & BOOST_SERIALIZATION_NVP(p_headers);
        s & BOOST_SERIALIZATION_NVP(p_holes);
        s & BOOST_SERIALIZATION_NVP(p_truncateZeros);
        s & BOOST_SERIALIZATION_NVP(p_trackingReferences);
        s & BOOST_SERIALIZATION_NVP(p_referencedExtents);
        s & BOOST_SERIALIZATION_NVP(p_neuter);
        debugSerializationEnd("SgAsmGenericFile");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Section modification functions for @ref shiftExtend. */
    enum AddressSpace {
        ADDRSP_MEMORY = 0x0001,
        ADDRSP_FILE   = 0x0002,
        ADDRSP_ALL    = 0x0003
    };

    /** Elasticity argument for @ref shiftExtend. */
    enum Elasticity {
        ELASTIC_NONE  = 0,                          /**< Nothing is elastic; other parts of space are shifted. */
        ELASTIC_UNREF = 1,                          /**< Unreferenced address space is elastic. */
        ELASTIC_HOLE  = 2                           /**< Unreferenced and "hole" sections are elastic. */
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Properties
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
public:
    /** Property: DWARF debugging hiearchy. 
     * 
     * @{ */
    SgAsmDwarfCompilationUnitList* const& get_dwarfInfo() const;
    void set_dwarfInfo(SgAsmDwarfCompilationUnitList* const&);
    /** @} */

public:
    /** Property: Name of file. 
     * 
     * @{ */
    std::string const& get_name() const;
    void set_name(std::string const&);
    /** @} */

public:
    /** Property: Read-only file descriptor.
     *
     *  Negative represents lack of valid file descriptor. 
     *  
     *  @{ */
    int const& get_fd() const;
    void set_fd(int const&);
    /** @} */

public:
    struct stat const& get_sb() const;

public:
    /** Property: Contents of the file. 
     * 
     * @{ */
    SgFileContentList const& get_data() const;
    void set_data(SgFileContentList const&);
    /** @} */

public:
    /** Property: List of all headers in file.
     *
     *  This is stored as a pointer to another node that contains the list due to limitations of ROSETTA. 
     *  
     *  @{ */
    SgAsmGenericHeaderList* const& get_headers() const;
    void set_headers(SgAsmGenericHeaderList* const&);
    /** @} */

public:
    /** Property: Addresses unreferenced during parsing.
     *
     *  This is a pointer to a node that contains a list of pointers to the holes. It is done this way rather than storing
     *  the list directly, because of limitations of ROSETTA. 
     *  
     *  @{ */
    SgAsmGenericSectionList* const& get_holes() const;
    void set_holes(SgAsmGenericSectionList* const&);
    /** @} */

public:
    /** Property: Whether to truncate zeros on writes. 
     * 
     * @{ */
    bool const& get_truncateZeros() const;
    void set_truncateZeros(bool const&);
    /** @} */

public:
    /** Property: Whether to track referenced areas during parsing. 
     * 
     * @{ */
    bool const& get_trackingReferences() const;
    void set_trackingReferences(bool const&);
    /** @} */

public:
    /** Property: Addresses referenced during parsing. 
     * 
     * @{ */
    Rose::BinaryAnalysis::AddressIntervalSet const& get_referencedExtents() const;
    void set_referencedExtents(Rose::BinaryAnalysis::AddressIntervalSet const&);
    /** @} */

public:
    /** Property: If set, refuse to unparse file. 
     * 
     * @{ */
    bool const& get_neuter() const;
    void set_neuter(bool const&);
    /** @} */
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Non-property data members
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
private:
    mutable Rose::BinaryAnalysis::AddressIntervalSet *p_unreferenced_cache = nullptr;
    DataConverter *p_data_converter = nullptr;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Loads file contents into memory. */
    SgAsmGenericFile* parse(std::string file_name);

    void reallocate();

    /** Mirror image of parsing an executable file.
     *
     *  The result (unless the AST has been modified) should be identical to the original file.  If the file's neuter
     *  property is true, then rather than creating a binary file, the output will contain a note indicating that the
     *  neuter property is set.  This is intended to prevent ASTs that represent malicious binaries from accidently being
     *  used to create the binary. */
    void unparse(std::ostream&) const;

    /** Extend the output file by writing the last byte if it hasn't been written yet. */
    void extendToEof(std::ostream&) const;

    /** Print basic info about the sections of a file. */
    void dump(FILE*) const;

    /** Print text file containing all known information about a binary file.
     *
     *  If in_cwd is set, then the file is created in the current working directory rather than the directory containing
     *  the binary file (the default is to create the file in the current working directory).  If @p ext is non-null then
     *  these characters are added to the end of the binary file name. The default null pointer causes the string ".dump"
     *  to be appended to the file name. */
    void dumpAll(bool in_cwd=true, const char *ext=NULL);

    /** Print text file containing all known information about a binary file. */
    void dumpAll(const std::string& dumpname);

    /** Returns the parts of the file that have never been referenced. */
    const Rose::BinaryAnalysis::AddressIntervalSet& get_unreferencedExtents() const;

    /** Marks part of a file as having been referenced if tracking references. */
    void markReferencedExtent(Rose::BinaryAnalysis::Address start_rva, Rose::BinaryAnalysis::Address size);

    /** Property: Data converter.
     *
     *  Function to encode/decode data as it's transferred to/from disk.  The default is to do no transformation.
     *
     * @{ */
    DataConverter* get_dataConverter() const;
    void set_dataConverter(DataConverter*);
    /** @} */

    /** Returns current size of file based on section with highest ending address. */
    Rose::BinaryAnalysis::Address get_currentSize() const;

    /** Returns original size of file, based on file system. */
    Rose::BinaryAnalysis::Address get_originalSize() const;

    /** Reads data from a file.
     *
     *  Reads up to @p size bytes of data from the file beginning at the specified byte offset (measured from the beginning
     *  of the file), placing the result in @p dst_buf, and returning the number of bytes read. If the number of bytes read
     *  is less than @p size then one of two things happen: if @p strict is true then an @ref
     *  SgAsmExecutableFileFormat::ShortRead exception is thrown; otherwise @p dst_buf is zero padded so that exactly @p
     *  size bytes are always initialized. */
    size_t readContent(Rose::BinaryAnalysis::Address offset, void *dst_buf, Rose::BinaryAnalysis::Address size, bool strict=true);

    /** Reads data from a file.
     *
     *  Reads up to @p size bytes of data starting at the specified (absolute) virtual address. The @p map specifies how virtual
     *  addresses are mapped to file offsets.  As bytes are read, if we encounter a virtual address that is not mapped we stop
     *  reading and do one of two things: if @p strict is set then a @ref Rose::BinaryAnalysis::MemoryMap::NotMapped exception is
     *  thrown; otherwise the rest of the @p dst_buf is zero filled and the number of bytes read (not filled) is returned. */
    size_t readContent(const Rose::BinaryAnalysis::MemoryMap::Ptr&, Rose::BinaryAnalysis::Address va, void *dst_buf,
                       Rose::BinaryAnalysis::Address size, bool strict=true);

    /** Reads a string from a file.
     *
     *  Returns the string stored at the specified (absolute) virtual address. The returned string contains the bytes beginning at
     *  the starting virtual address and continuing until we reach a NUL byte or an address which is not mapped. If we reach an
     *  address which is not mapped then one of two things happen: if @p strict is set then a @ref
     *  Rose::BinaryAnalysis::MemoryMap::NotMapped exception is thrown; otherwise the string is simply terminated. The returned
     *  string does not include the NUL byte. */
    std::string readContentString(const Rose::BinaryAnalysis::MemoryMap::Ptr&, Rose::BinaryAnalysis::Address va, bool strict=true);

    /** Reads a string from a file.
     *
     *  Returns the NUL-terminated string stored at the specified relative virtual address. The returned string contains
     *  the bytes beginning at the specified starting file offset and continuing until we reach a NUL byte or an invalid
     *  file offset. If we reach an invalid file offset one of two things happen: if @p strict is set (the default) then an
     *  @ref SgAsmExecutableFileFormat::ShortRead exception is thrown; otherwise the string is simply terminated. The
     *  returned string does not include the NUL byte. */
    std::string readContentString(Rose::BinaryAnalysis::Address abs_offset, bool strict=true);

    /** Property: Entire file contents. */
    const SgFileContentList& content() { return p_data; }

    /** Returns a vector that points to part of the file.
     *
     *  Returns a vector that points to part of the file content without actually ever reading or otherwise referencing the
     *  file content until the vector elements are referenced. If the desired extent falls entirely or partially outside
     *  the range of data known to the file then throw an @ref SgAsmExecutableFileFormat::ShortRead exception. This
     *  function never updates reference tracking lists for the file. */
    SgFileContentList content(Rose::BinaryAnalysis::Address offset, Rose::BinaryAnalysis::Address size);

    /** Returns list of all sections in the file that are memory mapped, including headers and holes. */
    SgAsmGenericSectionPtrList get_mappedSections() const;

    /** Returns list of all sections in the file (including headers, holes, etc). */
    SgAsmGenericSectionPtrList get_sections(bool include_holes=true) const;

    /** Returns sections having specified ID across all headers, including headers and holes. */
    SgAsmGenericSectionPtrList get_sectionsById(int id) const;

    /** Returns all sections having specified name across all headers, including headers and holes. */
    SgAsmGenericSectionPtrList get_sectionsByName(std::string, char sep='\0') const;

    /** Find sections by their offset.
     *
     *  Returns all sections that contain all of the specified portion of the file across all headers, including headers
     *  and holes. */
    SgAsmGenericSectionPtrList get_sectionsByOffset(Rose::BinaryAnalysis::Address offset, Rose::BinaryAnalysis::Address size) const;

    /** Find sections by address.
     *
     *  Returns all sections that are mapped to include the specified relative virtual address across all headers,
     *  including headers and holes. This uses the preferred mapping of the section rather than the actual mapping. */
    SgAsmGenericSectionPtrList get_sectionsByRva(Rose::BinaryAnalysis::Address rva) const;

    /** Find sections by address.
     *
     *  Returns all sections that are mapped to include the specified virtual address across all headers, including headers
     *  and holes. This uses the preferred mapping rather than the actual mapping. */
    SgAsmGenericSectionPtrList get_sectionsByVa(Rose::BinaryAnalysis::Address va) const;

    /** Find section with specified ID.
     *
     *  Returns the pointer to section with the specified ID across all headers only if there's exactly one match. Headers
     *  and holes are included in the results. */
    SgAsmGenericSection *get_sectionById(int id, size_t *nfound=0) const;

    /** Find section by name.
     *
     *  Returns pointer to the section with the specified name, or NULL if there isn't exactly one match. Any characters in
     *  the name after the first occurrence of SEP are ignored (default is NUL). For instance, if sep=='$' then the
     *  following names are all equivalent: .idata, .idata$, and .idata$1 */
    SgAsmGenericSection *get_sectionByName(const std::string&, char sep=0, size_t *nfound=0) const;

    /** Find section by file offset.
     *
     *  Returns single section that contains all of the specified portion of the file across all headers, including headers
     *  and holes. */
    SgAsmGenericSection*
    get_sectionByOffset(Rose::BinaryAnalysis::Address offset, Rose::BinaryAnalysis::Address size, size_t *nfound=0) const;

    /** Find section by address.
     *
     *  Returns single section that is mapped to include the specified relative virtual file address across all headers,
     *  including headers and holes. */
    SgAsmGenericSection *get_sectionByRva(Rose::BinaryAnalysis::Address rva, size_t *nfound=0) const;

    /** Find section by address.
     *
     *  Returns single section that is mapped to include the specified virtual address across all headers. See also
     *  @ref get_bestSectionByVa. */
    SgAsmGenericSection *get_sectionByVa(Rose::BinaryAnalysis::Address va, size_t *nfound=0) const;

    /** Find section by address.
     *
     *  Similar to @ref get_sectionByVa except when more than one section contains the specified virtual address this
     *  choose the "best" one. All candidates must map the virtual address to the same file address or else we fail (return
     *  null and number of candidates). See @ref bestSectionByVa for definition of "best". */
    SgAsmGenericSection *get_bestSectionByVa(Rose::BinaryAnalysis::Address va, size_t *nfound=0) const;

    /** Definition for "best".
     *
     *  This is the definition of "best" as used by @ref get_bestSectionByVa and @ref
     *  SgAsmGenericHeader::get_bestSectionByVa.  The specified list of sections is scanned and the best one
     *  containing the specified virtual address is returned.  The operation is equivalent to the successive elimination of
     *  bad sections: first eliminate all sections that do not contain the virtual address.  If more than one remains,
     *  eliminate all but the smallest.  If two or more are tied in size and at least one has a name, eliminate those that
     *  don't have names.  If more than one section remains, return the section that is earliest in the specified list of
     *  sections.  Return the null pointer if no section contains the specified virtual address, or if any two sections
     *  that contain the virtual address map it to different parts of the underlying binary file. */
    static SgAsmGenericSection *bestSectionByVa(const SgAsmGenericSectionPtrList &sections, Rose::BinaryAnalysis::Address va);

    /** Moves and enlarges a section.
     *
     *  Shifts (to a higher offset) and/or enlarges the specified section, S, taking all other sections into account. The
     *  positions of sections are based on their preferred virtual mappings rather than the actual mapping.
     *
     *  The neighborhood(S) is S itself and the set of all sections that overlap or are adjacent to the neighborhood of S,
     *  recursively.
     *
     *  The address space can be partitioned into three categories:
     *  @li Section: part of an address space that is referenced by an SgAsmGenericSection other than a "hole" section.
     *  @li Hole:    part of an address space that is referenced only by a "hole" section.
     *  @li Unref:   part of an address space that is not used by any section, including any "hole" section.
     *
     *  The last two categories define parts of the address space that can be optionally elastic--they expand or contract
     *  to take up slack or provide space for neighboring sections. This is controlled by the "elasticity" argument.
     *
     *  Note that when elasticity is ELASTIC_HOLE we simply ignore the "hole" sections, effectively removing their
     *  addresses from the range of addresses under consideration. This avoids complications that arise when a "hole"
     *  overlaps with a real section (due to someone changing offsets in an incompatible manner), but causes the hole
     *  offset and size to remain fixed.  (FIXME RPM 2008-10-20)
     *
     *  When section S is shifted by 'Sa' bytes and/or enlarged by 'Sn' bytes, other sections are affected as follows:
     *  @li Cat L:  Not affected
     *  @li Cat R: Shifted by Sa+Sn if they are in neighborhood(S). Otherwise the amount of shifting depends on the size of
     *      the hole right of neighborhood(S).
     *  @li Cat C:  Shifted Sa and enlarged Sn.
     *  @li Cat O:  If starting address are the same: Shifted Sa. If starting address not equal: Englarged Sa+Sn
     *  @li Cat I:  Shifted Sa, not enlarged
     *  @li Cat B:  Not shifted, but enlarged Sn
     *  @li Cat E:  Shifted Sa and enlarged Sn
     *
     *  Generally speaking, the AddressSpace argument should be SgAsmGenericFile::ADDRSP_ALL in order to adjust both file
     *  and memory offsets and sizes in a consistent manner.
     *
     *  To change the address and/or size of S without regard to other sections in the same file, use set_offset() and
     *  set_size() (for file address space) or set_mapped_preferred_rva() and set_mapped_size() (for memory address
     *  space).
     *
     * @{ */
    void shiftExtend(SgAsmGenericSection*, Rose::BinaryAnalysis::Address sa, Rose::BinaryAnalysis::Address sn, AddressSpace,
                     Elasticity);
    void shiftExtend(SgAsmGenericSection *s, Rose::BinaryAnalysis::Address sa, Rose::BinaryAnalysis::Address sn);
    /** @} */

    /** File offset of next section.
     *
     *  Given a file address, return the file offset of the following section.  If there is no following section then
     *  return an address of -1 (when signed) */
    Rose::BinaryAnalysis::Address get_nextSectionOffset(Rose::BinaryAnalysis::Address offset);

    /** Adds a new hole to the file.
     *
     *  This is called implicitly by the hole constructor. */
    void addHole(SgAsmGenericSection*);

    /** Removes a hole from the list of holes in a file. */
    void removeHole(SgAsmGenericSection*);

    /** Find holes in file and create sections to fill them.
     *
     *  Synthesizes "hole" sections to describe the parts of the file that are not yet referenced by other sections.  Note
     *  that holes are used to represent parts of the original file data, before sections were modified by walking the AST
     *  (at this time it is not possible to create a hole outside the original file content). */
    void fillHoles();

    /** Deletes "hole" sections.
     *
     *  Undoes what @ref fillHoles did. */
    void unfillHoles();

    /** Adds a new header to the file.
     *
     *  This is called implicitly by the header constructor */
    void addHeader(SgAsmGenericHeader*);

    /** Removes a header from the header list in a file. */
    void removeHeader(SgAsmGenericHeader*);

    /** Returns the header for the specified format. */
    SgAsmGenericHeader *get_header(SgAsmExecutableFileFormat::ExecFamily);

    /** Return a string describing the file format.
     *
     *  This uses the last header so that files like PE, NE, LE, LX, etc. which also have a DOS header report the format of
     *  the second (PE, etc.) header rather than the DOS header. */
    const char *formatName() const;

protected:
    // Some extra clean-up actions on destruction
    virtual void destructorHelper() override;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deprecated 2023-11
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    SgAsmDwarfCompilationUnitList* get_dwarf_info() const ROSE_DEPRECATED("use get_dwarfInfo");
    void set_dwarf_info(SgAsmDwarfCompilationUnitList*) ROSE_DEPRECATED("use set_dwarfInfo");
    bool get_truncate_zeros() const ROSE_DEPRECATED("use get_truncateZeros");
    void set_truncate_zeros(bool) ROSE_DEPRECATED("use set_truncateZeros");
    bool get_tracking_references() const ROSE_DEPRECATED("use get_trackingReferences");
    void set_tracking_references(bool) ROSE_DEPRECATED("use set_trackingReferences");
    const Rose::BinaryAnalysis::AddressIntervalSet& get_referenced_extents() const ROSE_DEPRECATED("use get_referencedExtents");
    void set_referenced_extents(const Rose::BinaryAnalysis::AddressIntervalSet&) ROSE_DEPRECATED("use set_referencedExtents");
    void extend_to_eof(std::ostream&) const ROSE_DEPRECATED("use extendToEof");
    void dump_all(bool in_cwd=true, const char *ext=NULL) ROSE_DEPRECATED("use dumpAll");
    void dump_all(const std::string& dumpname) ROSE_DEPRECATED("use dumpAll");
    const Rose::BinaryAnalysis::AddressIntervalSet& get_unreferenced_extents() const
        ROSE_DEPRECATED("use get_unreferencedExtents");
    void mark_referenced_extent(Rose::BinaryAnalysis::Address, Rose::BinaryAnalysis::Address)
        ROSE_DEPRECATED("use markReferencedExtent");
    DataConverter* get_data_converter() const ROSE_DEPRECATED("use get_dataConverter");
    void set_data_converter(DataConverter*) ROSE_DEPRECATED("use set_dataConverter");
    Rose::BinaryAnalysis::Address get_current_size() const ROSE_DEPRECATED("use get_currentSize");
    Rose::BinaryAnalysis::Address get_orig_size() const ROSE_DEPRECATED("use get_originalSize");
    size_t read_content(Rose::BinaryAnalysis::Address, void*, Rose::BinaryAnalysis::Address, bool=true)
        ROSE_DEPRECATED("use readContent");
    size_t read_content(const Rose::BinaryAnalysis::MemoryMap::Ptr&, Rose::BinaryAnalysis::Address, void*,
                        Rose::BinaryAnalysis::Address, bool=true) ROSE_DEPRECATED("use readContent");
    std::string read_content_str(const Rose::BinaryAnalysis::MemoryMap::Ptr&, Rose::BinaryAnalysis::Address, bool=true)
        ROSE_DEPRECATED("use readContentString");
    std::string read_content_str(Rose::BinaryAnalysis::Address, bool=true) ROSE_DEPRECATED("use readContentString");
    SgAsmGenericSectionPtrList get_mapped_sections() const ROSE_DEPRECATED("use get_mappedSections");
    SgAsmGenericSectionPtrList get_sections_by_id(int id) const ROSE_DEPRECATED("use get_sectionById");
    SgAsmGenericSectionPtrList get_sections_by_name(std::string, char='\0') const ROSE_DEPRECATED("use get_sectionsByName");
    SgAsmGenericSectionPtrList get_sections_by_offset(Rose::BinaryAnalysis::Address, Rose::BinaryAnalysis::Address) const
        ROSE_DEPRECATED("use get_sectionsByOffset");
    SgAsmGenericSectionPtrList get_sections_by_rva(Rose::BinaryAnalysis::Address) const ROSE_DEPRECATED("use get_sectionsByRva");
    SgAsmGenericSectionPtrList get_sections_by_va(Rose::BinaryAnalysis::Address) const ROSE_DEPRECATED("use get_sectionsByVa");
    SgAsmGenericSection *get_section_by_id(int, size_t* = nullptr) const ROSE_DEPRECATED("use get_sectionById");
    SgAsmGenericSection *get_section_by_name(const std::string&, char=0, size_t* = nullptr) const
        ROSE_DEPRECATED("use get_sectionByName");
    SgAsmGenericSection*get_section_by_offset(Rose::BinaryAnalysis::Address, Rose::BinaryAnalysis::Address, size_t* = nullptr) const
        ROSE_DEPRECATED("use get_sectionByOffset");
    SgAsmGenericSection *get_section_by_rva(Rose::BinaryAnalysis::Address, size_t* = nullptr) const
        ROSE_DEPRECATED("use get_sectionByRva");
    SgAsmGenericSection *get_section_by_va(Rose::BinaryAnalysis::Address, size_t* = nullptr) const
        ROSE_DEPRECATED("use get_sectionByVa");
    SgAsmGenericSection *get_best_section_by_va(Rose::BinaryAnalysis::Address, size_t* = nullptr) const
        ROSE_DEPRECATED("use get_bestSectionByVa");
    static SgAsmGenericSection *best_section_by_va(const SgAsmGenericSectionPtrList&, Rose::BinaryAnalysis::Address)
        ROSE_DEPRECATED("use bestSectionByVa");
    void shift_extend(SgAsmGenericSection*, Rose::BinaryAnalysis::Address, Rose::BinaryAnalysis::Address, AddressSpace, Elasticity)
        ROSE_DEPRECATED("use shiftExtend");
    void shift_extend(SgAsmGenericSection*, Rose::BinaryAnalysis::Address, Rose::BinaryAnalysis::Address)
        ROSE_DEPRECATED("use shiftExtend");
    Rose::BinaryAnalysis::Address get_next_section_offset(Rose::BinaryAnalysis::Address)
        ROSE_DEPRECATED("use get_nextSectionOffset");
    void add_hole(SgAsmGenericSection*) ROSE_DEPRECATED("use addHole");
    void remove_hole(SgAsmGenericSection*) ROSE_DEPRECATED("use remoeHole");
    void fill_holes() ROSE_DEPRECATED("use fillHoles");
    void unfill_holes() ROSE_DEPRECATED("use unfillHoles");
    void add_header(SgAsmGenericHeader*) ROSE_DEPRECATED("use addHeader");
    void remove_header(SgAsmGenericHeader*) ROSE_DEPRECATED("use removeHeader");
    const char *format_name() const ROSE_DEPRECATED("use formatName");
public:
    /** Destructor. */
    virtual ~SgAsmGenericFile();

public:
    /** Default constructor. */
    SgAsmGenericFile();

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
       // static const VariantT static_variant = V_SgAsmGenericFile;
          enum { static_variant = V_SgAsmGenericFile };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmGenericFile* isSgAsmGenericFile(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmGenericFile* isSgAsmGenericFile( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmGenericFile * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmGenericFileStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmGenericFile * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmGenericFile * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmGenericFile::operator delete (pointer,sizeof(SgAsmGenericFile));
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
 	static SgAsmGenericFile* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmGenericFile* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmGenericFile* sgnode);

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
       // SgAsmGenericFile( SgAsmGenericFileStorageClass& source );





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
          friend class SgAsmGenericFileStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmGenericFile( const SgAsmGenericFileStorageClass& source );

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
          SgAsmGenericFile* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmGenericFile* isSgAsmGenericFile ( SgNode* s );

          typedef SgAsmExecutableFileFormat base_node_type;


// End of memberFunctionString












    protected:
// Start of memberFunctionString
SgAsmDwarfCompilationUnitList* p_dwarfInfo;
          
// End of memberFunctionString
// Start of memberFunctionString
std::string p_name;
          
// End of memberFunctionString
// Start of memberFunctionString
int p_fd;
          
// End of memberFunctionString
// Start of memberFunctionString
struct stat p_sb;
          
// End of memberFunctionString
// Start of memberFunctionString
SgFileContentList p_data;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmGenericHeaderList* p_headers;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmGenericSectionList* p_holes;
          
// End of memberFunctionString
// Start of memberFunctionString
bool p_truncateZeros;
          
// End of memberFunctionString
// Start of memberFunctionString
bool p_trackingReferences;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::AddressIntervalSet p_referencedExtents;
          
// End of memberFunctionString
// Start of memberFunctionString
bool p_neuter;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmGenericFile>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericFile, SgAsmDwarfCompilationUnitList*,&SgAsmGenericFile::p_dwarfInfo>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericFile, std::string,&SgAsmGenericFile::p_name>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericFile, int,&SgAsmGenericFile::p_fd>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericFile, struct stat,&SgAsmGenericFile::p_sb>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericFile, SgFileContentList,&SgAsmGenericFile::p_data>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericFile, SgAsmGenericHeaderList*,&SgAsmGenericFile::p_headers>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericFile, SgAsmGenericSectionList*,&SgAsmGenericFile::p_holes>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericFile, bool,&SgAsmGenericFile::p_truncateZeros>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericFile, bool,&SgAsmGenericFile::p_trackingReferences>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericFile, Rose::BinaryAnalysis::AddressIntervalSet,&SgAsmGenericFile::p_referencedExtents>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericFile, bool,&SgAsmGenericFile::p_neuter>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmGenericFile

/* #line 1043 "/workspace/generated/src/frontend/SageIII//SgAsmGenericFile.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 1050 "/workspace/generated/src/frontend/SageIII//SgAsmGenericFile.h" */

#endif // ROSE_SgAsmGenericFile_H

