/* -*- c -*-
 *
 * If new macros are defined they should be defined using either define or cmakedefine.  Define macros will always be defined
 * however they are set in this file, while cmakedefine will be set or left unset based on the cmake configurations step
 * (running cmake before running make within the build process). Values should not be hardcoded and should be based on
 * the cmake configuration. Do not include conditional logic in this file.
 *
 * This is the pubic configuration file for generating the public config (rosePublicConfig.h). This file have "ROSE_" at the 
 * start of names to avoid polluting the namespace.
 * 
 */

// VERSIONING 
/* Git SCM version information for ROSE: commit identifier. */
#define ROSE_SCM_VERSION_ID "0.11.145.330"

/* Git SCM version information for ROSE: commit date (Unix timestamp). */
#define ROSE_VERSION 111450330

/* Define user-friendly ROSE version */
#define ROSE_PACKAGE_VERSION "0.11.145.330"

/* Whether the OS release is Red Hat Enterprise Linux. */
#define ROSE_HOST_OS_IS_RHEL 8

/* Define if the boost::serialization library is available */
#define ROSE_HAVE_BOOST_SERIALIZATION_LIB 1

/* Define if Z3 library is available */
/* #undef ROSE_HAVE_Z3 */
#define ROSE_Z3_LIBRARY "Z3_LIBRARY-NOTFOUND"
#define ROSE_Z3_EXECUTABLE "Z3_EXECUTABLE-NOTFOUND"

/* Deprecated [Robb Matzke 2025-06-18]: remove after autotools is no longer supported */
#define ROSE_Z3 ROSE_Z3_EXECUTABLE

/* Define if z3_version.h is available (old Z3 releases don't have this header and have no way of getting the version). */
/* #undef ROSE_HAVE_Z3_VERSION_H */

/* Define if libgcrypt is available. */
/* #undef ROSE_HAVE_LIBGCRYPT */
#define ROSE_LIBGCRYPT_LIBRARY "GCRYPT_LIBRARY-NOTFOUND"

/* Define if YAML-CPP library is available. */
/* #undef ROSE_HAVE_YAMLCPP */
#define ROSE_YAMLCPP_LIBRARY ""

/* Define if Dlib is available. */
/* #undef ROSE_HAVE_DLIB */
#define ROSE_DLIB_LIBRARY "DLIB_LIBRARY-NOTFOUND"

/* Define if Capstone is available. */
/* #undef ROSE_HAVE_CAPSTONE */
#define ROSE_CAPSTONE_LIBRARY "CAPSTONE_LIBRARY-NOTFOUND"

/* Define if Cereal is available. */
/* #undef ROSE_HAVE_CEREAL */

/* Define if libreadline is available. */
/* #undef ROSE_HAVE_LIBREADLINE */
  
/* Define to 1 if you have the <sys/personality.h> header file. */
#define ROSE_HAVE_SYS_PERSONALITY_H /usr/include

// defines for sage_support.C, SageTreeBuilder.C, and utility_functions.C 
/* #undef ROSE_EXPERIMENTAL_JOVIAL_ROSE_CONNECTION */

/* Path to GNAT Ada compiler used in development of experimental ada frontend */
/* #undef ROSE_EXPERIMENTAL_ADA_ROSE_CONNECTION_GNAT_HOME */

/* Enables development of experimental ada frontend using libadalang */
/* #undef ROSE_EXPERIMENTAL_LIBADALANG_ROSE_CONNECTION */

/* Path to GNAT Ada compiler used in development of experimental ada frontend */
/* #undef ROSE_EXPERIMENTAL_LIBADALANG_ROSE_CONNECTION_GNAT_HOME */

/* Have the SQLITE3 library */
/* #undef ROSE_HAVE_SQLITE3 */
#define ROSE_SQLITE3_LIBRARY "SQLITE3_LIBRARY-NOTFOUND"

/* Define to 1 if you have the POSIX.1003 header file, <pthread.h> */
#define ROSE_HAVE_PTHREAD_H 

/* Location (unquoted) of Boost specified on configure line. */
#define ROSE_BOOST_PATH ""

/* Location of ROSE Compile Tree. */
#define ROSE_COMPILE_TREE_PATH "/workspace/generated"

/* Location of ROSE Source Tree. */
#define ROSE_SOURCE_TREE_PATH "/workspace"

/* PATH on Windows, LD_LIBRARY_PATH everywhere else. */
#define ROSE_SHLIBPATH_VAR "LD_LIBRARY_PATH"

/* Use Valgrind calls in ROSE */
//AS Don't know what to do with this
/* #undef ROSE_USE_VALGRIND */

/* The size of `int', as computed by sizeof. */
#define ROSE_SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define ROSE_SIZEOF_LONG 8

/* DQ (10/16/2010): Added OFP required macros as part of move to exclude
 * rose_config.h from the ROSE header files.
 */
#define ROSE_OFP_MAJOR_VERSION_NUMBER 0
#define ROSE_OFP_MINOR_VERSION_NUMBER 8
#define ROSE_OFP_PATCH_VERSION_NUMBER 3

#define ROSE_OFP_VERSION_NUMBER ""

/* EDG major version number */
#define ROSE_EDG_MAJOR_VERSION_NUMBER 

/* EDG minor version number */
#define ROSE_EDG_MINOR_VERSION_NUMBER 

#define ROSE_USE_EDG_QUAD_FLOAT  1

/* Use Clang for parsing C/C++-like languages */
/* #undef ROSE_USE_CLANG_FRONTEND */

/* Defined if we're building using CMake */
#define ROSE_USE_CMAKE ON

/* Build ROSE to support the Binary Analysis */
#define ROSE_BUILD_BINARY_ANALYSIS_SUPPORT

/* Build ROSE to support the Cuda langauge */
/* #undef ROSE_BUILD_CUDA_LANGUAGE_SUPPORT */

/* Build ROSE to support the C++ langauge */
#define ROSE_BUILD_CXX_LANGUAGE_SUPPORT

/* Build ROSE to support the C langauge */
#define ROSE_BUILD_C_LANGUAGE_SUPPORT

/* Build ROSE to support the C preprocessor. */
#define ROSE_BUILD_CPP_LANGUAGE_SUPPORT

/* Build ROSE to support the Fortran langauge */
/* #undef ROSE_BUILD_FORTRAN_LANGUAGE_SUPPORT */

/* Build ROSE to support the Java langauge */
/* #undef ROSE_BUILD_JAVA_LANGUAGE_SUPPORT */

/* Build ROSE to support the OpenCL langauge */
/* #undef ROSE_BUILD_OPENCL_LANGUAGE_SUPPORT */

/* Build ROSE to support the PHP langauge */
/* #undef ROSE_BUILD_PHP_LANGUAGE_SUPPORT */

/* Build ROSE to support the Python langauge */
/* #undef ROSE_BUILD_PYTHON_LANGUAGE_SUPPORT */

/* Support for an advanced uniform warning level for ROSE development */
/* #undef ROSE_USE_UNIFORM_ADVANCED_WARNINGS_SUPPORT */

/* #undef ROSE_SUPPORT_GNU_EXTENSIONS */
/* #undef ROSE_USE_INTERNAL_FRONTEND_DEVELOPMENT */

/* Controls use of Microsoft MSVC features */
/* #undef ROSE_USE_MICROSOFT_EXTENSIONS */

/* Create the configuration synopsis token for use by Rose::initialize */
#define ROSE_CONFIG_TOKEN "rose-0.11.145.330 boost-1.81.0 pthread"

/* Simple preprocessor as default in ROSE -- dont delete me */
//AS Need configure option to allow wave to be default
#define ROSE_WAVE_DEFAULT false 

/* Define if dwarf is available, and the location of dwarf library. */
/* #undef ROSE_HAVE_LIBDWARF */
#define ROSE_LIBDWARF_LIBRARY ""
