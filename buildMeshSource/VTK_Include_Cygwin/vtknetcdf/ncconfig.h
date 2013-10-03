#include "vtk_netcdf_mangle.h"

/* libsrc/ncconfig.in.  Generated automatically from configure.in by autoheader.  */
/* $Id: ncconfig.h,v 1.1 2006/02/03 23:50:53 bertello Exp $ */
#ifndef _NCCONFIG_H_
#define _NCCONFIG_H_

/* Define if this is a shared build */
/* #undef BUILD_SHARED_LIBS */
#if defined( BUILD_SHARED_LIBS ) && defined( _WIN32 )
#  define DLL_NETCDF
#endif

#ifdef vtkNetCDF_EXPORTS
#  define DLL_EXPORT 
#endif

/* Define if you're on an HP-UX system. */
/* #undef _HPUX_SOURCE */

/* Define if type char is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
/* #undef __CHAR_UNSIGNED__ */
#endif

/* Define if your struct stat has st_blksize.  */
#define HAVE_ST_BLKSIZE 1

/* Define to `long' if <sys/types.h> doesn't define.  */
/* #undef off_t  */

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
/* #undef size_t  */

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define if your processor stores words with the most significant
   byte first (like Motorola and SPARC, unlike Intel and VAX).  */
/* #undef WORDS_BIGENDIAN 0 */

/* Define if you don't have the <stdlib.h>.  */
/* #undef NO_STDLIB_H 0 */

/* Define if you don't have the <sys/types.h>.  */
/* #undef NO_SYS_TYPES_H 0 */

/* Define if you have the ftruncate function  */
#define HAVE_FTRUNCATE 1

/* Define if you have alloca, as a function or macro.  */
#define HAVE_ALLOCA 1

/* Define if you have <alloca.h> and it should be used (not on Ultrix).  */
#define HAVE_ALLOCA_H 1

/* Define if you have <unistd.h> and it should be used (not on Ultrix).  */
#define HAVE_UNISTD_H 1

/* Define if you don't have the strerror function  */
/* #undef NO_STRERROR 0 */

/* The number of bytes in a size_t */
#define SIZEOF_SIZE_T 4

/* The number of bytes in a off_t */
#define SIZEOF_OFF_T 8

/* Define to `int' if system doesn't define.  */
/* #undef ssize_t  */

/* Define to `int' if system doesn't define.  */
/* #undef ptrdiff_t  */

/* Define to `unsigned char' if system doesn't define.  */
#define uchar unsigned char

/* Define if the system does not use IEEE floating point representation */
/* #undef NO_IEEE_FLOAT  */

/* The number of bytes in a double.  */
#define SIZEOF_DOUBLE 8

/* The number of bytes in a float.  */
#define SIZEOF_FLOAT 4

/* The number of bytes in a int.  */
#define SIZEOF_INT 4

/* The number of bytes in a long.  */
#define SIZEOF_LONG 4

/* The number of bytes in a short.  */
#define SIZEOF_SHORT 2

#endif /* !_NCCONFIG_H_ */