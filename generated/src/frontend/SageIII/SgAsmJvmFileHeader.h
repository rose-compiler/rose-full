
#ifndef ROSE_SgAsmJvmFileHeader_H
#define ROSE_SgAsmJvmFileHeader_H
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

// predeclarations for SgAsmJvmFileHeader

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmJvmFileHeader.h" */

/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmJvmFileHeader
class ROSE_DLL_API SgAsmJvmFileHeader  : public SgAsmGenericHeader
   {
     public:


/* #line 38 "/workspace/generated/src/frontend/SageIII//SgAsmJvmFileHeader.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 11890 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmJvmFileHeader -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmJvmFileHeader");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmGenericHeader);
        s & BOOST_SERIALIZATION_NVP(p_minor_version);
        s & BOOST_SERIALIZATION_NVP(p_major_version);
        s & BOOST_SERIALIZATION_NVP(p_access_flags);
        s & BOOST_SERIALIZATION_NVP(p_this_class);
        s & BOOST_SERIALIZATION_NVP(p_super_class);
        s & BOOST_SERIALIZATION_NVP(p_constant_pool);
        s & BOOST_SERIALIZATION_NVP(p_interfaces);
        s & BOOST_SERIALIZATION_NVP(p_field_table);
        s & BOOST_SERIALIZATION_NVP(p_method_table);
        s & BOOST_SERIALIZATION_NVP(p_attribute_table);
        debugSerializationEnd("SgAsmJvmFileHeader");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
public:
public:
    /** Property: Minor version.
     *
     *  Minor version number of this class file. 
     *  
     *  @{ */
    uint16_t const& get_minor_version() const;
    void set_minor_version(uint16_t const&);
    /** @} */

public:
    /** Property: Major version.
     *
     *  Major version number of this class file. 
     *  
     *  @{ */
    uint16_t const& get_major_version() const;
    void set_major_version(uint16_t const&);
    /** @} */

public:
    /** Property: Access flags.
     *
     *  Mask of flags used to denote access permissions and properties of this class or interface. 
     *  
     *  @{ */
    uint16_t const& get_access_flags() const;
    void set_access_flags(uint16_t const&);
    /** @} */

public:
    /** Property: This class index.
     *
     *  Index into constant pool table for this class or interface. 
     *  
     *  @{ */
    uint16_t const& get_this_class() const;
    void set_this_class(uint16_t const&);
    /** @} */

public:
    /** Property: Super class.
     *
     *  Index into constant pool table for direct super class of this class or interface. 
     *  
     *  @{ */
    uint16_t const& get_super_class() const;
    void set_super_class(uint16_t const&);
    /** @} */

public:
    /** Property: Constant pool.
     *
     *  Points to the AST node that represents the JVM constant pool. The constant pool is a table of structures
     *  (see 4.4) representing various string constants, class and interface names, field names, and other constants
     *  that are referred to within the ClassFile structure and its substructures. The format of each constant-pool
     *  table entry is indicated by its first "tag" byte. 
     *  
     *  @{ */
    SgAsmJvmConstantPool* const& get_constant_pool() const;
    void set_constant_pool(SgAsmJvmConstantPool* const&);
    /** @} */

public:
    /** Property: Interfaces.
     *
     *  Each value in the interfaces array must be a valid index into the constant_pool table. The constant_pool entry
     *  at each value is a CONSTANT_Class_info structure representing an interface that is a direct superinterface
     *  of this class or interface type. 
     *  
     *  @{ */
    std::list<uint16_t> const& get_interfaces() const;
    std::list<uint16_t>& get_interfaces();
    void set_interfaces(std::list<uint16_t> const&);
    /** @} */

public:
    /** Property: Field table.
     *
     *  Points to the AST node that represents the JVM field table. The constant pool is a table of structures
     *  (see 4.4) representing various string constants, class and interface names, field names, and other constants
     *  that are referred to within the ClassFile structure and its substructures. The format of each constant-pool
     *  table entry is indicated by its first "tag" byte. 
     *  
     *  @{ */
    SgAsmJvmFieldTable* const& get_field_table() const;
    void set_field_table(SgAsmJvmFieldTable* const&);
    /** @} */

public:
    /** Property: Method table.
     *
     *  Points to the AST node that represents the JVM method table. The constant pool is a table of structures
     *  (see 4.4) representing various string constants, class and interface names, field names, and other constants
     *  that are referred to within the ClassFile structure and its substructures. The format of each constant-pool
     *  table entry is indicated by its first "tag" byte. 
     *  
     *  @{ */
    SgAsmJvmMethodTable* const& get_method_table() const;
    void set_method_table(SgAsmJvmMethodTable* const&);
    /** @} */

public:
    /** Property: Attribute table.
     *
     *  Points to the AST node that represents the JVM attribute table. The constant pool is a table of structures
     *  (see 4.4) representing various string constants, class and interface names, field names, and other constants
     *  that are referred to within the ClassFile structure and its substructures. The format of each constant-pool
     *  table entry is indicated by its first "tag" byte. 
     *  
     *  @{ */
    SgAsmJvmAttributeTable* const& get_attribute_table() const;
    void set_attribute_table(SgAsmJvmAttributeTable* const&);
    /** @} */
public:
    /** Construct a new JVM File Header with default values; ready to be initialized via parse(). */
    explicit SgAsmJvmFileHeader(SgAsmGenericFile *);

    /** Parse header from file.
     *
     *  Initialize this header with information parsed from the file and construct and parse everything that's reachable
     *  from the header. Since the size of the ELF File Header is determined by the contents of the ELF File Header as
     *  stored in the file, the size of the ELF File Header will be adjusted upward if necessary. */
    virtual SgAsmJvmFileHeader* parse() override;

    /** Write the section to a binary file */
    virtual void unparse(std::ostream&) const override;

    /** Returns true if a cursory look at the file indicates that it could be a JVM class file. */
    static bool is_JVM(SgAsmGenericFile*);

protected:
    // Some extra clean-up actions on destruction
    virtual void destructorHelper() override;
public:
    /** Destructor. */
    virtual ~SgAsmJvmFileHeader();

public:
    /** Default constructor. */
    SgAsmJvmFileHeader();

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
       // static const VariantT static_variant = V_SgAsmJvmFileHeader;
          enum { static_variant = V_SgAsmJvmFileHeader };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmJvmFileHeader* isSgAsmJvmFileHeader(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmJvmFileHeader* isSgAsmJvmFileHeader( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmJvmFileHeader * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmJvmFileHeaderStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmJvmFileHeader * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmJvmFileHeader * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmJvmFileHeader::operator delete (pointer,sizeof(SgAsmJvmFileHeader));
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
 	static SgAsmJvmFileHeader* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmJvmFileHeader* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmJvmFileHeader* sgnode);

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
       // SgAsmJvmFileHeader( SgAsmJvmFileHeaderStorageClass& source );





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
          friend class SgAsmJvmFileHeaderStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmJvmFileHeader( const SgAsmJvmFileHeaderStorageClass& source );

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
          SgAsmJvmFileHeader* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmJvmFileHeader* isSgAsmJvmFileHeader ( SgNode* s );

          typedef SgAsmGenericHeader base_node_type;


// End of memberFunctionString











    protected:
// Start of memberFunctionString
uint16_t p_minor_version;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_major_version;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_access_flags;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_this_class;
          
// End of memberFunctionString
// Start of memberFunctionString
uint16_t p_super_class;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmJvmConstantPool* p_constant_pool;
          
// End of memberFunctionString
// Start of memberFunctionString
std::list<uint16_t> p_interfaces;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmJvmFieldTable* p_field_table;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmJvmMethodTable* p_method_table;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmJvmAttributeTable* p_attribute_table;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmJvmFileHeader>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmFileHeader, uint16_t,&SgAsmJvmFileHeader::p_minor_version>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmFileHeader, uint16_t,&SgAsmJvmFileHeader::p_major_version>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmFileHeader, uint16_t,&SgAsmJvmFileHeader::p_access_flags>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmFileHeader, uint16_t,&SgAsmJvmFileHeader::p_this_class>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmFileHeader, uint16_t,&SgAsmJvmFileHeader::p_super_class>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmFileHeader, SgAsmJvmConstantPool*,&SgAsmJvmFileHeader::p_constant_pool>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmFileHeader, std::list<uint16_t>,&SgAsmJvmFileHeader::p_interfaces>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmFileHeader, SgAsmJvmFieldTable*,&SgAsmJvmFileHeader::p_field_table>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmFileHeader, SgAsmJvmMethodTable*,&SgAsmJvmFileHeader::p_method_table>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmJvmFileHeader, SgAsmJvmAttributeTable*,&SgAsmJvmFileHeader::p_attribute_table>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmJvmFileHeader

/* #line 700 "/workspace/generated/src/frontend/SageIII//SgAsmJvmFileHeader.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 707 "/workspace/generated/src/frontend/SageIII//SgAsmJvmFileHeader.h" */

#endif // ROSE_SgAsmJvmFileHeader_H

