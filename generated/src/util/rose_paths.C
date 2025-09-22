#include <string> 

/* Use the same header file to declare these variables as is used to reference them so that they will be globally available (and not local). */
#include "rose_paths.h" 

/* These paths will be absolute or relative depending on how the configure script is called (called with an absolute or relative path). */
const std::string ROSE_GFORTRAN_PATH          = "";
const std::string ROSE_AUTOMAKE_TOP_SRCDIR    = "/workspace";
const std::string ROSE_AUTOMAKE_TOP_BUILDDIR  = "/workspace/generated";
const std::string ROSE_AUTOMAKE_PREFIX        = "";
const std::string ROSE_AUTOMAKE_DATADIR       = "/*deprecated*/";
const std::string ROSE_AUTOMAKE_BINDIR        = "/*deprecated*/";
const std::string ROSE_AUTOMAKE_INCLUDEDIR    = "/*deprecated*/";
const std::string ROSE_AUTOMAKE_INFODIR       = "/*deprecated*/";
const std::string ROSE_AUTOMAKE_LIBDIR        = "/*deprecated*/";
const std::string ROSE_AUTOMAKE_LIBEXECDIR    = "/*deprecated*/";
const std::string ROSE_AUTOMAKE_LOCALSTATEDIR = "/*deprecated*/";
const std::string ROSE_AUTOMAKE_MANDIR        = "/*deprecated*/";

/* This will always be an absolute path, while paths above are dependent on how the configure script is called (called with an absolute or relative path). */
const std::string ROSE_AUTOMAKE_ABSOLUTE_PATH_TOP_SRCDIR = "/workspace";

/* Additional interesting data to provide. */
const std::string ROSE_CONFIGURE_DATE     = "@configure_date@";
const std::string ROSE_AUTOMAKE_BUILD_OS  = "4.18.0-553.74.1.el8_10.x86_64";
const std::string ROSE_AUTOMAKE_BUILD_CPU = "x86_64";
const std::string ROSE_OFP_VERSION_STRING = "";
/* Numeric form of ROSE version -- assuming ROSE version x.y.zL (where */
/* x, y, and z are numbers, and L is a single lowercase letter from a to j), */
/* the numeric value is x * 1000000 + y * 10000 + z * 100 + (L - 'a'). */
