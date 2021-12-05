#pragma once
#include "macros.hpp"
#include <stdlib.h>

#ifdef _DEBUG
#undef _DEBUG
#endif

#if __DEBUG

#define __MEMLEAK 1
#define __CLEAN 1

#elif __RELEASE

#define __MEMLEAK 0
#define __CLEAN 0

#endif

#define __force_inline __attribute__((always_inline))
