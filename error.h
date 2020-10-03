#ifndef _ERROR_H
#define _ERROR_H

#if HAVE_STRERROR
#include <errno.h>
#  define error_string strerror(errno)
#elif HAVE_SYS_ERRLIST
extern const char *const sys_errlist[];
#include <errno.h>
#  define error_string (sys_errlist[errno])
#else
#  define error_string "error message not found"
#endif

#endif
