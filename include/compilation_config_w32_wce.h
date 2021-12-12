#ifndef _LIBMUTIL_COMPILATION_CONFIG
#define _LIBMUTIL_COMPILATION_CONFIG

#ifdef _WIN32_WCE

/* Debug output */
//#define DEBUG_OUTPUT 

//To use include/config.h ... only for compilation time
#define HAVE_CONFIG_H

//use this to avoid the warning (coming from STLPort used in WinCE)
//exception.h(47) : warning C4275: non dll-interface class 'std::exception' used as base for dll-interface class 'Exception'
#pragma warning (disable: 4275)

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
//#define HAVE_UNISTD_H 1

/* No Kerberos in OpenSSL */
#define OPENSSL_NO_KRB5 

/* Name of package */
#define PACKAGE "libmutil"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "eliasson@imit.kth.se"

/* Define to the full name of this package. */
#define PACKAGE_NAME "libmutil"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "libmutil 0.3"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libmutil"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.3"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* STL enabled */
#define USE_STL 

/* Version number of package */
#define VERSION "0.3.1"

#endif 
//_WIN32_WCE

#endif
//_LIBMUTIL_COMPILATION_CONFIG


