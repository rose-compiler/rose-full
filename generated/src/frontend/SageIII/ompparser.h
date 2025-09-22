/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 107 "/workspace/src/frontend/SageIII/ompparser.yy" /* yacc.c:1909  */
  int itype;
          double ftype;
          const char* stype;
          void* ptype; /* For expressions */
        

#line 167 "/workspace/generated/src/frontend/SageIII/ompparser.h" /* yacc.c:1909  */
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
