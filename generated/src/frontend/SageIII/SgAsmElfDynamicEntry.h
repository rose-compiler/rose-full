
#ifndef ROSE_SgAsmElfDynamicEntry_H
#define ROSE_SgAsmElfDynamicEntry_H
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

// predeclarations for SgAsmElfDynamicEntry

/* #line 25 "/workspace/generated/src/frontend/SageIII//SgAsmElfDynamicEntry.h" */
/* #line 23289 "/workspace/src/ROSETTA/src/binaryInstruction.C" */

#include <Rose/BinaryAnalysis/ByteOrder.h>
#include <Rose/BinaryAnalysis/RelativeVirtualAddress.h>
#include <sageContainer.h>


/* #line 13 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $PREDECLARATIONS" */

/* #line 14 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */

#if !defined(DOCUMENTATION)
// Class Definition for SgAsmElfDynamicEntry
class ROSE_DLL_API SgAsmElfDynamicEntry  : public SgAsmExecutableFileFormat
   {
     public:


/* #line 44 "/workspace/generated/src/frontend/SageIII//SgAsmElfDynamicEntry.h" */

          virtual SgNode* copy ( SgCopyHelp& help) const override;
// Start of memberFunctionString
/* #line 23325 "/workspace/src/ROSETTA/src/binaryInstruction.C" */


    //----------------------- Boost serialization for SgAsmElfDynamicEntry -----------------------
#ifdef ROSE_ENABLE_BOOST_SERIALIZATION
private:
    friend class boost::serialization::access;

    template<class S>
    void serialize(S &s, const unsigned /*version*/) {
        debugSerializationBegin("SgAsmElfDynamicEntry");
        s & BOOST_SERIALIZATION_BASE_OBJECT_NVP(SgAsmExecutableFileFormat);
        s & BOOST_SERIALIZATION_NVP(p_d_tag);
        s & BOOST_SERIALIZATION_NVP(p_d_val);
        s & BOOST_SERIALIZATION_NVP(p_name);
        s & BOOST_SERIALIZATION_NVP(p_extra);
        debugSerializationEnd("SgAsmElfDynamicEntry");
    }
#endif // ROSE_ENABLE_BOOST_SERIALIZATION
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Local types
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    enum EntryType {                /* Type    Executable SharedObj Purpose */
        DT_NULL     = 0,        /* ignored mandatory  mandatory Marks end of dynamic array */
        DT_NEEDED   = 1,        /* value   optional   optional  Name of needed library */
        DT_PLTRELSZ = 2,        /* value   optional   optional  Size of reloc entries associated with PLT */
        DT_PLTGOT   = 3,        /* pointer optional   optional  PLT and/or GOT */
        DT_HASH     = 4,        /* pointer mandatory  mandatory Symbol hash table */
        DT_STRTAB   = 5,        /* pointer mandatory  mandatory String table for symbols, lib names, etc. */
        DT_SYMTAB   = 6,        /* pointer mandatory  mandatory Symbol table */
        DT_RELA     = 7,        /* pointer mandatory  optional  Relocation table */
        DT_RELASZ   = 8,        /* value   mandatory  optional  Size of RELA relocation table */
        DT_RELAENT  = 9,        /* value   mandatory  optional  Size of each RELA table entry */
        DT_STRSZ    = 10,       /* value   mandatory  mandatory Size of string table */
        DT_SYMENT   = 11,       /* value   mandatory  mandatory Size of symbol table entry */
        DT_INIT     = 12,       /* pointer optional   optional  Initialization function */
        DT_FINI     = 13,       /* pointer optional   optional  Termination function */
        DT_SONAME   = 14,       /* value   ignored    optional  Name of shared object */
        DT_RPATH    = 15,       /* value   optional   ignored   NUL-term library search path */
        DT_SYMBOLIC = 16,       /* ignored ignored    optional  Bool determines dynamic linker symbol resolution */
        DT_REL      = 17,       /* pointer mandatory  optional  Relocation table */
        DT_RELSZ    = 18,       /* value   mandatory  optional  Size of REL relocation table */
        DT_RELENT   = 19,       /* value   mandatory  optional  Size of each REL table entry */
        DT_PLTREL   = 20,       /* value   optional   optional  Reloc type for PLT; value is DT_RELA or DT_REL */
        DT_DEBUG    = 21,       /* pointer optional   ignored   Contents are not specified at ABI level */
        DT_TEXTREL  = 22,       /* ignored optional   optional  presence => relocs to nonwritable segments OK */
        DT_JMPREL   = 23,       /* pointer optional   optional  Addr of relocation entries for PLT */
        DT_BIND_NOW = 24,       /* ignored optional   optional  Shall dynlinker do relocs before xfering control?*/
        DT_INIT_ARRAY = 25,     /* pointer optional   ?         Array with addresses of init fct */
        DT_FINI_ARRAY = 26,     /* pointer optional   ?         Array with address of fini fct */
        DT_INIT_ARRAYSZ = 27,   /* value   optional   ?         Size in bytes of DT_INIT_ARRAY */
        DT_FINI_ARRAYSZ = 28,   /* value   optional   ?         Size in bytes of DT_FINI_ARRAY */
        DT_RUNPATH  = 29,       /* ?       optional   ?         Library search path (how diff from DT_RPATH?) */
        DT_FLAGS    = 30,       /* value   optional   ?         Bit flags */
        DT_PREINIT_ARRAY = 32,  /* pointer optional   ?         Array with addrs of preinit fct (aka DT_ENCODING)*/
        DT_PREINIT_ARRAYSZ = 33,/* value   optional   ?         size in bytes of DT_PREINIT_ARRAY */
        DT_NUM      = 34,       /* ?       ?          ?         "number used"? */

        DT_GNU_PRELINKED =0x6ffffdf5,/*value ?          ?         Prelinking time stamp */
        DT_GNU_CONFLICTSZ=0x6ffffdf6,/*value ?          ?         Size of conflict section */
        DT_GNU_LIBLISTSZ=0x6ffffdf7,/*value  ?          ?         Size of library list */
        DT_CHECKSUM = 0x6ffffdf8, /* value   ?          ?         ? */
        DT_PLTPADSZ = 0x6ffffdf9, /* value   ?          ?         ? */
        DT_MOVEENT  = 0x6ffffdfa, /* value   ?          ?         ? */
        DT_MOVESZ   = 0x6ffffdfb, /* value   ?          ?         ? */
        DT_FEATURE_1= 0x6ffffdfc, /* value   ?          ?         Feature selection (DTF_*) */
        DT_POSFLAG_1= 0x6ffffdfd, /* value   ?          ?         Flag for DT_* entries affecting next entry */
        DT_SYMINSZ  = 0x6ffffdfe, /* value   ?          ?         Size of syminfo table in bytes */
        DT_SYMINENT = 0x6ffffdff, /* value   ?          ?         Size of each syminfo table entry */

        DT_GNU_HASH = 0x6ffffef5, /* pointer ?          ?         GNU-style hash table */
        DT_TLSDESC_PLT=0x6ffffef6,/* pointer ?          ?         ? */
        DT_TLSDESC_GOT=0x6ffffef7,/* pointer ?          ?         ? */
        DT_GNU_CONFLICT=0x6ffffef8,/*pointer ?          ?         Start of conflict section */
        DT_GNU_LIBLIST=0x6ffffef9,/* pointer ?          ?         Library list */
        DT_CONFIG   = 0x6ffffefa, /* pointer ?          ?         Configuration information */
        DT_DEPAUDIT = 0x6ffffefb, /* pointer ?          ?         Dependency auditing */
        DT_AUDIT    = 0x6ffffefc, /* pointer ?          ?         Object auditing */
        DT_PLTPAD   = 0x6ffffefd, /* pointer ?          ?         PLT padding */
        DT_MOVETAB  = 0x6ffffefe, /* pointer ?          ?         Move table */
        DT_SYMINFO  = 0x6ffffeff, /* pointer ?          ?         Syminfo table */

        DT_VERSYM   = 0x6ffffff0, /* pointer ?          ?         ? */
        DT_RELACOUNT= 0x6ffffff9, /* value   ?          ?         ? */
        DT_RELCOUNT = 0x6ffffffa, /* value   ?          ?         ? */
        DT_FLAGS_1  = 0x6ffffffb, /* value   ?          ?         Sun state flags */
        DT_VERDEF   = 0x6ffffffc, /* pointer ?          ?         Sun version definition table */
        DT_VERDEFNUM= 0x6ffffffd, /* value   ?          ?         Sun number of version definitions */
        DT_VERNEED  = 0x6ffffffe, /* pointer ?          ?         Sun needed versions table */
        DT_VERNEEDNUM=0x6fffffff, /* value   ?          ?         Sun number of needed versions */

        DT_AUXILIARY= 0x7ffffffd, /* pointer ?          ?         Sun shared obj to load before self */
        DT_FILTER   = 0x7fffffff  /* pointer ?          ?         Shared object ot get values from */
    };

#ifdef _MSC_VER
# pragma pack (1)
#endif

    /** Disk format. */
    struct Elf32DynamicEntry_disk {
        uint32_t            d_tag;                  /**< Entry type, one of the DT_* constants */
        uint32_t            d_val;                  /**< Tag's value */
    }
#if !defined(SWIG) && !defined(_MSC_VER)
    __attribute__((packed))
#endif
    ;

    struct Elf64DynamicEntry_disk {
        uint64_t            d_tag;                  /**< Entry type, one of the DT_* constants */
        uint64_t            d_val;                  /**< Tag's value */
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
    /** Property: Tag.
     *
     *  See ELF specification for details. 
     *  
     *  @{ */
    SgAsmElfDynamicEntry::EntryType const& get_d_tag() const;
    void set_d_tag(SgAsmElfDynamicEntry::EntryType const&);
    /** @} */

public:
    /** Property: Value.
     *
     *  See ELF specification for details. 
     *  
     *  @{ */
    Rose::BinaryAnalysis::RelativeVirtualAddress const& get_d_val() const;
    Rose::BinaryAnalysis::RelativeVirtualAddress& get_d_val();
    void set_d_val(Rose::BinaryAnalysis::RelativeVirtualAddress const&);
    /** @} */

public:
    /** Property: Name.
     *
     * @{ */
    SgAsmGenericString* const& get_name() const;
    void set_name(SgAsmGenericString*);
    /** @} */
public:
    /** Property: Padding byte values. 
     * 
     * @{ */
    SgUnsignedCharList const& get_extra() const;
    SgUnsignedCharList& get_extra();
    void set_extra(SgUnsignedCharList const&);
    /** @} */
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Functions
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    /** Constructor that links the object into the AST. */
    explicit SgAsmElfDynamicEntry(SgAsmElfDynamicSection *dynsec);

    /** Initialize object by parsing the file.
     *
     * @{ */
    void parse(Rose::BinaryAnalysis::ByteOrder::Endianness, const SgAsmElfDynamicEntry::Elf32DynamicEntry_disk*);
    void parse(Rose::BinaryAnalysis::ByteOrder::Endianness, const SgAsmElfDynamicEntry::Elf64DynamicEntry_disk*);
    /** @} */

    /** Convert object to disk representation.
     *
     * @{ */
    void *encode(Rose::BinaryAnalysis::ByteOrder::Endianness, SgAsmElfDynamicEntry::Elf32DynamicEntry_disk*) const;
    void *encode(Rose::BinaryAnalysis::ByteOrder::Endianness, SgAsmElfDynamicEntry::Elf64DynamicEntry_disk*) const;
    /** @} */

    /** Print some debugging info */
    virtual void dump(FILE*, const char *prefix, ssize_t idx) const;

    /** Convert Dynamic Entry Tag to a string */
    static std::string toString(SgAsmElfDynamicEntry::EntryType);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deprecated 2023-11
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
public:
    static std::string to_string(SgAsmElfDynamicEntry::EntryType) ROSE_DEPRECATED("use toString");
public:
    /** Destructor. */
    virtual ~SgAsmElfDynamicEntry();

public:
    /** Default constructor. */
    SgAsmElfDynamicEntry();

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
       // static const VariantT static_variant = V_SgAsmElfDynamicEntry;
          enum { static_variant = V_SgAsmElfDynamicEntry };

       /* the generated cast function */
      /*! \brief Casts pointer from base class to derived class */
          ROSE_DLL_API friend       SgAsmElfDynamicEntry* isSgAsmElfDynamicEntry(       SgNode * s );

      /*! \brief Casts pointer from base class to derived class (for const pointers) */
          ROSE_DLL_API friend const SgAsmElfDynamicEntry* isSgAsmElfDynamicEntry( const SgNode * s );

     // ******************************************
     // * Memory Pool / New / Delete
     // ******************************************

     public:
          /// \private
          static const unsigned pool_size; // 
          /// \private
          static std::vector<unsigned char *> pools; // 
          /// \private
          static SgAsmElfDynamicEntry * next_node; // 

          /// \private
          static unsigned long initializeStorageClassArray(SgAsmElfDynamicEntryStorageClass *); // 

          /// \private
          static void clearMemoryPool(); // 
          static void deleteMemoryPool(); // 

          /// \private
          static void extendMemoryPoolForFileIO(); // 

          /// \private
          static SgAsmElfDynamicEntry * getPointerFromGlobalIndex(unsigned long); // 
          /// \private
          static SgAsmElfDynamicEntry * getPointerFromGlobalIndex(AstSpecificDataManagingClass *, unsigned long); // 

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
               SgAsmElfDynamicEntry::operator delete (pointer,sizeof(SgAsmElfDynamicEntry));
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
 	static SgAsmElfDynamicEntry* getNodeByNodeIdInternal(size_t poolIdx, size_t itemIdx);
      /*! \brief compute the NodeId for a particular SgNode*.
       */
 	static std::string getNodeIdString(SgAsmElfDynamicEntry* sgnode);
 	static std::string getNodeIdStringInternal(SgAsmElfDynamicEntry* sgnode);

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
       // SgAsmElfDynamicEntry( SgAsmElfDynamicEntryStorageClass& source );





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
          friend class SgAsmElfDynamicEntryStorageClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClass;

      /*! \brief friend class declaration to support AST File I/O */
          friend class AstSpecificDataManagingClassStorageClass;
    public:
      /*! \brief IR node constructor to support AST File I/O */
          SgAsmElfDynamicEntry( const SgAsmElfDynamicEntryStorageClass& source );

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
          SgAsmElfDynamicEntry* addRegExpAttribute(std::string s, AstRegExAttribute* a);

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
     // friend ROSE_DLL_API SgAsmElfDynamicEntry* isSgAsmElfDynamicEntry ( SgNode* s );

          typedef SgAsmExecutableFileFormat base_node_type;


// End of memberFunctionString





    protected:
// Start of memberFunctionString
SgAsmElfDynamicEntry::EntryType p_d_tag;
          
// End of memberFunctionString
// Start of memberFunctionString
Rose::BinaryAnalysis::RelativeVirtualAddress p_d_val;
          
// End of memberFunctionString
// Start of memberFunctionString
SgAsmGenericString* p_name;
          
// End of memberFunctionString
// Start of memberFunctionString
SgUnsignedCharList p_extra;
          
// End of memberFunctionString

    friend struct Rose::Traits::generated::describe_node_t<SgAsmElfDynamicEntry>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfDynamicEntry, SgAsmElfDynamicEntry::EntryType,&SgAsmElfDynamicEntry::p_d_tag>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfDynamicEntry, Rose::BinaryAnalysis::RelativeVirtualAddress,&SgAsmElfDynamicEntry::p_d_val>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfDynamicEntry, SgAsmGenericString*,&SgAsmElfDynamicEntry::p_name>;
    friend struct Rose::Traits::generated::describe_field_t<SgAsmElfDynamicEntry, SgUnsignedCharList,&SgAsmElfDynamicEntry::p_extra>;

/* #line 21 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


   };
#endif

// postdeclarations for SgAsmElfDynamicEntry

/* #line 705 "/workspace/generated/src/frontend/SageIII//SgAsmElfDynamicEntry.h" */

/* #line 27 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro after subst for $POSTDECLARATIONS" */

/* #line 28 "/workspace/generated/src/ROSETTA/Grammar/grammarClassDeclarationMacros.macro" */


/* #line 712 "/workspace/generated/src/frontend/SageIII//SgAsmElfDynamicEntry.h" */

#endif // ROSE_SgAsmElfDynamicEntry_H

