#ifndef XMALLOC_H
#define XMALLOC_H

#include <gc/gc.h>

#define xmalloc(N) GC_malloc(N)
#define xcalloc(C, N) GC_malloc((C) * (N))
#define xrealloc(P, N) GC_realloc(P, N)
#define xfree(P)

#endif
