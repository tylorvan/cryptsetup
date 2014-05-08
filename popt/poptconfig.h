/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */


/* Predefined possible va_copy() implementation (id: ASS) */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
/*#define ENABLE_NLS 1*/


/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/*#define HAVE_DCGETTEXT 1*/

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* Define to 1 if you have the `geteuid' function. */
#define HAVE_GETEUID 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the `getuid' function. */
#define HAVE_GETUID 1

/* Define to 1 if you have the <glob.h> header file. */
/*#undef HAVE_GLOB_H */

/* Define if you have the iconv() function and it works. */
/*#undefine HAVE_ICONV 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <langinfo.h> header file. */
/*#define HAVE_LANGINFO_H 1*/

/* Define to 1 if you have the <libintl.h> header file. */
/*#udef HAVE_LIBINTL_H */

/* Define to 1 if you have the <mcheck.h> header file. */
/*#define HAVE_MCHECK_H 1*/

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mtrace' function. */
#define HAVE_MTRACE 1

/* Define to 1 if you have the `setregid' function. */
#define HAVE_SETREGID 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stpcpy' function. */
/*#define HAVE_STPCPY 1*/

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define if va_copy() macro exists (and no fallback implementation is
   required) */
#define HAVE_VA_COPY 1

/* Define to 1 if you have the `__secure_getenv' function. */
/*#define HAVE___SECURE_GETENV 1*/
 
/* Name of package */
#define PACKAGE "popt"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "popt-devel@rpm5.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "popt"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "popt 1.14"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "popt"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.14"

/* Full path to popt top_srcdir. */
#define POPT_SOURCE_PATH "/media/dc9eff22-d27d-4cbd-b3bd-013938f7e189/LUK/libraryset/popt-1.14"

/* Full path to default POPT configuration directory */
#define POPT_SYSCONFDIR "NONE/etc"

/* Define to 1 if the C compiler supports function prototypes. */
#define PROTOTYPES 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "1.14"

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define like PROTOTYPES; this can be used by system headers. */
#define __PROTOTYPES 1

/* Optional va_copy() implementation activation */
#ifndef HAVE_VA_COPY
#define va_copy(d, s) __VA_COPY_USE(d, s)
#endif


/* Define to id of used va_copy() implementation */
#define __VA_COPY_USE __VA_COPY_USE_C99
