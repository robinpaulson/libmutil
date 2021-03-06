/* include/compilation_config.h.  Generated from compilation_config.h.in by configure.  */
/* include/compilation_config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Color terminal support */
/* #undef COLOR_TERMINAL */

/* Debug output */
/* #undef DEBUG_OUTPUT */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Stack trace functionality found */
#define HAVE_EXECINFO_H /**/

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `dl' library (-ldl). */
#define HAVE_LIBDL 1

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the `winmm' library (-lwinmm). */
/* #undef HAVE_LIBWINMM */

/* Define to 1 if you have the `wsock32' library (-lwsock32). */
/* #undef HAVE_LIBWSOCK32 */

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the <semaphore.h> header file. */
#define HAVE_SEMAPHORE_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have `include/version.h' */
#define HAVE_VERSION_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Debug memory */
/* #undef MDEBUG */

/* No debug output */
/* #undef NDEBUG */

/* Name of package */
#define PACKAGE "libmutil"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "Erik Eliasson <eliasson@imit.kth.se>"

/* Define to the full name of this package. */
#define PACKAGE_NAME "libmutil"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING PACKAGE_STRING_FULL

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libmutil"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION PACKAGE_VERSION_FULL

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Build and run extended test suite */
/* #undef TEST_SUITE */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* STL enabled */
#define USE_STL /**/

/* Version number of package */
#define VERSION PACKAGE_VERSION_FULL

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */
