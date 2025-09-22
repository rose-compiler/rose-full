/* -*- c -*-
 *
 * If new macros are defined they should be defined using either define or cmakedefine.  Define macros will always be defined
 * however they are set in this file, while cmakedefine will be set or left unset based on the cmake configurations step
 * (running cmake before running make within the build process). Values should not be hardcoded and should be based on
 * the cmake configuration. Do not include conditional logic in this file.
 *
 * Since this file is contains name-space pollution (symbols not beginning with "ROSE_") there is a seperate file
 * (rosePublicConfig.h.in.cmake) to create a non-polluting file (rosePublicConfig.h) for inclusion into user code (either directly 
 * or via other ROSE public header files). Defines in rosePublicConfig.h MUST have "ROSE_" at the start.
 * 
 */

#include <rosePublicConfig.h>                           // CPP macros that start with "ROSE_" so we don't have to repeat them here

// REQUIRED LIBS that should be found in CMakeLists.txt -- find_package() */ 
/* Define to 1 if you have the `dl' library (-ldl). */
#define HAVE_LIBDL 1

// TPL, also located with find_package() *
/* Define if the Boost library is available, convert the cmake output Boost_FOUND to our custom HAVE_BOOST */
#define HAVE_BOOST TRUE

/* Define if the Boost::Date_Time library is available */
#define HAVE_BOOST_DATE_TIME 1

/* define if multithread support */ 
/* #undef _REENTRANT */

/* Define if the Boost::Filesystem library is available */
#define HAVE_BOOST_FILESYSTEM 1

/* Define if the Boost::Program_Options library is available */
#define HAVE_BOOST_PROGRAM_OPTIONS 1

/* Define if the Boost::Regex library is available */
#define HAVE_BOOST_REGEX 1

/* Define if the Boost::System library is available */
#define HAVE_BOOST_SYSTEM 1

/* Define if the Boost::Thread library is available */
#define HAVE_BOOST_THREAD 1

/* Define if the Boost::Wave library is available */
#define HAVE_BOOST_WAVE 1

/* Define if the ROSE Boost Wave support is enabled */
#define USE_ROSE_BOOST_WAVE_SUPPORT 1

/* Define if the boost::serialization library is available */
#define HAVE_BOOST_SERIALIZATION_LIB 1

/* HEADERS_TO_CHECK 
 * These variables are defined to 1 if the respective header file is found
 * See headers_to_check in cmake/ConfigureChecks.cmake
 */

/* Define to 1 if you have the <argz.h> header file. */
#define HAVE_ARGZ_H 1 
/* These will be defined to 1 if we have the header above */ 
#define HAVE_ARGZ_APPEND 1
#define HAVE_ARGZ_CREATE_SEP 1
#define HAVE_ARGZ_INSERT 1
#define HAVE_ARGZ_NEXT 1
#define HAVE_ARGZ_STRINGIFY 1
#define HAVE_WORKING_ARGZ 1

/* Define to 1 if you have the <c_asm.h> header file. */
/* #undef HAVE_C_ASM_H */

/* HAVE_C_TYPE_H gets defined to 1 if <ctype.h> found  */
#define HAVE_CTYPE_H 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <dl.h> header file. */
/* #undef HAVE_DL_H */

/* Define to 1 if you have the <intrinsics.h> header file. */
/* #undef HAVE_INTRINSICS_H */

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/utime.h> header file. */
/* #undef HAVE_SYS_UTIME_H */

/* Define to 1 if you have the `time_base_to_time' function. */
/* #undef HAVE_TIME_BASE_TO_TIME */

// The remaining headers below are not currently part of 
// cmake/ConfigureChecks.cmake. Some are processed in subdirectory cmake
// files, some may eventually be removed if they were intended for Autoconf  

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */
/* End of HEADERS_TO_CHECK */


/* FUNCTIONS_TO_CHECK   
 * These variables are defined to 1 if the respective function is found
 * See functions_to_check in cmake/ConfigureChecks.cmake
 */
/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Whether <dlfcn.h> and -ldl contain dladdr() */
#define HAVE_DLADDR 1

/* Use explicit template instantiation for MSTL, ASTProcessing, and ROSETTA */
/* #undef HAVE_EXPLICIT_TEMPLATE_INSTANTIATION */

/* #undef HAVE_GETHRTIME */

/* Define to 1 if you have the `mach_absolute_time' function. */
/* #undef HAVE_MACH_ABSOLUTE_TIME */

/* End of FUNCTIONS_TO_CHECK */

// BACKEND SECTION
/* Define if building with Jovial support */ 
/* #undef ATERM_BIN_PATH */
/* #undef ATERM_INSTALL_PATH */
/* #undef ATERM_LIBRARY_PATH */

// defines for jovial_support.C 
/* #undef STRATEGO_BIN_PATH */

// defines for cmdline.C
/* #undef BACKEND_JOVIAL_COMPILER_NAME_WITH_PATH */

/* Define if building with Ada support */ 
/* #undef BACKEND_ADA_COMPILER_NAME_WITH_PATH */
/* #undef ROSE_EXPERIMENTAL_ADA_ROSE_CONNECTION */

/* Define this to "no" typically */ 
/* #undef BACKEND_FORTRAN_IS_GNU_COMPILER */

/* Backend C and C++ (CXX) Macros */
/* BACKEND CXX -- No quotes around major, minor version numbers */
#define BACKEND_CXX_IS_GNU_COMPILER 1 
#define BACKEND_CXX_COMPILER_NAME_WITH_PATH "/usr/bin/g++"
#define BACKEND_CXX_COMPILER_NAME_WITHOUT_PATH "g++"
#define BACKEND_CXX_COMPILER_MAJOR_VERSION_NUMBER 8
#define BACKEND_CXX_COMPILER_MINOR_VERSION_NUMBER 5
#define BACKEND_CXX_COMPILER_PATCH_VERSION_NUMBER  
#define ROSE_BACKEND_CXX_COMPILER "g++"
/* BACKEND C */ 
#define BACKEND_C_COMPILER_NAME_WITH_PATH "/usr/bin/gcc" 
#define BACKEND_C_COMPILER_NAME_WITHOUT_PATH "gcc"
#define BACKEND_C_COMPILER_MAJOR_VERSION_NUMBER 8
#define BACKEND_C_COMPILER_MINOR_VERSION_NUMBER 5 
#define BACKEND_C_COMPILER_PATCH_VERSION_NUMBER  
#define ROSE_BACKEND_C_COMPILER "gcc"

/* (May or may not explicit include path; used to call backend). */
#define BACKEND_FORTRAN_COMPILER_NAME_WITH_PATH ""

#define BACKEND_FORTRAN_COMPILER_NAME_WITHOUT_PATH ""

/* Major version number of backend Fortran compiler. */
#define BACKEND_FORTRAN_COMPILER_MAJOR_VERSION_NUMBER 

/* Minor version number of backend Fortran compiler. */
#define BACKEND_FORTRAN_COMPILER_MINOR_VERSION_NUMBER 

/* Name of backend Java compiler including path */
#define BACKEND_JAVA_COMPILER_NAME_WITH_PATH ""

/* Name of backend Python interpreter including path */
#define BACKEND_PYTHON_INTERPRETER_NAME_WITH_PATH ""
/* END OF BACKEND SECTION */

/* Include path for backend C++ compiler. */
#define CXX_INCLUDE_STRING {"g++_HEADERS" , "g++_HEADERS/hdrs", "g++_HEADERS/hdrs1", "g++_HEADERS/hdrs2", "/usr/lib/gcc/x86_64-redhat-linux/8/../../../../include/c++/8", "/usr/lib/gcc/x86_64-redhat-linux/8/../../../../include/c++/8/x86_64-redhat-linux", "/usr/lib/gcc/x86_64-redhat-linux/8/../../../../include/c++/8/backward", "/usr/lib/gcc/x86_64-redhat-linux/8/include", "/usr/local/include", "/usr/include"}

/* Include path for backend C compiler. */
#define C_INCLUDE_STRING {"gcc_HEADERS" , "gcc_HEADERS/hdrs", "/usr/lib/gcc/x86_64-redhat-linux/8/include", "/usr/local/include", "/usr/include"}

/* Define to 1 if MySQL libraries are available */
/* #undef MYSQL_FOUND */
#ifdef MYSQL_FOUND
  #define HAVE_MYSQL
#endif

/* Have the SQLITE3 library */
/* #undef HAVE_SQLITE3 */

/* Define to 1 if you have the POSIX.1003 header file, <pthread.h> */
#define HAVE_PTHREAD_H 

/* Prefix path for use of IDA. */
#define IDA_PRO_PATH ""

/* Path to JVM executable */
#define JAVA_JVM_PATH ""

// Using define always defines as opposed to cmakedefine (conditional)
/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE 8

/* The size of `float', as computed by sizeof. */
#define SIZEOF_FLOAT 4

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long double', as computed by sizeof. */
#define SIZEOF_LONG_DOUBLE 16

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to 1 if you have the ANSI C header files. */
/* #undef STDC_HEADERS */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1 

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Mark that GFORTRAN is available */
/* #undef USE_GFORTRAN_IN_ROSE */

/* Support for Purify */
/* #undef USE_PURIFY */

/* Support for Purify API (Compiling with the Purify library). */
/* #undef USE_PURIFY_API */

/* Link-time support for Purify. */
/* #undef USE_PURIFY_LINKER */

/* Use of GCC OpenMP in ROSE. */
//AS Don't know what to do with this
/* #undef USE_ROSE_GCC_OMP */

/* Controls use of IDA support for disassembling. */
//AS Don't know what to do with this
/* #undef USE_ROSE_IDA_SUPPORT */

/* Controls use of ROSE support for Java. */
/* #undef JAVA_RUNTIME */
#ifdef JAVA_RUNTIME
  #define USE_ROSE_JAVA_SUPPORT
#endif

/* Version number of package */
//AS Don't know what to do with this
#define VERSION "0.9.10"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif

/* Controls if EDG Union/Struct debugging support is to be used. */
#define USE_ROSE_EDG_DEBUGGING_SUPPORT 0

/* Defined if we're using a prebuilt EDG library */
/* #undef BINARY_EDG */

/* Internal EDG specific consistency tests. */
//AS FIXME
#define CHECKING 1

/* -D options to hand to EDG C++ front-end. */
#define CXX_SPEC_DEF {"-D__GNUG__=8", "-D__GNUC__=8", "-D__GNUC_MINOR__=5", "-D__GNUC_PATCHLEVEL__=0", "--preinclude", "rose_edg_required_macros_and_functions.h"}

/* Defined if we're building using CMake */
#define USE_CMAKE ON

/* Build ROSE to support the Java langauge */
/* #undef USE_ROSE_INTERNAL_JAVA_SUPPORT */

/* Detect whether our compilers are GNU or not */
#define CMAKE_COMPILER_IS_GNUCC
#define CMAKE_COMPILER_IS_GNUCXX
/* #undef CMAKE_COMPILER_IS_GNUG77 */

#define SAGE_TRANSFORM 1

/* Define to 1 if you have the `read_real_time' function. */
/* #undef HAVE_READ_REAL_TIME */
 
/* Define to 1 if you have the <machine/endian.h> header file. */
/* #undef HAVE_MACHINE_ENDIAN_H */

/* Define to 1 if you have the <mach/mach_time.h> header file. */
/* #undef HAVE_MACH_MACH_TIME_H */

// Define to indicate that "rose_config.h" has been included and is polluting the global name space.
#define CONFIG_ROSE 1
