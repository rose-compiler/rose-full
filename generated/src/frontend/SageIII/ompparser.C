/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         omp_parse
#define yylex           omp_lex
#define yyerror         omp_error
#define yydebug         omp_debug
#define yynerrs         omp_nerrs

#define yylval          omp_lval
#define yychar          omp_char
#define yylloc          omp_lloc

/* Copy the first part of user declarations.  */
#line 17 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:339  */

/* DQ (2/10/2014): IF is conflicting with Boost template IF. */
#undef IF

#include <stdio.h>
#include <assert.h>
#include <iostream>
#include "sage3basic.h" // Sage Interface and Builders
#include "sageBuilder.h"
#include "OmpAttribute.h"

#ifdef _MSC_VER
  #undef IN
  #undef OUT
  #undef DUPLICATE
#endif

using namespace OmpSupport;

/* Parser - BISON */

/*the scanner function*/
extern int omp_lex(); 

/*A customized initialization function for the scanner, str is the string to be scanned.*/
extern void omp_lexer_init(const char* str);

//! Initialize the parser with the originating SgPragmaDeclaration and its pragma text
extern void omp_parser_init(SgNode* aNode, const char* str);

/*Treat the entire expression as a string for now
  Implemented in the scanner*/
extern void omp_parse_expr();

//The result AST representing the annotation
extern OmpAttribute* getParsedDirective();

static int omp_error(const char*);

//Insert variable into var_list of some clause
static bool addVar(const char* var);

static bool addVarExp(SgExpression* var);

//Insert expression into some clause
static bool addExpression(const char* expr);

// The current AST annotation being built
static OmpAttribute* ompattribute = NULL;

// The current OpenMP construct or clause type which is being parsed
// It is automatically associated with the current ompattribute
// Used to indicate the OpenMP directive or clause to which a variable list or an expression should get added for the current OpenMP pragma being parsed.
static omp_construct_enum omptype = e_unknown;

// The node to which vars/expressions should get added
//static OmpAttribute* omptype = 0;

// The context node with the pragma annotation being parsed
//
// We attach the attribute to the pragma declaration directly for now, 
// A few OpenMP directive does not affect the next structure block
// This variable is set by the prefix_parser_init() before prefix_parse() is called.
//Liao
static SgNode* gNode;

static const char* orig_str; 

// The current expression node being generated 
static SgExpression* current_exp = NULL;
bool b_within_variable_list  = false;  // a flag to indicate if the program is now processing a list of variables

// We now follow the OpenMP 4.0 standard's C-style array section syntax: [lower-bound:length] or just [length]
// the latest variable symbol being parsed, used to help parsing the array dimensions associated with array symbol
// such as a[0:n][0:m]
static SgVariableSymbol* array_symbol; 
static SgExpression* lower_exp = NULL;
static SgExpression* length_exp = NULL;
// check if the parsed a[][] is an array element access a[i][j] or array section a[lower:length][lower:length]
// 
static bool arraySection=true; 


#line 159 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ompparser.h".  */
#ifndef YY_OMP_WORKSPACE_GENERATED_SRC_FRONTEND_SAGEIII_OMPPARSER_H_INCLUDED
# define YY_OMP_WORKSPACE_GENERATED_SRC_FRONTEND_SAGEIII_OMPPARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int omp_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OMP = 258,
    PARALLEL = 259,
    IF = 260,
    NUM_THREADS = 261,
    ORDERED = 262,
    SCHEDULE = 263,
    STATIC = 264,
    DYNAMIC = 265,
    GUIDED = 266,
    RUNTIME = 267,
    SECTIONS = 268,
    SINGLE = 269,
    NOWAIT = 270,
    SECTION = 271,
    FOR = 272,
    MASTER = 273,
    CRITICAL = 274,
    BARRIER = 275,
    ATOMIC = 276,
    FLUSH = 277,
    TARGET = 278,
    UPDATE = 279,
    DIST_DATA = 280,
    BLOCK = 281,
    DUPLICATE = 282,
    CYCLIC = 283,
    THREADPRIVATE = 284,
    PRIVATE = 285,
    COPYPRIVATE = 286,
    FIRSTPRIVATE = 287,
    LASTPRIVATE = 288,
    SHARED = 289,
    DEFAULT = 290,
    NONE = 291,
    REDUCTION = 292,
    COPYIN = 293,
    TASK = 294,
    TASKWAIT = 295,
    UNTIED = 296,
    COLLAPSE = 297,
    AUTO = 298,
    DECLARE = 299,
    DATA = 300,
    DEVICE = 301,
    MAP = 302,
    ALLOC = 303,
    TO = 304,
    FROM = 305,
    TOFROM = 306,
    PROC_BIND = 307,
    CLOSE = 308,
    SPREAD = 309,
    SIMD = 310,
    SAFELEN = 311,
    ALIGNED = 312,
    LINEAR = 313,
    UNIFORM = 314,
    INBRANCH = 315,
    NOTINBRANCH = 316,
    MPI = 317,
    MPI_ALL = 318,
    MPI_MASTER = 319,
    TARGET_BEGIN = 320,
    TARGET_END = 321,
    LOGAND = 322,
    LOGOR = 323,
    SHLEFT = 324,
    SHRIGHT = 325,
    PLUSPLUS = 326,
    MINUSMINUS = 327,
    PTR_TO = 328,
    LE_OP2 = 329,
    GE_OP2 = 330,
    EQ_OP2 = 331,
    NE_OP2 = 332,
    RIGHT_ASSIGN2 = 333,
    LEFT_ASSIGN2 = 334,
    ADD_ASSIGN2 = 335,
    SUB_ASSIGN2 = 336,
    MUL_ASSIGN2 = 337,
    DIV_ASSIGN2 = 338,
    MOD_ASSIGN2 = 339,
    AND_ASSIGN2 = 340,
    XOR_ASSIGN2 = 341,
    OR_ASSIGN2 = 342,
    DEPEND = 343,
    IN = 344,
    OUT = 345,
    INOUT = 346,
    MERGEABLE = 347,
    LEXICALERROR = 348,
    IDENTIFIER = 349,
    MIN = 350,
    MAX = 351,
    READ = 352,
    WRITE = 353,
    CAPTURE = 354,
    SIMDLEN = 355,
    FINAL = 356,
    PRIORITY = 357,
    ICONSTANT = 358,
    EXPRESSION = 359,
    ID_EXPRESSION = 360
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 107 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:355  */
  int itype;
          double ftype;
          const char* stype;
          void* ptype; /* For expressions */
        

#line 312 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE omp_lval;
extern YYLTYPE omp_lloc;
int omp_parse (void);

#endif /* !YY_OMP_WORKSPACE_GENERATED_SRC_FRONTEND_SAGEIII_OMPPARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 343 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   982

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  128
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  187
/* YYNRULES -- Number of rules.  */
#define YYNRULES  422
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  585

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   363

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   124,    74,     2,
      67,    68,    72,    71,    69,    73,    84,   123,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,     2,
     117,   119,   118,   125,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   126,     2,   127,    75,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    76,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    77,    78,    79,    80,    81,    82,    83,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   120,   121,   122
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   156,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   180,   180,   188,   189,   192,   193,
     194,   197,   201,   205,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   223,   226,   223,   230,   230,   238,   239,
     242,   243,   244,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   270,   271,   276,   276,   282,   283,   288,   288,   295,
     295,   303,   304,   305,   306,   307,   310,   310,   315,   316,
     319,   320,   321,   324,   325,   326,   327,   328,   331,   336,
     336,   342,   343,   346,   347,   348,   350,   355,   356,   357,
     358,   360,   364,   360,   366,   366,   373,   374,   377,   378,
     379,   382,   383,   384,   385,   386,   387,   388,   391,   391,
     397,   397,   403,   406,   411,   413,   411,   420,   424,   428,
     435,   435,   442,   443,   446,   447,   448,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   470,   470,   477,   478,   480,   481,   482,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   500,   500,   507,   508,   511,   512,   513,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   528,
     534,   534,   540,   541,   548,   553,   559,   565,   565,   571,
     572,   575,   578,   582,   585,   589,   589,   596,   597,   600,
     600,   603,   609,   613,   609,   616,   620,   627,   629,   627,
     632,   635,   632,   638,   641,   638,   644,   646,   644,   649,
     651,   649,   654,   658,   662,   666,   670,   674,   678,   682,
     686,   690,   696,   696,   703,   704,   705,   708,   709,   710,
     713,   713,   721,   722,   725,   726,   727,   730,   731,   732,
     733,   734,   735,   748,   748,   754,   758,   762,   766,   769,
     774,   780,   787,   787,   795,   795,   802,   806,   802,   815,
     816,   817,   818,   819,   822,   822,   830,   831,   835,   834,
     842,   843,   846,   847,   848,   852,   853,   854,   855,   856,
     857,   858,   859,   864,   865,   866,   869,   869,   877,   878,
     879,   880,   883,   883,   891,   891,   898,   899,   903,   904,
     905,   908,   909,   910,   911,   912,   913,   916,   920,   916,
     923,   927,   927,   923,   929,   930,   933,   936,   940,   940,
     936,   943,   944,   947,   956,   958,   959,   960,   967,   974,
     981,   988,   995,  1002,  1009,  1016,  1023,  1030,  1039,  1049,
    1050,  1059,  1060,  1069,  1070,  1079,  1080,  1089,  1090,  1099,
    1100,  1107,  1116,  1117,  1125,  1132,  1139,  1148,  1149,  1156,
    1165,  1166,  1173,  1182,  1183,  1190,  1197,  1206,  1210,  1216,
    1221,  1225,  1232,  1242,  1247,  1252,  1281,  1288,  1305,  1306,
    1310,  1315,  1324,  1325,  1328,  1328,  1332,  1333,  1336,  1337,
    1340,  1341,  1340
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OMP", "PARALLEL", "IF", "NUM_THREADS",
  "ORDERED", "SCHEDULE", "STATIC", "DYNAMIC", "GUIDED", "RUNTIME",
  "SECTIONS", "SINGLE", "NOWAIT", "SECTION", "FOR", "MASTER", "CRITICAL",
  "BARRIER", "ATOMIC", "FLUSH", "TARGET", "UPDATE", "DIST_DATA", "BLOCK",
  "DUPLICATE", "CYCLIC", "THREADPRIVATE", "PRIVATE", "COPYPRIVATE",
  "FIRSTPRIVATE", "LASTPRIVATE", "SHARED", "DEFAULT", "NONE", "REDUCTION",
  "COPYIN", "TASK", "TASKWAIT", "UNTIED", "COLLAPSE", "AUTO", "DECLARE",
  "DATA", "DEVICE", "MAP", "ALLOC", "TO", "FROM", "TOFROM", "PROC_BIND",
  "CLOSE", "SPREAD", "SIMD", "SAFELEN", "ALIGNED", "LINEAR", "UNIFORM",
  "INBRANCH", "NOTINBRANCH", "MPI", "MPI_ALL", "MPI_MASTER",
  "TARGET_BEGIN", "TARGET_END", "'('", "')'", "','", "':'", "'+'", "'*'",
  "'-'", "'&'", "'^'", "'|'", "LOGAND", "LOGOR", "SHLEFT", "SHRIGHT",
  "PLUSPLUS", "MINUSMINUS", "PTR_TO", "'.'", "LE_OP2", "GE_OP2", "EQ_OP2",
  "NE_OP2", "RIGHT_ASSIGN2", "LEFT_ASSIGN2", "ADD_ASSIGN2", "SUB_ASSIGN2",
  "MUL_ASSIGN2", "DIV_ASSIGN2", "MOD_ASSIGN2", "AND_ASSIGN2",
  "XOR_ASSIGN2", "OR_ASSIGN2", "DEPEND", "IN", "OUT", "INOUT", "MERGEABLE",
  "LEXICALERROR", "IDENTIFIER", "MIN", "MAX", "READ", "WRITE", "CAPTURE",
  "SIMDLEN", "FINAL", "PRIORITY", "ICONSTANT", "EXPRESSION",
  "ID_EXPRESSION", "'<'", "'>'", "'='", "\"!=\"", "\"<=\"", "\">=\"",
  "'/'", "'%'", "'?'", "'['", "']'", "$accept", "openmp_directive",
  "parallel_directive", "$@1", "parallel_clause_optseq",
  "parallel_clause_seq", "proc_bind_clause", "parallel_clause",
  "copyin_clause", "$@2", "$@3", "for_directive", "$@4",
  "for_clause_optseq", "for_clause_seq", "for_clause",
  "for_or_simd_clause", "schedule_chunk_opt", "ordered_clause", "$@5",
  "ordered_parameter_opt", "schedule_clause", "$@6", "collapse_clause",
  "$@7", "schedule_kind", "sections_directive", "$@8",
  "sections_clause_optseq", "sections_clause_seq", "sections_clause",
  "section_directive", "single_directive", "$@9", "single_clause_optseq",
  "single_clause_seq", "nowait_clause", "single_clause",
  "unique_single_clause", "$@10", "$@11", "task_directive", "$@12",
  "task_clause_optseq", "task_clause_seq", "task_clause",
  "unique_task_clause", "$@13", "$@14", "depend_clause", "$@15", "$@16",
  "dependence_type", "parallel_for_directive", "$@17",
  "parallel_for_clauseoptseq", "parallel_for_clause_seq",
  "parallel_for_clause", "parallel_for_simd_directive", "$@18",
  "parallel_for_simd_clauseoptseq", "parallel_for_simd_clause_seq",
  "parallel_for_simd_clause", "parallel_sections_directive", "$@19",
  "parallel_sections_clause_optseq", "parallel_sections_clause_seq",
  "parallel_sections_clause", "master_directive", "critical_directive",
  "$@20", "region_phraseopt", "region_phrase", "barrier_directive",
  "taskwait_directive", "atomic_directive", "$@21", "atomic_clauseopt",
  "atomic_clause", "flush_directive", "$@22", "flush_varsopt",
  "flush_vars", "$@23", "ordered_directive", "threadprivate_directive",
  "$@24", "$@25", "default_clause", "private_clause", "$@26", "$@27",
  "firstprivate_clause", "$@28", "$@29", "lastprivate_clause", "$@30",
  "$@31", "share_clause", "$@32", "$@33", "reduction_clause", "$@34",
  "$@35", "reduction_operator", "target_data_directive", "$@36",
  "target_data_clause_seq", "target_data_clause", "target_directive",
  "$@37", "target_clause_optseq", "target_clause_seq", "target_clause",
  "device_clause", "$@38", "expression_or_star_or_mpi", "begin_clause",
  "end_clause", "if_clause", "$@39", "num_threads_clause", "$@40",
  "map_clause", "$@41", "$@42", "map_clause_optseq", "for_simd_directive",
  "$@43", "for_or_simd_clause_optseq", "simd_directive", "$@44",
  "simd_clause_optseq", "simd_clause_seq", "simd_clause",
  "for_or_simd_clause_seq", "safelen_clause", "$@45", "unique_simd_clause",
  "simdlen_clause", "$@46", "declare_simd_directive", "$@47",
  "declare_simd_clause_optseq", "declare_simd_clause_seq",
  "declare_simd_clause", "uniform_clause", "$@48", "$@49",
  "aligned_clause", "$@50", "$@51", "$@52", "aligned_clause_optseq",
  "aligned_clause_alignment", "linear_clause", "$@53", "$@54", "$@55",
  "linear_clause_step_optseq", "linear_clause_step", "expression",
  "assignment_expr", "conditional_expr", "logical_or_expr",
  "logical_and_expr", "inclusive_or_expr", "exclusive_or_expr", "and_expr",
  "equality_expr", "relational_expr", "shift_expr", "additive_expr",
  "multiplicative_expr", "primary_expr", "unary_expr", "postfix_expr",
  "variable_list", "variable_exp_list", "map_variable_list",
  "id_expression_opt_dimension", "$@56", "dimension_field_optseq",
  "dimension_field_seq", "dimension_field", "$@57", "$@58", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    40,    41,    44,
      58,    43,    42,    45,    38,    94,   124,   322,   323,   324,
     325,   326,   327,   328,    46,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,    60,    62,    61,
     361,   362,   363,    47,    37,    63,    91,    93
};
# endif

#define YYPACT_NINF -499

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-499)))

#define YYTABLE_NINF -404

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      54,   853,    87,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,    53,  -499,  -499,  -499,  -499,
      13,  -499,  -499,  -499,  -499,  -499,    19,  -499,  -499,  -499,
      35,  -499,  -499,  -499,    43,   881,   539,   397,  -499,   821,
      88,     3,    96,  -499,   427,    99,   467,  -499,   447,   872,
    -499,   810,  -499,  -499,  -499,  -499,  -499,   110,  -499,  -499,
     115,  -499,   768,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,    48,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,   590,  -499,  -499,  -499,  -499,
    -499,   676,  -499,   121,  -499,  -499,  -499,   777,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,    -1,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
     152,  -499,  -499,  -499,  -499,  -499,   305,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,   418,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
     583,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,   668,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,   730,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,   620,  -499,
    -499,  -499,  -499,  -499,  -499,   714,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,   125,   127,   133,   135,
     137,    40,   139,   141,    42,   881,  -499,   150,   539,  -499,
     157,   397,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,   631,  -499,  -499,  -499,  -499,  -499,   165,
     265,   167,   169,   821,  -499,   172,     4,   138,  -499,  -499,
    -499,  -499,   179,   199,   427,  -499,     4,   203,   229,   233,
     467,  -499,  -499,  -499,  -499,  -499,  -499,   377,  -499,  -499,
    -499,  -499,   235,   249,   251,   447,  -499,   872,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,   555,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,   810,  -499,   232,   232,
    -499,  -499,  -499,   258,   264,   873,  -499,   271,   276,   279,
    -499,  -499,  -499,  -499,  -499,   676,  -499,   232,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,   232,  -499,  -499,  -499,  -499,
      59,   152,  -499,   451,   533,  -499,    66,   -50,   232,   232,
    -499,   302,   583,  -499,   232,  -499,   232,  -499,  -499,   620,
    -499,  -499,   232,   232,   232,  -499,  -499,   290,  -499,  -499,
     -36,   295,   299,   303,   306,    86,   393,    -8,    11,   -16,
     845,   863,   -34,   314,     4,     4,     4,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,   318,
       4,  -499,  -499,  -499,     4,     4,  -499,   323,   324,   331,
       4,  -499,   288,  -499,   337,   338,   340,   342,  -499,   350,
     352,   354,   355,   371,  -499,  -499,  -499,  -499,  -499,   372,
     376,   379,  -499,  -499,   386,     4,   389,  -499,   390,  -499,
    -499,  -499,  -499,   -13,   232,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,  -499,  -499,   232,  -499,   112,   176,   196,
    -499,   212,   215,   221,  -499,   232,   407,  -499,   412,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,   329,
    -499,  -499,  -499,     4,  -499,   412,  -499,  -499,   295,  -499,
     406,   299,   303,   306,    86,   393,   393,    -8,    -8,    -8,
      -8,    11,    11,   -16,   -16,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,   -27,
    -499,  -499,  -499,     4,  -499,  -499,  -499,  -499,  -499,   415,
    -499,   237,  -499,   -13,   262,   416,   232,   232,  -499,   267,
     232,   414,  -499,   364,  -499,   329,   -34,   273,  -499,   232,
     423,  -499,  -499,   367,  -499,  -499,  -499,   232,  -499,   364,
    -499,  -499,  -499,   -13,  -499,  -499,  -499,  -499,  -499,   -34,
     425,   232,  -499,   369,  -499
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     2,     3,     6,    20,     7,    11,     8,
       9,    10,    12,    13,    16,    17,    14,    18,    15,    19,
      22,    21,     4,    23,     5,    24,   221,    86,    99,    98,
      46,   199,   200,   205,   207,   215,   260,   222,   114,   206,
       0,   298,     1,   182,   140,    26,    88,   101,   294,    48,
     202,   209,   217,   252,   262,     0,   116,   324,   300,   184,
     161,   142,   282,   284,   227,   230,   236,     0,   239,    43,
       0,    25,    27,    42,    28,    40,    36,    37,    38,    39,
      41,    34,    35,   106,   233,    87,    89,    90,    97,    93,
      94,    95,    96,   111,   100,   102,   110,   103,   107,   108,
     109,   296,    73,     0,    79,   347,    47,    49,    50,    60,
      58,    59,    61,    53,    54,    55,    57,    56,     0,   201,
     203,   213,   211,   212,   214,   208,   210,   219,   216,   218,
       0,   273,   286,   280,   281,   261,   263,   264,   267,   271,
     272,   269,   270,   268,   223,   132,   134,   133,   128,   130,
     115,   117,   118,   121,   126,   122,   123,   124,   125,   127,
     326,   316,   340,   322,   312,   309,   310,   311,   299,   301,
     302,   305,   306,   308,   307,   198,   189,   183,   185,   186,
     190,   191,   192,   193,   194,   195,   196,   197,   163,   155,
     153,   160,   158,   159,   141,   143,   144,   149,   150,   151,
     156,   152,   154,   147,   148,   157,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,    91,
       0,     0,   104,   313,    62,    63,    68,    70,    64,    65,
      66,    67,   295,   297,   318,    69,   319,   320,   321,    75,
       0,     0,     0,     0,    51,     0,     0,   253,   254,   257,
     259,   258,     0,     0,     0,   265,     0,     0,     0,     0,
       0,   119,   337,   335,   336,   331,   325,   327,   328,   334,
     333,   332,     0,     0,     0,     0,   303,     0,   187,   181,
     168,   169,   170,   177,   162,   164,   165,   172,   173,   174,
     175,   178,   176,   179,   180,   171,     0,   145,     0,     0,
     228,   231,   237,     0,     0,     0,    44,     0,     0,     0,
      30,   234,    92,   112,   105,     0,   314,     0,    74,    81,
      82,    83,    85,    84,    77,     0,   348,    52,   204,   408,
       0,     0,   255,     0,   289,   266,     0,     0,     0,     0,
     120,     0,     0,   329,     0,   341,     0,   304,   188,     0,
     166,   146,     0,     0,     0,   397,   398,     0,   354,   355,
     356,   369,   371,   373,   375,   377,   379,   382,   387,   390,
     393,     0,   400,     0,     0,     0,     0,   225,   226,   242,
     243,   244,   247,   248,   249,   250,   251,   245,   246,     0,
       0,    31,    32,    33,     0,     0,   315,     0,    71,     0,
       0,   220,     0,   256,     0,     0,     0,     0,   274,     0,
       0,     0,     0,     0,   287,   224,   137,   138,   139,     0,
       0,     0,   338,   330,     0,     0,     0,   167,     0,   403,
     401,   402,   283,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   406,   407,     0,   285,     0,     0,     0,
     240,     0,     0,     0,    76,     0,     0,    80,   349,   409,
     275,   276,   277,   279,   278,   290,   291,   292,   293,     0,
     135,   129,   131,     0,   317,   342,   323,   399,   370,   393,
       0,   372,   374,   376,   378,   380,   381,   385,   386,   383,
     384,   389,   388,   391,   392,   394,   395,   396,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   357,     0,
     229,   232,   238,     0,    45,   235,   113,    72,    78,   351,
     414,     0,   412,     0,     0,   344,     0,     0,   404,     0,
       0,     0,   352,   416,   288,     0,   410,     0,   339,     0,
       0,   345,   368,     0,   241,   353,   350,     0,   415,   417,
     418,   413,   136,     0,   346,   343,   405,   420,   419,   411,
       0,     0,   421,     0,   422
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -499,  -499,  -499,  -499,  -499,  -499,   100,   -64,   134,  -499,
    -499,  -499,  -499,  -499,  -499,  -105,  -197,  -499,   -55,  -499,
    -499,    64,  -499,    68,  -499,  -499,  -499,  -499,  -499,  -499,
     -70,  -499,  -499,  -499,  -499,  -499,   291,   -69,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -123,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -172,  -499,  -499,
    -499,  -499,  -247,  -499,  -499,  -499,  -499,  -146,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,    38,   -46,
    -499,  -499,   -42,  -499,  -499,   -24,  -499,  -499,    60,  -499,
    -499,   -28,  -499,  -499,  -499,  -499,  -499,  -499,  -227,  -499,
    -499,  -499,  -499,  -107,  -108,  -499,  -499,  -499,  -499,    32,
    -499,     8,  -499,   -89,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -145,  -499,   -47,  -499,  -179,    52,
    -499,  -499,  -499,  -499,  -499,  -228,  -499,  -499,  -499,    98,
    -499,  -499,  -499,  -499,  -499,   164,  -499,  -499,  -499,  -499,
    -499,    51,     9,  -499,  -499,    65,    72,    73,    63,    82,
     -85,   173,   -84,   -81,   102,    61,  -498,    26,  -499,  -499,
     -33,  -499,  -499,  -499,   -44,  -499,  -499
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    45,    71,    72,    73,    74,    75,   213,
     390,     4,    49,   106,   107,   108,   223,   476,   109,   239,
     318,   110,   398,   111,   241,   324,     5,    46,    85,    86,
      87,     6,     7,    47,    94,    95,    88,    97,    98,   220,
     395,     8,    56,   150,   151,   152,   153,   258,   259,   154,
     257,   543,   419,     9,    61,   194,   195,   196,    10,   188,
     284,   285,   286,    11,    59,   177,   178,   179,    12,    13,
      50,   119,   120,    14,    15,    16,    51,   125,   126,    17,
      52,   128,   129,   246,    18,    19,    55,   256,    76,    77,
     208,   374,    78,   209,   375,    91,   217,   394,    79,   210,
     376,    80,   212,   533,   389,    20,   130,   247,   248,    21,
      54,   135,   136,   137,   138,   252,   408,   139,   140,    81,
     206,    82,   207,   143,   253,   489,   414,    22,   101,   232,
      23,    58,   168,   169,   170,   233,   234,   272,   235,   236,
     274,    24,   160,   266,   267,   268,   269,   341,   493,   237,
     273,   425,   545,   560,   561,   238,   242,   400,   539,   551,
     552,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   330,   557,   541,
     542,   553,   568,   569,   570,   580,   583
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,    99,   244,   113,    90,   100,   191,   114,   216,   295,
     156,   171,   165,   181,   157,   198,   219,   182,    92,   199,
     332,   116,   249,   297,   276,   115,   222,   121,   261,   255,
     167,   185,   278,   202,   166,   183,   316,   200,   350,   343,
      89,   251,   433,   547,    90,   556,   224,   463,   464,    99,
     416,   417,   418,   100,   352,   228,   449,     1,    92,   229,
     307,   113,   142,    83,    53,   114,    43,   187,    48,   204,
      44,   445,   446,   231,   303,   579,   304,   230,    64,   116,
      65,    84,   447,   115,   448,    68,   141,    42,   159,   434,
      57,   186,   465,   203,   155,   308,   309,   180,    60,   197,
     548,   355,   427,   356,   403,   156,   295,   450,   451,   157,
     172,   122,   123,   124,   423,   245,   158,   218,   396,   184,
     329,   201,   171,   165,   351,   192,   164,   401,   402,   193,
     347,   348,   181,   281,   415,   402,   182,   340,   327,   249,
     191,   167,   288,    62,   142,   166,   289,   335,   312,   198,
     185,   310,   314,   199,   183,   118,   173,    62,   251,   175,
     292,   189,   250,   127,   290,   225,   144,   202,   141,   226,
     295,   200,    89,   439,   440,    99,    90,   211,   224,   100,
     530,   402,   214,   159,   131,   132,   187,   228,   240,   155,
      92,   229,   298,   176,   299,   190,   294,   113,   131,   132,
     300,   114,   301,   204,   302,   231,   305,   331,   306,   230,
     186,   158,   265,   117,   156,   116,   180,   311,   157,   115,
     293,   172,   174,   249,   313,   205,   287,   203,   171,   165,
     281,   181,   317,   197,   325,   182,   326,   164,   184,   288,
     328,   191,   251,   289,   531,   402,   333,   167,   291,   185,
     198,   166,   282,   183,   199,   201,   283,   292,   270,   192,
     224,   290,   142,   193,   532,   402,   334,   173,   202,   228,
     337,   117,   200,   229,   319,   320,   321,   322,   175,   250,
     534,   402,   336,   535,   402,   187,   141,   231,   279,   536,
     402,   230,   159,   294,   281,   189,   338,   225,   155,   352,
     339,   226,   344,   288,   204,   554,   555,   289,   323,   186,
      62,    63,   176,   353,   354,   180,   345,   293,   346,   265,
     158,   292,   280,   287,   271,   290,   377,   172,   203,   190,
     558,   402,   378,   174,   197,   564,   402,   184,    96,   391,
     112,   572,   573,   164,   392,   291,   355,   393,   356,   282,
     373,   131,   132,   283,   505,   506,   201,   294,   432,   205,
     192,   511,   512,   250,   193,   270,   513,   514,   397,   422,
     133,   134,   435,   173,   254,   436,   399,   175,   437,   225,
     438,   293,   466,   226,   409,   279,    96,   287,   470,   420,
     421,   474,   227,   475,   265,   424,   189,   426,   112,   477,
     467,   468,   469,   428,   479,   480,   481,   117,   482,   291,
     483,   176,    83,   282,   430,   431,   471,   283,   484,   280,
     472,   473,   485,    62,   486,   487,   478,    64,    93,    65,
     190,   271,    62,    63,   162,   105,   262,   263,   264,   174,
     270,   488,   490,   500,   491,   540,   342,   492,    64,   279,
      65,   495,    66,    67,   494,   429,   429,   496,   497,   145,
     205,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,    62,   131,   132,   538,   546,    64,   441,   442,
      84,   402,   566,   280,    68,   550,   559,   260,   163,   104,
     567,   575,   133,   134,   576,   581,   584,    64,   498,    65,
     503,    66,    67,   161,   162,   105,   271,   501,   145,   502,
     443,   444,    96,   404,   405,   406,   529,   146,   352,   544,
     504,   147,   571,   407,   227,   578,   537,     0,     0,     0,
     148,   149,   353,   354,   112,   499,     0,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   515,   516,   517,    83,   562,     0,     0,   163,   549,
      62,    63,   102,   103,     0,   355,   146,   356,     0,    64,
     147,    65,    84,     0,     0,     0,    68,     0,     0,   148,
     149,   410,   411,   412,   413,    64,     0,    65,    84,    66,
      67,     0,    68,    69,     0,     0,     0,   104,   563,     0,
       0,   565,     0,     0,     0,    83,   227,    70,     0,     0,
     574,   161,   162,   105,   507,   508,   509,   510,   577,     0,
      64,    93,    65,     0,   349,    62,    63,   102,   103,     0,
       0,     0,   582,     0,     0,     0,     0,     0,   102,   103,
     162,   105,   262,   263,   264,   429,    83,     0,     0,     0,
      64,     0,    65,    84,    66,    67,     0,    68,    69,   221,
       0,    64,   104,    65,    84,     0,   163,     0,    68,     0,
       0,     0,    70,   104,     0,   429,   161,   162,   105,     0,
       0,     0,     0,   102,   103,     0,     0,   161,   162,   105,
       0,    83,     0,     0,   163,     0,     0,     0,    64,     0,
     315,    84,     0,     0,     0,    68,    64,     0,    65,    84,
     104,     0,     0,    68,     0,     0,     0,     0,   104,    62,
      63,   102,   103,     0,   161,   162,   105,     0,     0,     0,
       0,   163,   161,   162,   105,    62,    63,   275,     0,     0,
       0,     0,   163,     0,    64,     0,    65,    84,    66,    67,
       0,    68,    69,     0,     0,     0,   104,     0,     0,     0,
      64,     0,    65,    84,    66,    67,    70,    68,    69,     0,
       0,     0,   105,    62,    63,     0,     0,     0,     0,   163,
       0,     0,    70,   296,   102,   103,     0,   163,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,    64,   277,
      65,     0,    66,    67,     0,    68,    69,    64,     0,    65,
      84,     0,     0,     0,    68,    62,    63,   102,   103,   104,
      70,     0,     0,     0,     0,     0,     0,     0,   102,   103,
       0,     0,     0,     0,     0,   105,    83,   215,     0,     0,
      64,     0,    65,    84,    66,    67,   243,    68,    69,     0,
       0,    64,   104,    65,    84,     0,     0,    25,    68,     0,
      26,     0,    70,   104,     0,     0,    27,    28,   105,    29,
      30,    31,    32,    33,    34,    35,    36,    62,    63,   105,
       0,     0,    37,     0,     0,     0,    62,    63,     0,     0,
       0,     0,    38,    39,     0,     0,     0,    40,     0,     0,
       0,     0,    64,     0,    65,    84,    66,    67,    41,    68,
      69,    64,     0,    65,     0,    66,    67,     0,    68,    69,
       0,     0,     0,     0,    70,     0,  -403,  -403,     0,     0,
       0,     0,     0,    70,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,   379,   380,   381,   382,   383,   384,
     385,   386,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,     0,     0,  -403,     0,     0,     0,     0,     0,
       0,  -403,     0,     0,     0,     0,     0,     0,     0,   387,
     388,     0,   462
};

static const yytype_int16 yycheck[] =
{
      46,    47,   107,    49,    46,    47,    61,    49,    72,   188,
      56,    58,    58,    59,    56,    61,    86,    59,    46,    61,
     247,    49,   130,   195,   169,    49,    95,    24,   151,   136,
      58,    59,   178,    61,    58,    59,   233,    61,   285,   267,
      86,   130,    78,    70,    86,   543,   101,    81,    82,    95,
     100,   101,   102,    95,    67,   101,    72,     3,    86,   101,
      18,   107,    54,    15,    45,   107,    13,    59,    55,    61,
      17,    79,    80,   101,    34,   573,    36,   101,    30,   107,
      32,    33,    71,   107,    73,    37,    54,     0,    56,   125,
      55,    59,   126,    61,    56,    53,    54,    59,    55,    61,
     127,   114,   349,   116,   331,   151,   285,   123,   124,   151,
      58,   108,   109,   110,   342,   116,    56,    69,   315,    59,
     116,    61,   169,   169,   296,    61,    58,    68,    69,    61,
     275,   277,   178,   188,    68,    69,   178,   260,   243,   247,
     195,   169,   188,     5,   136,   169,   188,   254,   218,   195,
     178,   215,   221,   195,   178,    67,    58,     5,   247,    59,
     188,    61,   130,    67,   188,   101,    67,   195,   136,   101,
     349,   195,   218,    87,    88,   221,   218,    67,   233,   221,
      68,    69,    67,   151,    46,    47,   178,   233,    67,   151,
     218,   233,    67,    59,    67,    61,   188,   243,    46,    47,
      67,   243,    67,   195,    67,   233,    67,    69,    67,   233,
     178,   151,   160,    49,   260,   243,   178,    67,   260,   243,
     188,   169,    58,   331,    67,    61,   188,   195,   275,   275,
     285,   277,    67,   195,    67,   277,    67,   169,   178,   285,
      68,   296,   331,   285,    68,    69,    67,   275,   188,   277,
     296,   275,   188,   277,   296,   195,   188,   285,   160,   195,
     315,   285,   254,   195,    68,    69,    67,   169,   296,   315,
      67,   107,   296,   315,     9,    10,    11,    12,   178,   247,
      68,    69,   256,    68,    69,   277,   254,   315,   188,    68,
      69,   315,   260,   285,   349,   195,    67,   233,   260,    67,
      67,   233,    67,   349,   296,    68,    69,   349,    43,   277,
       5,     6,   178,    81,    82,   277,    67,   285,    67,   267,
     260,   349,   188,   285,   160,   349,    68,   275,   296,   195,
      68,    69,    68,   169,   296,    68,    69,   277,    47,    68,
      49,    68,    69,   275,    68,   285,   114,    68,   116,   285,
     299,    46,    47,   285,   439,   440,   296,   349,    68,   195,
     296,   445,   446,   331,   296,   267,   447,   448,   317,    67,
      65,    66,    77,   275,    69,    76,   325,   277,    75,   315,
      74,   349,    68,   315,   333,   285,    95,   349,    70,   338,
     339,    68,   101,    69,   342,   344,   296,   346,   107,    68,
     374,   375,   376,   352,   116,    68,    68,   243,    68,   349,
      68,   277,    15,   349,   353,   354,   390,   349,    68,   285,
     394,   395,    70,     5,    70,    70,   400,    30,    31,    32,
     296,   267,     5,     6,    57,    58,    59,    60,    61,   275,
     342,    70,    70,   434,    68,   116,    69,    68,    30,   349,
      32,   425,    34,    35,    68,   353,   354,    68,    68,    41,
     296,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,     5,    46,    47,    68,    70,    30,    85,    86,
      33,    69,    68,   349,    37,    70,    70,    69,   111,    42,
     126,    68,    65,    66,   127,    70,   127,    30,   433,    32,
     437,    34,    35,    56,    57,    58,   342,   435,    41,   436,
     117,   118,   221,    62,    63,    64,   465,    99,    67,   493,
     438,   103,   555,    72,   233,   569,   475,    -1,    -1,    -1,
     112,   113,    81,    82,   243,   433,    -1,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,    15,   546,    -1,    -1,   111,   533,
       5,     6,     7,     8,    -1,   114,    99,   116,    -1,    30,
     103,    32,    33,    -1,    -1,    -1,    37,    -1,    -1,   112,
     113,    48,    49,    50,    51,    30,    -1,    32,    33,    34,
      35,    -1,    37,    38,    -1,    -1,    -1,    42,   547,    -1,
      -1,   550,    -1,    -1,    -1,    15,   315,    52,    -1,    -1,
     559,    56,    57,    58,   441,   442,   443,   444,   567,    -1,
      30,    31,    32,    -1,    69,     5,     6,     7,     8,    -1,
      -1,    -1,   581,    -1,    -1,    -1,    -1,    -1,     7,     8,
      57,    58,    59,    60,    61,   543,    15,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    -1,    37,    38,    69,
      -1,    30,    42,    32,    33,    -1,   111,    -1,    37,    -1,
      -1,    -1,    52,    42,    -1,   573,    56,    57,    58,    -1,
      -1,    -1,    -1,     7,     8,    -1,    -1,    56,    57,    58,
      -1,    15,    -1,    -1,   111,    -1,    -1,    -1,    30,    -1,
      69,    33,    -1,    -1,    -1,    37,    30,    -1,    32,    33,
      42,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,     5,
       6,     7,     8,    -1,    56,    57,    58,    -1,    -1,    -1,
      -1,   111,    56,    57,    58,     5,     6,    69,    -1,    -1,
      -1,    -1,   111,    -1,    30,    -1,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    52,    37,    38,    -1,
      -1,    -1,    58,     5,     6,    -1,    -1,    -1,    -1,   111,
      -1,    -1,    52,    69,     7,     8,    -1,   111,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    30,    69,
      32,    -1,    34,    35,    -1,    37,    38,    30,    -1,    32,
      33,    -1,    -1,    -1,    37,     5,     6,     7,     8,    42,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    58,    15,    69,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    69,    37,    38,    -1,
      -1,    30,    42,    32,    33,    -1,    -1,     4,    37,    -1,
       7,    -1,    52,    42,    -1,    -1,    13,    14,    58,    16,
      17,    18,    19,    20,    21,    22,    23,     5,     6,    58,
      -1,    -1,    29,    -1,    -1,    -1,     5,     6,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    55,    37,
      38,    30,    -1,    32,    -1,    34,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    52,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    52,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    71,    72,    73,    74,    75,    76,
      77,    78,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
     107,    -1,   119
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,   129,   130,   139,   154,   159,   160,   169,   181,
     186,   191,   196,   197,   201,   202,   203,   207,   212,   213,
     233,   237,   255,   258,   269,     4,     7,    13,    14,    16,
      17,    18,    19,    20,    21,    22,    23,    29,    39,    40,
      44,    55,     0,    13,    17,   131,   155,   161,    55,   140,
     198,   204,   208,    45,   238,   214,   170,    55,   259,   192,
      55,   182,     5,     6,    30,    32,    34,    35,    37,    38,
      52,   132,   133,   134,   135,   136,   216,   217,   220,   226,
     229,   247,   249,    15,    33,   156,   157,   158,   164,   217,
     220,   223,   229,    31,   162,   163,   164,   165,   166,   217,
     220,   256,     7,     8,    42,    58,   141,   142,   143,   146,
     149,   151,   164,   217,   220,   223,   229,   283,    67,   199,
     200,    24,   108,   109,   110,   205,   206,    67,   209,   210,
     234,    46,    47,    65,    66,   239,   240,   241,   242,   245,
     246,   247,   249,   251,    67,    41,    99,   103,   112,   113,
     171,   172,   173,   174,   177,   216,   217,   220,   226,   247,
     270,    56,    57,   111,   151,   217,   223,   229,   260,   261,
     262,   264,   267,   277,   283,   134,   136,   193,   194,   195,
     216,   217,   220,   223,   226,   229,   247,   249,   187,   134,
     136,   146,   149,   151,   183,   184,   185,   216,   217,   220,
     223,   226,   229,   247,   249,   283,   248,   250,   218,   221,
     227,    67,   230,   137,    67,    69,   135,   224,    69,   158,
     167,    69,   165,   144,   146,   149,   151,   164,   217,   220,
     223,   229,   257,   263,   264,   266,   267,   277,   283,   147,
      67,   152,   284,    69,   143,   116,   211,   235,   236,   242,
     247,   251,   243,   252,    69,   241,   215,   178,   175,   176,
      69,   173,    59,    60,    61,   267,   271,   272,   273,   274,
     277,   283,   265,   278,   268,    69,   262,    69,   195,   134,
     136,   146,   149,   151,   188,   189,   190,   216,   217,   220,
     223,   226,   229,   247,   249,   266,    69,   185,    67,    67,
      67,    67,    67,    34,    36,    67,    67,    18,    53,    54,
     135,    67,   158,    67,   165,    69,   144,    67,   148,     9,
      10,    11,    12,    43,   153,    67,    67,   143,    68,   116,
     305,    69,   236,    67,    67,   241,   305,    67,    67,    67,
     173,   275,    69,   273,    67,    67,    67,   262,   195,    69,
     190,   185,    67,    81,    82,   114,   116,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   289,   219,   222,   228,    68,    68,    71,
      72,    73,    74,    75,    76,    77,    78,   106,   107,   232,
     138,    68,    68,    68,   225,   168,   144,   289,   150,   289,
     285,    68,    69,   236,    62,    63,    64,    72,   244,   289,
      48,    49,    50,    51,   254,    68,   100,   101,   102,   180,
     289,   289,    67,   273,   289,   279,   289,   190,   289,   302,
     303,   303,    68,    78,   125,    77,    76,    75,    74,    87,
      88,    85,    86,   117,   118,    79,    80,    71,    73,    72,
     123,   124,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   119,    81,    82,   126,    68,   305,   305,   305,
      70,   305,   305,   305,    68,    69,   145,    68,   305,   116,
      68,    68,    68,    68,    68,    70,    70,    70,    70,   253,
      70,    68,    68,   276,    68,   305,    68,    68,   293,   302,
     290,   294,   295,   296,   297,   298,   298,   299,   299,   299,
     299,   300,   300,   301,   301,   302,   302,   302,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   289,
      68,    68,    68,   231,    68,    68,    68,   289,    68,   286,
     116,   307,   308,   179,   305,   280,    70,    70,   127,   305,
      70,   287,   288,   309,    68,    69,   304,   306,    68,    70,
     281,   282,   290,   289,    68,   289,    68,   126,   310,   311,
     312,   308,    68,    69,   289,    68,   127,   289,   312,   304,
     313,    70,   289,   314,   127
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   128,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   131,   130,   132,   132,   133,   133,
     133,   134,   134,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   137,   138,   136,   140,   139,   141,   141,
     142,   142,   142,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   145,   145,   147,   146,   148,   148,   150,   149,   152,
     151,   153,   153,   153,   153,   153,   155,   154,   156,   156,
     157,   157,   157,   158,   158,   158,   158,   158,   159,   161,
     160,   162,   162,   163,   163,   163,   164,   165,   165,   165,
     165,   167,   168,   166,   170,   169,   171,   171,   172,   172,
     172,   173,   173,   173,   173,   173,   173,   173,   175,   174,
     176,   174,   174,   174,   178,   179,   177,   180,   180,   180,
     182,   181,   183,   183,   184,   184,   184,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   187,   186,   188,   188,   189,   189,   189,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   192,   191,   193,   193,   194,   194,   194,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   196,
     198,   197,   199,   199,   200,   201,   202,   204,   203,   205,
     205,   206,   206,   206,   206,   208,   207,   209,   209,   211,
     210,   212,   214,   215,   213,   216,   216,   218,   219,   217,
     221,   222,   220,   224,   225,   223,   227,   228,   226,   230,
     231,   229,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   234,   233,   235,   235,   235,   236,   236,   236,
     238,   237,   239,   239,   240,   240,   240,   241,   241,   241,
     241,   241,   241,   243,   242,   244,   244,   244,   244,   244,
     245,   246,   248,   247,   250,   249,   252,   253,   251,   254,
     254,   254,   254,   254,   256,   255,   257,   257,   259,   258,
     260,   260,   261,   261,   261,   262,   262,   262,   262,   262,
     262,   262,   262,   263,   263,   263,   265,   264,   266,   266,
     266,   266,   268,   267,   270,   269,   271,   271,   272,   272,
     272,   273,   273,   273,   273,   273,   273,   275,   276,   274,
     278,   279,   280,   277,   281,   281,   282,   284,   285,   286,
     283,   287,   287,   288,   289,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   291,   292,
     292,   293,   293,   294,   294,   295,   295,   296,   296,   297,
     297,   297,   298,   298,   298,   298,   298,   299,   299,   299,
     300,   300,   300,   301,   301,   301,   301,   302,   302,   302,
     303,   303,   303,   304,   304,   304,   304,   304,   305,   305,
     306,   306,   307,   307,   309,   308,   310,   310,   311,   311,
     313,   314,   312
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     0,     1,     1,     2,
       3,     4,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     0,     6,     0,     4,     0,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     0,     3,     0,     3,     0,     6,     0,
       5,     1,     1,     1,     1,     1,     0,     4,     0,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     2,     0,
       4,     0,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     0,     0,     6,     0,     4,     0,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       0,     5,     1,     1,     0,     0,     8,     1,     1,     1,
       0,     5,     0,     1,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     6,     0,     1,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     0,     1,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     4,     0,     1,     3,     2,     2,     0,     4,     0,
       1,     1,     1,     1,     1,     0,     4,     0,     1,     0,
       4,     2,     0,     0,     7,     4,     4,     0,     0,     6,
       0,     0,     6,     0,     0,     6,     0,     0,     6,     0,
       0,     8,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     1,     2,     3,     1,     1,     1,
       0,     4,     0,     1,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     0,     4,     2,     2,     2,     2,     2,
       1,     1,     0,     5,     0,     5,     0,     0,     7,     0,
       2,     2,     2,     2,     0,     5,     0,     1,     0,     4,
       0,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     0,     5,     1,     1,
       1,     1,     0,     5,     0,     5,     0,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     0,     0,     6,
       0,     0,     0,     8,     0,     1,     2,     0,     0,     0,
       8,     0,     1,     2,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     1,     3,
       1,     2,     2,     1,     4,     6,     2,     2,     1,     3,
       1,     3,     1,     3,     0,     3,     0,     1,     1,     2,
       0,     0,     7
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 24:
#line 180 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute = buildOmpAttribute(e_parallel,gNode,true);
                       omptype = e_parallel; 
                       cur_omp_directive=omptype;
                     }
#line 2129 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 197 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                        ompattribute->addClause(e_proc_bind);
                        ompattribute->setProcBindPolicy (e_proc_bind_master); 
                      }
#line 2138 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 201 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                        ompattribute->addClause(e_proc_bind);
                        ompattribute->setProcBindPolicy (e_proc_bind_close); 
                      }
#line 2147 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 205 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                        ompattribute->addClause(e_proc_bind);
                        ompattribute->setProcBindPolicy (e_proc_bind_spread); 
                      }
#line 2156 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 223 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                           ompattribute->addClause(e_copyin);
                           omptype = e_copyin;
                         }
#line 2165 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 226 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = true;}
#line 2171 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 226 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = false;}
#line 2177 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 230 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                  ompattribute = buildOmpAttribute(e_for,gNode,true); 
                  omptype = e_for; 
                  cur_omp_directive=omptype;
                }
#line 2187 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 271 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                     addExpression("");
                 }
#line 2195 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 276 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                      ompattribute->addClause(e_ordered_clause);
                      omptype = e_ordered_clause;
                }
#line 2204 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 283 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    addExpression("");
                   }
#line 2212 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 288 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                      ompattribute->addClause(e_schedule);
                      ompattribute->setScheduleKind(static_cast<omp_construct_enum>((yyvsp[0].itype)));
                      omptype = e_schedule; }
#line 2221 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 295 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                      ompattribute->addClause(e_collapse);
                      omptype = e_collapse;
                    }
#line 2230 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 298 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                      addExpression("");
                    }
#line 2238 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 303 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { (yyval.itype) = e_schedule_static; }
#line 2244 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 304 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { (yyval.itype) = e_schedule_dynamic; }
#line 2250 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 305 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { (yyval.itype) = e_schedule_guided; }
#line 2256 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 306 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { (yyval.itype) = e_schedule_auto; }
#line 2262 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 307 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { (yyval.itype) = e_schedule_runtime; }
#line 2268 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 310 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                       ompattribute = buildOmpAttribute(e_sections,gNode, true); 
                     }
#line 2276 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 331 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                      ompattribute = buildOmpAttribute(e_section,gNode,true); 
                    }
#line 2284 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 336 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                     ompattribute = buildOmpAttribute(e_single,gNode,true); 
                     omptype = e_single; 
                   }
#line 2293 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 350 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                  ompattribute->addClause(e_nowait);
                }
#line 2301 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 360 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                         ompattribute->addClause(e_copyprivate);
                         omptype = e_copyprivate; 
                       }
#line 2310 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 364 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = true;}
#line 2316 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 364 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list =false;}
#line 2322 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 366 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                   ompattribute = buildOmpAttribute(e_task,gNode,true);
                   omptype = e_task; 
                   cur_omp_directive = omptype; 
                 }
#line 2332 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 391 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                       ompattribute->addClause(e_final);
                       omptype = e_final; 
                     }
#line 2341 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 394 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                       addExpression("");
                     }
#line 2349 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 397 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                       ompattribute->addClause(e_priority);
                       omptype = e_priority; 
                     }
#line 2358 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 400 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                       addExpression("");
                     }
#line 2366 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 403 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute->addClause(e_untied);
                     }
#line 2374 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 406 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute->addClause(e_mergeable);
                     }
#line 2382 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 411 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                          ompattribute->addClause(e_depend);
                        }
#line 2390 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 413 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = true; array_symbol=NULL; }
#line 2396 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 414 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                          assert ((ompattribute->getVariableList(omptype)).size()>0); /* I believe that depend() must have variables */
                          b_within_variable_list = false;
                        }
#line 2405 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 420 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute->setDependenceType(e_depend_in); 
                       omptype = e_depend_in; /*variables are stored for each operator*/
                     }
#line 2414 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 424 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute->setDependenceType(e_depend_out);  
                       omptype = e_depend_out;
                     }
#line 2423 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 428 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute->setDependenceType(e_depend_inout); 
                       omptype = e_depend_inout;
                      }
#line 2432 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 435 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                           ompattribute = buildOmpAttribute(e_parallel_for,gNode, true); 
                           omptype=e_parallel_for; 
                           cur_omp_directive = omptype;
                         }
#line 2442 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 470 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                           ompattribute = buildOmpAttribute(e_parallel_for_simd, gNode, true); 
                           omptype= e_parallel_for_simd;
                           cur_omp_directive = omptype;
                         }
#line 2452 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 500 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                                ompattribute =buildOmpAttribute(e_parallel_sections,gNode, true); 
                                omptype = e_parallel_sections; 
                                cur_omp_directive = omptype;
                              }
#line 2462 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 199:
#line 528 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                     ompattribute = buildOmpAttribute(e_master, gNode, true);
                     cur_omp_directive = e_master; 
}
#line 2471 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 534 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute = buildOmpAttribute(e_critical, gNode, true); 
                       cur_omp_directive = e_critical;
                     }
#line 2480 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 548 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                  ompattribute->setCriticalName((const char*)(yyvsp[-1].stype));
                }
#line 2488 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 553 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                      ompattribute = buildOmpAttribute(e_barrier,gNode, true); 
                      cur_omp_directive = e_barrier;
}
#line 2497 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 559 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                       ompattribute = buildOmpAttribute(e_taskwait, gNode, true);  
                       cur_omp_directive = e_taskwait;
                       }
#line 2506 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 565 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                     ompattribute = buildOmpAttribute(e_atomic,gNode, true); 
                     cur_omp_directive = e_atomic;
                     }
#line 2515 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 575 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { ompattribute->addClause(e_atomic_clause);
                       ompattribute->setAtomicAtomicity(e_atomic_read);
                      }
#line 2523 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 578 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { ompattribute->addClause(e_atomic_clause);
                       ompattribute->setAtomicAtomicity(e_atomic_write);
                  }
#line 2531 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 582 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { ompattribute->addClause(e_atomic_clause);
                       ompattribute->setAtomicAtomicity(e_atomic_update);
                  }
#line 2539 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 585 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { ompattribute->addClause(e_atomic_clause);
                       ompattribute->setAtomicAtomicity(e_atomic_capture);
                  }
#line 2547 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 215:
#line 589 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    ompattribute = buildOmpAttribute(e_flush,gNode, true);
                    omptype = e_flush; 
                    cur_omp_directive = omptype;
                  }
#line 2557 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 600 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = true;}
#line 2563 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 600 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = false;}
#line 2569 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 603 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                      ompattribute = buildOmpAttribute(e_ordered_directive,gNode, true); 
                      cur_omp_directive = e_ordered_directive;
                    }
#line 2578 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 609 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                            ompattribute = buildOmpAttribute(e_threadprivate,gNode, true); 
                            omptype = e_threadprivate; 
                            cur_omp_directive = omptype;
                          }
#line 2588 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 613 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = true;}
#line 2594 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 613 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = false;}
#line 2600 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 616 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                        ompattribute->addClause(e_default);
                        ompattribute->setDefaultValue(e_default_shared); 
                      }
#line 2609 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 620 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                        ompattribute->addClause(e_default);
                        ompattribute->setDefaultValue(e_default_none);
                      }
#line 2618 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 627 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                              ompattribute->addClause(e_private); omptype = e_private;
                            }
#line 2626 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 629 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = true;}
#line 2632 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 629 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = false;}
#line 2638 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 632 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                                 ompattribute->addClause(e_firstprivate); 
                                 omptype = e_firstprivate;
                               }
#line 2647 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 635 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = true;}
#line 2653 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 635 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = false;}
#line 2659 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 638 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                                  ompattribute->addClause(e_lastprivate); 
                                  omptype = e_lastprivate;
                                }
#line 2668 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 641 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = true;}
#line 2674 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 641 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = false;}
#line 2680 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 644 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                        ompattribute->addClause(e_shared); omptype = e_shared; 
                      }
#line 2688 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 646 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = true;}
#line 2694 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 646 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = false;}
#line 2700 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 649 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                          ompattribute->addClause(e_reduction);
                        }
#line 2708 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 240:
#line 651 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = true;}
#line 2714 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 651 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = false;}
#line 2720 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 654 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute->setReductionOperator(e_reduction_plus); 
                       omptype = e_reduction_plus; /*variables are stored for each operator*/
                     }
#line 2729 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 658 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute->setReductionOperator(e_reduction_mul);  
                       omptype = e_reduction_mul;
                     }
#line 2738 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 662 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute->setReductionOperator(e_reduction_minus); 
                       omptype = e_reduction_minus;
                      }
#line 2747 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 666 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute->setReductionOperator(e_reduction_min); 
                       omptype = e_reduction_min;
                      }
#line 2756 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 670 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute->setReductionOperator(e_reduction_max); 
                       omptype = e_reduction_max;
                      }
#line 2765 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 674 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute->setReductionOperator(e_reduction_bitand);  
                       omptype = e_reduction_bitand;
                      }
#line 2774 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 678 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute->setReductionOperator(e_reduction_bitxor);  
                       omptype = e_reduction_bitxor;
                      }
#line 2783 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 682 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute->setReductionOperator(e_reduction_bitor);  
                       omptype = e_reduction_bitor;
                      }
#line 2792 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 686 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute->setReductionOperator(e_reduction_logand);  
                       omptype = e_reduction_logand;
                     }
#line 2801 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 690 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute->setReductionOperator(e_reduction_logor); 
                       omptype = e_reduction_logor;
                     }
#line 2810 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 696 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute = buildOmpAttribute(e_target_data, gNode,true);
                       omptype = e_target_data;
                     }
#line 2819 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 713 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                       ompattribute = buildOmpAttribute(e_target,gNode,true);
                       omptype = e_target;
                       cur_omp_directive = omptype;
                     }
#line 2829 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 748 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                           ompattribute->addClause(e_device);
                           omptype = e_device;
                         }
#line 2838 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 754 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { // special mpi device for supporting MPI code generation
                            current_exp= SageBuilder::buildStringVal("mpi");
                            addExpression("mpi");
                          }
#line 2847 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 758 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { // special mpi device for supporting MPI code generation
                            current_exp= SageBuilder::buildStringVal("mpi:all");
                            addExpression("mpi:all");
                          }
#line 2856 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 762 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { // special mpi device for supporting MPI code generation
                            current_exp= SageBuilder::buildStringVal("mpi:master");
                            addExpression("mpi:master");
                          }
#line 2865 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 766 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { //normal expression
                           addExpression("");
                          }
#line 2873 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 769 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { // our extension device (*) 
                            current_exp= SageBuilder::buildCharVal('*'); 
                            addExpression("*");  }
#line 2881 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 774 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                           ompattribute->addClause(e_begin);
                           omptype = e_begin;
                    }
#line 2890 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 780 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                           ompattribute->addClause(e_end);
                           omptype = e_end;
                    }
#line 2899 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 787 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                           ompattribute->addClause(e_if);
                           omptype = e_if;
             }
#line 2908 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 790 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                            addExpression("");
             }
#line 2916 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 284:
#line 795 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                           ompattribute->addClause(e_num_threads);
                           omptype = e_num_threads;
                         }
#line 2925 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 285:
#line 798 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                            addExpression("");
                         }
#line 2933 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 286:
#line 802 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                          ompattribute->addClause(e_map);
                           omptype = e_map; // use as a flag to see if it will be reset later
                     }
#line 2942 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 287:
#line 806 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                       b_within_variable_list = true;
                       if (omptype == e_map) // map data directions are not explicitly specified
                       {
                          ompattribute->setMapVariant(e_map_tofrom);  omptype = e_map_tofrom;  
                       }
                     }
#line 2954 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 813 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { b_within_variable_list =false;}
#line 2960 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 815 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { ompattribute->setMapVariant(e_map_tofrom);  omptype = e_map_tofrom; /*No effect here???*/ }
#line 2966 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 816 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { ompattribute->setMapVariant(e_map_alloc);  omptype = e_map_alloc; }
#line 2972 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 817 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { ompattribute->setMapVariant(e_map_to); omptype = e_map_to; }
#line 2978 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 818 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { ompattribute->setMapVariant(e_map_from); omptype = e_map_from; }
#line 2984 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 293:
#line 819 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { ompattribute->setMapVariant(e_map_tofrom); omptype = e_map_tofrom; }
#line 2990 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 822 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                  ompattribute = buildOmpAttribute(e_for_simd, gNode,true); 
                  cur_omp_directive = e_for_simd;
                }
#line 2999 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 835 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { ompattribute = buildOmpAttribute(e_simd,gNode,true); 
                    omptype = e_simd; 
                    cur_omp_directive = omptype;
                    }
#line 3008 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 869 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                        ompattribute->addClause(e_safelen);
                        omptype = e_safelen;
                      }
#line 3017 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 872 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                        addExpression("");
                 }
#line 3025 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 883 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                          ompattribute->addClause(e_simdlen);
                          omptype = e_simdlen;
                          }
#line 3034 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 323:
#line 886 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                          addExpression(""); 
                      }
#line 3042 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 891 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                        ompattribute = buildOmpAttribute(e_declare_simd, gNode,true);
                        cur_omp_directive = e_declare_simd;
                     }
#line 3051 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 335:
#line 912 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { ompattribute->addClause(e_inbranch); omptype = e_inbranch; /*TODO: this is temporary, to be moved to declare simd */}
#line 3057 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 913 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { ompattribute->addClause(e_notinbranch); omptype = e_notinbranch; /*TODO: this is temporary, to be moved to declare simd */ }
#line 3063 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 916 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                         ompattribute->addClause(e_uniform);
                         omptype = e_uniform; 
                       }
#line 3072 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 920 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = true;}
#line 3078 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 920 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list =false;}
#line 3084 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 923 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                         ompattribute->addClause(e_aligned);
                         omptype = e_aligned; 
                       }
#line 3093 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 927 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = true;}
#line 3099 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 927 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list =false;}
#line 3105 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 933 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {addExpression(""); }
#line 3111 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 936 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                         ompattribute->addClause(e_linear);
                         omptype = e_linear; 
                        }
#line 3120 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 940 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list = true;}
#line 3126 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 940 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {b_within_variable_list =false;}
#line 3132 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 353:
#line 947 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {addExpression(""); }
#line 3138 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 960 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    current_exp = SageBuilder::buildAssignOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
#line 3150 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 967 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    current_exp = SageBuilder::buildRshiftAssignOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
#line 3162 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 974 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    current_exp = SageBuilder::buildLshiftAssignOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
#line 3174 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 981 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    current_exp = SageBuilder::buildPlusAssignOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
#line 3186 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 988 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    current_exp = SageBuilder::buildMinusAssignOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
#line 3198 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 995 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    current_exp = SageBuilder::buildMultAssignOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
#line 3210 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1002 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    current_exp = SageBuilder::buildDivAssignOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
#line 3222 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1009 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    current_exp = SageBuilder::buildModAssignOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
#line 3234 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 1016 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    current_exp = SageBuilder::buildAndAssignOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
#line 3246 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1023 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    current_exp = SageBuilder::buildXorAssignOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
#line 3258 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1030 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    current_exp = SageBuilder::buildIorAssignOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
#line 3270 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1039 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                     current_exp = SageBuilder::buildConditionalExp(
                       (SgExpression*)((yyvsp[-4].ptype)),
                       (SgExpression*)((yyvsp[-2].ptype)),
                       (SgExpression*)((yyvsp[0].ptype))
                     );
                     (yyval.ptype) = current_exp;
                   }
#line 3283 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 1050 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    current_exp = SageBuilder::buildOrOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    );
                    (yyval.ptype) = current_exp;
                  }
#line 3295 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 1060 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                     current_exp = SageBuilder::buildAndOp(
                       (SgExpression*)((yyvsp[-2].ptype)),
                       (SgExpression*)((yyvsp[0].ptype))
                     );
                   (yyval.ptype) = current_exp;
                 }
#line 3307 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1070 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                      current_exp = SageBuilder::buildBitOrOp(
                        (SgExpression*)((yyvsp[-2].ptype)),
                        (SgExpression*)((yyvsp[0].ptype))
                      );
                      (yyval.ptype) = current_exp;
                    }
#line 3319 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1080 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                      current_exp = SageBuilder::buildBitXorOp(
                        (SgExpression*)((yyvsp[-2].ptype)),
                        (SgExpression*)((yyvsp[0].ptype))
                      );
                      (yyval.ptype) = current_exp;
                    }
#line 3331 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1090 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
             current_exp = SageBuilder::buildBitAndOp(
               (SgExpression*)((yyvsp[-2].ptype)),
               (SgExpression*)((yyvsp[0].ptype))
             );
             (yyval.ptype) = current_exp;
           }
#line 3343 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 1100 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                  current_exp = SageBuilder::buildEqualityOp(
                    (SgExpression*)((yyvsp[-2].ptype)),
                    (SgExpression*)((yyvsp[0].ptype))
                  ); 
                  (yyval.ptype) = current_exp;
                }
#line 3355 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1107 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                  current_exp = SageBuilder::buildNotEqualOp(
                    (SgExpression*)((yyvsp[-2].ptype)),
                    (SgExpression*)((yyvsp[0].ptype))
                  ); 
                  (yyval.ptype) = current_exp;
                }
#line 3367 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1117 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                    current_exp = SageBuilder::buildLessThanOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    ); 
                    (yyval.ptype) = current_exp; 
                  // std::cout<<"debug: buildLessThanOp():\n"<<current_exp->unparseToString()<<std::endl;
                  }
#line 3380 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1125 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    current_exp = SageBuilder::buildGreaterThanOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    ); 
                    (yyval.ptype) = current_exp; 
                  }
#line 3392 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1132 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    current_exp = SageBuilder::buildLessOrEqualOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    ); 
                    (yyval.ptype) = current_exp; 
                  }
#line 3404 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1139 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                    current_exp = SageBuilder::buildGreaterOrEqualOp(
                      (SgExpression*)((yyvsp[-2].ptype)),
                      (SgExpression*)((yyvsp[0].ptype))
                    );
                    (yyval.ptype) = current_exp; 
                  }
#line 3416 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1149 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
               current_exp = SageBuilder::buildRshiftOp(
                 (SgExpression*)((yyvsp[-2].ptype)),
                 (SgExpression*)((yyvsp[0].ptype))
               ); 
               (yyval.ptype) = current_exp; 
             }
#line 3428 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1156 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
               current_exp = SageBuilder::buildLshiftOp(
                 (SgExpression*)((yyvsp[-2].ptype)),
                 (SgExpression*)((yyvsp[0].ptype))
               ); 
               (yyval.ptype) = current_exp; 
             }
#line 3440 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1166 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                  current_exp = SageBuilder::buildAddOp(
                    (SgExpression*)((yyvsp[-2].ptype)),
                    (SgExpression*)((yyvsp[0].ptype))
                  ); 
                  (yyval.ptype) = current_exp; 
                }
#line 3452 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1173 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                  current_exp = SageBuilder::buildSubtractOp(
                    (SgExpression*)((yyvsp[-2].ptype)),
                    (SgExpression*)((yyvsp[0].ptype))
                  ); 
                  (yyval.ptype) = current_exp; 
                }
#line 3464 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 1183 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                        current_exp = SageBuilder::buildMultiplyOp(
                          (SgExpression*)((yyvsp[-2].ptype)),
                          (SgExpression*)((yyvsp[0].ptype))
                        ); 
                        (yyval.ptype) = current_exp; 
                      }
#line 3476 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 1190 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                        current_exp = SageBuilder::buildDivideOp(
                          (SgExpression*)((yyvsp[-2].ptype)),
                          (SgExpression*)((yyvsp[0].ptype))
                        ); 
                        (yyval.ptype) = current_exp; 
                      }
#line 3488 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 1197 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                        current_exp = SageBuilder::buildModOp(
                          (SgExpression*)((yyvsp[-2].ptype)),
                          (SgExpression*)((yyvsp[0].ptype))
                        ); 
                        (yyval.ptype) = current_exp; 
                      }
#line 3500 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 1206 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
               current_exp = SageBuilder::buildIntVal((yyvsp[0].itype));
               (yyval.ptype) = current_exp;
              }
#line 3509 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1210 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
               current_exp = SageBuilder::buildVarRefExp(
                 (const char*)((yyvsp[0].stype)),SageInterface::getScope(gNode)
               );
               (yyval.ptype) = current_exp;
              }
#line 3520 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1216 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                 (yyval.ptype) = current_exp;
               }
#line 3528 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1221 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
             current_exp = (SgExpression*)((yyvsp[0].ptype));
             (yyval.ptype) = current_exp;
            }
#line 3537 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1225 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
              current_exp = SageBuilder::buildPlusPlusOp(
                (SgExpression*)((yyvsp[0].ptype)),
                SgUnaryOp::prefix
              );
              (yyval.ptype) = current_exp;
            }
#line 3549 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1232 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
              current_exp = SageBuilder::buildMinusMinusOp(
                (SgExpression*)((yyvsp[0].ptype)),
                SgUnaryOp::prefix
              );
              (yyval.ptype) = current_exp;
            }
#line 3561 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 403:
#line 1242 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
               arraySection= false; 
                 current_exp = (SgExpression*)((yyvsp[0].ptype));
                 (yyval.ptype) = current_exp;
             }
#line 3571 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 404:
#line 1247 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
               arraySection= false; 
               current_exp = SageBuilder::buildPntrArrRefExp((SgExpression*)((yyvsp[-3].ptype)), (SgExpression*)((yyvsp[-1].ptype)));
               (yyval.ptype) = current_exp;
             }
#line 3581 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1253 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
               arraySection= true; // array section // TODO; BEST solution: still need a tree here!!
               // only add  symbol to the attribute for this first time 
               // postfix_expr should be ID_EXPRESSION
               if (!array_symbol)
               {  
                 SgVarRefExp* vref = isSgVarRefExp((SgExpression*)((yyvsp[-5].ptype)));
                 assert (vref);
                 array_symbol = ompattribute->addVariable(omptype, vref->unparseToString());
                 // if (!addVar((const char*) )) YYABORT;
                 //std::cout<<("!array_symbol, add variable for \n")<< vref->unparseToString()<<std::endl;
               }
               lower_exp= NULL; 
               length_exp= NULL; 
               lower_exp = (SgExpression*)((yyvsp[-3].ptype));
               length_exp = (SgExpression*)((yyvsp[-1].ptype));
               assert (array_symbol != NULL);
               SgType* t = array_symbol->get_type();
               bool isPointer= (isSgPointerType(t) != NULL );
               bool isArray= (isSgArrayType(t) != NULL);
               if (!isPointer && ! isArray )
               {
                 std::cerr<<"Error. ompparser.yy expects a pointer or array type."<<std::endl;
                 std::cerr<<"while seeing "<<t->class_name()<<std::endl;
               }
               assert (lower_exp && length_exp);
               ompattribute->array_dimensions[array_symbol].push_back( std::make_pair (lower_exp, length_exp));
             }
#line 3614 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1281 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                  current_exp = SageBuilder::buildPlusPlusOp(
                    (SgExpression*)((yyvsp[-1].ptype)),
                    SgUnaryOp::postfix
                  ); 
                  (yyval.ptype) = current_exp; 
                }
#line 3626 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1288 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {
                  current_exp = SageBuilder::buildMinusMinusOp(
                    (SgExpression*)((yyvsp[-1].ptype)),
                    SgUnaryOp::postfix
                  ); 
                  (yyval.ptype) = current_exp; 
             }
#line 3638 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1305 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { if (!addVar((const char*)(yyvsp[0].stype))) YYABORT; }
#line 3644 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1306 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { if (!addVar((const char*)(yyvsp[0].stype))) YYABORT; }
#line 3650 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1310 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                 if (!arraySection) // regular array or scalar references: we add the entire array reference to the variable list
                   if (!addVarExp((SgExpression*)(yyvsp[0].ptype))) YYABORT; 
                 array_symbol = NULL; //reset array symbol when done.   
               }
#line 3660 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1316 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { 
                 if (!arraySection)
                    if (!addVarExp((SgExpression*)(yyvsp[0].ptype))) YYABORT; 
                }
#line 3669 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1328 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { if (!addVar((const char*)(yyvsp[0].stype))) YYABORT; }
#line 3675 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1340 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    {lower_exp = current_exp; }
#line 3681 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1341 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1646  */
    { length_exp = current_exp;
                      assert (array_symbol != NULL);
                      SgType* t = array_symbol->get_type();
                      bool isPointer= (isSgPointerType(t) != NULL );
                      bool isArray= (isSgArrayType(t) != NULL);
                      if (!isPointer && ! isArray )
                      {
                        std::cerr<<"Error. ompparser.yy expects a pointer or array type."<<std::endl;
                        std::cerr<<"while seeing "<<t->class_name()<<std::endl;
                      }
                      ompattribute->array_dimensions[array_symbol].push_back( std::make_pair (lower_exp, length_exp));
                      }
#line 3698 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
    break;


#line 3702 "/workspace/generated/src/frontend/SageIII/ompparser.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1378 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1906  */

int yyerror(const char *s) {
    SgLocatedNode* lnode = isSgLocatedNode(gNode);
    assert (lnode);
    printf("Error when parsing pragma:\n\t %s \n\t associated with node at line %d\n", orig_str, lnode->get_file_info()->get_line()); 
    printf(" %s!\n", s);
    assert(0);
    return 0; // we want to the program to stop on error
}


OmpAttribute* getParsedDirective() {
    return ompattribute;
}

void omp_parser_init(SgNode* aNode, const char* str) {
    orig_str = str;  
    omp_lexer_init(str);
    gNode = aNode;
}

static bool addVar(const char* var)  {
    array_symbol = ompattribute->addVariable(omptype,var);
    return true;
}

static bool addVarExp(SgExpression* exp)  { // new interface to add variables, supporting array reference expressions
    array_symbol = ompattribute->addVariable(omptype,exp);
    return true;
}


// The ROSE's string-based AST construction is not stable,
// pass real expressions as SgExpression, Liao
static bool addExpression(const char* expr) {
    // ompattribute->addExpression(omptype,std::string(expr),NULL);
    // std::cout<<"debug: current expression is:"<<current_exp->unparseToString()<<std::endl;
    assert (current_exp != NULL);
    ompattribute->addExpression(omptype,std::string(expr),current_exp);
    return true;
}

