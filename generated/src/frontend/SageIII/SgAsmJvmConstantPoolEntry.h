
#ifndef ROSE_SgAsmJvmConstantPoolEntry_H
#define ROSE_SgAsmJvmConstantPoolEntry_H
#include <RoseFirst.h>
#include <Cxx_GrammarDeclarations.h>
#include <SgAsmJvmNode.h>



/* #line 1 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

// WARNING -- GENERATED CODE -- DO NOT MODIFY THIS CODE -- WARNING!
//      This code is automatically generated for each 
//      terminal and non-terminal within the defined 
//      grammar.  There is a simple way to change the 
//      code to fix bugs etc.  See the ROSE README file
//      for directions.

// tps: (02/22/2010): Adding DLL export requirements
#include "rosedll.h"

// predeclarations for SgAsmJvmConstantPoolEntry

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmJvmConstantPoolEntry.h" */

/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmJvmConstantPoolEntry
class ROSE_DLL_API SgAsmJvmConstantPoolEntry  : public SgAsmJvmNode
   {
     public:


/* #line 38 "/workspace/generated/src/frontend/SageIII//SgAsmJvmConstantPoolEntry.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 13101 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmJvmConstantPoolEntry -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmJvmConstantPoolEntry");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmJvmNode);
        s & BOOST_SERIALIZATION_NVP(p_tag);
        s & BOOST_SERIALIZATION_NVP(p_bytes);
        s & BOOST_SERIALIZATION_NVP(p_hi_bytes);
        s & BOOST_SERIALIZATION_NVP(p_low_bytes);
        s & BOOST_SERIALIZATION_NVP(p_bootstrap_method_attr_index);
        s & BOOST_SERIALIZATION_NVP(p_class_index);
        s & BOOST_SERIALIZATION_NVP(p_descriptor_index);
        s & BOOST_SERIALIZATION_NVP(p_name_index);
        s & BOOST_SERIALIZATION_NVP(p_name_and_type_index);
        s & BOOST_SERIALIZATION_NVP(p_reference_index);
        s & BOOST_SERIALIZATION_NVP(p_reference_kind);
        s & BOOST_SERIALIZATION_NVP(p_string_index);
        s & BOOST_SERIALIZATION_NVP(p_length);
        debugSerializationEnd("SgAsmJvmConstantPoolEntry");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Constant pool tags.
     *
     * These tags indicate the kind of constant denoted by the pool entry.
     */
    enum Kind {
        EMPTY = 0,
        CONSTANT_Utf8 = 1,
        CONSTANT_Integer = 3,
        CONSTANT_Float = 4,
        CONSTANT_Long = 5,
        CONSTANT_Double = 6,
        CONSTANT_Class = 7,
        CONSTANT_String = 8,
        CONSTANT_Fieldref = 9,
        CONSTANT_Methodref = 10,
        CONSTANT_InterfaceMethodref = 11,
        CONSTANT_NameAndType = 12,
        CONSTANT_MethodHandle = 15,
        CONSTANT_MethodType = 16,
        CONSTANT_Dynamic = 17,
        CONSTANT_InvokeDynamic = 18,
        CONSTANT_Module = 19,
        CONSTANT_Package = 20
    };

#ifdef DOCUMENTATION
    /** These following structs are documented below to indicate which fields are active for each tag
     *    of an SgAsmJvmConstantPoolEntry instance. Other fields may not be accessed.
     */
#endif
    /** 4.4.1 CONSTANT_Class_info table entry. All fields are big endian. */
    struct CONSTANT_Class_info {
        uint8_t tag;
        uint16_t name_index;
    };

    /** 4.4.2 CONSTANT_Fieldref_info, CONSTANT_Methodref_info, and CONSTANT_InterfaceMethodref_info table
               entries. All fields are big endian. */
    struct CONSTANT_Fieldref_info {
        uint8_t tag;
        uint16_t class_index;
        uint16_t name_and_type_index;
    };
    struct CONSTANT_Methodref_info {
        uint8_t tag;
        uint16_t class_index;
        uint16_t name_and_type_index;
    };
    struct CONSTANT_InterfaceMethodref_info {
        uint8_t tag;
        uint16_t class_index;
        uint16_t name_and_type_index;
    };

    /** 4.4.3 CONSTANT_String_info table entry. All fields are big endian. */
    struct CONSTANT_String_info {
        uint8_t tag;
        uint16_t string_index;
    };

    /** 4.4.4 CONSTANT_Integer_info table entry. All fields are big endian. */
    struct CONSTANT_Integer_info {
        uint8_t tag;
        uint32_t bytes;
    };
    struct CONSTANT_Float_info {
        uint8_t tag;
        uint32_t bytes;
    };
    struct CONSTANT_Long_info {
        uint8_t tag;
        uint32_t hi_bytes;
        uint32_t low_bytes;
    };
    struct CONSTANT_Double_info {
        uint8_t tag;
        uint32_t hi_bytes;
        uint32_t low_bytes;
    };

    /** 4.4.6 CONSTANT_NameAndType_info table entry. All fields are big endian. */
    struct CONSTANT_NameAndType_info {
        uint8_t tag;
        uint16_t name_index;
        uint16_t descriptor_index;
    };

    /** 4.4.7 CONSTANT_Utf8_info table entry. All fields are big endian. */
    struct CONSTANT_Utf8_info {
        uint8_t tag;
        uint16_t length;
        uint8_t* bytes;
    };

    /** 4.4.8 CONSTANT_MethodHandle_info table entry. All fields are big endian. */
    struct CONSTANT_MethodHandle_info {
        uint8_t tag;
        uint8_t reference_kind;
        uint16_t reference_index;
    };

    /** 4.4.9 CONSTANT_MethodType_info table entry. All fields are big endian. */
    struct CONSTANT_MethodType_info {
        uint8_t tag;
        uint16_t descriptor_index;
    };

    /** 4.4.10 CONSTANT_Dynamic_info table entry. All fields are big endian. */
    struct CONSTANT_Dynamic_info {
        uint8_t tag;
        uint16_t bootstrap_method_attr_index;
        uint16_t name_and_type_index;
    };
    struct CONSTANT_InvokeDynamic_info {
        uint8_t tag;
        uint16_t bootstrap_method_attr_index;
        uint16_t name_and_type_index;
    };

    /** 4.4.11 CONSTANT_Module_info table entry. All fields are big endian. */
    struct CONSTANT_Module_info {
        uint8_t tag;
        uint16_t name_index;
    };

    /** 4.4.12 CONSTANT_Package_info table entry. All fields are big endian. */
    struct CONSTANT_Package_info {
        uint8_t tag;
        uint16_t name_index;
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Properties
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
public:
    /** Property: tag
     *
     *  Enum constant describing the kind of this entry in the pool. 
     *  
     *  @{ */
    SgAsmJvmConstantPoolEntry::Kind const& get_tag() const;
    void set_tag(SgAsmJvmConstantPoolEntry::Kind const&);
    /** @} */

public:
    /** Property: bytes
     *
     *  The bytes item of the CONSTANT_Integer_info structure represents the value of the int constant.  The bytes item of the
     *  CONSTANT_Float_info structure represents the value of the float constant in IEEE 754 binary32 floating-point format. 
     *  
     *  @{ */
    uint32_t const& get_bytes() const;
    void set_bytes(uint32_t const&);
    /** @} */

public:
    /** Properties: hi_bytes
     *
     *  The unsigned high_bytes and low_bytes items of the CONSTANT_Long_info structure together represent the value of the long
     *  constant.  The unsigned high_bytes and low_bytes items of the CONSTANT_Double_info structure together represent the the
     *  double value in IEEE 754 binary64 floating-point format. 
     *  
     *  @{ */
    uint32_t const& get_hi_bytes() const;
    void set_hi_bytes(uint32_t const&);
    /** @} */

public:
    /** Properties: low_bytes
     *
     *  The unsigned high_bytes and low_bytes items of the CONSTANT_Long_info structure together represent the value of the long
     *  constant.  The unsigned high_bytes and low_bytes items of the CONSTANT_Double_info structure together represent the the
     *  double value in IEEE 754 binary64 floating-point format. 
     *  
     *  @{ */
    uint32_t const& get_low_bytes() const;
    void set_low_bytes(uint32_t const&);
    /** @} */

public:
    /** Property: bootstrap_method_attr_index
     *
     *  The bootstrap_method_attr_index item is an index into the bootstrap_methods array of the bootstrap method table of this
     *  class file.  Present in CONSTANT_Dynamic_info and CONSTANT_Dynamic_info structs. 
     *  
     *  @{ */
    uint16_t const& get_bootstrap_method_attr_index() const;
    void set_bootstrap_method_attr_index(uint16_t const&);
    /** @} */

public:
    /** Property: class_index
     *
     *  The value of the class_index item must be a valid index into the constant_pool table (see JVM specification).  Present in
     *  CONSTANT_Fieldref_info, CONSTANT_Methodref_info, and CONSTANT_InterfaceMethodref_info table entries. 
     *  
     *  @{ */
    uint16_t const& get_class_index() const;
    void set_class_index(uint16_t const&);
    /** @} */

public:
    /** Property: descriptor_index
     *
     *  The value of the descriptor_index item must be a valid index into the constant_pool table (see JVM specification).  Present
     *  in CONSTANT_NameAndType_info and CONSTANT_MethodHandle_info table entries. 
     *  
     *  @{ */
    uint16_t const& get_descriptor_index() const;
    void set_descriptor_index(uint16_t const&);
    /** @} */

public:
    /** Property: name_index
     *
     *  The value of the name_index item must be a valid index into the constant_pool table (see JVM specification).  Present in
     *  CONSTANT_Class_info, CONSTANT_NameAndType_info, CONSTANT_Module_info, and CONSTANT_Package_info table entries. 
     *  
     *  @{ */
    uint16_t const& get_name_index() const;
    void set_name_index(uint16_t const&);
    /** @} */

public:
    /** Property: name_and_type_index
     *
     *  The value of the name_and_type_index item must be a valid index into the constant_pool table (see JVM specification).
     *  Present in CONSTANT_Fieldref_info, CONSTANT_Methodref_info, CONSTANT_InterfaceMethodref_info, CONSTANT_Dynamic_info, and
     *  CONSTANT_InvokeDynamic_info table entries. 
     *  
     *  @{ */
    uint16_t const& get_name_and_type_index() const;
    void set_name_and_type_index(uint16_t const&);
    /** @} */

public:
    /** Property: reference_index
     *
     *  The value of the reference_index item must be a valid index into the constant_pool table (see JVM specification).  Present
     *  in CONSTANT_MethodHandle_info table entries. 
     *  
     *  @{ */
    uint16_t const& get_reference_index() const;
    void set_reference_index(uint16_t const&);
    /** @} */

public:
    /** Property: reference_kind
     *
     *  The value of the reference_kind item must be in the range 1 to 9. The value denotes the kind of a CONSTANT_MethodHandle_info
     *  table entry. 
     *  
     *  @{ */
    uint8_t const& get_reference_kind() const;
    void set_reference_kind(uint8_t const&);
    /** @} */

public:
    /** Property: string_index
     *
     *  The value of the string_index item must be a valid index into the constant_pool table (see JVM specification).  Present in
     *  CONSTANT_String_info table entries. 
     *  
     *  @{ */
    uint16_t const& get_string_index() const;
    void set_string_index(uint16_t const&);
    /** @} */

public:
    /** Property: length
     *
     *  The value of the length item gives the number of bytes in the bytes array (not the length of the resulting string).  Present
     *  in CONSTANT_Utf8_info table entries. 
     *  
     *  @{ */
    uint16_t const& get_length() const;
    void set_length(uint16_t const&);
    /** @} */
    // [Robb Matzke 2023-03-22]: I (and the serialization) have no idea what this points to, and therefore it cannot be
    // serialized. E.g., how many 'chars' should be serialized? Is the length stored in the `length` property? If so, `utf8_bytes`
    // should probably be an std::vector instead, which is a serializable thing. Furthermore, the data member cannot be 'const'
    // because that prevents it from being initialized by some de-serialization mechanisms (e.g., boost::serialize creates a default
    // constructed object and then fills it in).
public:
    /** Property: utf8_bytes (bytes in CONSTANT_Utf8_info structure).
     *
     *  The bytes array contains the bytes of the string. Present in CONSTANT_Utf8_info table entries. 
     *  
     *  @{ */
    char* const& get_utf8_bytes() const;
    void set_utf8_bytes(char* const&);
    /** @} */
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Constructor creating an object ready to be initialized via parse(). */
    explicit SgAsmJvmConstantPoolEntry(SgAsmJvmConstantPoolEntry::Kind tag);

    /** Initialize a constant pool entry by parsing the file.
     *
     * @{ */
    SgAsmJvmConstantPoolEntry* parse(SgAsmJvmConstantPool* pool);
    /** @} */

    /** Write constant pool entry to a binary file. */
    virtual void unparse(std::ostream&) const override;

    /** Print some debugging information. */
    void dump(FILE*, const char *prefix, ssize_t idx) const override;

    /** Convert constant pool entry kind to a string */
    static std::string to_string(SgAsmJvmConstantPoolEntry::Kind);
public:
    /** Destructor. */
    virtual ~SgAsmJvmConstantPoolEntry();

public:
    /** Default constructor. */
    SgAsmJvmConstantPoolEntry();

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
       // static const VariantT static_variant = V_SgAsmJvmConstantPoolEntry;
          enum { static_variant = V_SgAsmJvmConstantPoolEntry };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmJvmConstantPoolEntry* isSgAsmJvmConstantPoolEntry(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmJvmConstantPoolEntry* isSgAsmJvmConstantPoolEntry( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmJvmConstantPoolEntry * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmJvmConstantPoolEntryStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmJvmConstantPoolEntry * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmJvmConstantPoolEntry * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmJvmConstantPoolEntry::operator delete (pointer,sizeof(SgAsmJvmConstantPoolEntry));
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
 	static SgAsmJvmConstantPoolEntry* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmJvmConstantPoolEntry* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmJvmConstantPoolEntry* sgnode);

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
       // SgAsmJvmConstantPoolEntry( SgAsmJvmConstantPoolEntryStorageClass& source );





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
          friend class SgAsmJvmConstantPoolEntryStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmJvmConstantPoolEntry( const SgAsmJvmConstantPoolEntryStorageClass& source );

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
          SgAsmJvmConstantPoolEntry* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmJvmConstantPoolEntry* isSgAsmJvmConstantPoolEntry ( SgNode* s );

          typedef SgAsmJvmNode base_node_type;


// End of memberFunctionString















    protected:
// Start of memberFunctionString
SgAsmJvmConstantPoolEntry::Kind p_tag;
          
// End of memberFunctionString
// Start of memberFunctionString
uint32_t p_bytes;
          
// End of memberFunctionString
// Start of memberFunctionString
uint32_t p_hi_bytes;
          
// End of memberFunctionString
// Start of memberFunctionString
uint32_t p_low_bytes;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_bootstrap_method_attr_index;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_class_index;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_descriptor_index;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_name_index;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_name_and_type_index;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_reference_index;
          
// End of memberFunctionString
// Start of memberFunctionString
uint8_t p_reference_kind;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_string_index;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_length;
          
// End of memberFunctionString
// Start of memberFunctionString
char* p_utf8_bytes;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmJvmConstantPoolEntry>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmConstantPoolEntry, SgAsmJvmConstantPoolEntry::Kind,&SgAsmJvmConstantPoolEntry::p_tag>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmConstantPoolEntry, uint32_t,&SgAsmJvmConstantPoolEntry::p_bytes>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmConstantPoolEntry, uint32_t,&SgAsmJvmConstantPoolEntry::p_hi_bytes>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmConstantPoolEntry, uint32_t,&SgAsmJvmConstantPoolEntry::p_low_bytes>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmConstantPoolEntry, uint16_t,&SgAsmJvmConstantPoolEntry::p_bootstrap_method_attr_index>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmConstantPoolEntry, uint16_t,&SgAsmJvmConstantPoolEntry::p_class_index>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmConstantPoolEntry, uint16_t,&SgAsmJvmConstantPoolEntry::p_descriptor_index>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmConstantPoolEntry, uint16_t,&SgAsmJvmConstantPoolEntry::p_name_index>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmConstantPoolEntry, uint16_t,&SgAsmJvmConstantPoolEntry::p_name_and_type_index>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmConstantPoolEntry, uint16_t,&SgAsmJvmConstantPoolEntry::p_reference_index>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmConstantPoolEntry, uint8_t,&SgAsmJvmConstantPoolEntry::p_reference_kind>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmConstantPoolEntry, uint16_t,&SgAsmJvmConstantPoolEntry::p_string_index>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmConstantPoolEntry, uint16_t,&SgAsmJvmConstantPoolEntry::p_length>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmConstantPoolEntry, char*,&SgAsmJvmConstantPoolEntry::p_utf8_bytes>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmJvmConstantPoolEntry

/* #line 910 "/workspace/generated/src/frontend/SageIII//SgAsmJvmConstantPoolEntry.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 917 "/workspace/generated/src/frontend/SageIII//SgAsmJvmConstantPoolEntry.h" */

#endif // ROSE_SgAsmJvmConstantPoolEntry_H

