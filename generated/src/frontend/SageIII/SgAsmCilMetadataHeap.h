
#ifndef ROSE_SgAsmCilMetadataHeap_H
#define ROSE_SgAsmCilMetadataHeap_H
#include <RoseFirst.h>
#include <Cxx_GrammarDeclarations.h>
#include <SgAsmCilDataStream.h>



/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

// WARNING -- GENERATED CODE -- DO NOT MODIFY THIS CODE -- WARNING!
//      This code is automatically generated for each 
//      terminal and non-terminal within the defined 
//      grammar.  There is a simple way to change the 
//      code to fix bugs etc.  See the ROSE README file
//      for directions.

// tps: (02/22/2010): Adding DLL export requirements
#include "rosedll.h"

// predeclarations for SgAsmCilMetadataHeap

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmCilMetadataHeap.h" */
/* #line 35171 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#ifdef ROSE_SgAsmCilMetadataHeap_IMPL
#include <SgAsmCilAssemblyTable.h>
#include <SgAsmCilAssemblyOSTable.h>
#include <SgAsmCilAssemblyProcessorTable.h>
#include <SgAsmCilAssemblyRefTable.h>
#include <SgAsmCilAssemblyRefOSTable.h>
#include <SgAsmCilAssemblyRefProcessorTable.h>
#include <SgAsmCilClassLayoutTable.h>
#include <SgAsmCilConstantTable.h>
#include <SgAsmCilCustomAttributeTable.h>
#include <SgAsmCilDeclSecurityTable.h>
#include <SgAsmCilEventTable.h>
#include <SgAsmCilEventMapTable.h>
#include <SgAsmCilExportedTypeTable.h>
#include <SgAsmCilFieldTable.h>
#include <SgAsmCilFieldLayoutTable.h>
#include <SgAsmCilFieldMarshalTable.h>
#include <SgAsmCilFieldRVATable.h>
#include <SgAsmCilFileTable.h>
#include <SgAsmCilGenericParamTable.h>
#include <SgAsmCilGenericParamConstraintTable.h>
#include <SgAsmCilImplMapTable.h>
#include <SgAsmCilInterfaceImplTable.h>
#include <SgAsmCilManifestResourceTable.h>
#include <SgAsmCilMemberRefTable.h>
#include <SgAsmCilMethodDefTable.h>
#include <SgAsmCilMethodImplTable.h>
#include <SgAsmCilMethodSemanticsTable.h>
#include <SgAsmCilMethodSpecTable.h>
#include <SgAsmCilModuleTable.h>
#include <SgAsmCilModuleRefTable.h>
#include <SgAsmCilNestedClassTable.h>
#include <SgAsmCilParamTable.h>
#include <SgAsmCilPropertyTable.h>
#include <SgAsmCilPropertyMapTable.h>
#include <SgAsmCilStandAloneSigTable.h>
#include <SgAsmCilTypeDefTable.h>
#include <SgAsmCilTypeRefTable.h>
#include <SgAsmCilTypeSpecTable.h>
#endif


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmCilMetadataHeap
class ROSE_DLL_API SgAsmCilMetadataHeap  : public SgAsmCilDataStream
   {
     public:


/* #line 81 "/workspace/generated/src/frontend/SageIII//SgAsmCilMetadataHeap.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 35502 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmCilMetadataHeap -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmCilMetadataHeap");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmCilDataStream);
        s & BOOST_SERIALIZATION_NVP(p_ReservedAlwaysZero);
        s & BOOST_SERIALIZATION_NVP(p_MajorVersion);
        s & BOOST_SERIALIZATION_NVP(p_MinorVersion);
        s & BOOST_SERIALIZATION_NVP(p_HeapSizes);
        s & BOOST_SERIALIZATION_NVP(p_ReservedAlwaysOne);
        s & BOOST_SERIALIZATION_NVP(p_Valid);
        s & BOOST_SERIALIZATION_NVP(p_Sorted);
        s & BOOST_SERIALIZATION_NVP(p_NumberOfRows);
        s & BOOST_SERIALIZATION_NVP(p_DataSizeFlags);
        s & BOOST_SERIALIZATION_NVP(p_AssemblyTable);
        s & BOOST_SERIALIZATION_NVP(p_AssemblyOSTable);
        s & BOOST_SERIALIZATION_NVP(p_AssemblyProcessorTable);
        s & BOOST_SERIALIZATION_NVP(p_AssemblyRefTable);
        s & BOOST_SERIALIZATION_NVP(p_AssemblyRefOSTable);
        s & BOOST_SERIALIZATION_NVP(p_AssemblyRefProcessorTable);
        s & BOOST_SERIALIZATION_NVP(p_ClassLayoutTable);
        s & BOOST_SERIALIZATION_NVP(p_ConstantTable);
        s & BOOST_SERIALIZATION_NVP(p_CustomAttributeTable);
        s & BOOST_SERIALIZATION_NVP(p_DeclSecurityTable);
        s & BOOST_SERIALIZATION_NVP(p_EventTable);
        s & BOOST_SERIALIZATION_NVP(p_EventMapTable);
        s & BOOST_SERIALIZATION_NVP(p_ExportedTypeTable);
        s & BOOST_SERIALIZATION_NVP(p_FieldTable);
        s & BOOST_SERIALIZATION_NVP(p_FieldLayoutTable);
        s & BOOST_SERIALIZATION_NVP(p_FieldMarshalTable);
        s & BOOST_SERIALIZATION_NVP(p_FieldRVATable);
        s & BOOST_SERIALIZATION_NVP(p_FileTable);
        s & BOOST_SERIALIZATION_NVP(p_GenericParamTable);
        s & BOOST_SERIALIZATION_NVP(p_GenericParamConstraintTable);
        s & BOOST_SERIALIZATION_NVP(p_ImplMapTable);
        s & BOOST_SERIALIZATION_NVP(p_InterfaceImplTable);
        s & BOOST_SERIALIZATION_NVP(p_ManifestResourceTable);
        s & BOOST_SERIALIZATION_NVP(p_MemberRefTable);
        s & BOOST_SERIALIZATION_NVP(p_MethodDefTable);
        s & BOOST_SERIALIZATION_NVP(p_MethodImplTable);
        s & BOOST_SERIALIZATION_NVP(p_MethodSemanticsTable);
        s & BOOST_SERIALIZATION_NVP(p_MethodSpecTable);
        s & BOOST_SERIALIZATION_NVP(p_ModuleTable);
        s & BOOST_SERIALIZATION_NVP(p_ModuleRefTable);
        s & BOOST_SERIALIZATION_NVP(p_NestedClassTable);
        s & BOOST_SERIALIZATION_NVP(p_ParamTable);
        s & BOOST_SERIALIZATION_NVP(p_PropertyTable);
        s & BOOST_SERIALIZATION_NVP(p_PropertyMapTable);
        s & BOOST_SERIALIZATION_NVP(p_StandAloneSigTable);
        s & BOOST_SERIALIZATION_NVP(p_TypeDefTable);
        s & BOOST_SERIALIZATION_NVP(p_TypeRefTable);
        s & BOOST_SERIALIZATION_NVP(p_TypeSpecTable);
        debugSerializationEnd("SgAsmCilMetadataHeap");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION

public:
    /** Property: 4 reserved bytes. 
     * 
     * @{ */
    uint32_t const& get_ReservedAlwaysZero() const;
    void set_ReservedAlwaysZero(uint32_t const&);
    /** @} */

public:
    /** Property: A 1-byte constant. 
     * 
     * @{ */
    uint8_t const& get_MajorVersion() const;
    void set_MajorVersion(uint8_t const&);
    /** @} */

public:
    /** Property: A 1-byte constant. 
     * 
     * @{ */
    uint8_t const& get_MinorVersion() const;
    void set_MinorVersion(uint8_t const&);
    /** @} */

public:
    /** Property: A 1-byte constant indicating the index sizes of streams. 
     * 
     * @{ */
    uint8_t const& get_HeapSizes() const;
    void set_HeapSizes(uint8_t const&);
    /** @} */

public:
    /** Property: A 1-byte constant. 
     * 
     * @{ */
    uint8_t const& get_ReservedAlwaysOne() const;
    void set_ReservedAlwaysOne(uint8_t const&);
    /** @} */

public:
    /** Property: A 4-byte value indicating which metadata tables are present. 
     * 
     * @{ */
    uint64_t const& get_Valid() const;
    void set_Valid(uint64_t const&);
    /** @} */

public:
    /** Property: A 4-byte value. 
     * 
     * @{ */
    uint64_t const& get_Sorted() const;
    void set_Sorted(uint64_t const&);
    /** @} */

public:
    /** Property: A vector indicating how many rows the present tables contain. 
     * 
     * @{ */
    std::vector<uint32_t> const& get_NumberOfRows() const;
    void set_NumberOfRows(std::vector<uint32_t> const&);
    /** @} */

public:
    /** Property: precomputed flags that determine whether a metadata reference is stored as 2 or 4 byte value in the file. 
     * 
     * @{ */
    uint64_t const& get_DataSizeFlags() const;
    void set_DataSizeFlags(uint64_t const&);
    /** @} */

public:
    /** Property: AssemblyTable. 
     * 
     * @{ */
    SgAsmCilAssemblyTable* const& get_AssemblyTable() const;
    void set_AssemblyTable(SgAsmCilAssemblyTable* const&);
    /** @} */

public:
    /** Property: AssemblyOSTable. 
     * 
     * @{ */
    SgAsmCilAssemblyOSTable* const& get_AssemblyOSTable() const;
    void set_AssemblyOSTable(SgAsmCilAssemblyOSTable* const&);
    /** @} */

public:
    /** Property: AssemblyProcessorTable. 
     * 
     * @{ */
    SgAsmCilAssemblyProcessorTable* const& get_AssemblyProcessorTable() const;
    void set_AssemblyProcessorTable(SgAsmCilAssemblyProcessorTable* const&);
    /** @} */

public:
    /** Property: AssemblyRefTable. 
     * 
     * @{ */
    SgAsmCilAssemblyRefTable* const& get_AssemblyRefTable() const;
    void set_AssemblyRefTable(SgAsmCilAssemblyRefTable* const&);
    /** @} */

public:
    /** Property: AssemblyRefOSTable. 
     * 
     * @{ */
    SgAsmCilAssemblyRefOSTable* const& get_AssemblyRefOSTable() const;
    void set_AssemblyRefOSTable(SgAsmCilAssemblyRefOSTable* const&);
    /** @} */

public:
    /** Property: AssemblyRefProcessorTable. 
     * 
     * @{ */
    SgAsmCilAssemblyRefProcessorTable* const& get_AssemblyRefProcessorTable() const;
    void set_AssemblyRefProcessorTable(SgAsmCilAssemblyRefProcessorTable* const&);
    /** @} */

public:
    /** Property: ClassLayoutTable. 
     * 
     * @{ */
    SgAsmCilClassLayoutTable* const& get_ClassLayoutTable() const;
    void set_ClassLayoutTable(SgAsmCilClassLayoutTable* const&);
    /** @} */

public:
    /** Property: ConstantTable. 
     * 
     * @{ */
    SgAsmCilConstantTable* const& get_ConstantTable() const;
    void set_ConstantTable(SgAsmCilConstantTable* const&);
    /** @} */

public:
    /** Property: CustomAttributeTable. 
     * 
     * @{ */
    SgAsmCilCustomAttributeTable* const& get_CustomAttributeTable() const;
    void set_CustomAttributeTable(SgAsmCilCustomAttributeTable* const&);
    /** @} */

public:
    /** Property: DeclSecurityTable. 
     * 
     * @{ */
    SgAsmCilDeclSecurityTable* const& get_DeclSecurityTable() const;
    void set_DeclSecurityTable(SgAsmCilDeclSecurityTable* const&);
    /** @} */

public:
    /** Property: EventTable. 
     * 
     * @{ */
    SgAsmCilEventTable* const& get_EventTable() const;
    void set_EventTable(SgAsmCilEventTable* const&);
    /** @} */

public:
    /** Property: EventMapTable. 
     * 
     * @{ */
    SgAsmCilEventMapTable* const& get_EventMapTable() const;
    void set_EventMapTable(SgAsmCilEventMapTable* const&);
    /** @} */

public:
    /** Property: ExportedTypeTable. 
     * 
     * @{ */
    SgAsmCilExportedTypeTable* const& get_ExportedTypeTable() const;
    void set_ExportedTypeTable(SgAsmCilExportedTypeTable* const&);
    /** @} */

public:
    /** Property: FieldTable. 
     * 
     * @{ */
    SgAsmCilFieldTable* const& get_FieldTable() const;
    void set_FieldTable(SgAsmCilFieldTable* const&);
    /** @} */

public:
    /** Property: FieldLayoutTable. 
     * 
     * @{ */
    SgAsmCilFieldLayoutTable* const& get_FieldLayoutTable() const;
    void set_FieldLayoutTable(SgAsmCilFieldLayoutTable* const&);
    /** @} */

public:
    /** Property: FieldMarshalTable. 
     * 
     * @{ */
    SgAsmCilFieldMarshalTable* const& get_FieldMarshalTable() const;
    void set_FieldMarshalTable(SgAsmCilFieldMarshalTable* const&);
    /** @} */

public:
    /** Property: FieldRVATable. 
     * 
     * @{ */
    SgAsmCilFieldRVATable* const& get_FieldRVATable() const;
    void set_FieldRVATable(SgAsmCilFieldRVATable* const&);
    /** @} */

public:
    /** Property: FileTable. 
     * 
     * @{ */
    SgAsmCilFileTable* const& get_FileTable() const;
    void set_FileTable(SgAsmCilFileTable* const&);
    /** @} */

public:
    /** Property: GenericParamTable. 
     * 
     * @{ */
    SgAsmCilGenericParamTable* const& get_GenericParamTable() const;
    void set_GenericParamTable(SgAsmCilGenericParamTable* const&);
    /** @} */

public:
    /** Property: GenericParamConstraintTable. 
     * 
     * @{ */
    SgAsmCilGenericParamConstraintTable* const& get_GenericParamConstraintTable() const;
    void set_GenericParamConstraintTable(SgAsmCilGenericParamConstraintTable* const&);
    /** @} */

public:
    /** Property: ImplMapTable. 
     * 
     * @{ */
    SgAsmCilImplMapTable* const& get_ImplMapTable() const;
    void set_ImplMapTable(SgAsmCilImplMapTable* const&);
    /** @} */

public:
    /** Property: InterfaceImplTable. 
     * 
     * @{ */
    SgAsmCilInterfaceImplTable* const& get_InterfaceImplTable() const;
    void set_InterfaceImplTable(SgAsmCilInterfaceImplTable* const&);
    /** @} */

public:
    /** Property: ManifestResourceTable. 
     * 
     * @{ */
    SgAsmCilManifestResourceTable* const& get_ManifestResourceTable() const;
    void set_ManifestResourceTable(SgAsmCilManifestResourceTable* const&);
    /** @} */

public:
    /** Property: MemberRefTable. 
     * 
     * @{ */
    SgAsmCilMemberRefTable* const& get_MemberRefTable() const;
    void set_MemberRefTable(SgAsmCilMemberRefTable* const&);
    /** @} */

public:
    /** Property: MethodDefTable. 
     * 
     * @{ */
    SgAsmCilMethodDefTable* const& get_MethodDefTable() const;
    void set_MethodDefTable(SgAsmCilMethodDefTable* const&);
    /** @} */

public:
    /** Property: MethodImplTable. 
     * 
     * @{ */
    SgAsmCilMethodImplTable* const& get_MethodImplTable() const;
    void set_MethodImplTable(SgAsmCilMethodImplTable* const&);
    /** @} */

public:
    /** Property: MethodSemanticsTable. 
     * 
     * @{ */
    SgAsmCilMethodSemanticsTable* const& get_MethodSemanticsTable() const;
    void set_MethodSemanticsTable(SgAsmCilMethodSemanticsTable* const&);
    /** @} */

public:
    /** Property: MethodSpecTable. 
     * 
     * @{ */
    SgAsmCilMethodSpecTable* const& get_MethodSpecTable() const;
    void set_MethodSpecTable(SgAsmCilMethodSpecTable* const&);
    /** @} */

public:
    /** Property: ModuleTable. 
     * 
     * @{ */
    SgAsmCilModuleTable* const& get_ModuleTable() const;
    void set_ModuleTable(SgAsmCilModuleTable* const&);
    /** @} */

public:
    /** Property: ModuleRefTable. 
     * 
     * @{ */
    SgAsmCilModuleRefTable* const& get_ModuleRefTable() const;
    void set_ModuleRefTable(SgAsmCilModuleRefTable* const&);
    /** @} */

public:
    /** Property: NestedClassTable. 
     * 
     * @{ */
    SgAsmCilNestedClassTable* const& get_NestedClassTable() const;
    void set_NestedClassTable(SgAsmCilNestedClassTable* const&);
    /** @} */

public:
    /** Property: ParamTable. 
     * 
     * @{ */
    SgAsmCilParamTable* const& get_ParamTable() const;
    void set_ParamTable(SgAsmCilParamTable* const&);
    /** @} */

public:
    /** Property: PropertyTable. 
     * 
     * @{ */
    SgAsmCilPropertyTable* const& get_PropertyTable() const;
    void set_PropertyTable(SgAsmCilPropertyTable* const&);
    /** @} */

public:
    /** Property: PropertyMapTable. 
     * 
     * @{ */
    SgAsmCilPropertyMapTable* const& get_PropertyMapTable() const;
    void set_PropertyMapTable(SgAsmCilPropertyMapTable* const&);
    /** @} */

public:
    /** Property: StandAloneSigTable. 
     * 
     * @{ */
    SgAsmCilStandAloneSigTable* const& get_StandAloneSigTable() const;
    void set_StandAloneSigTable(SgAsmCilStandAloneSigTable* const&);
    /** @} */

public:
    /** Property: TypeDefTable. 
     * 
     * @{ */
    SgAsmCilTypeDefTable* const& get_TypeDefTable() const;
    void set_TypeDefTable(SgAsmCilTypeDefTable* const&);
    /** @} */

public:
    /** Property: TypeRefTable. 
     * 
     * @{ */
    SgAsmCilTypeRefTable* const& get_TypeRefTable() const;
    void set_TypeRefTable(SgAsmCilTypeRefTable* const&);
    /** @} */

public:
    /** Property: TypeSpecTable. 
     * 
     * @{ */
    SgAsmCilTypeSpecTable* const& get_TypeSpecTable() const;
    void set_TypeSpecTable(SgAsmCilTypeSpecTable* const&);
    /** @} */
public:
    /// reference kinds in the metadata tables
    enum ReferenceKind
    {
      // heaps
      e_ref_string_heap           = 1 << 0,
      e_ref_guid_heap             = 1 << 1,
      e_ref_blob_heap             = 1 << 2,
      // single-table references
      e_ref_assembly_ref          = 1 << 3,
      e_ref_type_def              = 1 << 4,
      e_ref_event                 = 1 << 5,
      e_ref_field                 = 1 << 6,
      e_ref_generic_param         = 1 << 7,
      e_ref_module_ref            = 1 << 8,
      e_ref_method_def            = 1 << 9,
      e_ref_param                 = 1 << 10,
      e_ref_property              = 1 << 11,
      // multi-table references
      e_ref_has_constant          = 1 << 12,
      e_ref_has_custom_attribute  = 1 << 13,
      e_ref_has_decl_security     = 1 << 14,
      e_ref_has_field_marshall    = 1 << 15,
      e_ref_has_semantics         = 1 << 16,
      e_ref_method_def_or_ref     = 1 << 17,
      e_ref_type_def_or_ref       = 1 << 18,
      e_ref_implementation        = 1 << 19,
      e_ref_member_forwarded      = 1 << 20,
      e_ref_member_ref_parent     = 1 << 21,
      e_ref_type_or_method_def    = 1 << 22,
      e_ref_custom_attribute_type = 1 << 23,
      e_ref_resolution_scope      = 1 << 24,
      e_ref_last                  = 1 << 25,
    };

    enum TableKind : std::uint8_t
    {

      e_Assembly = 0x20,
      e_AssemblyOS = 0x22,
      e_AssemblyProcessor = 0x21,
      e_AssemblyRef = 0x23,
      e_AssemblyRefOS = 0x25,
      e_AssemblyRefProcessor = 0x24,
      e_ClassLayout = 0x0F,
      e_Constant = 0x0B,
      e_CustomAttribute = 0x0C,
      e_DeclSecurity = 0x0E,
      e_Event = 0x14,
      e_EventMap = 0x12,
      e_ExportedType = 0x27,
      e_Field = 0x04,
      e_FieldLayout = 0x10,
      e_FieldMarshal = 0x0D,
      e_FieldRVA = 0x1D,
      e_File = 0x26,
      e_GenericParam = 0x2A,
      e_GenericParamConstraint = 0x2C,
      e_ImplMap = 0x1C,
      e_InterfaceImpl = 0x09,
      e_ManifestResource = 0x28,
      e_MemberRef = 0x0A,
      e_MethodDef = 0x06,
      e_MethodImpl = 0x19,
      e_MethodSemantics = 0x18,
      e_MethodSpec = 0x2B,
      e_Module = 0x00,
      e_ModuleRef = 0x1A,
      e_NestedClass = 0x29,
      e_Param = 0x08,
      e_Property = 0x17,
      e_PropertyMap = 0x15,
      e_StandAloneSig = 0x11,
      e_TypeDef = 0x02,
      e_TypeRef = 0x01,
      e_TypeSpec = 0x1B,
      e_Unknown_table_kind = 0xFF
    };

    /** parses the metadata objects from the buffer. */
    void parse(const std::vector<uint8_t>& buf, size_t startOfMetaData) override;

    /** unparses the metadata objects into the buffer */
    void unparse(std::vector<uint8_t>& buf, size_t startOfMetaData) const override;

    /** Prints the object's data in a human readable form. */
    void dump(std::ostream& os) const override;

    /** Look up node by index.
     *
     *  Looks up the node associated with the coded index @p idx in the metadata table associated with @p tblcode. */
    SgAsmCilMetadata* get_MetadataNode(std::uint32_t idx, TableKind tblcode) const;

    /** Look up node by index.
     *
     *  Looks up the node associated with the coded index @p refcode in the metadata tables under the assumption that the value is
     *  of kind @p knd. */
    SgAsmCilMetadata* get_CodedMetadataNode(std::uint32_t refcode, ReferenceKind knd) const;

    /** Look up node by index.
     *
     *  Looks up the node associated with the coded index @p refcode in the metadata tables under the assumption the value is of
     *  kind @p knd. */
    SgAsmCilMetadata* get_MetadataNode(std::uint32_t refcode, ReferenceKind knd) const;
public:
    /** Destructor. */
    virtual ~SgAsmCilMetadataHeap();

public:
    /** Default constructor. */
    SgAsmCilMetadataHeap();

public:
    /** Constructor. */
    SgAsmCilMetadataHeap(uint32_t const& Offset,
                         uint32_t const& Size,
                         std::string const& Name,
                         uint32_t const& NamePadding);

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
       // static const VariantT static_variant = V_SgAsmCilMetadataHeap;
          enum { static_variant = V_SgAsmCilMetadataHeap };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmCilMetadataHeap* isSgAsmCilMetadataHeap(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmCilMetadataHeap* isSgAsmCilMetadataHeap( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmCilMetadataHeap * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmCilMetadataHeapStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmCilMetadataHeap * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmCilMetadataHeap * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmCilMetadataHeap::operator delete (pointer,sizeof(SgAsmCilMetadataHeap));
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
 	static SgAsmCilMetadataHeap* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmCilMetadataHeap* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmCilMetadataHeap* sgnode);

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
       // SgAsmCilMetadataHeap( SgAsmCilMetadataHeapStorageClass& source );





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
          friend class SgAsmCilMetadataHeapStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmCilMetadataHeap( const SgAsmCilMetadataHeapStorageClass& source );

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
          SgAsmCilMetadataHeap* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmCilMetadataHeap* isSgAsmCilMetadataHeap ( SgNode* s );

          typedef SgAsmCilDataStream base_node_type;


// End of memberFunctionString
















































    protected:
// Start of memberFunctionString
uint32_t p_ReservedAlwaysZero;
          
// End of memberFunctionString
// Start of memberFunctionString
uint8_t p_MajorVersion;
          
// End of memberFunctionString
// Start of memberFunctionString
uint8_t p_MinorVersion;
          
// End of memberFunctionString
// Start of memberFunctionString
uint8_t p_HeapSizes;
          
// End of memberFunctionString
// Start of memberFunctionString
uint8_t p_ReservedAlwaysOne;
          
// End of memberFunctionString
// Start of memberFunctionString
uint64_t p_Valid;
          
// End of memberFunctionString
// Start of memberFunctionString
uint64_t p_Sorted;
          
// End of memberFunctionString
// Start of memberFunctionString
std::vector<uint32_t> p_NumberOfRows;
          
// End of memberFunctionString
// Start of memberFunctionString
uint64_t p_DataSizeFlags;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilAssemblyTable* p_AssemblyTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilAssemblyOSTable* p_AssemblyOSTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilAssemblyProcessorTable* p_AssemblyProcessorTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilAssemblyRefTable* p_AssemblyRefTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilAssemblyRefOSTable* p_AssemblyRefOSTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilAssemblyRefProcessorTable* p_AssemblyRefProcessorTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilClassLayoutTable* p_ClassLayoutTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilConstantTable* p_ConstantTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilCustomAttributeTable* p_CustomAttributeTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilDeclSecurityTable* p_DeclSecurityTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilEventTable* p_EventTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilEventMapTable* p_EventMapTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilExportedTypeTable* p_ExportedTypeTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilFieldTable* p_FieldTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilFieldLayoutTable* p_FieldLayoutTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilFieldMarshalTable* p_FieldMarshalTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilFieldRVATable* p_FieldRVATable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilFileTable* p_FileTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilGenericParamTable* p_GenericParamTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilGenericParamConstraintTable* p_GenericParamConstraintTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilImplMapTable* p_ImplMapTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilInterfaceImplTable* p_InterfaceImplTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilManifestResourceTable* p_ManifestResourceTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilMemberRefTable* p_MemberRefTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilMethodDefTable* p_MethodDefTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilMethodImplTable* p_MethodImplTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilMethodSemanticsTable* p_MethodSemanticsTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilMethodSpecTable* p_MethodSpecTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilModuleTable* p_ModuleTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilModuleRefTable* p_ModuleRefTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilNestedClassTable* p_NestedClassTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilParamTable* p_ParamTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilPropertyTable* p_PropertyTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilPropertyMapTable* p_PropertyMapTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilStandAloneSigTable* p_StandAloneSigTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilTypeDefTable* p_TypeDefTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilTypeRefTable* p_TypeRefTable;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmCilTypeSpecTable* p_TypeSpecTable;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmCilMetadataHeap>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, uint32_t,&SgAsmCilMetadataHeap::p_ReservedAlwaysZero>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, uint8_t,&SgAsmCilMetadataHeap::p_MajorVersion>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, uint8_t,&SgAsmCilMetadataHeap::p_MinorVersion>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, uint8_t,&SgAsmCilMetadataHeap::p_HeapSizes>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, uint8_t,&SgAsmCilMetadataHeap::p_ReservedAlwaysOne>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, uint64_t,&SgAsmCilMetadataHeap::p_Valid>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, uint64_t,&SgAsmCilMetadataHeap::p_Sorted>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, std::vector<uint32_t>,&SgAsmCilMetadataHeap::p_NumberOfRows>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, uint64_t,&SgAsmCilMetadataHeap::p_DataSizeFlags>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilAssemblyTable*,&SgAsmCilMetadataHeap::p_AssemblyTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilAssemblyOSTable*,&SgAsmCilMetadataHeap::p_AssemblyOSTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilAssemblyProcessorTable*,&SgAsmCilMetadataHeap::p_AssemblyProcessorTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilAssemblyRefTable*,&SgAsmCilMetadataHeap::p_AssemblyRefTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilAssemblyRefOSTable*,&SgAsmCilMetadataHeap::p_AssemblyRefOSTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilAssemblyRefProcessorTable*,&SgAsmCilMetadataHeap::p_AssemblyRefProcessorTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilClassLayoutTable*,&SgAsmCilMetadataHeap::p_ClassLayoutTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilConstantTable*,&SgAsmCilMetadataHeap::p_ConstantTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilCustomAttributeTable*,&SgAsmCilMetadataHeap::p_CustomAttributeTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilDeclSecurityTable*,&SgAsmCilMetadataHeap::p_DeclSecurityTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilEventTable*,&SgAsmCilMetadataHeap::p_EventTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilEventMapTable*,&SgAsmCilMetadataHeap::p_EventMapTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilExportedTypeTable*,&SgAsmCilMetadataHeap::p_ExportedTypeTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilFieldTable*,&SgAsmCilMetadataHeap::p_FieldTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilFieldLayoutTable*,&SgAsmCilMetadataHeap::p_FieldLayoutTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilFieldMarshalTable*,&SgAsmCilMetadataHeap::p_FieldMarshalTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilFieldRVATable*,&SgAsmCilMetadataHeap::p_FieldRVATable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilFileTable*,&SgAsmCilMetadataHeap::p_FileTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilGenericParamTable*,&SgAsmCilMetadataHeap::p_GenericParamTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilGenericParamConstraintTable*,&SgAsmCilMetadataHeap::p_GenericParamConstraintTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilImplMapTable*,&SgAsmCilMetadataHeap::p_ImplMapTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilInterfaceImplTable*,&SgAsmCilMetadataHeap::p_InterfaceImplTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilManifestResourceTable*,&SgAsmCilMetadataHeap::p_ManifestResourceTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilMemberRefTable*,&SgAsmCilMetadataHeap::p_MemberRefTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilMethodDefTable*,&SgAsmCilMetadataHeap::p_MethodDefTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilMethodImplTable*,&SgAsmCilMetadataHeap::p_MethodImplTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilMethodSemanticsTable*,&SgAsmCilMetadataHeap::p_MethodSemanticsTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilMethodSpecTable*,&SgAsmCilMetadataHeap::p_MethodSpecTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilModuleTable*,&SgAsmCilMetadataHeap::p_ModuleTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilModuleRefTable*,&SgAsmCilMetadataHeap::p_ModuleRefTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilNestedClassTable*,&SgAsmCilMetadataHeap::p_NestedClassTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilParamTable*,&SgAsmCilMetadataHeap::p_ParamTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilPropertyTable*,&SgAsmCilMetadataHeap::p_PropertyTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilPropertyMapTable*,&SgAsmCilMetadataHeap::p_PropertyMapTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilStandAloneSigTable*,&SgAsmCilMetadataHeap::p_StandAloneSigTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilTypeDefTable*,&SgAsmCilMetadataHeap::p_TypeDefTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilTypeRefTable*,&SgAsmCilMetadataHeap::p_TypeRefTable>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmCilMetadataHeap, SgAsmCilTypeSpecTable*,&SgAsmCilMetadataHeap::p_TypeSpecTable>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmCilMetadataHeap

/* #line 1354 "/workspace/generated/src/frontend/SageIII//SgAsmCilMetadataHeap.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 1361 "/workspace/generated/src/frontend/SageIII//SgAsmCilMetadataHeap.h" */

#endif // ROSE_SgAsmCilMetadataHeap_H

