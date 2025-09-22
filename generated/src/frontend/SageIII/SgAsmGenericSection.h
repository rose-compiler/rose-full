
#ifndef ROSE_SgAsmGenericSection_H
#define ROSE_SgAsmGenericSection_H
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

// predeclarations for SgAsmGenericSection

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmGenericSection.h" */
/* #line 31262 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#include <Rose/BinaryAnalysis/Address.h>
#include <Rose/BinaryAnalysis/AddressIntervalSet.h>
#include <Rose/BinaryAnalysis/MemoryMap.h>
#include <Rose/BinaryAnalysis/RelativeVirtualAddress.h>
#include <sageContainer.h>

#ifdef ROSE_SgAsmGenericSection_IMPL
#include <SgAsmBasicString.h>
#endif


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmGenericSection
class ROSE_DLL_API SgAsmGenericSection  : public SgAsmExecutableFileFormat
   {
     public:


/* #line 50 "/workspace/generated/src/frontend/SageIII//SgAsmGenericSection.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 31397 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmGenericSection -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmGenericSection");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmExecutableFileFormat);
        s & BOOST_SERIALIZATION_NVP(p_file);
        s & BOOST_SERIALIZATION_NVP(p_header);
        s & BOOST_SERIALIZATION_NVP(p_size);
        s & BOOST_SERIALIZATION_NVP(p_offset);
        s & BOOST_SERIALIZATION_NVP(p_fileAlignment);
        s & BOOST_SERIALIZATION_NVP(p_data);
        s & BOOST_SERIALIZATION_NVP(p_purpose);
        s & BOOST_SERIALIZATION_NVP(p_synthesized);
        s & BOOST_SERIALIZATION_NVP(p_id);
        s & BOOST_SERIALIZATION_NVP(p_name);
        s & BOOST_SERIALIZATION_NVP(p_shortName);
        s & BOOST_SERIALIZATION_NVP(p_mappedPreferredRva);
        s & BOOST_SERIALIZATION_NVP(p_mappedSize);
        s & BOOST_SERIALIZATION_NVP(p_mappedAlignment);
        s & BOOST_SERIALIZATION_NVP(p_mappedReadPermission);
        s & BOOST_SERIALIZATION_NVP(p_mappedWritePermission);
        s & BOOST_SERIALIZATION_NVP(p_mappedExecutePermission);
        s & BOOST_SERIALIZATION_NVP(p_containsCode);
        s & BOOST_SERIALIZATION_NVP(p_mappedActualVa);
        debugSerializationEnd("SgAsmGenericSection");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Reason for section's existence.
     *
     *  This is a union of all the section purposes from the various supported file formats.  However, at this time we're
     *  only interested in a few kinds of sections and therefore most will fall into the SP_OTHER category. */
    enum SectionPurpose {
        SP_UNSPECIFIED,                 /**< File format did not specify a reason and none could be determined. */
        SP_PROGRAM,                     /**< Program-supplied data, code, etc. */
        SP_HEADER,                      /**< Section contains a header for the executable file format. */
        SP_SYMTAB,                      /**< Symbol table. */
        SP_OTHER                        /**< File-specified purpose other than any given in this enum. */
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Properties
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
public:
    /** Property: File to which this section belongs. 
     * 
     * @{ */
    SgAsmGenericFile* const& get_file() const;
    void set_file(SgAsmGenericFile* const&);
    /** @} */

public:
    /** Property: File header that owns this section. 
     * 
     * @{ */
    SgAsmGenericHeader* const& get_header() const;
    void set_header(SgAsmGenericHeader* const&);
    /** @} */

public:
    /** Property: Size of section in file in bytes.
     *
     *  This is the current file size of the section in bytes as it exists in the file.. The original size of the
     *  section (available when @ref parse is called for the function, but possibly updated while parsing) is available
     *  through the size of the original @ref data property.
     *
     *  When ths size is set, some types of sections may do additional work. That additional work must not adjust the size
     *  of other sections or the mapping of any section (use @ref SgAsmGenericFile::shiftExtend to do that).
     *
     *  @{ */
    Rose::BinaryAnalysis::Address get_size() const;
    virtual void set_size(Rose::BinaryAnalysis::Address);
    /** @} */
public:
    /** Property: Offset to start of section in file.
     *
     *  This property holds the current file offset in bytes of this section. When setting the property, some types of
     *  sections may need to do perform additional work. That additional work must not adjust the offset of other sections,
     *  or the mapping of any section.
     *
     *  @{ */
 // Starting file offset of the section

    Rose::BinaryAnalysis::Address get_offset() const;
    virtual void set_offset(Rose::BinaryAnalysis::Address);
    /** @} */
public:
    /** Property: Required file alignment.
     *
     *  Zero and one both imply byte alignment. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::Address const& get_fileAlignment() const;
    void set_fileAlignment(Rose::BinaryAnalysis::Address const&);
    /** @} */

public:
    /** Property: Original content of just this section.
     *
     *  Points into file's content. 
     *  
     *  @{ */
    SgFileContentList const& get_data() const;
    void set_data(SgFileContentList const&);
    /** @} */

public:
    /** Property: General contents of the section. 
     * 
     * @{ */
    SgAsmGenericSection::SectionPurpose const& get_purpose() const;
    void set_purpose(SgAsmGenericSection::SectionPurpose const&);
    /** @} */

public:
    /** Property: Whether section really exists.
     *
     *  If true, then this section was created by the format reader and not actually present in the file. 
     *  
     *  @{ */
    bool const& get_synthesized() const;
    void set_synthesized(bool const&);
    /** @} */

public:
    /** Property: Non-unique section ID or negative.
     *
     *  ELF files have unique id numbers. 
     *  
     *  @{ */
    int const& get_id() const;
    void set_id(int const&);
    /** @} */

public:
    /** Property: Non-unique name of section.
     *
     *  The name may be the empty string. If you just want to change the name of a section use the existing name node and
     *  change its string value.  Assigning a new @ref SgAsmGenericString to the section also changes the parent of the
     *  specified string node.
     *
     *  @{ */
    SgAsmGenericString* const& get_name() const;
    void set_name(SgAsmGenericString *s);
    /** @} */
public:
    /** Property: Abbreviated name.
     *
     *  Some sections have long names like "Import Address Table" that are cumbersome when they appear in assembly
     *  listings.  Therefore, each section may also have a short name.  Reading this property returns the short name
     *  if it's non-empty, otherwise the full name.
     *
     *  @{ */
    void set_shortName(std::string const&);
    std::string get_shortName() const;
    /** @} */
public:
    /** Property: Relative virtual address where section prefers to be mapped.
     *
     *  This is the relative virtual address where the section @em prefers to be mapped. The RVA where the section will
     *  ultimately be mapped by the loader might be different due to file and/or memory alignment constraints and conflicts
     *  with other sections.
     *
     *  The virtual address is relative to the base address stored in the file header.
     *
     *  @{ */
    Rose::BinaryAnalysis::Address const& get_mappedPreferredRva() const;
    virtual void set_mappedPreferredRva(Rose::BinaryAnalysis::Address);
    /** @} */
public:
    /** Property: Mapped size.
     *
     *  Size of section in bytes when it's mapped into virtual memory.
     *
     *  @{ */
    Rose::BinaryAnalysis::Address const& get_mappedSize() const;
    virtual void set_mappedSize(Rose::BinaryAnalysis::Address);
    /** @} */
public:
    /** Property: Alignment in virtual memory. 
     * 
     * @{ */
    Rose::BinaryAnalysis::Address const& get_mappedAlignment() const;
    void set_mappedAlignment(Rose::BinaryAnalysis::Address const&);
    /** @} */

public:
    /** Property: Whether mapped with read permission. 
     * 
     * @{ */
    bool const& get_mappedReadPermission() const;
    void set_mappedReadPermission(bool const&);
    /** @} */

public:
    /** Property: Whether mapped with write permission. 
     * 
     * @{ */
    bool const& get_mappedWritePermission() const;
    void set_mappedWritePermission(bool const&);
    /** @} */

public:
    /** Property: Whether mapped with execute permission. 
     * 
     * @{ */
    bool const& get_mappedExecutePermission() const;
    void set_mappedExecutePermission(bool const&);
    /** @} */

public:
    /** Property: Whether a section is known to contain code.
     *
     *  If a section is known to contain code then this data member is set.  Part of the process of parsing a binary file
     *  is to look at the symbol tables and if any function symbol points into a section then the entire section is marked
     *  as containing code.  This is necessary because ELF Object Files (*.o files) contain one ELF Section per function,
     *  none of which have a memory mapping specification.  By marking those sections as containing code, the LoaderELFObj
     *  class, knows that the section should be mapped to virtual memory for disassembly. 
     *  
     *  @{ */
    bool const& get_containsCode() const;
    void set_containsCode(bool const&);
    /** @} */

public:
    /** Property: Virtual address where ROSE maps this section.
     *
     *  The actual mapping is sometimes different than the preferred mapping indicated in the section table due to file and/or
     *  memory alignment constraints or conflicts with other sections.  The only place values are assigned to this data member is in
     *  the @ref Rose::BinaryAnalysis::BinaryLoader class and subclasses thereof.
     *
     *  The address corresponds to the latest call into the @ref Rose::BinaryAnalysis::BinaryLoader classes.  Depending on the
     *  loader employed, it's possible for a section to be mapped, this @c mapped_actual_va value to be set, and then some other
     *  section to be mapped over the top of all or part of the first section. In that case, the @c mapped_actual_va of the first
     *  section is not reset to zero.  The return value is not conditional upon @ref isMapped since that predicate applies only to
     *  preferred mapping attributes. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::Address const& get_mappedActualVa() const;
    void set_mappedActualVa(Rose::BinaryAnalysis::Address const&);
    /** @} */
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Non-property data members
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
private:
protected: // Allows local_data_pool to be initialized by subclasses. Note, destruction is problematic, freeing non-allocated ptr.
           // Set breakpoint in malloc_error_break to debug [Rasmussen, 2024.03.02]
    /* This is an optional local, writable pool for the p_data member. Normally a section will point into the pool
     * for its SgAsmGenericFile which is memory-mapped (read-only) from the actual file being parsed. The default
     * unparsing action is to write the original data back to the file. By allowing a section to allocate its own
     * pool for `data` we create a very easy way to get data into the unparsed file (the alternative is to derive
     * a new class and override the unparse() method). */
    unsigned char *local_data_pool;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Constructor linking object into ASt.
     *
     *  Section constructors set the optional section header relationship--a bidirectional link between this new section
     *  and its optional, single header.  This new section points to its header and the header contains a list that points
     *  to this new section.  The section-to-header part of the link is deleted by the default destructor by virtue of
     *  being a simple pointer, but we also need to delete the other half of the link in the destructors. */
    SgAsmGenericSection(SgAsmGenericFile*, SgAsmGenericHeader*);

    /** Prints info about offsets into known sections. */
    static void dumpContainingSections(FILE*, const std::string &prefix, Rose::BinaryAnalysis::RelativeVirtualAddress,
                                       const SgAsmGenericSectionPtrList&);

    /** Saves a reference to the original file data for a section based on the section's current offset and size.
     *
     *  Once this happens, changing the offset or size of the file will not affect the original data. The original data can
     *  be extended, however, by calling @ref extend, which is typically done during parsing. */
    void grabContent();

    /** Parse contents of the section.
     *
     *  This is normally reimplemented in subclasses. */
    virtual SgAsmGenericSection* parse();

    /** Print some debugging info. */
    virtual void dump(FILE*, const char *prefix, ssize_t idx) const;

    /** Called prior to unparse to make things consistent. */
    virtual bool reallocate() { return false; }

    /** Write a section back to the file.
     *
     *  This is the generic version that simply writes the content. Subclasses should override this. */
    virtual void unparse(std::ostream&) const;

    /** Write just the specified regions back to the file */
    void unparse(std::ostream&, const ExtentMap&) const;

    /** Write holes (unreferenced areas) back to the file */
    void unparseHoles(std::ostream&) const;

    /** Predicate determining whether this section is also a top-level file header.
     *
     *  Returns true (the associated @ref SgAsmGenericHeader pointer) if this section is a top-level file header, false
     *  (NULL) otherwise. */
    SgAsmGenericHeader *isFileHeader();

    /** File offset for end of section. */
    Rose::BinaryAnalysis::Address get_endOffset() const;

    /** Extend a section by some number of bytes during the construction and/or parsing phase.
     *
     *  This is function is considered to be part of the parsing and construction of a section--it changes the part of the file
     *  that's considered the "original size" of the section. To adjust the size of a section after the executable file is parsed,
     *  see @ref SgAsmGenericFile::shiftExtend.  Sections are allowed to extend beyond the end of the file and the original data
     *  (the @ref data property) is extended only up to the end of the file. */
    void extend(Rose::BinaryAnalysis::Address nbytes);

    /** Write data to a file section.
     *
     *  Writes data to the specified file at the specified offset (first two arguments). The remaining arguments specify the
     *  data to be written.
     *
     *  Returns the section-relative byte offset for the first byte beyond what would have been written if all bytes of the buffer
     *  were written.
     *
     *  The buffer is allowed to extend past the end of the section as long as the part that extends beyond is all zeros. The zeros
     *  will not be written to the output file.  Furthermore, any trailing zeros that extend beyond the end of the file will not be
     *  written (end-of-file is determined by @ref SgAsmGenericFile::get_originalSize).
     *
     * @{ */
    Rose::BinaryAnalysis::Address write(std::ostream&, Rose::BinaryAnalysis::Address offset, size_t bufsize, const void *buf) const;
    Rose::BinaryAnalysis::Address write(std::ostream&, Rose::BinaryAnalysis::Address offset, const std::string &str) const;
    Rose::BinaryAnalysis::Address write(std::ostream&, Rose::BinaryAnalysis::Address offset, char c) const;
    Rose::BinaryAnalysis::Address write(std::ostream&, Rose::BinaryAnalysis::Address offset, const SgFileContentList &buf) const;
    Rose::BinaryAnalysis::Address write(std::ostream&, Rose::BinaryAnalysis::Address offset, const SgUnsignedCharList &buf) const;
    /** @} */

    /** Write an unsigned little-endian 128-bit value.
     *
     *  Encode an unsigned value as LEB128 and return the next offset. */
    Rose::BinaryAnalysis::Address writeUleb128(unsigned char*, Rose::BinaryAnalysis::Address offset, uint64_t) const;

    /** Write a signed little-endian 128-bit value.
     *
     *  Encode an signed value as LEB128 and return the next offset. */
    Rose::BinaryAnalysis::Address writeSleb128(unsigned char*, Rose::BinaryAnalysis::Address offset, int64_t) const;

    /** Reads data from a file.
     *
     *  Reads up to @p size bytes of data beginning at byte @p start_offset from the beginning of the file, placing the
     *  results in @p dst_buf and returning the number of bytes read. The return value could be smaller than @p size if the
     *  end-of-file is reached. If the return value is smaller than @p size then one of two things happen: if @p strict is
     *  set (the default) then an @ref SgAsmExecutableFileFormat::ShortRead exception is thrown; otherwise the @p dst_buf
     *  will be padded with zero bytes so that exactly @p size bytes of @p dst_buf are always initialized. */
    size_t readContent(Rose::BinaryAnalysis::Address abs_offset, void *dst_buf, Rose::BinaryAnalysis::Address size, bool strict=true);

    /** Reads data from a file.
     *
     *  Reads up to @p size bytes of data beginning at byte @p start (absolute or relative virtual address) in the mapped address
     *  space and placing the results in @p dst_buf and returning the number of bytes read. The return value could be smaller than
     *  @p size if the reading encounters virtual addresses that are not mapped.  When an unmapped virtual address is encountered
     *  the reading stops (even if subsequent virtual addresses are defined) and one of two things happen: if @p strict is set (the
     *  default) then an @ref Rose::BinaryAnalysis::MemoryMap::NotMapped exception is thrown, otherwise the @p dst_buf is padded
     *  with zeros so that all @p size bytes are initialized. The @p map is used to map virtual addresses to file offsets; if @p map
     *  is NULL then the map defined in the underlying file is used.
     *
     * @{ */
    size_t readContent(const Rose::BinaryAnalysis::MemoryMap::Ptr&, Rose::BinaryAnalysis::Address start,  void *dst_buf,
                       Rose::BinaryAnalysis::Address size, bool strict=true);
    size_t readContent(const Rose::BinaryAnalysis::MemoryMap::Ptr&, const Rose::BinaryAnalysis::RelativeVirtualAddress &start,
                       void *dst_buf, Rose::BinaryAnalysis::Address size, bool strict=true);
    /** @} */

    /** Reads data from a file.
     *
     *  This behaves the same as @ref readContent except the starting offset is relative to the beginning of this section.  Reading
     *  past the end of the section is not allowed and treated as a short read, and one of two things happen: if @p strict is set
     *  (the default) then an @ref SgAsmExecutableFileFormat::ShortRead exception is thrown, otherwise the result is zero padded so
     *  as to contain exactly @p size bytes. */
    size_t readContentLocal(Rose::BinaryAnalysis::Address rel_offset, void *dst_buf, Rose::BinaryAnalysis::Address size,
                            bool strict=true);

    /** Reads a string from the file.
     *
     *  The string begins at the specified virtual address and continues until the first NUL byte or until we reach an address that
     *  is not mapped. However, if @p strict is set (the default) and we reach an unmapped address then an @ref
     *  Rose::BinaryAnalysis::MemoryMap::NotMapped exception is thrown. The @p map defines the mapping from virtual addresses to
     *  file offsets; if @p map is NULL then the map defined in the underlying file is used. */
    std::string readContentString(const Rose::BinaryAnalysis::MemoryMap::Ptr&, Rose::BinaryAnalysis::Address va, bool strict=true);

    /** Reads a string from the file.
     *
     *  The string begins at the specified absolute or header-relative file offset and continues until the first NUL byte
     *  or end of file is reached. However, if @p strict is set (the default) and we reach the end-of-file then an @ref
     *  SgAsmExecutableFileFormat::ShortRead exception is thrown.
     *
     * @{ */
    std::string readContentString(Rose::BinaryAnalysis::Address abs_offset, bool strict=true);
    std::string readContentString(const Rose::BinaryAnalysis::MemoryMap::Ptr &map, Rose::BinaryAnalysis::RelativeVirtualAddress rva,
                                  bool strict=true);
    /** @} */

    /** Reads a string from the file.
     *
     *  The string begins at the specified file offset relative to the start of this section and continues until the first
     *  NUL byte or the end of section is reached. However, if @p strict is set (the default) and we reach the
     *  end-of-section then an @ref SgAsmExecutableFileFormat::ShortRead exception is thrown. */
    std::string readContentLocalString(Rose::BinaryAnalysis::Address rel_offset, bool strict=true);

    /** Reads content of a section and returns it as a container.
     *
     *  The returned container will always have exactly @p size byte.  If @p size bytes are not available in this section
     *  at the specified offset then the container will be zero padded. This method always behaves as a non-strict read. */
    SgUnsignedCharList readContentLocalUcl(Rose::BinaryAnalysis::Address rel_offset, Rose::BinaryAnalysis::Address size);

    /** Read a signed little-endian 128-bit value.
     *
     *  Extract a signed LEB128 value and adjust @p rel_offset according to how many bytes it occupied. If @p strict is set
     *  (the default) and the end of the section is reached then throw an @ref SgAsmExecutableFileFormat::ShortRead
     *  exception. Upon return, the @p rel_offset will be adjusted to point to the first byte after the LEB128 value. */
    int64_t readContentLocalSleb128(Rose::BinaryAnalysis::Address *rel_offset, bool strict=true);

    /** Read an unsigned little-endian 128-bit value.
     *
     *  Extract an unsigned LEB128 value and adjust @p rel_offset according to how many bytes it occupied.  If @p strict is
     *  set (the default) and the end of the section is reached then throw an @ref SgAsmExecutableFileFormat::ShortRead
     *  exception. Upon return, the @p rel_offset will be adjusted to point to the first byte after the LEB128 value. */
    uint64_t readContentLocalUleb128(Rose::BinaryAnalysis::Address *rel_offset, bool strict=true);

    /** Obtain a local, writable pool to hold content.
     *
     *  Sections typically point into the memory mapped, read-only file stored in the SgAsmGenericFile parent initialized by calling
     *  @ref grabContent (or indirectly by calling @ref parse).  This is also the same data which is, by default, written back out
     *  to the new file during @ref unparse.  Programs modify section content by either overriding the @ref unparse method or by
     *  modifying the @ref data property. But in order to modify @ref data we have to make sure that it's pointing to a read/write
     *  memory pool. This function replaces the read-only memory pool with a new one containing @p nbytes bytes of zeros. */
    unsigned char *writableContent(size_t nbytes);

    /** Returns a list of parts of a single section that have been referenced.
     *
     *  The offsets are relative to the start of the section. The tracking actually happens at the entire file level (see the @ref
     *  SgAsmGenericFile::referencedExtents property) and this function returns that same information but limits the results to this
     *  section, and returns section offsets rather than file offsets. */
    Rose::BinaryAnalysis::AddressIntervalSet get_referencedExtents() const;

    /** Returns a list of parts of a single section that have not been referenced.
     *
     *  The offsets are relative to the start of the section. The tracking actually happens at the entire file level (see @ref
     *  SgAsmGenericFile::get_unreferencedExtents) and this function returns that same information but limits the results to this
     *  section, and returns section offsets rather than file offsets. */
    Rose::BinaryAnalysis::AddressIntervalSet get_unreferencedExtents() const;

    /** Whether section desires to be mapped to memory.
     *
     *  This predicate is true iff this section has a non-zero mapped address and size. */
    bool isMapped() const;

    /** Causes section to not be mapped to memory.
     *
     *  This method sets the mapped address and size to zero. */
    void clearMapped();

    /** Base virtual address for a section.
     *
     *  Returns  zero if the section is not associated with a header.  This is just a convenience method to get the base
     *  virtual address of the file header that owns this section. */
    Rose::BinaryAnalysis::Address get_baseVa() const;

    /** Virtual address where section prefers to be mapped.
     *
     *  Returns (non-relative) virtual address if mapped, zero otherwise. See also, the @ref mappedPreferredRva property. */
    Rose::BinaryAnalysis::Address get_mappedPreferredVa() const;

    /** File offset for specified virtual address.
     *
     *  Returns the file offset associated with the virtual address of a mapped section. The @ref Rose::BinaryAnalysis::MemoryMap
     *  class is a better interface to this same information. */
    Rose::BinaryAnalysis::Address get_vaOffset(Rose::BinaryAnalysis::Address va) const;

    /** File offset for specified relative virtual address.
     *
     *  Returns the file offset associated with the relative virtual address of a mapped section.  The @ref
     *  Rose::BinaryAnalysis::MemoryMap class is a better interface to this same information. */
    Rose::BinaryAnalysis::Address get_rvaOffset(Rose::BinaryAnalysis::Address rva) const;

    /** Returns the file extent for the section.
     *
     *  The extent end points are determined by calling @ref get_offset and @ref get_size. */
    Extent get_fileExtent() const;

    /** Returns the memory extent for a mapped section.
     *
     *  If the section is not mapped then offset and size will be zero. The return value is computed from the @ref
     *  mappedPreferredRva and @ref mappedSize properties. */
    Extent get_mappedPreferredExtent() const;

    /** Increase file offset and mapping address to satisfy alignment constraints.
     *
     *  This is typically done when initializing a new section. The constructor places the new section at the end of the file before
     *  it knows what the alignment constraints will be. The user should then set the alignment constraints (see @ref fileAlignment
     *  and @ref mappedAlignment properties) and call this method.  This method must be called before any additional sections are
     *  appended to the file.
     *
     *  The file offset and memory mapping address are adjusted independently.
     *
     *  On the other hand, if additional sections are in the way, they must first be moved out of the way with the
     *  @ref SgAsmGenericFile::shiftExtend method.
     *
     *  Returns true if the file offset and/or mapping address changed as a result of this call. */
    bool align();

protected:
    virtual void destructorHelper() override;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deprecated 2023-11
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    Rose::BinaryAnalysis::Address get_file_alignment() const ROSE_DEPRECATED("use get_fileAlignment");
    void set_file_alignment(Rose::BinaryAnalysis::Address) ROSE_DEPRECATED("use set_fileAlignment");
    std::string get_short_name() const ROSE_DEPRECATED("use get_shortName");
    void set_short_name(const std::string&) ROSE_DEPRECATED("use set_shortName");
    Rose::BinaryAnalysis::Address get_mapped_preferred_rva() const ROSE_DEPRECATED("use get_mappedPreferredRva");
    void set_mapped_preferred_rva(Rose::BinaryAnalysis::Address) ROSE_DEPRECATED("use set_mappedPreferredRva");
    Rose::BinaryAnalysis::Address get_mapped_size() const ROSE_DEPRECATED("use get_mappedSize");
    void set_mapped_size(Rose::BinaryAnalysis::Address) ROSE_DEPRECATED("use set_mappedSize");
    Rose::BinaryAnalysis::Address get_mapped_alignment() const ROSE_DEPRECATED("use get_mappedAlignment");
    void set_mapped_alignment(Rose::BinaryAnalysis::Address) ROSE_DEPRECATED("use set_mappedAlignment");
    bool get_mapped_rperm() const ROSE_DEPRECATED("use get_mappedReadPermission");
    void set_mapped_rperm(bool) ROSE_DEPRECATED("use set_mappedReadPermission");
    bool get_mapped_wperm() const ROSE_DEPRECATED("use get_mappedWritePermission");
    void set_mapped_wperm(bool) ROSE_DEPRECATED("use set_mappedWritePermission");
    bool get_mapped_xperm() const ROSE_DEPRECATED("use get_mappedExecutePermission");
    void set_mapped_xperm(bool) ROSE_DEPRECATED("use set_mappedExecutePermission");
    bool get_contains_code() const ROSE_DEPRECATED("use get_containsCode");
    void set_contains_code(bool) ROSE_DEPRECATED("use set_containsCode");
    Rose::BinaryAnalysis::Address get_mapped_actual_va() const ROSE_DEPRECATED("use get_mappedActualVa");
    void set_mapped_actual_va(Rose::BinaryAnalysis::Address) ROSE_DEPRECATED("use set_mappedActualVa");
    static void dump_containing_sections(FILE*, const std::string&, Rose::BinaryAnalysis::RelativeVirtualAddress,
                                         const SgAsmGenericSectionPtrList&)
        ROSE_DEPRECATED("use dumpContainingSections");
    void grab_content() ROSE_DEPRECATED("use grabContent");
    void unparse_holes(std::ostream&) const ROSE_DEPRECATED("use unparseHoles");
    SgAsmGenericHeader *is_file_header() ROSE_DEPRECATED("use isFileHeader");
    Rose::BinaryAnalysis::Address get_end_offset() const ROSE_DEPRECATED("use get_endOffset");
    Rose::BinaryAnalysis::Address write_uleb128(unsigned char*, Rose::BinaryAnalysis::Address, uint64_t) const
        ROSE_DEPRECATED("use writeUleb128");
    Rose::BinaryAnalysis::Address write_sleb128(unsigned char*, Rose::BinaryAnalysis::Address, int64_t) const
        ROSE_DEPRECATED("use writeSleb128");
    size_t read_content(Rose::BinaryAnalysis::Address, void*, Rose::BinaryAnalysis::Address, bool=true)
        ROSE_DEPRECATED("use readContent");
    size_t read_content(const Rose::BinaryAnalysis::MemoryMap::Ptr&, Rose::BinaryAnalysis::Address,  void*,
                        Rose::BinaryAnalysis::Address, bool=true) ROSE_DEPRECATED("use readContent");
    size_t read_content(const Rose::BinaryAnalysis::MemoryMap::Ptr&, const Rose::BinaryAnalysis::RelativeVirtualAddress&, void*,
                        Rose::BinaryAnalysis::Address, bool=true)
        ROSE_DEPRECATED("use readContent");
    size_t read_content_local(Rose::BinaryAnalysis::Address, void*, Rose::BinaryAnalysis::Address, bool=true)
        ROSE_DEPRECATED("use readContentLocal");
    std::string read_content_str(const Rose::BinaryAnalysis::MemoryMap::Ptr&, Rose::BinaryAnalysis::Address, bool=true)
        ROSE_DEPRECATED("use readContentString");
    std::string read_content_str(Rose::BinaryAnalysis::Address, bool=true) ROSE_DEPRECATED("use readContentString");
    std::string read_content_str(const Rose::BinaryAnalysis::MemoryMap::Ptr&, Rose::BinaryAnalysis::RelativeVirtualAddress,
                                 bool=true)
        ROSE_DEPRECATED("use readContentString");
    std::string read_content_local_str(Rose::BinaryAnalysis::Address, bool=true) ROSE_DEPRECATED("use readContentLocalString");
    SgUnsignedCharList read_content_local_ucl(Rose::BinaryAnalysis::Address, Rose::BinaryAnalysis::Address)
        ROSE_DEPRECATED("use readContentLocalUcl");
    int64_t read_content_local_sleb128(Rose::BinaryAnalysis::Address*, bool=true) ROSE_DEPRECATED("use readContentLocalSleb128");
    uint64_t read_content_local_uleb128(Rose::BinaryAnalysis::Address*, bool=true) ROSE_DEPRECATED("use readContentLocalUleb128");
    unsigned char *writable_content(size_t) ROSE_DEPRECATED("use writableContent");
    Rose::BinaryAnalysis::AddressIntervalSet get_referenced_extents() const ROSE_DEPRECATED("use get_referencedExtents");
    Rose::BinaryAnalysis::AddressIntervalSet get_unreferenced_extents() const ROSE_DEPRECATED("use get_unreferencedExtents");
    bool is_mapped() const ROSE_DEPRECATED("use isMapped");
    void clear_mapped() ROSE_DEPRECATED("use clearMapped");
    Rose::BinaryAnalysis::Address get_base_va() const ROSE_DEPRECATED("use get_baseVa");
    Rose::BinaryAnalysis::Address get_mapped_preferred_va() const ROSE_DEPRECATED("use get_mappedPreferredVa");
    Rose::BinaryAnalysis::Address get_va_offset(Rose::BinaryAnalysis::Address) const ROSE_DEPRECATED("use get_vaOffset");
    Rose::BinaryAnalysis::Address get_rva_offset(Rose::BinaryAnalysis::Address) const ROSE_DEPRECATED("use get_rvaOffset");
    Extent get_file_extent() const ROSE_DEPRECATED("use get_fileExtent");
    Extent get_mapped_preferred_extent() const ROSE_DEPRECATED("use get_mappedPreferredExtent");
public:
    /** Destructor. */
    virtual ~SgAsmGenericSection();

public:
    /** Default constructor. */
    SgAsmGenericSection();

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
       // static const VariantT static_variant = V_SgAsmGenericSection;
          enum { static_variant = V_SgAsmGenericSection };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmGenericSection* isSgAsmGenericSection(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmGenericSection* isSgAsmGenericSection( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmGenericSection * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmGenericSectionStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmGenericSection * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmGenericSection * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmGenericSection::operator delete (pointer,sizeof(SgAsmGenericSection));
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
 	static SgAsmGenericSection* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmGenericSection* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmGenericSection* sgnode);

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
       // SgAsmGenericSection( SgAsmGenericSectionStorageClass& source );





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
          friend class SgAsmGenericSectionStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmGenericSection( const SgAsmGenericSectionStorageClass& source );

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
          SgAsmGenericSection* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmGenericSection* isSgAsmGenericSection ( SgNode* s );

          typedef SgAsmExecutableFileFormat base_node_type;


// End of memberFunctionString




















    protected:
// Start of memberFunctionString
SgAsmGenericFile* p_file;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmGenericHeader* p_header;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_size;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_offset;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_fileAlignment;
          
// End of memberFunctionString
// Start of memberFunctionString
SgFileContentList p_data;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmGenericSection::SectionPurpose p_purpose;
          
// End of memberFunctionString
// Start of memberFunctionString
bool p_synthesized;
          
// End of memberFunctionString
// Start of memberFunctionString
int p_id;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmGenericString* p_name;
          
// End of memberFunctionString
// Start of memberFunctionString
std::string p_shortName;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_mappedPreferredRva;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_mappedSize;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_mappedAlignment;
          
// End of memberFunctionString
// Start of memberFunctionString
bool p_mappedReadPermission;
          
// End of memberFunctionString
// Start of memberFunctionString
bool p_mappedWritePermission;
          
// End of memberFunctionString
// Start of memberFunctionString
bool p_mappedExecutePermission;
          
// End of memberFunctionString
// Start of memberFunctionString
bool p_containsCode;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::Address p_mappedActualVa;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmGenericSection>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, SgAsmGenericFile*,&SgAsmGenericSection::p_file>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, SgAsmGenericHeader*,&SgAsmGenericSection::p_header>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, Rose::BinaryAnalysis::Address,&SgAsmGenericSection::p_size>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, Rose::BinaryAnalysis::Address,&SgAsmGenericSection::p_offset>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, Rose::BinaryAnalysis::Address,&SgAsmGenericSection::p_fileAlignment>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, SgFileContentList,&SgAsmGenericSection::p_data>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, SgAsmGenericSection::SectionPurpose,&SgAsmGenericSection::p_purpose>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, bool,&SgAsmGenericSection::p_synthesized>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, int,&SgAsmGenericSection::p_id>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, SgAsmGenericString*,&SgAsmGenericSection::p_name>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, std::string,&SgAsmGenericSection::p_shortName>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, Rose::BinaryAnalysis::Address,&SgAsmGenericSection::p_mappedPreferredRva>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, Rose::BinaryAnalysis::Address,&SgAsmGenericSection::p_mappedSize>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, Rose::BinaryAnalysis::Address,&SgAsmGenericSection::p_mappedAlignment>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, bool,&SgAsmGenericSection::p_mappedReadPermission>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, bool,&SgAsmGenericSection::p_mappedWritePermission>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, bool,&SgAsmGenericSection::p_mappedExecutePermission>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, bool,&SgAsmGenericSection::p_containsCode>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmGenericSection, Rose::BinaryAnalysis::Address,&SgAsmGenericSection::p_mappedActualVa>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmGenericSection

/* #line 1195 "/workspace/generated/src/frontend/SageIII//SgAsmGenericSection.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 1202 "/workspace/generated/src/frontend/SageIII//SgAsmGenericSection.h" */

#endif // ROSE_SgAsmGenericSection_H

