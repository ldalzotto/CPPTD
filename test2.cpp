

namespace std
{
typedef long unsigned int size_t;
typedef long int ptrdiff_t;

typedef decltype(nullptr) nullptr_t;

} // namespace std
namespace std
{
inline namespace __cxx11 __attribute__((__abi_tag__("cxx11"))) {}
} // namespace std
namespace __gnu_cxx
{
inline namespace __cxx11 __attribute__((__abi_tag__("cxx11"))) {}
} // namespace __gnu_cxx

typedef long unsigned int size_t;

extern "C"
{

    typedef enum
    {
        P_ALL,
        P_PID,
        P_PGID
    } idtype_t;
    typedef float _Float32;
    typedef double _Float64;
    typedef double _Float32x;
    typedef long double _Float64x;

    typedef struct
    {
        int quot;
        int rem;
    } div_t;

    typedef struct
    {
        long int quot;
        long int rem;
    } ldiv_t;

    __extension__ typedef struct
    {
        long long int quot;
        long long int rem;
    } lldiv_t;
    extern size_t __ctype_get_mb_cur_max(void) throw();

    extern double atof(const char* __nptr) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1)));

    extern int atoi(const char* __nptr) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1)));

    extern long int atol(const char* __nptr) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1)));

    __extension__ extern long long int atoll(const char* __nptr) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1)));

    extern double strtod(const char* __restrict __nptr, char** __restrict __endptr) throw() __attribute__((__nonnull__(1)));

    extern float strtof(const char* __restrict __nptr, char** __restrict __endptr) throw() __attribute__((__nonnull__(1)));

    extern long double strtold(const char* __restrict __nptr, char** __restrict __endptr) throw() __attribute__((__nonnull__(1)));
    extern _Float32 strtof32(const char* __restrict __nptr, char** __restrict __endptr) throw() __attribute__((__nonnull__(1)));

    extern _Float64 strtof64(const char* __restrict __nptr, char** __restrict __endptr) throw() __attribute__((__nonnull__(1)));
    extern _Float32x strtof32x(const char* __restrict __nptr, char** __restrict __endptr) throw() __attribute__((__nonnull__(1)));

    extern _Float64x strtof64x(const char* __restrict __nptr, char** __restrict __endptr) throw() __attribute__((__nonnull__(1)));
    extern long int strtol(const char* __restrict __nptr, char** __restrict __endptr, int __base) throw() __attribute__((__nonnull__(1)));

    extern unsigned long int strtoul(const char* __restrict __nptr, char** __restrict __endptr, int __base) throw() __attribute__((__nonnull__(1)));

    __extension__ extern long long int strtoq(const char* __restrict __nptr, char** __restrict __endptr, int __base) throw() __attribute__((__nonnull__(1)));

    __extension__ extern unsigned long long int strtouq(const char* __restrict __nptr, char** __restrict __endptr, int __base) throw() __attribute__((__nonnull__(1)));

    __extension__ extern long long int strtoll(const char* __restrict __nptr, char** __restrict __endptr, int __base) throw() __attribute__((__nonnull__(1)));

    __extension__ extern unsigned long long int strtoull(const char* __restrict __nptr, char** __restrict __endptr, int __base) throw() __attribute__((__nonnull__(1)));

    extern int strfromd(char* __dest, size_t __size, const char* __format, double __f) throw() __attribute__((__nonnull__(3)));

    extern int strfromf(char* __dest, size_t __size, const char* __format, float __f) throw() __attribute__((__nonnull__(3)));

    extern int strfroml(char* __dest, size_t __size, const char* __format, long double __f) throw() __attribute__((__nonnull__(3)));
    extern int strfromf32(char* __dest, size_t __size, const char* __format, _Float32 __f) throw() __attribute__((__nonnull__(3)));

    extern int strfromf64(char* __dest, size_t __size, const char* __format, _Float64 __f) throw() __attribute__((__nonnull__(3)));
    extern int strfromf32x(char* __dest, size_t __size, const char* __format, _Float32x __f) throw() __attribute__((__nonnull__(3)));

    extern int strfromf64x(char* __dest, size_t __size, const char* __format, _Float64x __f) throw() __attribute__((__nonnull__(3)));
    struct __locale_struct
    {

        struct __locale_data* __locales[13];

        const unsigned short int* __ctype_b;
        const int* __ctype_tolower;
        const int* __ctype_toupper;

        const char* __names[13];
    };

    typedef struct __locale_struct* __locale_t;

    typedef __locale_t locale_t;

    extern long int strtol_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, locale_t __loc) throw() __attribute__((__nonnull__(1, 4)));

    extern unsigned long int strtoul_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, locale_t __loc) throw() __attribute__((__nonnull__(1, 4)));

    __extension__ extern long long int strtoll_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, locale_t __loc) throw() __attribute__((__nonnull__(1, 4)));

    __extension__ extern unsigned long long int strtoull_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, locale_t __loc) throw() __attribute__((__nonnull__(1, 4)));

    extern double strtod_l(const char* __restrict __nptr, char** __restrict __endptr, locale_t __loc) throw() __attribute__((__nonnull__(1, 3)));

    extern float strtof_l(const char* __restrict __nptr, char** __restrict __endptr, locale_t __loc) throw() __attribute__((__nonnull__(1, 3)));

    extern long double strtold_l(const char* __restrict __nptr, char** __restrict __endptr, locale_t __loc) throw() __attribute__((__nonnull__(1, 3)));
    extern _Float32 strtof32_l(const char* __restrict __nptr, char** __restrict __endptr, locale_t __loc) throw() __attribute__((__nonnull__(1, 3)));

    extern _Float64 strtof64_l(const char* __restrict __nptr, char** __restrict __endptr, locale_t __loc) throw() __attribute__((__nonnull__(1, 3)));
    extern _Float32x strtof32x_l(const char* __restrict __nptr, char** __restrict __endptr, locale_t __loc) throw() __attribute__((__nonnull__(1, 3)));

    extern _Float64x strtof64x_l(const char* __restrict __nptr, char** __restrict __endptr, locale_t __loc) throw() __attribute__((__nonnull__(1, 3)));
    extern char* l64a(long int __n) throw();

    extern long int a64l(const char* __s) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1)));

    extern "C"
    {

        typedef unsigned char __u_char;
        typedef unsigned short int __u_short;
        typedef unsigned int __u_int;
        typedef unsigned long int __u_long;

        typedef signed char __int8_t;
        typedef unsigned char __uint8_t;
        typedef signed short int __int16_t;
        typedef unsigned short int __uint16_t;
        typedef signed int __int32_t;
        typedef unsigned int __uint32_t;

        typedef signed long int __int64_t;
        typedef unsigned long int __uint64_t;

        typedef __int8_t __int_least8_t;
        typedef __uint8_t __uint_least8_t;
        typedef __int16_t __int_least16_t;
        typedef __uint16_t __uint_least16_t;
        typedef __int32_t __int_least32_t;
        typedef __uint32_t __uint_least32_t;
        typedef __int64_t __int_least64_t;
        typedef __uint64_t __uint_least64_t;

        typedef long int __quad_t;
        typedef unsigned long int __u_quad_t;

        typedef long int __intmax_t;
        typedef unsigned long int __uintmax_t;

        typedef unsigned long int __dev_t;
        typedef unsigned int __uid_t;
        typedef unsigned int __gid_t;
        typedef unsigned long int __ino_t;
        typedef unsigned long int __ino64_t;
        typedef unsigned int __mode_t;
        typedef unsigned long int __nlink_t;
        typedef long int __off_t;
        typedef long int __off64_t;
        typedef int __pid_t;
        typedef struct
        {
            int __val[2];
        } __fsid_t;
        typedef long int __clock_t;
        typedef unsigned long int __rlim_t;
        typedef unsigned long int __rlim64_t;
        typedef unsigned int __id_t;
        typedef long int __time_t;
        typedef unsigned int __useconds_t;
        typedef long int __suseconds_t;

        typedef int __daddr_t;
        typedef int __key_t;

        typedef int __clockid_t;

        typedef void* __timer_t;

        typedef long int __blksize_t;

        typedef long int __blkcnt_t;
        typedef long int __blkcnt64_t;

        typedef unsigned long int __fsblkcnt_t;
        typedef unsigned long int __fsblkcnt64_t;

        typedef unsigned long int __fsfilcnt_t;
        typedef unsigned long int __fsfilcnt64_t;

        typedef long int __fsword_t;

        typedef long int __ssize_t;

        typedef long int __syscall_slong_t;

        typedef unsigned long int __syscall_ulong_t;

        typedef __off64_t __loff_t;
        typedef char* __caddr_t;

        typedef long int __intptr_t;

        typedef unsigned int __socklen_t;

        typedef int __sig_atomic_t;

        typedef __u_char u_char;
        typedef __u_short u_short;
        typedef __u_int u_int;
        typedef __u_long u_long;
        typedef __quad_t quad_t;
        typedef __u_quad_t u_quad_t;
        typedef __fsid_t fsid_t;

        typedef __loff_t loff_t;

        typedef __ino_t ino_t;

        typedef __ino64_t ino64_t;

        typedef __dev_t dev_t;

        typedef __gid_t gid_t;

        typedef __mode_t mode_t;

        typedef __nlink_t nlink_t;

        typedef __uid_t uid_t;

        typedef __off_t off_t;

        typedef __off64_t off64_t;

        typedef __pid_t pid_t;

        typedef __id_t id_t;

        typedef __ssize_t ssize_t;

        typedef __daddr_t daddr_t;
        typedef __caddr_t caddr_t;

        typedef __key_t key_t;

        typedef __clock_t clock_t;

        typedef __clockid_t clockid_t;

        typedef __time_t time_t;

        typedef __timer_t timer_t;

        typedef __useconds_t useconds_t;

        typedef __suseconds_t suseconds_t;

        typedef long unsigned int size_t;

        typedef unsigned long int ulong;
        typedef unsigned short int ushort;
        typedef unsigned int uint;

        typedef __int8_t int8_t;
        typedef __int16_t int16_t;
        typedef __int32_t int32_t;
        typedef __int64_t int64_t;

        typedef __uint8_t u_int8_t;
        typedef __uint16_t u_int16_t;
        typedef __uint32_t u_int32_t;
        typedef __uint64_t u_int64_t;

        typedef int register_t __attribute__((__mode__(__word__)));
        static __inline __uint16_t __bswap_16(__uint16_t __bsx)
        {

            return ((__uint16_t)((((__bsx) >> 8) & 0xff) | (((__bsx)&0xff) << 8)));
        }

        static __inline __uint32_t __bswap_32(__uint32_t __bsx)
        {

            return ((((__bsx)&0xff000000u) >> 24) | (((__bsx)&0x00ff0000u) >> 8) | (((__bsx)&0x0000ff00u) << 8) | (((__bsx)&0x000000ffu) << 24));
        }
        __extension__ static __inline __uint64_t __bswap_64(__uint64_t __bsx)
        {

            return ((((__bsx)&0xff00000000000000ull) >> 56) | (((__bsx)&0x00ff000000000000ull) >> 40) | (((__bsx)&0x0000ff0000000000ull) >> 24) | (((__bsx)&0x000000ff00000000ull) >> 8) |
                    (((__bsx)&0x00000000ff000000ull) << 8) | (((__bsx)&0x0000000000ff0000ull) << 24) | (((__bsx)&0x000000000000ff00ull) << 40) | (((__bsx)&0x00000000000000ffull) << 56));
        }
        static __inline __uint16_t __uint16_identity(__uint16_t __x)
        {
            return __x;
        }

        static __inline __uint32_t __uint32_identity(__uint32_t __x)
        {
            return __x;
        }

        static __inline __uint64_t __uint64_identity(__uint64_t __x)
        {
            return __x;
        }

        typedef struct
        {
            unsigned long int __val[(1024 / (8 * sizeof(unsigned long int)))];
        } __sigset_t;

        typedef __sigset_t sigset_t;

        struct timeval
        {
            __time_t tv_sec;
            __suseconds_t tv_usec;
        };

        struct timespec
        {
            __time_t tv_sec;

            __syscall_slong_t tv_nsec;
        };
        typedef long int __fd_mask;
        typedef struct
        {

            __fd_mask fds_bits[1024 / (8 * (int)sizeof(__fd_mask))];

        } fd_set;

        typedef __fd_mask fd_mask;
        extern "C"
        {
            extern int select(int __nfds, fd_set* __restrict __readfds, fd_set* __restrict __writefds, fd_set* __restrict __exceptfds, struct timeval* __restrict __timeout);
            extern int pselect(int __nfds, fd_set* __restrict __readfds, fd_set* __restrict __writefds, fd_set* __restrict __exceptfds, const struct timespec* __restrict __timeout,
                               const __sigset_t* __restrict __sigmask);
        }

        typedef __blksize_t blksize_t;

        typedef __blkcnt_t blkcnt_t;

        typedef __fsblkcnt_t fsblkcnt_t;

        typedef __fsfilcnt_t fsfilcnt_t;
        typedef __blkcnt64_t blkcnt64_t;
        typedef __fsblkcnt64_t fsblkcnt64_t;
        typedef __fsfilcnt64_t fsfilcnt64_t;

        typedef struct __pthread_internal_list
        {
            struct __pthread_internal_list* __prev;
            struct __pthread_internal_list* __next;
        } __pthread_list_t;

        typedef struct __pthread_internal_slist
        {
            struct __pthread_internal_slist* __next;
        } __pthread_slist_t;
        struct __pthread_mutex_s
        {
            int __lock;
            unsigned int __count;
            int __owner;

            unsigned int __nusers;

            int __kind;

            short __spins;
            short __elision;
            __pthread_list_t __list;
        };
        struct __pthread_rwlock_arch_t
        {
            unsigned int __readers;
            unsigned int __writers;
            unsigned int __wrphase_futex;
            unsigned int __writers_futex;
            unsigned int __pad3;
            unsigned int __pad4;

            int __cur_writer;
            int __shared;
            signed char __rwelision;

            unsigned char __pad1[7];

            unsigned long int __pad2;

            unsigned int __flags;
        };

        struct __pthread_cond_s
        {
            __extension__ union
            {
                __extension__ unsigned long long int __wseq;
                struct
                {
                    unsigned int __low;
                    unsigned int __high;
                } __wseq32;
            };
            __extension__ union
            {
                __extension__ unsigned long long int __g1_start;
                struct
                {
                    unsigned int __low;
                    unsigned int __high;
                } __g1_start32;
            };
            unsigned int __g_refs[2];
            unsigned int __g_size[2];
            unsigned int __g1_orig_size;
            unsigned int __wrefs;
            unsigned int __g_signals[2];
        };

        typedef unsigned long int pthread_t;

        typedef union
        {
            char __size[4];
            int __align;
        } pthread_mutexattr_t;

        typedef union
        {
            char __size[4];
            int __align;
        } pthread_condattr_t;

        typedef unsigned int pthread_key_t;

        typedef int pthread_once_t;

        union pthread_attr_t
        {
            char __size[56];
            long int __align;
        };

        typedef union pthread_attr_t pthread_attr_t;

        typedef union
        {
            struct __pthread_mutex_s __data;
            char __size[40];
            long int __align;
        } pthread_mutex_t;

        typedef union
        {
            struct __pthread_cond_s __data;
            char __size[48];
            __extension__ long long int __align;
        } pthread_cond_t;

        typedef union
        {
            struct __pthread_rwlock_arch_t __data;
            char __size[56];
            long int __align;
        } pthread_rwlock_t;

        typedef union
        {
            char __size[8];
            long int __align;
        } pthread_rwlockattr_t;

        typedef volatile int pthread_spinlock_t;

        typedef union
        {
            char __size[32];
            long int __align;
        } pthread_barrier_t;

        typedef union
        {
            char __size[4];
            int __align;
        } pthread_barrierattr_t;
    }

    extern long int random(void) throw();

    extern void srandom(unsigned int __seed) throw();

    extern char* initstate(unsigned int __seed, char* __statebuf, size_t __statelen) throw() __attribute__((__nonnull__(2)));

    extern char* setstate(char* __statebuf) throw() __attribute__((__nonnull__(1)));

    struct random_data
    {
        int32_t* fptr;
        int32_t* rptr;
        int32_t* state;
        int rand_type;
        int rand_deg;
        int rand_sep;
        int32_t* end_ptr;
    };

    extern int random_r(struct random_data* __restrict __buf, int32_t* __restrict __result) throw() __attribute__((__nonnull__(1, 2)));

    extern int srandom_r(unsigned int __seed, struct random_data* __buf) throw() __attribute__((__nonnull__(2)));

    extern int initstate_r(unsigned int __seed, char* __restrict __statebuf, size_t __statelen, struct random_data* __restrict __buf) throw() __attribute__((__nonnull__(2, 4)));

    extern int setstate_r(char* __restrict __statebuf, struct random_data* __restrict __buf) throw() __attribute__((__nonnull__(1, 2)));

    extern int rand(void) throw();

    extern void srand(unsigned int __seed) throw();

    extern int rand_r(unsigned int* __seed) throw();

    extern double drand48(void) throw();
    extern double erand48(unsigned short int __xsubi[3]) throw() __attribute__((__nonnull__(1)));

    extern long int lrand48(void) throw();
    extern long int nrand48(unsigned short int __xsubi[3]) throw() __attribute__((__nonnull__(1)));

    extern long int mrand48(void) throw();
    extern long int jrand48(unsigned short int __xsubi[3]) throw() __attribute__((__nonnull__(1)));

    extern void srand48(long int __seedval) throw();
    extern unsigned short int* seed48(unsigned short int __seed16v[3]) throw() __attribute__((__nonnull__(1)));
    extern void lcong48(unsigned short int __param[7]) throw() __attribute__((__nonnull__(1)));

    struct drand48_data
    {
        unsigned short int __x[3];
        unsigned short int __old_x[3];
        unsigned short int __c;
        unsigned short int __init;
        __extension__ unsigned long long int __a;
    };

    extern int drand48_r(struct drand48_data* __restrict __buffer, double* __restrict __result) throw() __attribute__((__nonnull__(1, 2)));
    extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __restrict __buffer, double* __restrict __result) throw() __attribute__((__nonnull__(1, 2)));

    extern int lrand48_r(struct drand48_data* __restrict __buffer, long int* __restrict __result) throw() __attribute__((__nonnull__(1, 2)));
    extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __restrict __buffer, long int* __restrict __result) throw() __attribute__((__nonnull__(1, 2)));

    extern int mrand48_r(struct drand48_data* __restrict __buffer, long int* __restrict __result) throw() __attribute__((__nonnull__(1, 2)));
    extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __restrict __buffer, long int* __restrict __result) throw() __attribute__((__nonnull__(1, 2)));

    extern int srand48_r(long int __seedval, struct drand48_data* __buffer) throw() __attribute__((__nonnull__(2)));

    extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data* __buffer) throw() __attribute__((__nonnull__(1, 2)));

    extern int lcong48_r(unsigned short int __param[7], struct drand48_data* __buffer) throw() __attribute__((__nonnull__(1, 2)));

    extern void* malloc(size_t __size) throw() __attribute__((__malloc__));

    extern void* calloc(size_t __nmemb, size_t __size) throw() __attribute__((__malloc__));

    extern void* realloc(void* __ptr, size_t __size) throw() __attribute__((__warn_unused_result__));

    extern void* reallocarray(void* __ptr, size_t __nmemb, size_t __size) throw() __attribute__((__warn_unused_result__));

    extern void free(void* __ptr) throw();

    typedef long unsigned int size_t;

    extern "C"
    {

        extern void* alloca(size_t __size) throw();
    }

    extern void* valloc(size_t __size) throw() __attribute__((__malloc__));

    extern int posix_memalign(void** __memptr, size_t __alignment, size_t __size) throw() __attribute__((__nonnull__(1)));

    extern void* aligned_alloc(size_t __alignment, size_t __size) throw() __attribute__((__malloc__));

    extern void abort(void) throw() __attribute__((__noreturn__));

    extern int atexit(void (*__func)(void)) throw() __attribute__((__nonnull__(1)));

    extern "C++" int at_quick_exit(void (*__func)(void)) throw() __asm("at_quick_exit") __attribute__((__nonnull__(1)));
    extern int on_exit(void (*__func)(int __status, void* __arg), void* __arg) throw() __attribute__((__nonnull__(1)));

    extern void exit(int __status) throw() __attribute__((__noreturn__));

    extern void quick_exit(int __status) throw() __attribute__((__noreturn__));

    extern void _Exit(int __status) throw() __attribute__((__noreturn__));

    extern char* getenv(const char* __name) throw() __attribute__((__nonnull__(1)));

    extern char* secure_getenv(const char* __name) throw() __attribute__((__nonnull__(1)));

    extern int putenv(char* __string) throw() __attribute__((__nonnull__(1)));

    extern int setenv(const char* __name, const char* __value, int __replace) throw() __attribute__((__nonnull__(2)));

    extern int unsetenv(const char* __name) throw() __attribute__((__nonnull__(1)));

    extern int clearenv(void) throw();
    extern char* mktemp(char* __template) throw() __attribute__((__nonnull__(1)));
    extern int mkstemp(char* __template) __attribute__((__nonnull__(1)));
    extern int mkstemp64(char* __template) __attribute__((__nonnull__(1)));
    extern int mkstemps(char* __template, int __suffixlen) __attribute__((__nonnull__(1)));
    extern int mkstemps64(char* __template, int __suffixlen) __attribute__((__nonnull__(1)));
    extern char* mkdtemp(char* __template) throw() __attribute__((__nonnull__(1)));
    extern int mkostemp(char* __template, int __flags) __attribute__((__nonnull__(1)));
    extern int mkostemp64(char* __template, int __flags) __attribute__((__nonnull__(1)));
    extern int mkostemps(char* __template, int __suffixlen, int __flags) __attribute__((__nonnull__(1)));
    extern int mkostemps64(char* __template, int __suffixlen, int __flags) __attribute__((__nonnull__(1)));
    extern int system(const char* __command);

    extern char* canonicalize_file_name(const char* __name) throw() __attribute__((__nonnull__(1)));
    extern char* realpath(const char* __restrict __name, char* __restrict __resolved) throw();

    typedef int (*__compar_fn_t)(const void*, const void*);

    typedef __compar_fn_t comparison_fn_t;

    typedef int (*__compar_d_fn_t)(const void*, const void*, void*);

    extern void* bsearch(const void* __key, const void* __base, size_t __nmemb, size_t __size, __compar_fn_t __compar) __attribute__((__nonnull__(1, 2, 5)));

    extern void qsort(void* __base, size_t __nmemb, size_t __size, __compar_fn_t __compar) __attribute__((__nonnull__(1, 4)));

    extern void qsort_r(void* __base, size_t __nmemb, size_t __size, __compar_d_fn_t __compar, void* __arg) __attribute__((__nonnull__(1, 4)));

    extern int abs(int __x) throw() __attribute__((__const__));
    extern long int labs(long int __x) throw() __attribute__((__const__));

    __extension__ extern long long int llabs(long long int __x) throw() __attribute__((__const__));

    extern div_t div(int __numer, int __denom) throw() __attribute__((__const__));
    extern ldiv_t ldiv(long int __numer, long int __denom) throw() __attribute__((__const__));

    __extension__ extern lldiv_t lldiv(long long int __numer, long long int __denom) throw() __attribute__((__const__));
    extern char* ecvt(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign) throw() __attribute__((__nonnull__(3, 4)));

    extern char* fcvt(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign) throw() __attribute__((__nonnull__(3, 4)));

    extern char* gcvt(double __value, int __ndigit, char* __buf) throw() __attribute__((__nonnull__(3)));

    extern char* qecvt(long double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign) throw() __attribute__((__nonnull__(3, 4)));
    extern char* qfcvt(long double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign) throw() __attribute__((__nonnull__(3, 4)));
    extern char* qgcvt(long double __value, int __ndigit, char* __buf) throw() __attribute__((__nonnull__(3)));

    extern int ecvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, size_t __len) throw() __attribute__((__nonnull__(3, 4, 5)));
    extern int fcvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, size_t __len) throw() __attribute__((__nonnull__(3, 4, 5)));

    extern int qecvt_r(long double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, size_t __len) throw() __attribute__((__nonnull__(3, 4, 5)));
    extern int qfcvt_r(long double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, size_t __len) throw() __attribute__((__nonnull__(3, 4, 5)));

    extern int mblen(const char* __s, size_t __n) throw();

    extern int mbtowc(wchar_t* __restrict __pwc, const char* __restrict __s, size_t __n) throw();

    extern int wctomb(char* __s, wchar_t __wchar) throw();

    extern size_t mbstowcs(wchar_t* __restrict __pwcs, const char* __restrict __s, size_t __n) throw();

    extern size_t wcstombs(char* __restrict __s, const wchar_t* __restrict __pwcs, size_t __n) throw();

    extern int rpmatch(const char* __response) throw() __attribute__((__nonnull__(1)));
    extern int getsubopt(char** __restrict __optionp, char* const* __restrict __tokens, char** __restrict __valuep) throw() __attribute__((__nonnull__(1, 2, 3)));

    extern int posix_openpt(int __oflag);

    extern int grantpt(int __fd) throw();

    extern int unlockpt(int __fd) throw();

    extern char* ptsname(int __fd) throw();

    extern int ptsname_r(int __fd, char* __buf, size_t __buflen) throw() __attribute__((__nonnull__(2)));

    extern int getpt(void);

    extern int getloadavg(double __loadavg[], int __nelem) throw() __attribute__((__nonnull__(1)));
}

extern "C++"
{
    namespace std __attribute__((__visibility__("default")))
    {

        using ::abs;

        inline long abs(long __i)
        {
            return __builtin_labs(__i);
        }

        inline long long abs(long long __x)
        {
            return __builtin_llabs(__x);
        }
        inline constexpr double abs(double __x)
        {
            return __builtin_fabs(__x);
        }

        inline constexpr float abs(float __x)
        {
            return __builtin_fabsf(__x);
        }

        inline constexpr long double abs(long double __x)
        {
            return __builtin_fabsl(__x);
        }

        inline constexpr __int128 abs(__int128 __x)
        {
            return __x >= 0 ? __x : -__x;
        }
        inline constexpr __float128 abs(__float128 __x)
        {
            return __x < 0 ? -__x : __x;
        }

    } // namespace )
}
extern "C++"
{
    namespace std __attribute__((__visibility__("default")))
    {

        using ::div_t;
        using ::ldiv_t;

        using ::abort;

        using ::aligned_alloc;

        using ::atexit;

        using ::at_quick_exit;

        using ::atof;
        using ::atoi;
        using ::atol;
        using ::bsearch;
        using ::calloc;
        using ::div;
        using ::exit;
        using ::free;
        using ::getenv;
        using ::labs;
        using ::ldiv;
        using ::malloc;

        using ::mblen;
        using ::mbstowcs;
        using ::mbtowc;

        using ::qsort;

        using ::quick_exit;

        using ::rand;
        using ::realloc;
        using ::srand;
        using ::strtod;
        using ::strtol;
        using ::strtoul;
        using ::system;

        using ::wcstombs;
        using ::wctomb;

        inline ldiv_t div(long __i, long __j)
        {
            return ldiv(__i, __j);
        }

    } // namespace )
    namespace __gnu_cxx __attribute__((__visibility__("default")))
    {

        using ::lldiv_t;

        using ::_Exit;

        using ::llabs;

        inline lldiv_t div(long long __n, long long __d)
        {
            lldiv_t __q;
            __q.quot = __n / __d;
            __q.rem = __n % __d;
            return __q;
        }

        using ::atoll;
        using ::lldiv;
        using ::strtoll;
        using ::strtoull;

        using ::strtof;
        using ::strtold;

    } // namespace )

    namespace std
    {

    using ::__gnu_cxx::lldiv_t;

    using ::__gnu_cxx::_Exit;

    using ::__gnu_cxx::div;
    using ::__gnu_cxx::llabs;
    using ::__gnu_cxx::lldiv;

    using ::__gnu_cxx::atoll;
    using ::__gnu_cxx::strtof;
    using ::__gnu_cxx::strtold;
    using ::__gnu_cxx::strtoll;
    using ::__gnu_cxx::strtoull;
    } // namespace std
}

using std::abort;
using std::atexit;
using std::exit;

using std::at_quick_exit;

using std::quick_exit;

using std::div_t;
using std::ldiv_t;

using std::abs;
using std::atof;
using std::atoi;
using std::atol;
using std::bsearch;
using std::calloc;
using std::div;
using std::free;
using std::getenv;
using std::labs;
using std::ldiv;
using std::malloc;

using std::mblen;
using std::mbstowcs;
using std::mbtowc;

using std::qsort;
using std::rand;
using std::realloc;
using std::srand;
using std::strtod;
using std::strtol;
using std::strtoul;
using std::system;

using std::wcstombs;
using std::wctomb;

template <class _P0> auto assert(_P0 p_condition)
{
    if (!p_condition)
    {
        ::abort();
    }
};

template <class _P0> auto assert_debug(_P0 p_condition)
{
    if (1)
    {
        if (!p_condition)
        {
            ::abort();
        }
    }
};

template <bool _P0> auto assert_constexpr()
{
    static_assert(_P0, "");
};

template <class _P0, class _P1, class _P2> auto check_array_bound(_P0 p_index, _P1 p_min, _P2 p_max)
{
    assert_debug(p_index >= p_min || p_index < p_max);
};

template <class _P0> auto check_not_null(_P0 p_input)
{
    assert_debug(p_input != __null);
};
template <bool _P0> auto check_is_wrapper_c()
{
    static_assert(decltype(_P0)::__is_wrapper, "");
};

template <class _T> struct is_pointer
{
    static constexpr bool value = false;
};
template <class _T> struct is_pointer<_T*>
{
    static constexpr bool value = true;
};
template <class _T> struct is_pointer<const _T*>
{
    static constexpr bool value = true;
};

template <class _T> struct is_pointer_pointer
{
    static constexpr const bool value = false;
};
template <class _T> struct is_pointer_pointer<_T**>
{
    static constexpr const bool value = true;
};

extern "C"
{

    typedef long unsigned int size_t;
    extern void* memcpy(void* __restrict __dest, const void* __restrict __src, size_t __n) throw() __attribute__((__nonnull__(1, 2)));

    extern void* memmove(void* __dest, const void* __src, size_t __n) throw() __attribute__((__nonnull__(1, 2)));

    extern void* memccpy(void* __restrict __dest, const void* __restrict __src, int __c, size_t __n) throw() __attribute__((__nonnull__(1, 2)));

    extern void* memset(void* __s, int __c, size_t __n) throw() __attribute__((__nonnull__(1)));

    extern int memcmp(const void* __s1, const void* __s2, size_t __n) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

    extern "C++"
    {
        extern void* memchr(void* __s, int __c, size_t __n) throw() __asm("memchr") __attribute__((__pure__)) __attribute__((__nonnull__(1)));
        extern const void* memchr(const void* __s, int __c, size_t __n) throw() __asm("memchr") __attribute__((__pure__)) __attribute__((__nonnull__(1)));
    }
    extern "C++" void* rawmemchr(void* __s, int __c) throw() __asm("rawmemchr") __attribute__((__pure__)) __attribute__((__nonnull__(1)));
    extern "C++" const void* rawmemchr(const void* __s, int __c) throw() __asm("rawmemchr") __attribute__((__pure__)) __attribute__((__nonnull__(1)));

    extern "C++" void* memrchr(void* __s, int __c, size_t __n) throw() __asm("memrchr") __attribute__((__pure__)) __attribute__((__nonnull__(1)));
    extern "C++" const void* memrchr(const void* __s, int __c, size_t __n) throw() __asm("memrchr") __attribute__((__pure__)) __attribute__((__nonnull__(1)));
    extern char* strcpy(char* __restrict __dest, const char* __restrict __src) throw() __attribute__((__nonnull__(1, 2)));

    extern char* strncpy(char* __restrict __dest, const char* __restrict __src, size_t __n) throw() __attribute__((__nonnull__(1, 2)));

    extern char* strcat(char* __restrict __dest, const char* __restrict __src) throw() __attribute__((__nonnull__(1, 2)));

    extern char* strncat(char* __restrict __dest, const char* __restrict __src, size_t __n) throw() __attribute__((__nonnull__(1, 2)));

    extern int strcmp(const char* __s1, const char* __s2) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

    extern int strncmp(const char* __s1, const char* __s2, size_t __n) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

    extern int strcoll(const char* __s1, const char* __s2) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

    extern size_t strxfrm(char* __restrict __dest, const char* __restrict __src, size_t __n) throw() __attribute__((__nonnull__(2)));

    extern int strcoll_l(const char* __s1, const char* __s2, locale_t __l) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1, 2, 3)));

    extern size_t strxfrm_l(char* __dest, const char* __src, size_t __n, locale_t __l) throw() __attribute__((__nonnull__(2, 4)));

    extern char* strdup(const char* __s) throw() __attribute__((__malloc__)) __attribute__((__nonnull__(1)));

    extern char* strndup(const char* __string, size_t __n) throw() __attribute__((__malloc__)) __attribute__((__nonnull__(1)));
    extern "C++"
    {
        extern char* strchr(char* __s, int __c) throw() __asm("strchr") __attribute__((__pure__)) __attribute__((__nonnull__(1)));
        extern const char* strchr(const char* __s, int __c) throw() __asm("strchr") __attribute__((__pure__)) __attribute__((__nonnull__(1)));
    }

    extern "C++"
    {
        extern char* strrchr(char* __s, int __c) throw() __asm("strrchr") __attribute__((__pure__)) __attribute__((__nonnull__(1)));
        extern const char* strrchr(const char* __s, int __c) throw() __asm("strrchr") __attribute__((__pure__)) __attribute__((__nonnull__(1)));
    }
    extern "C++" char* strchrnul(char* __s, int __c) throw() __asm("strchrnul") __attribute__((__pure__)) __attribute__((__nonnull__(1)));
    extern "C++" const char* strchrnul(const char* __s, int __c) throw() __asm("strchrnul") __attribute__((__pure__)) __attribute__((__nonnull__(1)));
    extern size_t strcspn(const char* __s, const char* __reject) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

    extern size_t strspn(const char* __s, const char* __accept) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

    extern "C++"
    {
        extern char* strpbrk(char* __s, const char* __accept) throw() __asm("strpbrk") __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
        extern const char* strpbrk(const char* __s, const char* __accept) throw() __asm("strpbrk") __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
    }

    extern "C++"
    {
        extern char* strstr(char* __haystack, const char* __needle) throw() __asm("strstr") __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
        extern const char* strstr(const char* __haystack, const char* __needle) throw() __asm("strstr") __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
    }

    extern char* strtok(char* __restrict __s, const char* __restrict __delim) throw() __attribute__((__nonnull__(2)));

    extern char* __strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr) throw() __attribute__((__nonnull__(2, 3)));

    extern char* strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr) throw() __attribute__((__nonnull__(2, 3)));

    extern "C++" char* strcasestr(char* __haystack, const char* __needle) throw() __asm("strcasestr") __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
    extern "C++" const char* strcasestr(const char* __haystack, const char* __needle) throw() __asm("strcasestr") __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
    extern void* memmem(const void* __haystack, size_t __haystacklen, const void* __needle, size_t __needlelen) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1, 3)));

    extern void* __mempcpy(void* __restrict __dest, const void* __restrict __src, size_t __n) throw() __attribute__((__nonnull__(1, 2)));
    extern void* mempcpy(void* __restrict __dest, const void* __restrict __src, size_t __n) throw() __attribute__((__nonnull__(1, 2)));

    extern size_t strlen(const char* __s) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1)));

    extern size_t strnlen(const char* __string, size_t __maxlen) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1)));

    extern char* strerror(int __errnum) throw();
    extern char* strerror_r(int __errnum, char* __buf, size_t __buflen) throw() __attribute__((__nonnull__(2)));

    extern char* strerror_l(int __errnum, locale_t __l) throw();

    typedef long unsigned int size_t;

    extern "C"
    {

        extern int bcmp(const void* __s1, const void* __s2, size_t __n) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

        extern void bcopy(const void* __src, void* __dest, size_t __n) throw() __attribute__((__nonnull__(1, 2)));

        extern void bzero(void* __s, size_t __n) throw() __attribute__((__nonnull__(1)));
        extern char* index(const char* __s, int __c) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1)));
        extern char* rindex(const char* __s, int __c) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1)));

        extern int ffs(int __i) throw() __attribute__((__const__));

        extern int ffsl(long int __l) throw() __attribute__((__const__));
        __extension__ extern int ffsll(long long int __ll) throw() __attribute__((__const__));

        extern int strcasecmp(const char* __s1, const char* __s2) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

        extern int strncasecmp(const char* __s1, const char* __s2, size_t __n) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

        extern int strcasecmp_l(const char* __s1, const char* __s2, locale_t __loc) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1, 2, 3)));

        extern int strncasecmp_l(const char* __s1, const char* __s2, size_t __n, locale_t __loc) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1, 2, 4)));
    }

    extern void explicit_bzero(void* __s, size_t __n) throw() __attribute__((__nonnull__(1)));

    extern char* strsep(char** __restrict __stringp, const char* __restrict __delim) throw() __attribute__((__nonnull__(1, 2)));

    extern char* strsignal(int __sig) throw();

    extern char* __stpcpy(char* __restrict __dest, const char* __restrict __src) throw() __attribute__((__nonnull__(1, 2)));
    extern char* stpcpy(char* __restrict __dest, const char* __restrict __src) throw() __attribute__((__nonnull__(1, 2)));

    extern char* __stpncpy(char* __restrict __dest, const char* __restrict __src, size_t __n) throw() __attribute__((__nonnull__(1, 2)));
    extern char* stpncpy(char* __restrict __dest, const char* __restrict __src, size_t __n) throw() __attribute__((__nonnull__(1, 2)));

    extern int strverscmp(const char* __s1, const char* __s2) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

    extern char* strfry(char* __string) throw() __attribute__((__nonnull__(1)));

    extern void* memfrob(void* __s, size_t __n) throw() __attribute__((__nonnull__(1)));

    extern "C++" char* basename(char* __filename) throw() __asm("basename") __attribute__((__nonnull__(1)));
    extern "C++" const char* basename(const char* __filename) throw() __asm("basename") __attribute__((__nonnull__(1)));
}

template <class _P0, class _P1> auto __zero(_P0 p_ptr, _P1 p_size)
{
    assert_constexpr<is_pointer<decltype(p_ptr)>::value>();
    ::memset(p_ptr, 0, sizeof(*p_ptr) * p_size);
};

template <class _P0, class _P1> auto __invalidate(_P0 p_ptr, _P1 p_size)
{
    assert_constexpr<is_pointer<decltype(p_ptr)>::value>();
    ::memset(p_ptr, 202, sizeof(*p_ptr) * p_size);
};

template <class _P0> auto __invalidate(_P0 p_ptr)
{
    __invalidate(p_ptr, sizeof(*p_ptr));
}

template <class _P0, class _P1> auto __try_invalidate(_P0 p_ptr, _P1 p_size)
{
    if (1)
    {
        __invalidate(p_ptr, p_size);
    }
};

template <class _P0> auto __try_invalidate(_P0 p_ptr)
{
    if (1)
    {
        __invalidate(p_ptr);
    }
};

struct UnsafeContext
{
    template <class _P0> auto malloc(_P0 p_size)
    {
        auto l_ptr = ::malloc(p_size);
        check_not_null(l_ptr);
        return l_ptr;
    };

    template <class _P0> auto free(_P0 p_ptr)
    {
        assert_constexpr<is_pointer_pointer<decltype(p_ptr)>::value>();
        check_not_null(p_ptr);
        check_not_null(*p_ptr);
        ::free(*p_ptr);
        *p_ptr = nullptr;
    };

    template <class _P0, class _P1> auto realloc(_P0 p_ptr, _P1 p_size)
    {
        assert_constexpr<is_pointer_pointer<decltype(p_ptr)>::value>();
        check_not_null(p_ptr);
        check_not_null(*p_ptr);
        auto l_new_ptr = ::realloc(*p_ptr, p_size);
        if (l_new_ptr == nullptr)
        {
            *p_ptr = nullptr;
        }
        else
        {
            *p_ptr = (decltype(*p_ptr))l_new_ptr;
        }
    };
};

using i8 = char;
using ui8 = unsigned char;
using i16 = short;
using ui16 = unsigned short;
using i32 = int;
using ui32 = unsigned int;
using i64 = long;
using ui64 = unsigned long;
using uimax = size_t;
using f32 = float;
using f64 = double;

template <class _T0> struct is_numeric
{
    static constexpr bool value = false;
};

template <> struct is_numeric<i8>
{
    static constexpr bool value = true;
};
template <> struct is_numeric<ui8>
{
    static constexpr bool value = true;
};
template <> struct is_numeric<i16>
{
    static constexpr bool value = true;
};
template <> struct is_numeric<ui16>
{
    static constexpr bool value = true;
};
template <> struct is_numeric<i32>
{
    static constexpr bool value = true;
};
template <> struct is_numeric<ui32>
{
    static constexpr bool value = true;
};
template <> struct is_numeric<i64>
{
    static constexpr bool value = true;
};
template <> struct is_numeric<ui64>
{
    static constexpr bool value = true;
};
template <> struct is_numeric<f32>
{
    static constexpr bool value = true;
};
template <> struct is_numeric<f64>
{
    static constexpr bool value = true;
};

template <class _T0> struct is_floating
{
    static constexpr bool value = false;
};

template <> struct is_floating<f32>
{
    static constexpr bool value = true;
};
template <> struct is_floating<f64>
{
    static constexpr bool value = true;
};

template <class _T0> struct higher_numeric
{
};

template <> struct higher_numeric<i8>
{
    using value = i16;
};
template <> struct higher_numeric<i16>
{
    using value = i32;
};
template <> struct higher_numeric<i32>
{
    using value = i64;
};
template <> struct higher_numeric<i64>
{
    using value = i64;
};
template <> struct higher_numeric<ui8>
{
    using value = ui16;
};
template <> struct higher_numeric<ui16>
{
    using value = ui32;
};
template <> struct higher_numeric<ui32>
{
    using value = ui64;
};
template <> struct higher_numeric<ui64>
{
    using value = ui64;
};
template <> struct higher_numeric<f32>
{
    using value = f64;
};
template <> struct higher_numeric<f64>
{
    using value = f64;
};

template <class _Number> struct Number
{
    static_assert(is_numeric<_Number>::value, "");
    using type_higher_numeric = typename higher_numeric<_Number>::value;
    using type_higher = Number<type_higher_numeric>;

    _Number _number;

    constexpr __attribute__((always_inline)) Number() = default;

    template <class _P0> constexpr __attribute__((always_inline)) Number(_P0 p_number)
    {
        if constexpr (is_numeric<_P0>::value)
        {
            _number = p_number;
        }
        else
        {
            _number = p_number._number;
        }
    };

    auto constexpr __attribute__((always_inline)) num_value()
    {
        return &_number;
    };

    template <class _P0> auto constexpr __attribute__((always_inline)) operator+(_P0 p_other)
    {
        using __type_return = decltype(__get_operation_return_type(*this, p_other));
        return __type_return(_number + p_other._number);
    }

    template <class _P0> auto constexpr __attribute__((always_inline)) operator+=(_P0 p_other)
    {
        _number += p_other._number;
    }

    template <class _P0> auto constexpr __attribute__((always_inline)) operator-(_P0 p_other)
    {
        using __type_return = decltype(__get_operation_return_type(*this, p_other));
        return __type_return(_number - p_other._number);
    }

    template <class _P0> auto constexpr __attribute__((always_inline)) operator-=(_P0 p_other)
    {
        _number -= p_other._number;
    }

    template <class _P0> auto constexpr __attribute__((always_inline)) operator*(_P0 p_other)
    {
        using __type_return = decltype(__get_operation_return_type(*this, p_other));
        return __type_return(_number * p_other._number);
    }

    template <class _P0> auto constexpr __attribute__((always_inline)) operator*=(_P0 p_other)
    {
        _number *= p_other._number;
    }

    template <class _P0> auto constexpr __attribute__((always_inline)) operator/(_P0 p_other)
    {
        using __type_return = decltype(__get_operation_return_type(*this, p_other));
        return __type_return(_number / p_other._number);
    }

    template <class _P0> auto constexpr __attribute__((always_inline)) operator/=(_P0 p_other)
    {
        _number /= p_other._number;
    }

    template <class _P0> auto constexpr __attribute__((always_inline)) operator%(_P0 p_other)
    {
        using __type_return = decltype(__get_modulus_return_type(*this, p_other));
        return __type_return(_number % p_other._number);
    }

    template <class _P0> auto constexpr __attribute__((always_inline)) operator<(_P0 p_other)
    {
        return (i8)(_number < p_other._number);
    };

    template <class _P0> auto constexpr __attribute__((always_inline)) operator<=(_P0 p_other)
    {
        return (i8)(_number <= p_other._number);
    };

    template <class _P0> auto constexpr __attribute__((always_inline)) operator>(_P0 p_other)
    {
        return (i8)(_number > p_other._number);
    };

    template <class _P0> auto constexpr __attribute__((always_inline)) operator>=(_P0 p_other)
    {
        return (i8)(_number >= p_other._number);
    };

    auto constexpr __attribute__((always_inline)) abs()
    {
        if (*this < Number(0))
        {
            return *this * Number(-1);
        }
        else
        {
            return *this;
        }
    };

  private:
    template <class _P0, class _P1> static auto constexpr __attribute__((always_inline)) __get_operation_return_type(_P0 p_0, _P1 p_1)
    {
        abort();

        if constexpr (is_floating<_P0>::value && is_floating<_P0>::value)
        {
            return __get_higest_size(p_0, p_1);
        }
        else if constexpr (is_floating<_P0>::value)
        {
            return p_0;
        }
        else if constexpr (is_floating<_P1>::value)
        {
            return p_1;
        }
        else
        {
            return __get_higest_size(p_0, p_1);
        }
    };

    template <class _P0, class _P1> static auto constexpr __attribute__((always_inline)) __get_higest_size(_P0 p_0, _P1 p_1)
    {
        abort();

        if constexpr (sizeof(p_0._number) > sizeof(p_1._number))
        {
            return p_0;
        }
        else
        {
            return p_1;
        }
    };

    template <class _P0, class _P1> static auto constexpr __attribute__((always_inline)) __get_modulus_return_type(_P0 p_0, _P1 p_1)
    {
        abort();

        assert_constexpr<!is_floating<_P0>::value && !is_floating<_P1>::value>();

        return p_0;
    };
};

template <class _P0> auto __attribute__((always_inline)) constexpr num(_P0 p_input)
{
    return Number<_P0>(p_input);
};

using Int8 = Number<i8>;
using Int32 = Number<i32>;
using Int64 = Number<uimax>;

template <class _T> struct Slice
{
    _T* _data;
    uimax _size;

    using _type_data = decltype(_data);

    template <class _P0, class _P1> auto build(_P0 p_data, _P1 p_size)
    {
        _data = p_data;
        _size = p_size;
    };

    template <class _P0, class _P1> static auto build_s(_P0 p_data, _P1 p_size)
    {
        Slice<_T> thiz;
        thiz.build(p_data, p_size);
        return thiz;
    };

    auto clean()
    {
        _data = nullptr;
        _size = 0;
    };

    auto invalidate_memory()
    {
        __invalidate(_data, _size);
    };

    template <class _P0> auto at(_P0 p_index)
    {
        check_array_bound(p_index, 0, _size);
        return &_data[p_index];
    };

    template <class _P0> auto slide(_P0 p_offset_index)
    {
        assert_debug(_size >= p_offset_index);
        return Slice<_T>::build_s(_data + p_offset_index, _size - p_offset_index);
    };

    template <class _P0, class _P1, class _P2> auto memove_down(_P0 p_break_index, _P1 p_move_delta, _P2 p_moved_block_size)
    {
        __memove_down_safe(p_break_index, p_move_delta, p_moved_block_size);
    };

    template <class _P0, class _P1, class _P2> auto memove_up(_P0 p_break_index, _P1 p_move_delta, _P2 p_moved_block_size)
    {
        __memove_up_safe(p_break_index, p_move_delta, p_moved_block_size);
    };

    template <class _P0> auto copy_to(_P0 to)
    {
        __memcpy_safe(to);
    };

    template <class _P0> auto copy_from(_P0* p_from)
    {
        p_from->copy_to(this);
    };

    template <class _P0, class _P1> auto copy_from_2(_P0* p_from_0, _P1* p_from_1)
    {
        p_from_0->copy_to(this);
        auto l_to = slide(p_from_0->size);
        p_from_1->copy_to(l_to);
    };

    template <class _P0, class _P1> auto copy_at_from(_P0 p_index, _P1* p_from)
    {
        slide(p_index).copy_from(p_from);
    };

    template <class _P0, class _P1, class _P2> auto copy_at_from_2(_P0 p_index, _P1* p_from_0, _P2* p_from_1)
    {
        copy_at_from(p_index, p_from_0);
        copy_at_from(p_index + p_from_0->_size, p_from_1);
    };

    template <class _P0> auto compare(_P0 p_compared_slice)
    {
        return __memcmp(p_compared_slice);
    };

    auto size()
    {
        return _size;
    };

    auto data()
    {
        return _data;
    };

  private:
    template <class _P0> auto __memget_safe(_P0 p_index)
    {
        assert_debug(p_index < _size);
        return &_data[p_index];
    };

    template <class _P0, class _P1> auto __memzero(_P0 p_start_index, _P1 p_size)
    {
        assert_debug(p_start_index <= _size);
        assert_debug((p_start_index + p_size) <= _size);

        ::memset(_data + p_start_index, 0, p_size * sizeof(*_data));
    };

    template <class _P0, class _P1, class _P2> auto __memove_up(_P0 p_break_index, _P1 p_move_delta, _P2 p_moved_block_size)
    {
        ::memmove(_data + p_break_index - p_move_delta, _data + p_break_index, sizeof(*_data) * p_moved_block_size);
        __try_invalidate(_data + p_break_index - p_move_delta + p_moved_block_size, p_move_delta);
    };

    template <class _P0, class _P1, class _P2> auto __memove_up_safe(_P0 p_break_index, _P1 p_move_delta, _P2 p_moved_block_size)
    {
        assert_debug((p_break_index - p_move_delta) < _size);
        assert_debug((p_break_index + p_moved_block_size) <= _size);
        __memove_up(p_break_index, p_move_delta, p_moved_block_size);
    };

    template <class _P0, class _P1, class _P2> auto __memove_down(_P0 p_break_index, _P1 p_move_delta, _P2 p_moved_block_size)
    {
        ::memmove(_data + p_break_index + p_move_delta, _data + p_break_index, sizeof(*_data) * p_moved_block_size);
        __try_invalidate(_data + p_break_index, p_move_delta);
    };

    template <class _P0, class _P1, class _P2> auto __memove_down_safe(_P0 p_break_index, _P1 p_move_delta, _P2 p_moved_block_size)
    {
        assert_debug((p_break_index + p_move_delta) <= _size);
        assert_debug((p_break_index + p_move_delta + p_moved_block_size) <= _size);
        __memove_down(p_break_index, p_move_delta, p_moved_block_size);
    };

    template <class _P0> auto __memcpy(_P0* to)
    {
        ::memcpy((void*)to->_data, (void*)_data, sizeof(*_data) * _size);
    };

    template <class _P0> auto __memcpy_safe(_P0* to)
    {
        assert_debug(to->_size >= _size);
        __memcpy(to);
    };

    template <class _P0> auto __memcmp(_P0* p_compared)
    {
        return (::memcmp(_data, p_compared->data(), sizeof(*_data) * _size) == 0);
    };

    template <class _P0> auto __memcmp(_P0 p_compared)
    {
        return __memcmp(&p_compared);
    };
};

template <class _T, uimax _SIZE> struct arr
{
    _T _data[_SIZE];

    template <class _P0> auto at(_P0 p_index)
    {
        assert_debug(p_index < _SIZE);
        return &_data[p_index];
    };

    auto constexpr size()
    {
        return _SIZE;
    };

    auto to_slice()
    {
        Slice<_T> l_return;
        l_return.build(_data, _SIZE);
        return l_return;
    };
};

template <class _T> struct Span
{
    Slice<_T> _slice;

    using _type_data = typename decltype(_slice)::_type_data;

    template <class _P0, class _P1> auto allocate(_P0 p_size, _P1 ctx)
    {
        *data_p() = (_type_data)ctx->malloc(sizeof(_T) * p_size);
        *size_p() = p_size;
    }

    template <class _P0, class _P1> static auto allocate_s(_P0 p_size, _P1 ctx)
    {
        Span<_T> thiz;
        thiz.allocate(p_size, ctx);
        return thiz;
    };

    template <class _P0> auto free(_P0 ctx)
    {
        if (1)
        {
            _slice.invalidate_memory();
        }
        ctx->free(data_p());
    };

    auto clean()
    {
        *data_p() = nullptr;
        *size_p() = 0;
    };

    template <class _P0> auto at(_P0 p_index)
    {
        return _slice.at(p_index);
    };

    template <class _P0, class _P1> auto resize(_P0 p_size, _P1 ctx)
    {
        if (size() < p_size)
        {
            *size_p() = p_size;
            realloc(ctx);
        }
    };

    template <class _P0> auto realloc(_P0 ctx)
    {
        ctx->realloc(data_p(), sizeof(_T) * size());
    };

    template <class _P0, class _P1, class _P2> auto __attribute__((always_inline)) memove_down(_P0 p_break_index, _P1 p_move_delta, _P2 p_moved_block_size)
    {
        return (&_slice)->memove_down(p_break_index, p_move_delta, p_moved_block_size);
    };
    template <class _P0, class _P1, class _P2> auto __attribute__((always_inline)) memove_up(_P0 p_break_index, _P1 p_move_delta, _P2 p_moved_block_size)
    {
        return (&_slice)->memove_up(p_break_index, p_move_delta, p_moved_block_size);
    };

    template <class _P0> auto __attribute__((always_inline)) copy_from(_P0 p_from)
    {
        return (&_slice)->copy_from(p_from);
    };
    template <class _P0, class _P1, class _P2> auto __attribute__((always_inline)) copy_from_2(_P0 p_from_0, _P1 p_from_1)
    {
        return (&_slice)->copy_from_2(p_from_0, p_from_1);
    };

    template <class _P0, class _P1, class _P2> auto __attribute__((always_inline)) copy_at_from(_P0 p_index, _P1 p_from)
    {
        return (&_slice)->copy_at_from(p_index, p_from);
    };
    template <class _P0, class _P1, class _P2> auto __attribute__((always_inline)) copy_at_from_2(_P0 p_index, _P1 p_from_0, _P2 p_from_1)
    {
        return (&_slice)->copy_at_from_2(p_index, p_from_0, p_from_1);
    };

    template <class _P0> auto __attribute__((always_inline)) slide(_P0 p_offset_index)
    {
        return (&_slice)->slide(p_offset_index);
    };

    auto data()
    {
        return _slice._data;
    };
    auto data_p()
    {
        return &_slice._data;
    };

    auto size()
    {
        return _slice._size;
    };

    auto size_p()
    {
        return &_slice._size;
    };
};

template <class _T> struct Vector
{
    Span<_T> _span;
    uimax _size;

    template <class _P0, class _P1> auto allocate(_P0 p_size, _P1 ctx)
    {
        _span.allocate(p_size, ctx);
        _size = 0;
    };

    template <class _P0, class _P1> static auto allocate_s(_P0 p_size, _P1 ctx)
    {
        Vector<_T> l_vector;
        l_vector.allocate(p_size, ctx);
        return l_vector;
    };

    template <class _P0> auto free(_P0 ctx)
    {
        _span.free(ctx);
    };

    auto clean()
    {
        _span.clean();
        _size = 0;
    };

    template <class _P0> auto at(_P0 p_index)
    {
        check_array_bound(p_index, 0, size());
        return _span.at(p_index);
    };

    template <class _P0, class _P1> auto resize(_P0 p_size, _P1 ctx)
    {
        if (p_size > capacity())
        {
            uimax l_new_capacity = capacity();
            while (l_new_capacity <= p_size)
            {
                if (l_new_capacity == 0)
                {
                    l_new_capacity = 1;
                }
                else
                {
                    l_new_capacity *= 2;
                }
            }
            _span.resize(l_new_capacity, ctx);
        }
    };

    template <class _P0, class _P1> auto resize_delta(_P0 p_delta_size, _P1 ctx)
    {
        resize(size() + p_delta_size, ctx);
    };

    template <class _P0, class _P1, class _P2> auto insert_at(_P0* p_element, _P1 p_index, _P2 ctx)
    {
        resize_delta(1, ctx);
        auto l_old_size = _size;
        _size += 1;
        _span._slice.memove_down(p_index, 1, l_old_size - p_index);
        *at(p_index) = *p_element;
    };

    template <class _P0, class _P1, class _P2> auto insert_slice_at(_P0* p_slice, _P1 p_index, _P2 ctx)
    {
        resize_delta(p_slice->size(), ctx);
        auto l_old_size = _size;
        _size += p_slice->size();
        _span._slice.memove_down(p_index, p_slice->size(), l_old_size - p_index);
        _span._slice.copy_at_from(p_index, p_slice);
    };

    template <class _P0, class _P1> auto push_back(_P0 p_element, _P1 ctx)
    {
        resize_delta(1, ctx);
        _size += 1;
        *_span.at(_size - 1) = *p_element;
    };

    template <class _P0, class _P1> auto push_back_slice(_P0 p_slice, _P1 ctx)
    {
        insert_slice_at(p_slice, _size, ctx);
    };

    template <class _P0> auto remove(_P0 p_index)
    {
        _span._slice.memove_up(p_index + 1, 1, _size - (p_index + 1));
        _size -= 1;
    };

    auto pop_back()
    {
        assert_debug(_size >= 1);
        if (1)
        {
            remove(_size - 1);
        }
        else
        {
            _size -= 1;
        }
    };

    auto span_p()
    {
        return &_span;
    };

    auto data()
    {
        return _span.data();
    };

    auto data_p()
    {
        return _span.data_p();
    };

    auto size()
    {
        return _size;
    };

    auto size_p()
    {
        return &_size;
    };

    auto capacity()
    {
        return _span.size();
    };
};

template <class _T> struct Pool
{
    Vector<_T> _elements;
    Vector<uimax> _free_indices;

    template <class _P0, class _P1> auto allocate(_P0 p_size, _P1 ctx)
    {
        _elements.allocate(p_size, ctx);
        _free_indices.allocate(p_size, ctx);
    };

    template <class _P0> auto free(_P0 ctx)
    {
        _elements.free(ctx);
        _free_indices.free(ctx);
    };

    auto clean()
    {
        _elements.clean();
        _free_indices.clean();
    };

    template <class _P0> auto is_element_free(_P0 p_token)
    {
        for (auto(i) = (0); (i) < (&_free_indices)->size(); (i)++)
        {
            if (*_free_indices.at(i) == p_token)
            {
                return 1;
            }
        }
        return 0;
    };

    auto has_allocated_elements()
    {
        return _free_indices.size() != _elements.size();
    };

    template <class _P0> auto at(_P0 p_token)
    {
        assert_debug(!is_element_free(p_token));
        return _elements.at(p_token);
    };

    template <class _P0, class _P1> auto push_back(_P0 p_element, _P1 ctx)
    {
        if (_free_indices.size() > 0)
        {
            auto l_token = *_free_indices.at(_free_indices.size() - 1);
            _free_indices.pop_back();
            _elements.at(l_token) = p_element;
            return l_token;
        }
        else
        {
            _elements.push_back(p_element, ctx);
            auto l_token = _elements.size() - 1;
            return l_token;
        }
    };

    template <class _P0> auto push_back_empty(_P0 ctx)
    {
        if (_free_indices.size() > 0)
        {
            auto l_token = *_free_indices.at(_free_indices.size() - 1);
            _free_indices.pop_back();
            return l_token;
        }
        else
        {
            _elements.push_back_empty(ctx);
            auto l_token = _elements.size() - 1;
            return l_token;
        }
    };

    template <class _P0, class _P1> auto remove(_P0 p_token, _P1 ctx)
    {
        assert_debug(!is_element_free(p_token));
        _free_indices.push_back(p_token, ctx);
        __try_invalidate(_elements.at(p_token));
    };

    template <class _P0, class _P1> auto remove_get(_P0 p_token, _P1 ctx)
    {
        assert_debug(!is_element_free(p_token));
        _free_indices.push_back(p_token, ctx);
        auto l_return = _elements.at(p_token);
        __try_invalidate(_elements.at(p_token));
        return l_return;
    };
};

template <class _EnumType, class _EnumValueType> struct bits_base
{
    static constexpr i8 have(_EnumType p_left, _EnumType p_right)
    {
        return ((_EnumValueType)p_left & (_EnumValueType)p_right) != (_EnumValueType)0;
    };

    static constexpr _EnumType set(_EnumType p_left, _EnumType p_right)
    {
        return (_EnumType)((_EnumValueType)p_left | (_EnumValueType)p_right);
    };

    static constexpr _EnumType clear(_EnumType p_left, _EnumType p_right)
    {
        return (_EnumType)((_EnumValueType)p_left - ((_EnumValueType)p_left & (_EnumValueType)p_right));
    };
};

using HeapCodeFlag_t = i8;
enum class HeapCodeFlag : HeapCodeFlag_t
{
    UNDEFINED = 0,
    ALLOCATED = 1,
    NOT_ALLOCATED = 2,
    HEAP_RESIZED = 4,
    PAGE_CREATED = 8
};

constexpr HeapCodeFlag operator|(HeapCodeFlag lhs, HeapCodeFlag rhs)
{
    using Underlying = HeapCodeFlag_t;
    return bits_base<HeapCodeFlag, Underlying>::set(lhs, rhs);
};
constexpr i8 operator&&(HeapCodeFlag lhs, HeapCodeFlag rhs)
{
    using Underlying = HeapCodeFlag_t;
    return bits_base<HeapCodeFlag, Underlying>::have(lhs, rhs);
};

struct MemoryLeakDisabled
{
    template <class _P0> auto allocate(_P0 ctx){};
    template <class _P0> auto free(_P0 ctx){};
    template <class _P0, class _P1> auto track_memory(_P0 p_ptr, _P1 ctx){};
    template <class _P0> auto untrack_memory(_P0 p_ptr){};
};

struct MemoryLeak
{
    struct Entry
    {
        i8 _active;
        Span<void*> _backtrace;
        void* _ptr;

        auto clean()
        {
            _active = 0;
            _backtrace.clean();
            _ptr = 0;
        };
    };

    Span<Entry> _leaks;

    template <class _P0> auto allocate(_P0 ctx)
    {
        _leaks.allocate(32, ctx);
        for (auto(i) = (0); (i) < (&_leaks)->size(); (i)++)
        {
            _leaks.at(i)->clean();
        }
    }

    template <class _P0> static auto allocate_s(_P0 ctx)
    {
        MemoryLeak l_leak;
        l_leak.allocate(ctx);
        return l_leak;
    };

  private:
    auto __check_leak()
    {
        for (auto(i) = (0); (i) < (&_leaks)->size(); (i)++)
        {
            auto l_entry = _leaks.at(i);
            if (l_entry->_active)
            {
                assert(false);
            }
        }
    }

  public:
    template <class _P0> auto free(_P0 ctx)
    {
        __check_leak();
        for (auto(i) = (0); (i) < (&_leaks)->size(); (i)++)
        {
            if (_leaks.at(i)->_backtrace.data())
            {
                _leaks.at(i)->_backtrace.free(ctx);
            }
        }
        _leaks.free(ctx);
    };

  private:
    template <class _P0> auto __next_index(_P0 ctx)
    {
        for (auto(i) = (0); (i) < (&_leaks)->size(); (i)++)
        {
            auto l_element = _leaks.at(i);
            if (!l_element->_active)
            {
                return i;
            }
        }
        auto l_start_index = _leaks.size() - 1;
        _leaks.resize(_leaks.size() * 2, ctx);
        for (auto(i) = (l_start_index); (i) < (&_leaks)->size(); (i)++)
        {
            _leaks.at(i)->clean();
        }
        return __next_index(ctx);
    };

  public:
    template <class _P0, class _P1> auto track_memory(_P0 p_ptr, _P1 ctx)
    {
        auto l_index = __next_index(ctx);
        assert_debug(l_index != -1);
        auto l_entry = _leaks.at(l_index);
        l_entry->_active = 1;
        l_entry->_ptr = p_ptr;
        if (!l_entry->_backtrace.data())
        {
            l_entry->_backtrace.allocate(0, ctx);
        }
    };

    template <class _P0> auto untrack_memory(_P0 p_ptr)
    {
        for (auto(i) = (0); (i) < (&_leaks)->size(); (i)++)
        {
            auto l_entry = _leaks.at(i);
            if (l_entry->_active && l_entry->_ptr == p_ptr)
            {
                l_entry->_active = false;
                return;
            }
        }
        assert_debug(false);
    }
};

struct SysContext
{
    UnsafeContext _unsafe_ctx;

    MemoryLeak _memory_leak;

    auto allocate()
    {
        if constexpr (1)
        {
            _memory_leak.allocate(&_unsafe_ctx);
        }
    };

    static auto allocate_s()
    {
        SysContext thiz;
        thiz.allocate();
        return thiz;
    };

    auto dispose()
    {
        _memory_leak.free(&_unsafe_ctx);
    };

    template <class _P0> auto malloc(_P0 p_size)
    {
        auto l_ptr = _unsafe_ctx.malloc(p_size);
        if constexpr (1)
        {
            if (l_ptr)
            {
                _memory_leak.track_memory(l_ptr, &_unsafe_ctx);
            }
        }
        return l_ptr;
    };

    template <class _P0> auto free(_P0** p_ptr)
    {
        if (p_ptr)
        {
            if constexpr (1)
            {
                _memory_leak.untrack_memory(*p_ptr);
            }
            _unsafe_ctx.free(p_ptr);
        }
    };

    template <class _P0, class _P1> auto realloc(_P0** p_ptr, _P1 p_size)
    {
        if constexpr (1)
        {
            if (*p_ptr)
            {
                _memory_leak.untrack_memory(*p_ptr);
            }
        }

        _unsafe_ctx.realloc(p_ptr, p_size);

        if constexpr (1)
        {
            if (*p_ptr)
            {
                _memory_leak.track_memory(*p_ptr, &_unsafe_ctx);
            };
        }
    };
};

namespace core_test
{

void test_memory()
{

    auto _l_ctx = SysContext::allocate_s();
    auto ctx = &_l_ctx;
    {
        Span<uimax> l_arr;
        l_arr.allocate(10, ctx);

        *l_arr.at(0) = 10;
        l_arr.resize(20, ctx);

        assert(*l_arr.at(0) == 10);
        assert(l_arr.size() == 20);
        l_arr.free(ctx);
    }

    {
        auto l_vector = Vector<uimax>::allocate_s(1, ctx);

        for (auto(i) = (0); i < (20); i++)
        {
            l_vector.push_back(&i, ctx);
        };
        assert(l_vector.capacity() == 32);

        for (auto(i) = (0); (i) < (&l_vector)->size(); (i)++)
        {
            assert(*l_vector.at(i) == i);
        }

        l_vector.free(ctx);
    }
    _l_ctx.dispose();
};

template <class _P0>
auto test_slice(_P0 ctx){

    {Span<uimax> l_span_sizet;
l_span_sizet.allocate(0, ctx);

{
    auto l_new_capacity = 10;
    l_span_sizet.resize(l_new_capacity, ctx);
    assert(l_span_sizet.size() == l_new_capacity);
    assert(l_span_sizet.data() != __null);
}

l_span_sizet.free(ctx);
} // namespace core_test

{
    Span<uimax> l_span_sizet;
    l_span_sizet.allocate(10, ctx);

    for (auto(i) = (0); i < (10); i++)
    {
        *l_span_sizet.at(i) = i;
    };

    {
        l_span_sizet.memove_down(3, 1, 1);
        assert(*l_span_sizet.at(4) == 3);
    }
    {
        l_span_sizet.memove_up(4, 2, 1);
        assert(*l_span_sizet.at(2) == 3);
        for (auto(i) = (0); i < (2); i++)
        {
            assert(*l_span_sizet.at(i) == i);
        }
    }
    {
        l_span_sizet.memove_up(2, 2, 2);
        assert(*l_span_sizet.at(0) == 3);
        assert(*l_span_sizet.at(5) == 5);
    }

    {
        for (auto(i) = (0); i < (10); i++)
        {
            *l_span_sizet.at(i) = i;
        };

        l_span_sizet.memove_down(6, 2, 2);
        assert(*l_span_sizet.at(8) == 6);
        assert(*l_span_sizet.at(9) == 7);
        assert(*l_span_sizet.at(5) == 5);

        for (auto(i) = (0); i < (10); i++)
        {
            *l_span_sizet.at(i) = i;
        };
        l_span_sizet.memove_up(2, 2, 8);
        assert(*l_span_sizet.at(0) == 2);
        assert(*l_span_sizet.at(1) == 3);
        assert(*l_span_sizet.at(7) == 9);
    }

    l_span_sizet.free(ctx);
}

{
    arr<uimax, 2> l_arr = {0, 1};
    auto left = l_arr.to_slice();
    arr<uimax, 3> l_arr_2 = {0, 1, 2};
    auto right = l_arr_2.to_slice();
    assert(left.compare(&right));
}

{
    Span<uimax> l_span_sizet;
    l_span_sizet.allocate(10, ctx);

    arr<uimax, 4> _slice_1 = {0, 1, 2, 3};
    arr<uimax, 4> _slice_2 = {5, 6, 7, 8};

    auto l_slice_1 = _slice_1.to_slice();
    auto l_slice_2 = _slice_2.to_slice();

    l_span_sizet.copy_at_from_2(1, &l_slice_1, &l_slice_2);

    auto l_slice_slided = l_span_sizet.slide(1);
    assert(l_slice_1.compare(&l_slice_slided));
    l_slice_slided = l_span_sizet.slide(5);
    assert(l_slice_2.compare(&l_slice_slided));

    l_span_sizet.free(ctx);
}

{
    arr<uimax, 4> _slice = {15, 26, 78, 10};
    auto l_slice = _slice.to_slice();
    auto l_span_sizet = Span<uimax>::allocate_s(l_slice.size(), ctx);
    l_span_sizet.copy_from(&l_slice);
    assert(l_span_sizet.size() == 4);
    assert(l_slice.compare(&l_span_sizet));
    l_span_sizet.free(ctx);
}
}
;

template <class _P0, class _P1>
auto __test_any_vector(_P0* p_vector, _P1 ctx){

    {auto l_old_size = p_vector->size();
arr<uimax, 5> _elements = {0, 1, 2, 3, 4};
auto l_elements_slice = _elements.to_slice();

p_vector->push_back_slice(&l_elements_slice, ctx);
assert(p_vector->size() == l_old_size + 5);
for (auto(i) = (0); (i) < (p_vector)->size(); (i)++)
{
    assert(*p_vector->at(i) == *_elements.at(i - l_old_size));
}
}
}
;

template <class _P0> auto test_vector(_P0 ctx)
{
    auto l_vector = Vector<uimax>::allocate_s(0, ctx);
    __test_any_vector(&l_vector, ctx);
    l_vector.free(ctx);
};

void main()
{
    test_memory();

    auto _l_ctx = SysContext::allocate_s();
    auto ctx = &_l_ctx;
    test_slice(ctx);
    test_vector(ctx);
    _l_ctx.dispose();
};
}
;

template <i8 _FractionalPrecision, class _Num> struct fixed
{
    static_assert(_FractionalPrecision <= (sizeof(_Num) * 8));

    inline static fixed m_pi_4 = fixed{num(0.785398163397448309616)};
    inline static fixed m_pi_2 = m_pi_4 * fixed{num(2)};
    inline static fixed m_pi = m_pi_4 * fixed{num(4)};
    inline static fixed m_2_pi = m_pi_4 * fixed{num(8)};

    using type_higher_numeric = typename _Num::type_higher_numeric;
    _Num _number;

    static auto constexpr __attribute__((always_inline)) scale()
    {
        return _FractionalPrecision;
    };

    template <class _P0> auto constexpr __attribute__((always_inline)) make(_P0 p_number)
    {
        _number = (p_number * num(1 << scale()));
    };

    template <class _P0> static auto constexpr __attribute__((always_inline)) make_s(_P0 p_number)
    {
        fixed thiz;
        thiz.make(p_number);
        return thiz;
    };

    auto constexpr __attribute__((always_inline)) num_value()
    {
        return _number.num_value();
    };

    auto constexpr __attribute__((always_inline)) to_f64()
    {
        return num<f64>(*num_value()) / num(1 << scale());
    };

    static auto constexpr __attribute__((always_inline)) epsilon()
    {
        return fixed{1};
    };

    template <i8 _Scale> auto set_scale()
    {
        constexpr auto l_delta = _FractionalPrecision - _Scale;
        if constexpr (l_delta > 0)
        {
            return fixed<_Scale, _Num>{*_number.num_value() >> l_delta};
        }
        else
        {
            return fixed<_Scale, _Num>{*_number.num_value() << -l_delta};
        }
    };

    template <i8 _ScaleDelta> auto add_whole()
    {
        return fixed<_FractionalPrecision - _ScaleDelta, _Num>{_number};
    };
    template <i8 _ScaleDelta> auto add_fraction()
    {
        return fixed<_FractionalPrecision + _ScaleDelta, _Num>{_number};
    };

    template <class _P0> auto constexpr __attribute__((always_inline)) operator+(_P0 p_other)
    {
        __check_scale_match(*this, p_other);
        return fixed{_number + p_other._number};
    };

    template <class _P0> auto constexpr __attribute__((always_inline)) operator-(_P0 p_other)
    {
        __check_scale_match(*this, p_other);
        return fixed{_number - p_other._number};
    };

    template <class _P0> auto constexpr __attribute__((always_inline)) operator*(_P0 p_other)
    {
        __check_scale_match(*this, p_other);
        return fixed{*(num<type_higher_numeric>(*num_value()) * num<type_higher_numeric>(*p_other.num_value())).num_value() >> scale()};
    };

    template <class _P0> auto constexpr __attribute__((always_inline)) operator/(_P0 p_other)
    {
        __check_scale_match(*this, p_other);
        return fixed{num(((type_higher_numeric)*num_value()) << scale()) / p_other._number};
    };

    template <class _P0> auto constexpr __attribute__((always_inline)) operator<(_P0 p_other)
    {
        __check_scale_match(*this, p_other);
        return _number < p_other._number;
    };

    template <class _P0> auto constexpr __attribute__((always_inline)) operator<=(_P0 p_other)
    {
        __check_scale_match(*this, p_other);
        return _number <= p_other._number;
    };

    template <class _P0> auto constexpr __attribute__((always_inline)) operator>(_P0 p_other)
    {
        __check_scale_match(*this, p_other);
        return _number > p_other._number;
    };

    template <class _P0> auto constexpr __attribute__((always_inline)) operator>=(_P0 p_other)
    {
        __check_scale_match(*this, p_other);
        return _number >= p_other._number;
    };

    template <class _P0> auto constexpr __attribute__((always_inline)) operator%(_P0 p_other)
    {
        __check_scale_match(*this, p_other);
        return fixed{_number % p_other._number};
    };

    auto constexpr __attribute__((always_inline)) abs()
    {
        return _number.abs();
    };

  private:
    template <class _P0, class _P1> static auto __check_scale_match(_P0 p_left, _P1 p_right)
    {
        assert_constexpr<p_left.scale() == p_right.scale()>();
    };
};

struct fangle32
{
    constexpr auto static _SCALE = 7;
    using type_fixed = fixed<_SCALE, Int32>;
    type_fixed thiz;
    template <class _P0> static auto constexpr __attribute__((always_inline)) make_s(_P0 p_number)
    {
        return fangle32{type_fixed::make_s(p_number)};
    };
    static auto constexpr m_pi_4()
    {
        return fangle32{type_fixed::m_pi_4};
    };
    static auto constexpr m_pi_2()
    {
        return fangle32{type_fixed::m_pi_2};
    };
    static auto constexpr m_pi()
    {
        return fangle32{type_fixed::m_pi};
    };
    static auto constexpr m_2_pi()
    {
        return fangle32{type_fixed::m_2_pi};
    };
    auto constexpr __attribute__((always_inline)) abs()
    {
        return fangle32{thiz.abs()};
    };
    fangle32 constexpr __attribute__((always_inline)) operator+(fangle32 p_other)
    {
        return fangle32{thiz + p_other.thiz};
    };
    fangle32 constexpr __attribute__((always_inline)) operator-(fangle32 p_other)
    {
        return fangle32{thiz - p_other.thiz};
    };
    fangle32 constexpr __attribute__((always_inline)) operator*(fangle32 p_other)
    {
        return fangle32{thiz * p_other.thiz};
    };
    fangle32 constexpr __attribute__((always_inline)) operator/(fangle32 p_other)
    {
        return fangle32{thiz / p_other.thiz};
    };
    fangle32 constexpr __attribute__((always_inline)) operator%(fangle32 p_other)
    {
        return fangle32{thiz % p_other.thiz};
    };
    auto constexpr __attribute__((always_inline)) operator<(fangle32 p_other)
    {
        return thiz < p_other.thiz;
    };
    auto constexpr __attribute__((always_inline)) operator<=(fangle32 p_other)
    {
        return thiz <= p_other.thiz;
    };
    auto constexpr __attribute__((always_inline)) operator>(fangle32 p_other)
    {
        return thiz > p_other.thiz;
    };
    auto constexpr __attribute__((always_inline)) operator>=(fangle32 p_other)
    {
        return thiz >= p_other.thiz;
    };
    ;
};

struct funit32
{
    constexpr auto static _SCALE = 30;
    using type_fixed = fixed<_SCALE, Int32>;
    type_fixed thiz;
    template <class _P0> static auto constexpr __attribute__((always_inline)) make_s(_P0 p_number)
    {
        return funit32{type_fixed::make_s(p_number)};
    };
    static auto constexpr m_pi_4()
    {
        return funit32{type_fixed::m_pi_4};
    };
    static auto constexpr m_pi_2()
    {
        return funit32{type_fixed::m_pi_2};
    };
    static auto constexpr m_pi()
    {
        return funit32{type_fixed::m_pi};
    };
    static auto constexpr m_2_pi()
    {
        return funit32{type_fixed::m_2_pi};
    };
    auto constexpr __attribute__((always_inline)) abs()
    {
        return funit32{thiz.abs()};
    };
    funit32 constexpr __attribute__((always_inline)) operator+(funit32 p_other)
    {
        return funit32{thiz + p_other.thiz};
    };
    funit32 constexpr __attribute__((always_inline)) operator-(funit32 p_other)
    {
        return funit32{thiz - p_other.thiz};
    };
    funit32 constexpr __attribute__((always_inline)) operator*(funit32 p_other)
    {
        return funit32{thiz * p_other.thiz};
    };
    funit32 constexpr __attribute__((always_inline)) operator/(funit32 p_other)
    {
        return funit32{thiz / p_other.thiz};
    };
    funit32 constexpr __attribute__((always_inline)) operator%(funit32 p_other)
    {
        return funit32{thiz % p_other.thiz};
    };
    auto constexpr __attribute__((always_inline)) operator<(funit32 p_other)
    {
        return thiz < p_other.thiz;
    };
    auto constexpr __attribute__((always_inline)) operator<=(funit32 p_other)
    {
        return thiz <= p_other.thiz;
    };
    auto constexpr __attribute__((always_inline)) operator>(funit32 p_other)
    {
        return thiz > p_other.thiz;
    };
    auto constexpr __attribute__((always_inline)) operator>=(funit32 p_other)
    {
        return thiz >= p_other.thiz;
    };
    ;
    template <class _P0> static auto constexpr __attribute__((always_inline)) make_fangle32_s(_P0 p_other)
    {
        return funit32{p_other.thiz.template set_scale<_SCALE>()};
    };
};

namespace trig
{
auto cos(fangle32 p_angle)
{
    using type_angle = decltype(p_angle);

    auto l_pi = type_angle::m_pi();
    auto l_2pi = type_angle::m_2_pi();
    auto l_pi_over_2 = type_angle::m_pi_2();
    auto l_angle = (p_angle % l_2pi).abs();

    auto l_negation_factor = type_angle::make_s(num(1));
    if (l_angle > l_pi)
    {
        l_angle = (l_angle - l_pi);
        l_negation_factor = l_negation_factor * type_angle::make_s(num(-1));
    }

    if (l_angle > l_pi_over_2)
    {
        l_angle = (l_pi - l_angle);
        l_negation_factor = l_negation_factor * type_angle::make_s(num(-1));
    }

    auto l_angle_2 = l_angle * l_angle;
    auto l_angle_4 = l_angle_2 * l_angle_2;

    auto l_x0 = type_angle::make_s(num(1));
    auto l_x1 = (l_angle_2 / type_angle::make_s(num(2)));
    auto l_x2 = (l_angle_4 / type_angle::make_s(num(24)));

    auto l_unit_poly = l_x0 - l_x1 + l_x2;
    l_unit_poly = l_unit_poly * l_negation_factor;

    return funit32::make_fangle32_s(l_unit_poly);
};
}; // namespace trig

extern "C++"
{

    namespace std __attribute__((__visibility__("default")))
    {

        struct __true_type
        {
        };
        struct __false_type
        {
        };

        template <bool> struct __truth_type
        {
            typedef __false_type __type;
        };

        template <> struct __truth_type<true>
        {
            typedef __true_type __type;
        };

        template <class _Sp, class _Tp> struct __traitor
        {
            enum
            {
                __value = bool(_Sp::__value) || bool(_Tp::__value)
            };
            typedef typename __truth_type<__value>::__type __type;
        };

        template <typename, typename> struct __are_same
        {
            enum
            {
                __value = 0
            };
            typedef __false_type __type;
        };

        template <typename _Tp> struct __are_same<_Tp, _Tp>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <typename _Tp> struct __is_void
        {
            enum
            {
                __value = 0
            };
            typedef __false_type __type;
        };

        template <> struct __is_void<void>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <typename _Tp> struct __is_integer
        {
            enum
            {
                __value = 0
            };
            typedef __false_type __type;
        };

        template <> struct __is_integer<bool>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_integer<char>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_integer<signed char>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_integer<unsigned char>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_integer<wchar_t>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_integer<char8_t>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_integer<char16_t>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_integer<char32_t>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_integer<short>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_integer<unsigned short>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_integer<int>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_integer<unsigned int>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_integer<long>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_integer<unsigned long>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_integer<long long>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_integer<unsigned long long>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };
        template <> struct __is_integer<__int128>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };
        template <> struct __is_integer<unsigned __int128>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };
        template <typename _Tp> struct __is_floating
        {
            enum
            {
                __value = 0
            };
            typedef __false_type __type;
        };

        template <> struct __is_floating<float>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_floating<double>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_floating<long double>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <typename _Tp> struct __is_pointer
        {
            enum
            {
                __value = 0
            };
            typedef __false_type __type;
        };

        template <typename _Tp> struct __is_pointer<_Tp*>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <typename _Tp> struct __is_arithmetic : public __traitor<__is_integer<_Tp>, __is_floating<_Tp>>{};

        template <typename _Tp> struct __is_scalar : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp>>{};

        template <typename _Tp> struct __is_char
        {
            enum
            {
                __value = 0
            };
            typedef __false_type __type;
        };

        template <> struct __is_char<char>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_char<wchar_t>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <typename _Tp> struct __is_byte
        {
            enum
            {
                __value = 0
            };
            typedef __false_type __type;
        };

        template <> struct __is_byte<char>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_byte<signed char>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <> struct __is_byte<unsigned char>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        enum class byte : unsigned char;

        template <> struct __is_byte<byte>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <typename _Tp> struct __is_move_iterator
        {
            enum
            {
                __value = 0
            };
            typedef __false_type __type;
        };

        template <typename _Iterator> inline _Iterator __miter_base(_Iterator __it)
        {
            return __it;
        }

    } // namespace )
}

extern "C++"
{

    namespace __gnu_cxx __attribute__((__visibility__("default")))
    {

        template <bool, typename> struct __enable_if
        {
        };

        template <typename _Tp> struct __enable_if<true, _Tp>
        {
            typedef _Tp __type;
        };

        template <bool _Cond, typename _Iftrue, typename _Iffalse> struct __conditional_type
        {
            typedef _Iftrue __type;
        };

        template <typename _Iftrue, typename _Iffalse> struct __conditional_type<false, _Iftrue, _Iffalse>
        {
            typedef _Iffalse __type;
        };

        template <typename _Tp> struct __add_unsigned
        {
          private:
            typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

          public:
            typedef typename __if_type::__type __type;
        };

        template <> struct __add_unsigned<char>
        {
            typedef unsigned char __type;
        };

        template <> struct __add_unsigned<signed char>
        {
            typedef unsigned char __type;
        };

        template <> struct __add_unsigned<short>
        {
            typedef unsigned short __type;
        };

        template <> struct __add_unsigned<int>
        {
            typedef unsigned int __type;
        };

        template <> struct __add_unsigned<long>
        {
            typedef unsigned long __type;
        };

        template <> struct __add_unsigned<long long>
        {
            typedef unsigned long long __type;
        };

        template <> struct __add_unsigned<bool>;

        template <> struct __add_unsigned<wchar_t>;

        template <typename _Tp> struct __remove_unsigned
        {
          private:
            typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

          public:
            typedef typename __if_type::__type __type;
        };

        template <> struct __remove_unsigned<char>
        {
            typedef signed char __type;
        };

        template <> struct __remove_unsigned<unsigned char>
        {
            typedef signed char __type;
        };

        template <> struct __remove_unsigned<unsigned short>
        {
            typedef short __type;
        };

        template <> struct __remove_unsigned<unsigned int>
        {
            typedef int __type;
        };

        template <> struct __remove_unsigned<unsigned long>
        {
            typedef long __type;
        };

        template <> struct __remove_unsigned<unsigned long long>
        {
            typedef long long __type;
        };

        template <> struct __remove_unsigned<bool>;

        template <> struct __remove_unsigned<wchar_t>;

        template <typename _Type> inline bool __is_null_pointer(_Type * __ptr)
        {
            return __ptr == 0;
        }

        template <typename _Type> inline bool __is_null_pointer(_Type)
        {
            return false;
        }

        inline bool __is_null_pointer(std::nullptr_t)
        {
            return true;
        }

        template <typename _Tp, bool = std::__is_integer<_Tp>::__value> struct __promote
        {
            typedef double __type;
        };

        template <typename _Tp> struct __promote<_Tp, false>
        {
        };

        template <> struct __promote<long double>
        {
            typedef long double __type;
        };

        template <> struct __promote<double>
        {
            typedef double __type;
        };

        template <> struct __promote<float>
        {
            typedef float __type;
        };

        template <typename _Tp, typename _Up, typename _Tp2 = typename __promote<_Tp>::__type, typename _Up2 = typename __promote<_Up>::__type> struct __promote_2
        {
            typedef __typeof__(_Tp2() + _Up2()) __type;
        };

        template <typename _Tp, typename _Up, typename _Vp, typename _Tp2 = typename __promote<_Tp>::__type, typename _Up2 = typename __promote<_Up>::__type,
                  typename _Vp2 = typename __promote<_Vp>::__type>
        struct __promote_3
        {
            typedef __typeof__(_Tp2() + _Up2() + _Vp2()) __type;
        };

        template <typename _Tp, typename _Up, typename _Vp, typename _Wp, typename _Tp2 = typename __promote<_Tp>::__type, typename _Up2 = typename __promote<_Up>::__type,
                  typename _Vp2 = typename __promote<_Vp>::__type, typename _Wp2 = typename __promote<_Wp>::__type>
        struct __promote_4
        {
            typedef __typeof__(_Tp2() + _Up2() + _Vp2() + _Wp2()) __type;
        };

    } // namespace )
}

extern "C"
{

    typedef float float_t;
    typedef double double_t;

    enum
    {
        FP_INT_UPWARD =

            0,
        FP_INT_DOWNWARD =

            1,
        FP_INT_TOWARDZERO =

            2,
        FP_INT_TONEARESTFROMZERO =

            3,
        FP_INT_TONEAREST =

            4,
    };
    extern int __fpclassify(double __value) throw() __attribute__((__const__));

    extern int __signbit(double __value) throw() __attribute__((__const__));

    extern int __isinf(double __value) throw() __attribute__((__const__));

    extern int __finite(double __value) throw() __attribute__((__const__));

    extern int __isnan(double __value) throw() __attribute__((__const__));

    extern int __iseqsig(double __x, double __y) throw();

    extern int __issignaling(double __value) throw() __attribute__((__const__));
    extern double acos(double __x) throw();
    extern double __acos(double __x) throw();

    extern double asin(double __x) throw();
    extern double __asin(double __x) throw();

    extern double atan(double __x) throw();
    extern double __atan(double __x) throw();

    extern double atan2(double __y, double __x) throw();
    extern double __atan2(double __y, double __x) throw();

    extern double cos(double __x) throw();
    extern double __cos(double __x) throw();

    extern double sin(double __x) throw();
    extern double __sin(double __x) throw();

    extern double tan(double __x) throw();
    extern double __tan(double __x) throw();

    extern double cosh(double __x) throw();
    extern double __cosh(double __x) throw();

    extern double sinh(double __x) throw();
    extern double __sinh(double __x) throw();

    extern double tanh(double __x) throw();
    extern double __tanh(double __x) throw();

    extern void sincos(double __x, double* __sinx, double* __cosx) throw();
    extern void __sincos(double __x, double* __sinx, double* __cosx) throw();

    extern double acosh(double __x) throw();
    extern double __acosh(double __x) throw();

    extern double asinh(double __x) throw();
    extern double __asinh(double __x) throw();

    extern double atanh(double __x) throw();
    extern double __atanh(double __x) throw();

    extern double exp(double __x) throw();
    extern double __exp(double __x) throw();

    extern double frexp(double __x, int* __exponent) throw();
    extern double __frexp(double __x, int* __exponent) throw();

    extern double ldexp(double __x, int __exponent) throw();
    extern double __ldexp(double __x, int __exponent) throw();

    extern double log(double __x) throw();
    extern double __log(double __x) throw();

    extern double log10(double __x) throw();
    extern double __log10(double __x) throw();

    extern double modf(double __x, double* __iptr) throw();
    extern double __modf(double __x, double* __iptr) throw() __attribute__((__nonnull__(2)));

    extern double exp10(double __x) throw();
    extern double __exp10(double __x) throw();

    extern double expm1(double __x) throw();
    extern double __expm1(double __x) throw();

    extern double log1p(double __x) throw();
    extern double __log1p(double __x) throw();

    extern double logb(double __x) throw();
    extern double __logb(double __x) throw();

    extern double exp2(double __x) throw();
    extern double __exp2(double __x) throw();

    extern double log2(double __x) throw();
    extern double __log2(double __x) throw();

    extern double pow(double __x, double __y) throw();
    extern double __pow(double __x, double __y) throw();

    extern double sqrt(double __x) throw();
    extern double __sqrt(double __x) throw();

    extern double hypot(double __x, double __y) throw();
    extern double __hypot(double __x, double __y) throw();

    extern double cbrt(double __x) throw();
    extern double __cbrt(double __x) throw();

    extern double ceil(double __x) throw() __attribute__((__const__));
    extern double __ceil(double __x) throw() __attribute__((__const__));

    extern double fabs(double __x) throw() __attribute__((__const__));
    extern double __fabs(double __x) throw() __attribute__((__const__));

    extern double floor(double __x) throw() __attribute__((__const__));
    extern double __floor(double __x) throw() __attribute__((__const__));

    extern double fmod(double __x, double __y) throw();
    extern double __fmod(double __x, double __y) throw();
    extern int finite(double __value) throw() __attribute__((__const__));

    extern double drem(double __x, double __y) throw();
    extern double __drem(double __x, double __y) throw();

    extern double significand(double __x) throw();
    extern double __significand(double __x) throw();

    extern double copysign(double __x, double __y) throw() __attribute__((__const__));
    extern double __copysign(double __x, double __y) throw() __attribute__((__const__));

    extern double nan(const char* __tagb) throw();
    extern double __nan(const char* __tagb) throw();
    extern double j0(double) throw();
    extern double __j0(double) throw();
    extern double j1(double) throw();
    extern double __j1(double) throw();
    extern double jn(int, double) throw();
    extern double __jn(int, double) throw();
    extern double y0(double) throw();
    extern double __y0(double) throw();
    extern double y1(double) throw();
    extern double __y1(double) throw();
    extern double yn(int, double) throw();
    extern double __yn(int, double) throw();

    extern double erf(double) throw();
    extern double __erf(double) throw();
    extern double erfc(double) throw();
    extern double __erfc(double) throw();
    extern double lgamma(double) throw();
    extern double __lgamma(double) throw();

    extern double tgamma(double) throw();
    extern double __tgamma(double) throw();

    extern double gamma(double) throw();
    extern double __gamma(double) throw();

    extern double lgamma_r(double, int* __signgamp) throw();
    extern double __lgamma_r(double, int* __signgamp) throw();

    extern double rint(double __x) throw();
    extern double __rint(double __x) throw();

    extern double nextafter(double __x, double __y) throw();
    extern double __nextafter(double __x, double __y) throw();

    extern double nexttoward(double __x, long double __y) throw();
    extern double __nexttoward(double __x, long double __y) throw();

    extern double nextdown(double __x) throw();
    extern double __nextdown(double __x) throw();

    extern double nextup(double __x) throw();
    extern double __nextup(double __x) throw();

    extern double remainder(double __x, double __y) throw();
    extern double __remainder(double __x, double __y) throw();

    extern double scalbn(double __x, int __n) throw();
    extern double __scalbn(double __x, int __n) throw();

    extern int ilogb(double __x) throw();
    extern int __ilogb(double __x) throw();

    extern long int llogb(double __x) throw();
    extern long int __llogb(double __x) throw();

    extern double scalbln(double __x, long int __n) throw();
    extern double __scalbln(double __x, long int __n) throw();

    extern double nearbyint(double __x) throw();
    extern double __nearbyint(double __x) throw();

    extern double round(double __x) throw() __attribute__((__const__));
    extern double __round(double __x) throw() __attribute__((__const__));

    extern double trunc(double __x) throw() __attribute__((__const__));
    extern double __trunc(double __x) throw() __attribute__((__const__));

    extern double remquo(double __x, double __y, int* __quo) throw();
    extern double __remquo(double __x, double __y, int* __quo) throw();

    extern long int lrint(double __x) throw();
    extern long int __lrint(double __x) throw();
    __extension__ extern long long int llrint(double __x) throw();
    extern long long int __llrint(double __x) throw();

    extern long int lround(double __x) throw();
    extern long int __lround(double __x) throw();
    __extension__ extern long long int llround(double __x) throw();
    extern long long int __llround(double __x) throw();

    extern double fdim(double __x, double __y) throw();
    extern double __fdim(double __x, double __y) throw();

    extern double fmax(double __x, double __y) throw() __attribute__((__const__));
    extern double __fmax(double __x, double __y) throw() __attribute__((__const__));

    extern double fmin(double __x, double __y) throw() __attribute__((__const__));
    extern double __fmin(double __x, double __y) throw() __attribute__((__const__));

    extern double fma(double __x, double __y, double __z) throw();
    extern double __fma(double __x, double __y, double __z) throw();

    extern double roundeven(double __x) throw() __attribute__((__const__));
    extern double __roundeven(double __x) throw() __attribute__((__const__));

    extern __intmax_t fromfp(double __x, int __round, unsigned int __width) throw();
    extern __intmax_t __fromfp(double __x, int __round, unsigned int __width) throw();

    extern __uintmax_t ufromfp(double __x, int __round, unsigned int __width) throw();
    extern __uintmax_t __ufromfp(double __x, int __round, unsigned int __width) throw();

    extern __intmax_t fromfpx(double __x, int __round, unsigned int __width) throw();
    extern __intmax_t __fromfpx(double __x, int __round, unsigned int __width) throw();

    extern __uintmax_t ufromfpx(double __x, int __round, unsigned int __width) throw();
    extern __uintmax_t __ufromfpx(double __x, int __round, unsigned int __width) throw();

    extern double fmaxmag(double __x, double __y) throw() __attribute__((__const__));
    extern double __fmaxmag(double __x, double __y) throw() __attribute__((__const__));

    extern double fminmag(double __x, double __y) throw() __attribute__((__const__));
    extern double __fminmag(double __x, double __y) throw() __attribute__((__const__));

    extern int canonicalize(double* __cx, const double* __x) throw();

    extern int totalorder(const double* __x, const double* __y) throw()

        __attribute__((__pure__));

    extern int totalordermag(const double* __x, const double* __y) throw()

        __attribute__((__pure__));

    extern double getpayload(const double* __x) throw();
    extern double __getpayload(const double* __x) throw();

    extern int setpayload(double* __x, double __payload) throw();

    extern int setpayloadsig(double* __x, double __payload) throw();

    extern double scalb(double __x, double __n) throw();
    extern double __scalb(double __x, double __n) throw();
    extern int __fpclassifyf(float __value) throw() __attribute__((__const__));

    extern int __signbitf(float __value) throw() __attribute__((__const__));

    extern int __isinff(float __value) throw() __attribute__((__const__));

    extern int __finitef(float __value) throw() __attribute__((__const__));

    extern int __isnanf(float __value) throw() __attribute__((__const__));

    extern int __iseqsigf(float __x, float __y) throw();

    extern int __issignalingf(float __value) throw() __attribute__((__const__));
    extern float acosf(float __x) throw();
    extern float __acosf(float __x) throw();

    extern float asinf(float __x) throw();
    extern float __asinf(float __x) throw();

    extern float atanf(float __x) throw();
    extern float __atanf(float __x) throw();

    extern float atan2f(float __y, float __x) throw();
    extern float __atan2f(float __y, float __x) throw();

    extern float cosf(float __x) throw();
    extern float __cosf(float __x) throw();

    extern float sinf(float __x) throw();
    extern float __sinf(float __x) throw();

    extern float tanf(float __x) throw();
    extern float __tanf(float __x) throw();

    extern float coshf(float __x) throw();
    extern float __coshf(float __x) throw();

    extern float sinhf(float __x) throw();
    extern float __sinhf(float __x) throw();

    extern float tanhf(float __x) throw();
    extern float __tanhf(float __x) throw();

    extern void sincosf(float __x, float* __sinx, float* __cosx) throw();
    extern void __sincosf(float __x, float* __sinx, float* __cosx) throw();

    extern float acoshf(float __x) throw();
    extern float __acoshf(float __x) throw();

    extern float asinhf(float __x) throw();
    extern float __asinhf(float __x) throw();

    extern float atanhf(float __x) throw();
    extern float __atanhf(float __x) throw();

    extern float expf(float __x) throw();
    extern float __expf(float __x) throw();

    extern float frexpf(float __x, int* __exponent) throw();
    extern float __frexpf(float __x, int* __exponent) throw();

    extern float ldexpf(float __x, int __exponent) throw();
    extern float __ldexpf(float __x, int __exponent) throw();

    extern float logf(float __x) throw();
    extern float __logf(float __x) throw();

    extern float log10f(float __x) throw();
    extern float __log10f(float __x) throw();

    extern float modff(float __x, float* __iptr) throw();
    extern float __modff(float __x, float* __iptr) throw() __attribute__((__nonnull__(2)));

    extern float exp10f(float __x) throw();
    extern float __exp10f(float __x) throw();

    extern float expm1f(float __x) throw();
    extern float __expm1f(float __x) throw();

    extern float log1pf(float __x) throw();
    extern float __log1pf(float __x) throw();

    extern float logbf(float __x) throw();
    extern float __logbf(float __x) throw();

    extern float exp2f(float __x) throw();
    extern float __exp2f(float __x) throw();

    extern float log2f(float __x) throw();
    extern float __log2f(float __x) throw();

    extern float powf(float __x, float __y) throw();
    extern float __powf(float __x, float __y) throw();

    extern float sqrtf(float __x) throw();
    extern float __sqrtf(float __x) throw();

    extern float hypotf(float __x, float __y) throw();
    extern float __hypotf(float __x, float __y) throw();

    extern float cbrtf(float __x) throw();
    extern float __cbrtf(float __x) throw();

    extern float ceilf(float __x) throw() __attribute__((__const__));
    extern float __ceilf(float __x) throw() __attribute__((__const__));

    extern float fabsf(float __x) throw() __attribute__((__const__));
    extern float __fabsf(float __x) throw() __attribute__((__const__));

    extern float floorf(float __x) throw() __attribute__((__const__));
    extern float __floorf(float __x) throw() __attribute__((__const__));

    extern float fmodf(float __x, float __y) throw();
    extern float __fmodf(float __x, float __y) throw();
    extern int isinff(float __value) throw() __attribute__((__const__));

    extern int finitef(float __value) throw() __attribute__((__const__));

    extern float dremf(float __x, float __y) throw();
    extern float __dremf(float __x, float __y) throw();

    extern float significandf(float __x) throw();
    extern float __significandf(float __x) throw();

    extern float copysignf(float __x, float __y) throw() __attribute__((__const__));
    extern float __copysignf(float __x, float __y) throw() __attribute__((__const__));

    extern float nanf(const char* __tagb) throw();
    extern float __nanf(const char* __tagb) throw();
    extern int isnanf(float __value) throw() __attribute__((__const__));

    extern float j0f(float) throw();
    extern float __j0f(float) throw();
    extern float j1f(float) throw();
    extern float __j1f(float) throw();
    extern float jnf(int, float) throw();
    extern float __jnf(int, float) throw();
    extern float y0f(float) throw();
    extern float __y0f(float) throw();
    extern float y1f(float) throw();
    extern float __y1f(float) throw();
    extern float ynf(int, float) throw();
    extern float __ynf(int, float) throw();

    extern float erff(float) throw();
    extern float __erff(float) throw();
    extern float erfcf(float) throw();
    extern float __erfcf(float) throw();
    extern float lgammaf(float) throw();
    extern float __lgammaf(float) throw();

    extern float tgammaf(float) throw();
    extern float __tgammaf(float) throw();

    extern float gammaf(float) throw();
    extern float __gammaf(float) throw();

    extern float lgammaf_r(float, int* __signgamp) throw();
    extern float __lgammaf_r(float, int* __signgamp) throw();

    extern float rintf(float __x) throw();
    extern float __rintf(float __x) throw();

    extern float nextafterf(float __x, float __y) throw();
    extern float __nextafterf(float __x, float __y) throw();

    extern float nexttowardf(float __x, long double __y) throw();
    extern float __nexttowardf(float __x, long double __y) throw();

    extern float nextdownf(float __x) throw();
    extern float __nextdownf(float __x) throw();

    extern float nextupf(float __x) throw();
    extern float __nextupf(float __x) throw();

    extern float remainderf(float __x, float __y) throw();
    extern float __remainderf(float __x, float __y) throw();

    extern float scalbnf(float __x, int __n) throw();
    extern float __scalbnf(float __x, int __n) throw();

    extern int ilogbf(float __x) throw();
    extern int __ilogbf(float __x) throw();

    extern long int llogbf(float __x) throw();
    extern long int __llogbf(float __x) throw();

    extern float scalblnf(float __x, long int __n) throw();
    extern float __scalblnf(float __x, long int __n) throw();

    extern float nearbyintf(float __x) throw();
    extern float __nearbyintf(float __x) throw();

    extern float roundf(float __x) throw() __attribute__((__const__));
    extern float __roundf(float __x) throw() __attribute__((__const__));

    extern float truncf(float __x) throw() __attribute__((__const__));
    extern float __truncf(float __x) throw() __attribute__((__const__));

    extern float remquof(float __x, float __y, int* __quo) throw();
    extern float __remquof(float __x, float __y, int* __quo) throw();

    extern long int lrintf(float __x) throw();
    extern long int __lrintf(float __x) throw();
    __extension__ extern long long int llrintf(float __x) throw();
    extern long long int __llrintf(float __x) throw();

    extern long int lroundf(float __x) throw();
    extern long int __lroundf(float __x) throw();
    __extension__ extern long long int llroundf(float __x) throw();
    extern long long int __llroundf(float __x) throw();

    extern float fdimf(float __x, float __y) throw();
    extern float __fdimf(float __x, float __y) throw();

    extern float fmaxf(float __x, float __y) throw() __attribute__((__const__));
    extern float __fmaxf(float __x, float __y) throw() __attribute__((__const__));

    extern float fminf(float __x, float __y) throw() __attribute__((__const__));
    extern float __fminf(float __x, float __y) throw() __attribute__((__const__));

    extern float fmaf(float __x, float __y, float __z) throw();
    extern float __fmaf(float __x, float __y, float __z) throw();

    extern float roundevenf(float __x) throw() __attribute__((__const__));
    extern float __roundevenf(float __x) throw() __attribute__((__const__));

    extern __intmax_t fromfpf(float __x, int __round, unsigned int __width) throw();
    extern __intmax_t __fromfpf(float __x, int __round, unsigned int __width) throw();

    extern __uintmax_t ufromfpf(float __x, int __round, unsigned int __width) throw();
    extern __uintmax_t __ufromfpf(float __x, int __round, unsigned int __width) throw();

    extern __intmax_t fromfpxf(float __x, int __round, unsigned int __width) throw();
    extern __intmax_t __fromfpxf(float __x, int __round, unsigned int __width) throw();

    extern __uintmax_t ufromfpxf(float __x, int __round, unsigned int __width) throw();
    extern __uintmax_t __ufromfpxf(float __x, int __round, unsigned int __width) throw();

    extern float fmaxmagf(float __x, float __y) throw() __attribute__((__const__));
    extern float __fmaxmagf(float __x, float __y) throw() __attribute__((__const__));

    extern float fminmagf(float __x, float __y) throw() __attribute__((__const__));
    extern float __fminmagf(float __x, float __y) throw() __attribute__((__const__));

    extern int canonicalizef(float* __cx, const float* __x) throw();

    extern int totalorderf(const float* __x, const float* __y) throw()

        __attribute__((__pure__));

    extern int totalordermagf(const float* __x, const float* __y) throw()

        __attribute__((__pure__));

    extern float getpayloadf(const float* __x) throw();
    extern float __getpayloadf(const float* __x) throw();

    extern int setpayloadf(float* __x, float __payload) throw();

    extern int setpayloadsigf(float* __x, float __payload) throw();

    extern float scalbf(float __x, float __n) throw();
    extern float __scalbf(float __x, float __n) throw();
    extern int __fpclassifyl(long double __value) throw() __attribute__((__const__));

    extern int __signbitl(long double __value) throw() __attribute__((__const__));

    extern int __isinfl(long double __value) throw() __attribute__((__const__));

    extern int __finitel(long double __value) throw() __attribute__((__const__));

    extern int __isnanl(long double __value) throw() __attribute__((__const__));

    extern int __iseqsigl(long double __x, long double __y) throw();

    extern int __issignalingl(long double __value) throw() __attribute__((__const__));
    extern long double acosl(long double __x) throw();
    extern long double __acosl(long double __x) throw();

    extern long double asinl(long double __x) throw();
    extern long double __asinl(long double __x) throw();

    extern long double atanl(long double __x) throw();
    extern long double __atanl(long double __x) throw();

    extern long double atan2l(long double __y, long double __x) throw();
    extern long double __atan2l(long double __y, long double __x) throw();

    extern long double cosl(long double __x) throw();
    extern long double __cosl(long double __x) throw();

    extern long double sinl(long double __x) throw();
    extern long double __sinl(long double __x) throw();

    extern long double tanl(long double __x) throw();
    extern long double __tanl(long double __x) throw();

    extern long double coshl(long double __x) throw();
    extern long double __coshl(long double __x) throw();

    extern long double sinhl(long double __x) throw();
    extern long double __sinhl(long double __x) throw();

    extern long double tanhl(long double __x) throw();
    extern long double __tanhl(long double __x) throw();

    extern void sincosl(long double __x, long double* __sinx, long double* __cosx) throw();
    extern void __sincosl(long double __x, long double* __sinx, long double* __cosx) throw();

    extern long double acoshl(long double __x) throw();
    extern long double __acoshl(long double __x) throw();

    extern long double asinhl(long double __x) throw();
    extern long double __asinhl(long double __x) throw();

    extern long double atanhl(long double __x) throw();
    extern long double __atanhl(long double __x) throw();

    extern long double expl(long double __x) throw();
    extern long double __expl(long double __x) throw();

    extern long double frexpl(long double __x, int* __exponent) throw();
    extern long double __frexpl(long double __x, int* __exponent) throw();

    extern long double ldexpl(long double __x, int __exponent) throw();
    extern long double __ldexpl(long double __x, int __exponent) throw();

    extern long double logl(long double __x) throw();
    extern long double __logl(long double __x) throw();

    extern long double log10l(long double __x) throw();
    extern long double __log10l(long double __x) throw();

    extern long double modfl(long double __x, long double* __iptr) throw();
    extern long double __modfl(long double __x, long double* __iptr) throw() __attribute__((__nonnull__(2)));

    extern long double exp10l(long double __x) throw();
    extern long double __exp10l(long double __x) throw();

    extern long double expm1l(long double __x) throw();
    extern long double __expm1l(long double __x) throw();

    extern long double log1pl(long double __x) throw();
    extern long double __log1pl(long double __x) throw();

    extern long double logbl(long double __x) throw();
    extern long double __logbl(long double __x) throw();

    extern long double exp2l(long double __x) throw();
    extern long double __exp2l(long double __x) throw();

    extern long double log2l(long double __x) throw();
    extern long double __log2l(long double __x) throw();

    extern long double powl(long double __x, long double __y) throw();
    extern long double __powl(long double __x, long double __y) throw();

    extern long double sqrtl(long double __x) throw();
    extern long double __sqrtl(long double __x) throw();

    extern long double hypotl(long double __x, long double __y) throw();
    extern long double __hypotl(long double __x, long double __y) throw();

    extern long double cbrtl(long double __x) throw();
    extern long double __cbrtl(long double __x) throw();

    extern long double ceill(long double __x) throw() __attribute__((__const__));
    extern long double __ceill(long double __x) throw() __attribute__((__const__));

    extern long double fabsl(long double __x) throw() __attribute__((__const__));
    extern long double __fabsl(long double __x) throw() __attribute__((__const__));

    extern long double floorl(long double __x) throw() __attribute__((__const__));
    extern long double __floorl(long double __x) throw() __attribute__((__const__));

    extern long double fmodl(long double __x, long double __y) throw();
    extern long double __fmodl(long double __x, long double __y) throw();
    extern int isinfl(long double __value) throw() __attribute__((__const__));

    extern int finitel(long double __value) throw() __attribute__((__const__));

    extern long double dreml(long double __x, long double __y) throw();
    extern long double __dreml(long double __x, long double __y) throw();

    extern long double significandl(long double __x) throw();
    extern long double __significandl(long double __x) throw();

    extern long double copysignl(long double __x, long double __y) throw() __attribute__((__const__));
    extern long double __copysignl(long double __x, long double __y) throw() __attribute__((__const__));

    extern long double nanl(const char* __tagb) throw();
    extern long double __nanl(const char* __tagb) throw();
    extern int isnanl(long double __value) throw() __attribute__((__const__));

    extern long double j0l(long double) throw();
    extern long double __j0l(long double) throw();
    extern long double j1l(long double) throw();
    extern long double __j1l(long double) throw();
    extern long double jnl(int, long double) throw();
    extern long double __jnl(int, long double) throw();
    extern long double y0l(long double) throw();
    extern long double __y0l(long double) throw();
    extern long double y1l(long double) throw();
    extern long double __y1l(long double) throw();
    extern long double ynl(int, long double) throw();
    extern long double __ynl(int, long double) throw();

    extern long double erfl(long double) throw();
    extern long double __erfl(long double) throw();
    extern long double erfcl(long double) throw();
    extern long double __erfcl(long double) throw();
    extern long double lgammal(long double) throw();
    extern long double __lgammal(long double) throw();

    extern long double tgammal(long double) throw();
    extern long double __tgammal(long double) throw();

    extern long double gammal(long double) throw();
    extern long double __gammal(long double) throw();

    extern long double lgammal_r(long double, int* __signgamp) throw();
    extern long double __lgammal_r(long double, int* __signgamp) throw();

    extern long double rintl(long double __x) throw();
    extern long double __rintl(long double __x) throw();

    extern long double nextafterl(long double __x, long double __y) throw();
    extern long double __nextafterl(long double __x, long double __y) throw();

    extern long double nexttowardl(long double __x, long double __y) throw();
    extern long double __nexttowardl(long double __x, long double __y) throw();

    extern long double nextdownl(long double __x) throw();
    extern long double __nextdownl(long double __x) throw();

    extern long double nextupl(long double __x) throw();
    extern long double __nextupl(long double __x) throw();

    extern long double remainderl(long double __x, long double __y) throw();
    extern long double __remainderl(long double __x, long double __y) throw();

    extern long double scalbnl(long double __x, int __n) throw();
    extern long double __scalbnl(long double __x, int __n) throw();

    extern int ilogbl(long double __x) throw();
    extern int __ilogbl(long double __x) throw();

    extern long int llogbl(long double __x) throw();
    extern long int __llogbl(long double __x) throw();

    extern long double scalblnl(long double __x, long int __n) throw();
    extern long double __scalblnl(long double __x, long int __n) throw();

    extern long double nearbyintl(long double __x) throw();
    extern long double __nearbyintl(long double __x) throw();

    extern long double roundl(long double __x) throw() __attribute__((__const__));
    extern long double __roundl(long double __x) throw() __attribute__((__const__));

    extern long double truncl(long double __x) throw() __attribute__((__const__));
    extern long double __truncl(long double __x) throw() __attribute__((__const__));

    extern long double remquol(long double __x, long double __y, int* __quo) throw();
    extern long double __remquol(long double __x, long double __y, int* __quo) throw();

    extern long int lrintl(long double __x) throw();
    extern long int __lrintl(long double __x) throw();
    __extension__ extern long long int llrintl(long double __x) throw();
    extern long long int __llrintl(long double __x) throw();

    extern long int lroundl(long double __x) throw();
    extern long int __lroundl(long double __x) throw();
    __extension__ extern long long int llroundl(long double __x) throw();
    extern long long int __llroundl(long double __x) throw();

    extern long double fdiml(long double __x, long double __y) throw();
    extern long double __fdiml(long double __x, long double __y) throw();

    extern long double fmaxl(long double __x, long double __y) throw() __attribute__((__const__));
    extern long double __fmaxl(long double __x, long double __y) throw() __attribute__((__const__));

    extern long double fminl(long double __x, long double __y) throw() __attribute__((__const__));
    extern long double __fminl(long double __x, long double __y) throw() __attribute__((__const__));

    extern long double fmal(long double __x, long double __y, long double __z) throw();
    extern long double __fmal(long double __x, long double __y, long double __z) throw();

    extern long double roundevenl(long double __x) throw() __attribute__((__const__));
    extern long double __roundevenl(long double __x) throw() __attribute__((__const__));

    extern __intmax_t fromfpl(long double __x, int __round, unsigned int __width) throw();
    extern __intmax_t __fromfpl(long double __x, int __round, unsigned int __width) throw();

    extern __uintmax_t ufromfpl(long double __x, int __round, unsigned int __width) throw();
    extern __uintmax_t __ufromfpl(long double __x, int __round, unsigned int __width) throw();

    extern __intmax_t fromfpxl(long double __x, int __round, unsigned int __width) throw();
    extern __intmax_t __fromfpxl(long double __x, int __round, unsigned int __width) throw();

    extern __uintmax_t ufromfpxl(long double __x, int __round, unsigned int __width) throw();
    extern __uintmax_t __ufromfpxl(long double __x, int __round, unsigned int __width) throw();

    extern long double fmaxmagl(long double __x, long double __y) throw() __attribute__((__const__));
    extern long double __fmaxmagl(long double __x, long double __y) throw() __attribute__((__const__));

    extern long double fminmagl(long double __x, long double __y) throw() __attribute__((__const__));
    extern long double __fminmagl(long double __x, long double __y) throw() __attribute__((__const__));

    extern int canonicalizel(long double* __cx, const long double* __x) throw();

    extern int totalorderl(const long double* __x, const long double* __y) throw()

        __attribute__((__pure__));

    extern int totalordermagl(const long double* __x, const long double* __y) throw()

        __attribute__((__pure__));

    extern long double getpayloadl(const long double* __x) throw();
    extern long double __getpayloadl(const long double* __x) throw();

    extern int setpayloadl(long double* __x, long double __payload) throw();

    extern int setpayloadsigl(long double* __x, long double __payload) throw();

    extern long double scalbl(long double __x, long double __n) throw();
    extern long double __scalbl(long double __x, long double __n) throw();
    extern _Float32 acosf32(_Float32 __x) throw();
    extern _Float32 __acosf32(_Float32 __x) throw();

    extern _Float32 asinf32(_Float32 __x) throw();
    extern _Float32 __asinf32(_Float32 __x) throw();

    extern _Float32 atanf32(_Float32 __x) throw();
    extern _Float32 __atanf32(_Float32 __x) throw();

    extern _Float32 atan2f32(_Float32 __y, _Float32 __x) throw();
    extern _Float32 __atan2f32(_Float32 __y, _Float32 __x) throw();

    extern _Float32 cosf32(_Float32 __x) throw();
    extern _Float32 __cosf32(_Float32 __x) throw();

    extern _Float32 sinf32(_Float32 __x) throw();
    extern _Float32 __sinf32(_Float32 __x) throw();

    extern _Float32 tanf32(_Float32 __x) throw();
    extern _Float32 __tanf32(_Float32 __x) throw();

    extern _Float32 coshf32(_Float32 __x) throw();
    extern _Float32 __coshf32(_Float32 __x) throw();

    extern _Float32 sinhf32(_Float32 __x) throw();
    extern _Float32 __sinhf32(_Float32 __x) throw();

    extern _Float32 tanhf32(_Float32 __x) throw();
    extern _Float32 __tanhf32(_Float32 __x) throw();

    extern void sincosf32(_Float32 __x, _Float32* __sinx, _Float32* __cosx) throw();
    extern void __sincosf32(_Float32 __x, _Float32* __sinx, _Float32* __cosx) throw();

    extern _Float32 acoshf32(_Float32 __x) throw();
    extern _Float32 __acoshf32(_Float32 __x) throw();

    extern _Float32 asinhf32(_Float32 __x) throw();
    extern _Float32 __asinhf32(_Float32 __x) throw();

    extern _Float32 atanhf32(_Float32 __x) throw();
    extern _Float32 __atanhf32(_Float32 __x) throw();

    extern _Float32 expf32(_Float32 __x) throw();
    extern _Float32 __expf32(_Float32 __x) throw();

    extern _Float32 frexpf32(_Float32 __x, int* __exponent) throw();
    extern _Float32 __frexpf32(_Float32 __x, int* __exponent) throw();

    extern _Float32 ldexpf32(_Float32 __x, int __exponent) throw();
    extern _Float32 __ldexpf32(_Float32 __x, int __exponent) throw();

    extern _Float32 logf32(_Float32 __x) throw();
    extern _Float32 __logf32(_Float32 __x) throw();

    extern _Float32 log10f32(_Float32 __x) throw();
    extern _Float32 __log10f32(_Float32 __x) throw();

    extern _Float32 modff32(_Float32 __x, _Float32* __iptr) throw();
    extern _Float32 __modff32(_Float32 __x, _Float32* __iptr) throw() __attribute__((__nonnull__(2)));

    extern _Float32 exp10f32(_Float32 __x) throw();
    extern _Float32 __exp10f32(_Float32 __x) throw();

    extern _Float32 expm1f32(_Float32 __x) throw();
    extern _Float32 __expm1f32(_Float32 __x) throw();

    extern _Float32 log1pf32(_Float32 __x) throw();
    extern _Float32 __log1pf32(_Float32 __x) throw();

    extern _Float32 logbf32(_Float32 __x) throw();
    extern _Float32 __logbf32(_Float32 __x) throw();

    extern _Float32 exp2f32(_Float32 __x) throw();
    extern _Float32 __exp2f32(_Float32 __x) throw();

    extern _Float32 log2f32(_Float32 __x) throw();
    extern _Float32 __log2f32(_Float32 __x) throw();

    extern _Float32 powf32(_Float32 __x, _Float32 __y) throw();
    extern _Float32 __powf32(_Float32 __x, _Float32 __y) throw();

    extern _Float32 sqrtf32(_Float32 __x) throw();
    extern _Float32 __sqrtf32(_Float32 __x) throw();

    extern _Float32 hypotf32(_Float32 __x, _Float32 __y) throw();
    extern _Float32 __hypotf32(_Float32 __x, _Float32 __y) throw();

    extern _Float32 cbrtf32(_Float32 __x) throw();
    extern _Float32 __cbrtf32(_Float32 __x) throw();

    extern _Float32 ceilf32(_Float32 __x) throw() __attribute__((__const__));
    extern _Float32 __ceilf32(_Float32 __x) throw() __attribute__((__const__));

    extern _Float32 fabsf32(_Float32 __x) throw() __attribute__((__const__));
    extern _Float32 __fabsf32(_Float32 __x) throw() __attribute__((__const__));

    extern _Float32 floorf32(_Float32 __x) throw() __attribute__((__const__));
    extern _Float32 __floorf32(_Float32 __x) throw() __attribute__((__const__));

    extern _Float32 fmodf32(_Float32 __x, _Float32 __y) throw();
    extern _Float32 __fmodf32(_Float32 __x, _Float32 __y) throw();
    extern _Float32 copysignf32(_Float32 __x, _Float32 __y) throw() __attribute__((__const__));
    extern _Float32 __copysignf32(_Float32 __x, _Float32 __y) throw() __attribute__((__const__));

    extern _Float32 nanf32(const char* __tagb) throw();
    extern _Float32 __nanf32(const char* __tagb) throw();
    extern _Float32 j0f32(_Float32) throw();
    extern _Float32 __j0f32(_Float32) throw();
    extern _Float32 j1f32(_Float32) throw();
    extern _Float32 __j1f32(_Float32) throw();
    extern _Float32 jnf32(int, _Float32) throw();
    extern _Float32 __jnf32(int, _Float32) throw();
    extern _Float32 y0f32(_Float32) throw();
    extern _Float32 __y0f32(_Float32) throw();
    extern _Float32 y1f32(_Float32) throw();
    extern _Float32 __y1f32(_Float32) throw();
    extern _Float32 ynf32(int, _Float32) throw();
    extern _Float32 __ynf32(int, _Float32) throw();

    extern _Float32 erff32(_Float32) throw();
    extern _Float32 __erff32(_Float32) throw();
    extern _Float32 erfcf32(_Float32) throw();
    extern _Float32 __erfcf32(_Float32) throw();
    extern _Float32 lgammaf32(_Float32) throw();
    extern _Float32 __lgammaf32(_Float32) throw();

    extern _Float32 tgammaf32(_Float32) throw();
    extern _Float32 __tgammaf32(_Float32) throw();
    extern _Float32 lgammaf32_r(_Float32, int* __signgamp) throw();
    extern _Float32 __lgammaf32_r(_Float32, int* __signgamp) throw();

    extern _Float32 rintf32(_Float32 __x) throw();
    extern _Float32 __rintf32(_Float32 __x) throw();

    extern _Float32 nextafterf32(_Float32 __x, _Float32 __y) throw();
    extern _Float32 __nextafterf32(_Float32 __x, _Float32 __y) throw();

    extern _Float32 nextdownf32(_Float32 __x) throw();
    extern _Float32 __nextdownf32(_Float32 __x) throw();

    extern _Float32 nextupf32(_Float32 __x) throw();
    extern _Float32 __nextupf32(_Float32 __x) throw();

    extern _Float32 remainderf32(_Float32 __x, _Float32 __y) throw();
    extern _Float32 __remainderf32(_Float32 __x, _Float32 __y) throw();

    extern _Float32 scalbnf32(_Float32 __x, int __n) throw();
    extern _Float32 __scalbnf32(_Float32 __x, int __n) throw();

    extern int ilogbf32(_Float32 __x) throw();
    extern int __ilogbf32(_Float32 __x) throw();

    extern long int llogbf32(_Float32 __x) throw();
    extern long int __llogbf32(_Float32 __x) throw();

    extern _Float32 scalblnf32(_Float32 __x, long int __n) throw();
    extern _Float32 __scalblnf32(_Float32 __x, long int __n) throw();

    extern _Float32 nearbyintf32(_Float32 __x) throw();
    extern _Float32 __nearbyintf32(_Float32 __x) throw();

    extern _Float32 roundf32(_Float32 __x) throw() __attribute__((__const__));
    extern _Float32 __roundf32(_Float32 __x) throw() __attribute__((__const__));

    extern _Float32 truncf32(_Float32 __x) throw() __attribute__((__const__));
    extern _Float32 __truncf32(_Float32 __x) throw() __attribute__((__const__));

    extern _Float32 remquof32(_Float32 __x, _Float32 __y, int* __quo) throw();
    extern _Float32 __remquof32(_Float32 __x, _Float32 __y, int* __quo) throw();

    extern long int lrintf32(_Float32 __x) throw();
    extern long int __lrintf32(_Float32 __x) throw();
    __extension__ extern long long int llrintf32(_Float32 __x) throw();
    extern long long int __llrintf32(_Float32 __x) throw();

    extern long int lroundf32(_Float32 __x) throw();
    extern long int __lroundf32(_Float32 __x) throw();
    __extension__ extern long long int llroundf32(_Float32 __x) throw();
    extern long long int __llroundf32(_Float32 __x) throw();

    extern _Float32 fdimf32(_Float32 __x, _Float32 __y) throw();
    extern _Float32 __fdimf32(_Float32 __x, _Float32 __y) throw();

    extern _Float32 fmaxf32(_Float32 __x, _Float32 __y) throw() __attribute__((__const__));
    extern _Float32 __fmaxf32(_Float32 __x, _Float32 __y) throw() __attribute__((__const__));

    extern _Float32 fminf32(_Float32 __x, _Float32 __y) throw() __attribute__((__const__));
    extern _Float32 __fminf32(_Float32 __x, _Float32 __y) throw() __attribute__((__const__));

    extern _Float32 fmaf32(_Float32 __x, _Float32 __y, _Float32 __z) throw();
    extern _Float32 __fmaf32(_Float32 __x, _Float32 __y, _Float32 __z) throw();

    extern _Float32 roundevenf32(_Float32 __x) throw() __attribute__((__const__));
    extern _Float32 __roundevenf32(_Float32 __x) throw() __attribute__((__const__));

    extern __intmax_t fromfpf32(_Float32 __x, int __round, unsigned int __width) throw();
    extern __intmax_t __fromfpf32(_Float32 __x, int __round, unsigned int __width) throw();

    extern __uintmax_t ufromfpf32(_Float32 __x, int __round, unsigned int __width) throw();
    extern __uintmax_t __ufromfpf32(_Float32 __x, int __round, unsigned int __width) throw();

    extern __intmax_t fromfpxf32(_Float32 __x, int __round, unsigned int __width) throw();
    extern __intmax_t __fromfpxf32(_Float32 __x, int __round, unsigned int __width) throw();

    extern __uintmax_t ufromfpxf32(_Float32 __x, int __round, unsigned int __width) throw();
    extern __uintmax_t __ufromfpxf32(_Float32 __x, int __round, unsigned int __width) throw();

    extern _Float32 fmaxmagf32(_Float32 __x, _Float32 __y) throw() __attribute__((__const__));
    extern _Float32 __fmaxmagf32(_Float32 __x, _Float32 __y) throw() __attribute__((__const__));

    extern _Float32 fminmagf32(_Float32 __x, _Float32 __y) throw() __attribute__((__const__));
    extern _Float32 __fminmagf32(_Float32 __x, _Float32 __y) throw() __attribute__((__const__));

    extern int canonicalizef32(_Float32* __cx, const _Float32* __x) throw();

    extern int totalorderf32(const _Float32* __x, const _Float32* __y) throw()

        __attribute__((__pure__));

    extern int totalordermagf32(const _Float32* __x, const _Float32* __y) throw()

        __attribute__((__pure__));

    extern _Float32 getpayloadf32(const _Float32* __x) throw();
    extern _Float32 __getpayloadf32(const _Float32* __x) throw();

    extern int setpayloadf32(_Float32* __x, _Float32 __payload) throw();

    extern int setpayloadsigf32(_Float32* __x, _Float32 __payload) throw();
    extern _Float64 acosf64(_Float64 __x) throw();
    extern _Float64 __acosf64(_Float64 __x) throw();

    extern _Float64 asinf64(_Float64 __x) throw();
    extern _Float64 __asinf64(_Float64 __x) throw();

    extern _Float64 atanf64(_Float64 __x) throw();
    extern _Float64 __atanf64(_Float64 __x) throw();

    extern _Float64 atan2f64(_Float64 __y, _Float64 __x) throw();
    extern _Float64 __atan2f64(_Float64 __y, _Float64 __x) throw();

    extern _Float64 cosf64(_Float64 __x) throw();
    extern _Float64 __cosf64(_Float64 __x) throw();

    extern _Float64 sinf64(_Float64 __x) throw();
    extern _Float64 __sinf64(_Float64 __x) throw();

    extern _Float64 tanf64(_Float64 __x) throw();
    extern _Float64 __tanf64(_Float64 __x) throw();

    extern _Float64 coshf64(_Float64 __x) throw();
    extern _Float64 __coshf64(_Float64 __x) throw();

    extern _Float64 sinhf64(_Float64 __x) throw();
    extern _Float64 __sinhf64(_Float64 __x) throw();

    extern _Float64 tanhf64(_Float64 __x) throw();
    extern _Float64 __tanhf64(_Float64 __x) throw();

    extern void sincosf64(_Float64 __x, _Float64* __sinx, _Float64* __cosx) throw();
    extern void __sincosf64(_Float64 __x, _Float64* __sinx, _Float64* __cosx) throw();

    extern _Float64 acoshf64(_Float64 __x) throw();
    extern _Float64 __acoshf64(_Float64 __x) throw();

    extern _Float64 asinhf64(_Float64 __x) throw();
    extern _Float64 __asinhf64(_Float64 __x) throw();

    extern _Float64 atanhf64(_Float64 __x) throw();
    extern _Float64 __atanhf64(_Float64 __x) throw();

    extern _Float64 expf64(_Float64 __x) throw();
    extern _Float64 __expf64(_Float64 __x) throw();

    extern _Float64 frexpf64(_Float64 __x, int* __exponent) throw();
    extern _Float64 __frexpf64(_Float64 __x, int* __exponent) throw();

    extern _Float64 ldexpf64(_Float64 __x, int __exponent) throw();
    extern _Float64 __ldexpf64(_Float64 __x, int __exponent) throw();

    extern _Float64 logf64(_Float64 __x) throw();
    extern _Float64 __logf64(_Float64 __x) throw();

    extern _Float64 log10f64(_Float64 __x) throw();
    extern _Float64 __log10f64(_Float64 __x) throw();

    extern _Float64 modff64(_Float64 __x, _Float64* __iptr) throw();
    extern _Float64 __modff64(_Float64 __x, _Float64* __iptr) throw() __attribute__((__nonnull__(2)));

    extern _Float64 exp10f64(_Float64 __x) throw();
    extern _Float64 __exp10f64(_Float64 __x) throw();

    extern _Float64 expm1f64(_Float64 __x) throw();
    extern _Float64 __expm1f64(_Float64 __x) throw();

    extern _Float64 log1pf64(_Float64 __x) throw();
    extern _Float64 __log1pf64(_Float64 __x) throw();

    extern _Float64 logbf64(_Float64 __x) throw();
    extern _Float64 __logbf64(_Float64 __x) throw();

    extern _Float64 exp2f64(_Float64 __x) throw();
    extern _Float64 __exp2f64(_Float64 __x) throw();

    extern _Float64 log2f64(_Float64 __x) throw();
    extern _Float64 __log2f64(_Float64 __x) throw();

    extern _Float64 powf64(_Float64 __x, _Float64 __y) throw();
    extern _Float64 __powf64(_Float64 __x, _Float64 __y) throw();

    extern _Float64 sqrtf64(_Float64 __x) throw();
    extern _Float64 __sqrtf64(_Float64 __x) throw();

    extern _Float64 hypotf64(_Float64 __x, _Float64 __y) throw();
    extern _Float64 __hypotf64(_Float64 __x, _Float64 __y) throw();

    extern _Float64 cbrtf64(_Float64 __x) throw();
    extern _Float64 __cbrtf64(_Float64 __x) throw();

    extern _Float64 ceilf64(_Float64 __x) throw() __attribute__((__const__));
    extern _Float64 __ceilf64(_Float64 __x) throw() __attribute__((__const__));

    extern _Float64 fabsf64(_Float64 __x) throw() __attribute__((__const__));
    extern _Float64 __fabsf64(_Float64 __x) throw() __attribute__((__const__));

    extern _Float64 floorf64(_Float64 __x) throw() __attribute__((__const__));
    extern _Float64 __floorf64(_Float64 __x) throw() __attribute__((__const__));

    extern _Float64 fmodf64(_Float64 __x, _Float64 __y) throw();
    extern _Float64 __fmodf64(_Float64 __x, _Float64 __y) throw();
    extern _Float64 copysignf64(_Float64 __x, _Float64 __y) throw() __attribute__((__const__));
    extern _Float64 __copysignf64(_Float64 __x, _Float64 __y) throw() __attribute__((__const__));

    extern _Float64 nanf64(const char* __tagb) throw();
    extern _Float64 __nanf64(const char* __tagb) throw();
    extern _Float64 j0f64(_Float64) throw();
    extern _Float64 __j0f64(_Float64) throw();
    extern _Float64 j1f64(_Float64) throw();
    extern _Float64 __j1f64(_Float64) throw();
    extern _Float64 jnf64(int, _Float64) throw();
    extern _Float64 __jnf64(int, _Float64) throw();
    extern _Float64 y0f64(_Float64) throw();
    extern _Float64 __y0f64(_Float64) throw();
    extern _Float64 y1f64(_Float64) throw();
    extern _Float64 __y1f64(_Float64) throw();
    extern _Float64 ynf64(int, _Float64) throw();
    extern _Float64 __ynf64(int, _Float64) throw();

    extern _Float64 erff64(_Float64) throw();
    extern _Float64 __erff64(_Float64) throw();
    extern _Float64 erfcf64(_Float64) throw();
    extern _Float64 __erfcf64(_Float64) throw();
    extern _Float64 lgammaf64(_Float64) throw();
    extern _Float64 __lgammaf64(_Float64) throw();

    extern _Float64 tgammaf64(_Float64) throw();
    extern _Float64 __tgammaf64(_Float64) throw();
    extern _Float64 lgammaf64_r(_Float64, int* __signgamp) throw();
    extern _Float64 __lgammaf64_r(_Float64, int* __signgamp) throw();

    extern _Float64 rintf64(_Float64 __x) throw();
    extern _Float64 __rintf64(_Float64 __x) throw();

    extern _Float64 nextafterf64(_Float64 __x, _Float64 __y) throw();
    extern _Float64 __nextafterf64(_Float64 __x, _Float64 __y) throw();

    extern _Float64 nextdownf64(_Float64 __x) throw();
    extern _Float64 __nextdownf64(_Float64 __x) throw();

    extern _Float64 nextupf64(_Float64 __x) throw();
    extern _Float64 __nextupf64(_Float64 __x) throw();

    extern _Float64 remainderf64(_Float64 __x, _Float64 __y) throw();
    extern _Float64 __remainderf64(_Float64 __x, _Float64 __y) throw();

    extern _Float64 scalbnf64(_Float64 __x, int __n) throw();
    extern _Float64 __scalbnf64(_Float64 __x, int __n) throw();

    extern int ilogbf64(_Float64 __x) throw();
    extern int __ilogbf64(_Float64 __x) throw();

    extern long int llogbf64(_Float64 __x) throw();
    extern long int __llogbf64(_Float64 __x) throw();

    extern _Float64 scalblnf64(_Float64 __x, long int __n) throw();
    extern _Float64 __scalblnf64(_Float64 __x, long int __n) throw();

    extern _Float64 nearbyintf64(_Float64 __x) throw();
    extern _Float64 __nearbyintf64(_Float64 __x) throw();

    extern _Float64 roundf64(_Float64 __x) throw() __attribute__((__const__));
    extern _Float64 __roundf64(_Float64 __x) throw() __attribute__((__const__));

    extern _Float64 truncf64(_Float64 __x) throw() __attribute__((__const__));
    extern _Float64 __truncf64(_Float64 __x) throw() __attribute__((__const__));

    extern _Float64 remquof64(_Float64 __x, _Float64 __y, int* __quo) throw();
    extern _Float64 __remquof64(_Float64 __x, _Float64 __y, int* __quo) throw();

    extern long int lrintf64(_Float64 __x) throw();
    extern long int __lrintf64(_Float64 __x) throw();
    __extension__ extern long long int llrintf64(_Float64 __x) throw();
    extern long long int __llrintf64(_Float64 __x) throw();

    extern long int lroundf64(_Float64 __x) throw();
    extern long int __lroundf64(_Float64 __x) throw();
    __extension__ extern long long int llroundf64(_Float64 __x) throw();
    extern long long int __llroundf64(_Float64 __x) throw();

    extern _Float64 fdimf64(_Float64 __x, _Float64 __y) throw();
    extern _Float64 __fdimf64(_Float64 __x, _Float64 __y) throw();

    extern _Float64 fmaxf64(_Float64 __x, _Float64 __y) throw() __attribute__((__const__));
    extern _Float64 __fmaxf64(_Float64 __x, _Float64 __y) throw() __attribute__((__const__));

    extern _Float64 fminf64(_Float64 __x, _Float64 __y) throw() __attribute__((__const__));
    extern _Float64 __fminf64(_Float64 __x, _Float64 __y) throw() __attribute__((__const__));

    extern _Float64 fmaf64(_Float64 __x, _Float64 __y, _Float64 __z) throw();
    extern _Float64 __fmaf64(_Float64 __x, _Float64 __y, _Float64 __z) throw();

    extern _Float64 roundevenf64(_Float64 __x) throw() __attribute__((__const__));
    extern _Float64 __roundevenf64(_Float64 __x) throw() __attribute__((__const__));

    extern __intmax_t fromfpf64(_Float64 __x, int __round, unsigned int __width) throw();
    extern __intmax_t __fromfpf64(_Float64 __x, int __round, unsigned int __width) throw();

    extern __uintmax_t ufromfpf64(_Float64 __x, int __round, unsigned int __width) throw();
    extern __uintmax_t __ufromfpf64(_Float64 __x, int __round, unsigned int __width) throw();

    extern __intmax_t fromfpxf64(_Float64 __x, int __round, unsigned int __width) throw();
    extern __intmax_t __fromfpxf64(_Float64 __x, int __round, unsigned int __width) throw();

    extern __uintmax_t ufromfpxf64(_Float64 __x, int __round, unsigned int __width) throw();
    extern __uintmax_t __ufromfpxf64(_Float64 __x, int __round, unsigned int __width) throw();

    extern _Float64 fmaxmagf64(_Float64 __x, _Float64 __y) throw() __attribute__((__const__));
    extern _Float64 __fmaxmagf64(_Float64 __x, _Float64 __y) throw() __attribute__((__const__));

    extern _Float64 fminmagf64(_Float64 __x, _Float64 __y) throw() __attribute__((__const__));
    extern _Float64 __fminmagf64(_Float64 __x, _Float64 __y) throw() __attribute__((__const__));

    extern int canonicalizef64(_Float64* __cx, const _Float64* __x) throw();

    extern int totalorderf64(const _Float64* __x, const _Float64* __y) throw()

        __attribute__((__pure__));

    extern int totalordermagf64(const _Float64* __x, const _Float64* __y) throw()

        __attribute__((__pure__));

    extern _Float64 getpayloadf64(const _Float64* __x) throw();
    extern _Float64 __getpayloadf64(const _Float64* __x) throw();

    extern int setpayloadf64(_Float64* __x, _Float64 __payload) throw();

    extern int setpayloadsigf64(_Float64* __x, _Float64 __payload) throw();
    extern _Float32x acosf32x(_Float32x __x) throw();
    extern _Float32x __acosf32x(_Float32x __x) throw();

    extern _Float32x asinf32x(_Float32x __x) throw();
    extern _Float32x __asinf32x(_Float32x __x) throw();

    extern _Float32x atanf32x(_Float32x __x) throw();
    extern _Float32x __atanf32x(_Float32x __x) throw();

    extern _Float32x atan2f32x(_Float32x __y, _Float32x __x) throw();
    extern _Float32x __atan2f32x(_Float32x __y, _Float32x __x) throw();

    extern _Float32x cosf32x(_Float32x __x) throw();
    extern _Float32x __cosf32x(_Float32x __x) throw();

    extern _Float32x sinf32x(_Float32x __x) throw();
    extern _Float32x __sinf32x(_Float32x __x) throw();

    extern _Float32x tanf32x(_Float32x __x) throw();
    extern _Float32x __tanf32x(_Float32x __x) throw();

    extern _Float32x coshf32x(_Float32x __x) throw();
    extern _Float32x __coshf32x(_Float32x __x) throw();

    extern _Float32x sinhf32x(_Float32x __x) throw();
    extern _Float32x __sinhf32x(_Float32x __x) throw();

    extern _Float32x tanhf32x(_Float32x __x) throw();
    extern _Float32x __tanhf32x(_Float32x __x) throw();

    extern void sincosf32x(_Float32x __x, _Float32x* __sinx, _Float32x* __cosx) throw();
    extern void __sincosf32x(_Float32x __x, _Float32x* __sinx, _Float32x* __cosx) throw();

    extern _Float32x acoshf32x(_Float32x __x) throw();
    extern _Float32x __acoshf32x(_Float32x __x) throw();

    extern _Float32x asinhf32x(_Float32x __x) throw();
    extern _Float32x __asinhf32x(_Float32x __x) throw();

    extern _Float32x atanhf32x(_Float32x __x) throw();
    extern _Float32x __atanhf32x(_Float32x __x) throw();

    extern _Float32x expf32x(_Float32x __x) throw();
    extern _Float32x __expf32x(_Float32x __x) throw();

    extern _Float32x frexpf32x(_Float32x __x, int* __exponent) throw();
    extern _Float32x __frexpf32x(_Float32x __x, int* __exponent) throw();

    extern _Float32x ldexpf32x(_Float32x __x, int __exponent) throw();
    extern _Float32x __ldexpf32x(_Float32x __x, int __exponent) throw();

    extern _Float32x logf32x(_Float32x __x) throw();
    extern _Float32x __logf32x(_Float32x __x) throw();

    extern _Float32x log10f32x(_Float32x __x) throw();
    extern _Float32x __log10f32x(_Float32x __x) throw();

    extern _Float32x modff32x(_Float32x __x, _Float32x* __iptr) throw();
    extern _Float32x __modff32x(_Float32x __x, _Float32x* __iptr) throw() __attribute__((__nonnull__(2)));

    extern _Float32x exp10f32x(_Float32x __x) throw();
    extern _Float32x __exp10f32x(_Float32x __x) throw();

    extern _Float32x expm1f32x(_Float32x __x) throw();
    extern _Float32x __expm1f32x(_Float32x __x) throw();

    extern _Float32x log1pf32x(_Float32x __x) throw();
    extern _Float32x __log1pf32x(_Float32x __x) throw();

    extern _Float32x logbf32x(_Float32x __x) throw();
    extern _Float32x __logbf32x(_Float32x __x) throw();

    extern _Float32x exp2f32x(_Float32x __x) throw();
    extern _Float32x __exp2f32x(_Float32x __x) throw();

    extern _Float32x log2f32x(_Float32x __x) throw();
    extern _Float32x __log2f32x(_Float32x __x) throw();

    extern _Float32x powf32x(_Float32x __x, _Float32x __y) throw();
    extern _Float32x __powf32x(_Float32x __x, _Float32x __y) throw();

    extern _Float32x sqrtf32x(_Float32x __x) throw();
    extern _Float32x __sqrtf32x(_Float32x __x) throw();

    extern _Float32x hypotf32x(_Float32x __x, _Float32x __y) throw();
    extern _Float32x __hypotf32x(_Float32x __x, _Float32x __y) throw();

    extern _Float32x cbrtf32x(_Float32x __x) throw();
    extern _Float32x __cbrtf32x(_Float32x __x) throw();

    extern _Float32x ceilf32x(_Float32x __x) throw() __attribute__((__const__));
    extern _Float32x __ceilf32x(_Float32x __x) throw() __attribute__((__const__));

    extern _Float32x fabsf32x(_Float32x __x) throw() __attribute__((__const__));
    extern _Float32x __fabsf32x(_Float32x __x) throw() __attribute__((__const__));

    extern _Float32x floorf32x(_Float32x __x) throw() __attribute__((__const__));
    extern _Float32x __floorf32x(_Float32x __x) throw() __attribute__((__const__));

    extern _Float32x fmodf32x(_Float32x __x, _Float32x __y) throw();
    extern _Float32x __fmodf32x(_Float32x __x, _Float32x __y) throw();
    extern _Float32x copysignf32x(_Float32x __x, _Float32x __y) throw() __attribute__((__const__));
    extern _Float32x __copysignf32x(_Float32x __x, _Float32x __y) throw() __attribute__((__const__));

    extern _Float32x nanf32x(const char* __tagb) throw();
    extern _Float32x __nanf32x(const char* __tagb) throw();
    extern _Float32x j0f32x(_Float32x) throw();
    extern _Float32x __j0f32x(_Float32x) throw();
    extern _Float32x j1f32x(_Float32x) throw();
    extern _Float32x __j1f32x(_Float32x) throw();
    extern _Float32x jnf32x(int, _Float32x) throw();
    extern _Float32x __jnf32x(int, _Float32x) throw();
    extern _Float32x y0f32x(_Float32x) throw();
    extern _Float32x __y0f32x(_Float32x) throw();
    extern _Float32x y1f32x(_Float32x) throw();
    extern _Float32x __y1f32x(_Float32x) throw();
    extern _Float32x ynf32x(int, _Float32x) throw();
    extern _Float32x __ynf32x(int, _Float32x) throw();

    extern _Float32x erff32x(_Float32x) throw();
    extern _Float32x __erff32x(_Float32x) throw();
    extern _Float32x erfcf32x(_Float32x) throw();
    extern _Float32x __erfcf32x(_Float32x) throw();
    extern _Float32x lgammaf32x(_Float32x) throw();
    extern _Float32x __lgammaf32x(_Float32x) throw();

    extern _Float32x tgammaf32x(_Float32x) throw();
    extern _Float32x __tgammaf32x(_Float32x) throw();
    extern _Float32x lgammaf32x_r(_Float32x, int* __signgamp) throw();
    extern _Float32x __lgammaf32x_r(_Float32x, int* __signgamp) throw();

    extern _Float32x rintf32x(_Float32x __x) throw();
    extern _Float32x __rintf32x(_Float32x __x) throw();

    extern _Float32x nextafterf32x(_Float32x __x, _Float32x __y) throw();
    extern _Float32x __nextafterf32x(_Float32x __x, _Float32x __y) throw();

    extern _Float32x nextdownf32x(_Float32x __x) throw();
    extern _Float32x __nextdownf32x(_Float32x __x) throw();

    extern _Float32x nextupf32x(_Float32x __x) throw();
    extern _Float32x __nextupf32x(_Float32x __x) throw();

    extern _Float32x remainderf32x(_Float32x __x, _Float32x __y) throw();
    extern _Float32x __remainderf32x(_Float32x __x, _Float32x __y) throw();

    extern _Float32x scalbnf32x(_Float32x __x, int __n) throw();
    extern _Float32x __scalbnf32x(_Float32x __x, int __n) throw();

    extern int ilogbf32x(_Float32x __x) throw();
    extern int __ilogbf32x(_Float32x __x) throw();

    extern long int llogbf32x(_Float32x __x) throw();
    extern long int __llogbf32x(_Float32x __x) throw();

    extern _Float32x scalblnf32x(_Float32x __x, long int __n) throw();
    extern _Float32x __scalblnf32x(_Float32x __x, long int __n) throw();

    extern _Float32x nearbyintf32x(_Float32x __x) throw();
    extern _Float32x __nearbyintf32x(_Float32x __x) throw();

    extern _Float32x roundf32x(_Float32x __x) throw() __attribute__((__const__));
    extern _Float32x __roundf32x(_Float32x __x) throw() __attribute__((__const__));

    extern _Float32x truncf32x(_Float32x __x) throw() __attribute__((__const__));
    extern _Float32x __truncf32x(_Float32x __x) throw() __attribute__((__const__));

    extern _Float32x remquof32x(_Float32x __x, _Float32x __y, int* __quo) throw();
    extern _Float32x __remquof32x(_Float32x __x, _Float32x __y, int* __quo) throw();

    extern long int lrintf32x(_Float32x __x) throw();
    extern long int __lrintf32x(_Float32x __x) throw();
    __extension__ extern long long int llrintf32x(_Float32x __x) throw();
    extern long long int __llrintf32x(_Float32x __x) throw();

    extern long int lroundf32x(_Float32x __x) throw();
    extern long int __lroundf32x(_Float32x __x) throw();
    __extension__ extern long long int llroundf32x(_Float32x __x) throw();
    extern long long int __llroundf32x(_Float32x __x) throw();

    extern _Float32x fdimf32x(_Float32x __x, _Float32x __y) throw();
    extern _Float32x __fdimf32x(_Float32x __x, _Float32x __y) throw();

    extern _Float32x fmaxf32x(_Float32x __x, _Float32x __y) throw() __attribute__((__const__));
    extern _Float32x __fmaxf32x(_Float32x __x, _Float32x __y) throw() __attribute__((__const__));

    extern _Float32x fminf32x(_Float32x __x, _Float32x __y) throw() __attribute__((__const__));
    extern _Float32x __fminf32x(_Float32x __x, _Float32x __y) throw() __attribute__((__const__));

    extern _Float32x fmaf32x(_Float32x __x, _Float32x __y, _Float32x __z) throw();
    extern _Float32x __fmaf32x(_Float32x __x, _Float32x __y, _Float32x __z) throw();

    extern _Float32x roundevenf32x(_Float32x __x) throw() __attribute__((__const__));
    extern _Float32x __roundevenf32x(_Float32x __x) throw() __attribute__((__const__));

    extern __intmax_t fromfpf32x(_Float32x __x, int __round, unsigned int __width) throw();
    extern __intmax_t __fromfpf32x(_Float32x __x, int __round, unsigned int __width) throw();

    extern __uintmax_t ufromfpf32x(_Float32x __x, int __round, unsigned int __width) throw();
    extern __uintmax_t __ufromfpf32x(_Float32x __x, int __round, unsigned int __width) throw();

    extern __intmax_t fromfpxf32x(_Float32x __x, int __round, unsigned int __width) throw();
    extern __intmax_t __fromfpxf32x(_Float32x __x, int __round, unsigned int __width) throw();

    extern __uintmax_t ufromfpxf32x(_Float32x __x, int __round, unsigned int __width) throw();
    extern __uintmax_t __ufromfpxf32x(_Float32x __x, int __round, unsigned int __width) throw();

    extern _Float32x fmaxmagf32x(_Float32x __x, _Float32x __y) throw() __attribute__((__const__));
    extern _Float32x __fmaxmagf32x(_Float32x __x, _Float32x __y) throw() __attribute__((__const__));

    extern _Float32x fminmagf32x(_Float32x __x, _Float32x __y) throw() __attribute__((__const__));
    extern _Float32x __fminmagf32x(_Float32x __x, _Float32x __y) throw() __attribute__((__const__));

    extern int canonicalizef32x(_Float32x* __cx, const _Float32x* __x) throw();

    extern int totalorderf32x(const _Float32x* __x, const _Float32x* __y) throw()

        __attribute__((__pure__));

    extern int totalordermagf32x(const _Float32x* __x, const _Float32x* __y) throw()

        __attribute__((__pure__));

    extern _Float32x getpayloadf32x(const _Float32x* __x) throw();
    extern _Float32x __getpayloadf32x(const _Float32x* __x) throw();

    extern int setpayloadf32x(_Float32x* __x, _Float32x __payload) throw();

    extern int setpayloadsigf32x(_Float32x* __x, _Float32x __payload) throw();
    extern _Float64x acosf64x(_Float64x __x) throw();
    extern _Float64x __acosf64x(_Float64x __x) throw();

    extern _Float64x asinf64x(_Float64x __x) throw();
    extern _Float64x __asinf64x(_Float64x __x) throw();

    extern _Float64x atanf64x(_Float64x __x) throw();
    extern _Float64x __atanf64x(_Float64x __x) throw();

    extern _Float64x atan2f64x(_Float64x __y, _Float64x __x) throw();
    extern _Float64x __atan2f64x(_Float64x __y, _Float64x __x) throw();

    extern _Float64x cosf64x(_Float64x __x) throw();
    extern _Float64x __cosf64x(_Float64x __x) throw();

    extern _Float64x sinf64x(_Float64x __x) throw();
    extern _Float64x __sinf64x(_Float64x __x) throw();

    extern _Float64x tanf64x(_Float64x __x) throw();
    extern _Float64x __tanf64x(_Float64x __x) throw();

    extern _Float64x coshf64x(_Float64x __x) throw();
    extern _Float64x __coshf64x(_Float64x __x) throw();

    extern _Float64x sinhf64x(_Float64x __x) throw();
    extern _Float64x __sinhf64x(_Float64x __x) throw();

    extern _Float64x tanhf64x(_Float64x __x) throw();
    extern _Float64x __tanhf64x(_Float64x __x) throw();

    extern void sincosf64x(_Float64x __x, _Float64x* __sinx, _Float64x* __cosx) throw();
    extern void __sincosf64x(_Float64x __x, _Float64x* __sinx, _Float64x* __cosx) throw();

    extern _Float64x acoshf64x(_Float64x __x) throw();
    extern _Float64x __acoshf64x(_Float64x __x) throw();

    extern _Float64x asinhf64x(_Float64x __x) throw();
    extern _Float64x __asinhf64x(_Float64x __x) throw();

    extern _Float64x atanhf64x(_Float64x __x) throw();
    extern _Float64x __atanhf64x(_Float64x __x) throw();

    extern _Float64x expf64x(_Float64x __x) throw();
    extern _Float64x __expf64x(_Float64x __x) throw();

    extern _Float64x frexpf64x(_Float64x __x, int* __exponent) throw();
    extern _Float64x __frexpf64x(_Float64x __x, int* __exponent) throw();

    extern _Float64x ldexpf64x(_Float64x __x, int __exponent) throw();
    extern _Float64x __ldexpf64x(_Float64x __x, int __exponent) throw();

    extern _Float64x logf64x(_Float64x __x) throw();
    extern _Float64x __logf64x(_Float64x __x) throw();

    extern _Float64x log10f64x(_Float64x __x) throw();
    extern _Float64x __log10f64x(_Float64x __x) throw();

    extern _Float64x modff64x(_Float64x __x, _Float64x* __iptr) throw();
    extern _Float64x __modff64x(_Float64x __x, _Float64x* __iptr) throw() __attribute__((__nonnull__(2)));

    extern _Float64x exp10f64x(_Float64x __x) throw();
    extern _Float64x __exp10f64x(_Float64x __x) throw();

    extern _Float64x expm1f64x(_Float64x __x) throw();
    extern _Float64x __expm1f64x(_Float64x __x) throw();

    extern _Float64x log1pf64x(_Float64x __x) throw();
    extern _Float64x __log1pf64x(_Float64x __x) throw();

    extern _Float64x logbf64x(_Float64x __x) throw();
    extern _Float64x __logbf64x(_Float64x __x) throw();

    extern _Float64x exp2f64x(_Float64x __x) throw();
    extern _Float64x __exp2f64x(_Float64x __x) throw();

    extern _Float64x log2f64x(_Float64x __x) throw();
    extern _Float64x __log2f64x(_Float64x __x) throw();

    extern _Float64x powf64x(_Float64x __x, _Float64x __y) throw();
    extern _Float64x __powf64x(_Float64x __x, _Float64x __y) throw();

    extern _Float64x sqrtf64x(_Float64x __x) throw();
    extern _Float64x __sqrtf64x(_Float64x __x) throw();

    extern _Float64x hypotf64x(_Float64x __x, _Float64x __y) throw();
    extern _Float64x __hypotf64x(_Float64x __x, _Float64x __y) throw();

    extern _Float64x cbrtf64x(_Float64x __x) throw();
    extern _Float64x __cbrtf64x(_Float64x __x) throw();

    extern _Float64x ceilf64x(_Float64x __x) throw() __attribute__((__const__));
    extern _Float64x __ceilf64x(_Float64x __x) throw() __attribute__((__const__));

    extern _Float64x fabsf64x(_Float64x __x) throw() __attribute__((__const__));
    extern _Float64x __fabsf64x(_Float64x __x) throw() __attribute__((__const__));

    extern _Float64x floorf64x(_Float64x __x) throw() __attribute__((__const__));
    extern _Float64x __floorf64x(_Float64x __x) throw() __attribute__((__const__));

    extern _Float64x fmodf64x(_Float64x __x, _Float64x __y) throw();
    extern _Float64x __fmodf64x(_Float64x __x, _Float64x __y) throw();
    extern _Float64x copysignf64x(_Float64x __x, _Float64x __y) throw() __attribute__((__const__));
    extern _Float64x __copysignf64x(_Float64x __x, _Float64x __y) throw() __attribute__((__const__));

    extern _Float64x nanf64x(const char* __tagb) throw();
    extern _Float64x __nanf64x(const char* __tagb) throw();
    extern _Float64x j0f64x(_Float64x) throw();
    extern _Float64x __j0f64x(_Float64x) throw();
    extern _Float64x j1f64x(_Float64x) throw();
    extern _Float64x __j1f64x(_Float64x) throw();
    extern _Float64x jnf64x(int, _Float64x) throw();
    extern _Float64x __jnf64x(int, _Float64x) throw();
    extern _Float64x y0f64x(_Float64x) throw();
    extern _Float64x __y0f64x(_Float64x) throw();
    extern _Float64x y1f64x(_Float64x) throw();
    extern _Float64x __y1f64x(_Float64x) throw();
    extern _Float64x ynf64x(int, _Float64x) throw();
    extern _Float64x __ynf64x(int, _Float64x) throw();

    extern _Float64x erff64x(_Float64x) throw();
    extern _Float64x __erff64x(_Float64x) throw();
    extern _Float64x erfcf64x(_Float64x) throw();
    extern _Float64x __erfcf64x(_Float64x) throw();
    extern _Float64x lgammaf64x(_Float64x) throw();
    extern _Float64x __lgammaf64x(_Float64x) throw();

    extern _Float64x tgammaf64x(_Float64x) throw();
    extern _Float64x __tgammaf64x(_Float64x) throw();
    extern _Float64x lgammaf64x_r(_Float64x, int* __signgamp) throw();
    extern _Float64x __lgammaf64x_r(_Float64x, int* __signgamp) throw();

    extern _Float64x rintf64x(_Float64x __x) throw();
    extern _Float64x __rintf64x(_Float64x __x) throw();

    extern _Float64x nextafterf64x(_Float64x __x, _Float64x __y) throw();
    extern _Float64x __nextafterf64x(_Float64x __x, _Float64x __y) throw();

    extern _Float64x nextdownf64x(_Float64x __x) throw();
    extern _Float64x __nextdownf64x(_Float64x __x) throw();

    extern _Float64x nextupf64x(_Float64x __x) throw();
    extern _Float64x __nextupf64x(_Float64x __x) throw();

    extern _Float64x remainderf64x(_Float64x __x, _Float64x __y) throw();
    extern _Float64x __remainderf64x(_Float64x __x, _Float64x __y) throw();

    extern _Float64x scalbnf64x(_Float64x __x, int __n) throw();
    extern _Float64x __scalbnf64x(_Float64x __x, int __n) throw();

    extern int ilogbf64x(_Float64x __x) throw();
    extern int __ilogbf64x(_Float64x __x) throw();

    extern long int llogbf64x(_Float64x __x) throw();
    extern long int __llogbf64x(_Float64x __x) throw();

    extern _Float64x scalblnf64x(_Float64x __x, long int __n) throw();
    extern _Float64x __scalblnf64x(_Float64x __x, long int __n) throw();

    extern _Float64x nearbyintf64x(_Float64x __x) throw();
    extern _Float64x __nearbyintf64x(_Float64x __x) throw();

    extern _Float64x roundf64x(_Float64x __x) throw() __attribute__((__const__));
    extern _Float64x __roundf64x(_Float64x __x) throw() __attribute__((__const__));

    extern _Float64x truncf64x(_Float64x __x) throw() __attribute__((__const__));
    extern _Float64x __truncf64x(_Float64x __x) throw() __attribute__((__const__));

    extern _Float64x remquof64x(_Float64x __x, _Float64x __y, int* __quo) throw();
    extern _Float64x __remquof64x(_Float64x __x, _Float64x __y, int* __quo) throw();

    extern long int lrintf64x(_Float64x __x) throw();
    extern long int __lrintf64x(_Float64x __x) throw();
    __extension__ extern long long int llrintf64x(_Float64x __x) throw();
    extern long long int __llrintf64x(_Float64x __x) throw();

    extern long int lroundf64x(_Float64x __x) throw();
    extern long int __lroundf64x(_Float64x __x) throw();
    __extension__ extern long long int llroundf64x(_Float64x __x) throw();
    extern long long int __llroundf64x(_Float64x __x) throw();

    extern _Float64x fdimf64x(_Float64x __x, _Float64x __y) throw();
    extern _Float64x __fdimf64x(_Float64x __x, _Float64x __y) throw();

    extern _Float64x fmaxf64x(_Float64x __x, _Float64x __y) throw() __attribute__((__const__));
    extern _Float64x __fmaxf64x(_Float64x __x, _Float64x __y) throw() __attribute__((__const__));

    extern _Float64x fminf64x(_Float64x __x, _Float64x __y) throw() __attribute__((__const__));
    extern _Float64x __fminf64x(_Float64x __x, _Float64x __y) throw() __attribute__((__const__));

    extern _Float64x fmaf64x(_Float64x __x, _Float64x __y, _Float64x __z) throw();
    extern _Float64x __fmaf64x(_Float64x __x, _Float64x __y, _Float64x __z) throw();

    extern _Float64x roundevenf64x(_Float64x __x) throw() __attribute__((__const__));
    extern _Float64x __roundevenf64x(_Float64x __x) throw() __attribute__((__const__));

    extern __intmax_t fromfpf64x(_Float64x __x, int __round, unsigned int __width) throw();
    extern __intmax_t __fromfpf64x(_Float64x __x, int __round, unsigned int __width) throw();

    extern __uintmax_t ufromfpf64x(_Float64x __x, int __round, unsigned int __width) throw();
    extern __uintmax_t __ufromfpf64x(_Float64x __x, int __round, unsigned int __width) throw();

    extern __intmax_t fromfpxf64x(_Float64x __x, int __round, unsigned int __width) throw();
    extern __intmax_t __fromfpxf64x(_Float64x __x, int __round, unsigned int __width) throw();

    extern __uintmax_t ufromfpxf64x(_Float64x __x, int __round, unsigned int __width) throw();
    extern __uintmax_t __ufromfpxf64x(_Float64x __x, int __round, unsigned int __width) throw();

    extern _Float64x fmaxmagf64x(_Float64x __x, _Float64x __y) throw() __attribute__((__const__));
    extern _Float64x __fmaxmagf64x(_Float64x __x, _Float64x __y) throw() __attribute__((__const__));

    extern _Float64x fminmagf64x(_Float64x __x, _Float64x __y) throw() __attribute__((__const__));
    extern _Float64x __fminmagf64x(_Float64x __x, _Float64x __y) throw() __attribute__((__const__));

    extern int canonicalizef64x(_Float64x* __cx, const _Float64x* __x) throw();

    extern int totalorderf64x(const _Float64x* __x, const _Float64x* __y) throw()

        __attribute__((__pure__));

    extern int totalordermagf64x(const _Float64x* __x, const _Float64x* __y) throw()

        __attribute__((__pure__));

    extern _Float64x getpayloadf64x(const _Float64x* __x) throw();
    extern _Float64x __getpayloadf64x(const _Float64x* __x) throw();

    extern int setpayloadf64x(_Float64x* __x, _Float64x __payload) throw();

    extern int setpayloadsigf64x(_Float64x* __x, _Float64x __payload) throw();
    extern float fadd(double __x, double __y) throw();

    extern float fdiv(double __x, double __y) throw();

    extern float fmul(double __x, double __y) throw();

    extern float fsub(double __x, double __y) throw();
    extern float faddl(long double __x, long double __y) throw();

    extern float fdivl(long double __x, long double __y) throw();

    extern float fmull(long double __x, long double __y) throw();

    extern float fsubl(long double __x, long double __y) throw();
    extern double daddl(long double __x, long double __y) throw();

    extern double ddivl(long double __x, long double __y) throw();

    extern double dmull(long double __x, long double __y) throw();

    extern double dsubl(long double __x, long double __y) throw();
    extern _Float32 f32addf32x(_Float32x __x, _Float32x __y) throw();

    extern _Float32 f32divf32x(_Float32x __x, _Float32x __y) throw();

    extern _Float32 f32mulf32x(_Float32x __x, _Float32x __y) throw();

    extern _Float32 f32subf32x(_Float32x __x, _Float32x __y) throw();
    extern _Float32 f32addf64(_Float64 __x, _Float64 __y) throw();

    extern _Float32 f32divf64(_Float64 __x, _Float64 __y) throw();

    extern _Float32 f32mulf64(_Float64 __x, _Float64 __y) throw();

    extern _Float32 f32subf64(_Float64 __x, _Float64 __y) throw();
    extern _Float32 f32addf64x(_Float64x __x, _Float64x __y) throw();

    extern _Float32 f32divf64x(_Float64x __x, _Float64x __y) throw();

    extern _Float32 f32mulf64x(_Float64x __x, _Float64x __y) throw();

    extern _Float32 f32subf64x(_Float64x __x, _Float64x __y) throw();
    extern _Float32x f32xaddf64(_Float64 __x, _Float64 __y) throw();

    extern _Float32x f32xdivf64(_Float64 __x, _Float64 __y) throw();

    extern _Float32x f32xmulf64(_Float64 __x, _Float64 __y) throw();

    extern _Float32x f32xsubf64(_Float64 __x, _Float64 __y) throw();
    extern _Float32x f32xaddf64x(_Float64x __x, _Float64x __y) throw();

    extern _Float32x f32xdivf64x(_Float64x __x, _Float64x __y) throw();

    extern _Float32x f32xmulf64x(_Float64x __x, _Float64x __y) throw();

    extern _Float32x f32xsubf64x(_Float64x __x, _Float64x __y) throw();
    extern _Float64 f64addf64x(_Float64x __x, _Float64x __y) throw();

    extern _Float64 f64divf64x(_Float64x __x, _Float64x __y) throw();

    extern _Float64 f64mulf64x(_Float64x __x, _Float64x __y) throw();

    extern _Float64 f64subf64x(_Float64x __x, _Float64x __y) throw();
    extern int signgam;
    enum
    {
        FP_NAN =

            0,
        FP_INFINITE =

            1,
        FP_ZERO =

            2,
        FP_SUBNORMAL =

            3,
        FP_NORMAL =

            4
    };
    extern int __iscanonicall(long double __x) throw() __attribute__((__const__));
    extern "C++"
    {
        inline int iscanonical(float __val)
        {
            return ((void)(__typeof(__val))(__val), 1);
        }
        inline int iscanonical(double __val)
        {
            return ((void)(__typeof(__val))(__val), 1);
        }
        inline int iscanonical(long double __val)
        {
            return __iscanonicall(__val);
        }
    }
    extern "C++"
    {
        inline int issignaling(float __val)
        {
            return __issignalingf(__val);
        }
        inline int issignaling(double __val)
        {
            return __issignaling(__val);
        }
        inline int issignaling(long double __val)
        {

            return __issignalingl(__val);
        }
    }
    extern "C++"
    {
        template <class __T> inline bool iszero(__T __val)
        {
            return __val == 0;
        }
    }
    extern "C++"
    {
        template <typename> struct __iseqsig_type;

        template <> struct __iseqsig_type<float>
        {
            static int __call(float __x, float __y) throw()
            {
                return __iseqsigf(__x, __y);
            }
        };

        template <> struct __iseqsig_type<double>
        {
            static int __call(double __x, double __y) throw()
            {
                return __iseqsig(__x, __y);
            }
        };

        template <> struct __iseqsig_type<long double>
        {
            static int __call(long double __x, long double __y) throw()
            {

                return __iseqsigl(__x, __y);
            }
        };
        template <typename _T1, typename _T2> inline int iseqsig(_T1 __x, _T2 __y) throw()
        {

            typedef decltype(((__x) + (__y) + 0.0f)) _T3;

            return __iseqsig_type<_T3>::__call(__x, __y);
        }
    }
}
extern "C++"
{
    namespace std __attribute__((__visibility__("default")))
    {

        using ::acos;

        inline constexpr float acos(float __x)
        {
            return __builtin_acosf(__x);
        }

        inline constexpr long double acos(long double __x)
        {
            return __builtin_acosl(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type acos(_Tp __x)
        {
            return __builtin_acos(__x);
        }

        using ::asin;

        inline constexpr float asin(float __x)
        {
            return __builtin_asinf(__x);
        }

        inline constexpr long double asin(long double __x)
        {
            return __builtin_asinl(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type asin(_Tp __x)
        {
            return __builtin_asin(__x);
        }

        using ::atan;

        inline constexpr float atan(float __x)
        {
            return __builtin_atanf(__x);
        }

        inline constexpr long double atan(long double __x)
        {
            return __builtin_atanl(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type atan(_Tp __x)
        {
            return __builtin_atan(__x);
        }

        using ::atan2;

        inline constexpr float atan2(float __y, float __x)
        {
            return __builtin_atan2f(__y, __x);
        }

        inline constexpr long double atan2(long double __y, long double __x)
        {
            return __builtin_atan2l(__y, __x);
        }

        template <typename _Tp, typename _Up> inline constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type atan2(_Tp __y, _Up __x)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return atan2(__type(__y), __type(__x));
        }

        using ::ceil;

        inline constexpr float ceil(float __x)
        {
            return __builtin_ceilf(__x);
        }

        inline constexpr long double ceil(long double __x)
        {
            return __builtin_ceill(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type ceil(_Tp __x)
        {
            return __builtin_ceil(__x);
        }

        using ::cos;

        inline constexpr float cos(float __x)
        {
            return __builtin_cosf(__x);
        }

        inline constexpr long double cos(long double __x)
        {
            return __builtin_cosl(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type cos(_Tp __x)
        {
            return __builtin_cos(__x);
        }

        using ::cosh;

        inline constexpr float cosh(float __x)
        {
            return __builtin_coshf(__x);
        }

        inline constexpr long double cosh(long double __x)
        {
            return __builtin_coshl(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type cosh(_Tp __x)
        {
            return __builtin_cosh(__x);
        }

        using ::exp;

        inline constexpr float exp(float __x)
        {
            return __builtin_expf(__x);
        }

        inline constexpr long double exp(long double __x)
        {
            return __builtin_expl(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type exp(_Tp __x)
        {
            return __builtin_exp(__x);
        }

        using ::fabs;

        inline constexpr float fabs(float __x)
        {
            return __builtin_fabsf(__x);
        }

        inline constexpr long double fabs(long double __x)
        {
            return __builtin_fabsl(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type fabs(_Tp __x)
        {
            return __builtin_fabs(__x);
        }

        using ::floor;

        inline constexpr float floor(float __x)
        {
            return __builtin_floorf(__x);
        }

        inline constexpr long double floor(long double __x)
        {
            return __builtin_floorl(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type floor(_Tp __x)
        {
            return __builtin_floor(__x);
        }

        using ::fmod;

        inline constexpr float fmod(float __x, float __y)
        {
            return __builtin_fmodf(__x, __y);
        }

        inline constexpr long double fmod(long double __x, long double __y)
        {
            return __builtin_fmodl(__x, __y);
        }

        template <typename _Tp, typename _Up> inline constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type fmod(_Tp __x, _Up __y)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return fmod(__type(__x), __type(__y));
        }

        using ::frexp;

        inline float frexp(float __x, int* __exp)
        {
            return __builtin_frexpf(__x, __exp);
        }

        inline long double frexp(long double __x, int* __exp)
        {
            return __builtin_frexpl(__x, __exp);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type frexp(_Tp __x, int* __exp)
        {
            return __builtin_frexp(__x, __exp);
        }

        using ::ldexp;

        inline constexpr float ldexp(float __x, int __exp)
        {
            return __builtin_ldexpf(__x, __exp);
        }

        inline constexpr long double ldexp(long double __x, int __exp)
        {
            return __builtin_ldexpl(__x, __exp);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type ldexp(_Tp __x, int __exp)
        {
            return __builtin_ldexp(__x, __exp);
        }

        using ::log;

        inline constexpr float log(float __x)
        {
            return __builtin_logf(__x);
        }

        inline constexpr long double log(long double __x)
        {
            return __builtin_logl(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type log(_Tp __x)
        {
            return __builtin_log(__x);
        }

        using ::log10;

        inline constexpr float log10(float __x)
        {
            return __builtin_log10f(__x);
        }

        inline constexpr long double log10(long double __x)
        {
            return __builtin_log10l(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type log10(_Tp __x)
        {
            return __builtin_log10(__x);
        }

        using ::modf;

        inline float modf(float __x, float* __iptr)
        {
            return __builtin_modff(__x, __iptr);
        }

        inline long double modf(long double __x, long double* __iptr)
        {
            return __builtin_modfl(__x, __iptr);
        }

        using ::pow;

        inline constexpr float pow(float __x, float __y)
        {
            return __builtin_powf(__x, __y);
        }

        inline constexpr long double pow(long double __x, long double __y)
        {
            return __builtin_powl(__x, __y);
        }
        template <typename _Tp, typename _Up> inline constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type pow(_Tp __x, _Up __y)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return pow(__type(__x), __type(__y));
        }

        using ::sin;

        inline constexpr float sin(float __x)
        {
            return __builtin_sinf(__x);
        }

        inline constexpr long double sin(long double __x)
        {
            return __builtin_sinl(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type sin(_Tp __x)
        {
            return __builtin_sin(__x);
        }

        using ::sinh;

        inline constexpr float sinh(float __x)
        {
            return __builtin_sinhf(__x);
        }

        inline constexpr long double sinh(long double __x)
        {
            return __builtin_sinhl(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type sinh(_Tp __x)
        {
            return __builtin_sinh(__x);
        }

        using ::sqrt;

        inline constexpr float sqrt(float __x)
        {
            return __builtin_sqrtf(__x);
        }

        inline constexpr long double sqrt(long double __x)
        {
            return __builtin_sqrtl(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type sqrt(_Tp __x)
        {
            return __builtin_sqrt(__x);
        }

        using ::tan;

        inline constexpr float tan(float __x)
        {
            return __builtin_tanf(__x);
        }

        inline constexpr long double tan(long double __x)
        {
            return __builtin_tanl(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type tan(_Tp __x)
        {
            return __builtin_tan(__x);
        }

        using ::tanh;

        inline constexpr float tanh(float __x)
        {
            return __builtin_tanhf(__x);
        }

        inline constexpr long double tanh(long double __x)
        {
            return __builtin_tanhl(__x);
        }

        template <typename _Tp> inline constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type tanh(_Tp __x)
        {
            return __builtin_tanh(__x);
        }
        constexpr int fpclassify(float __x)
        {
            return __builtin_fpclassify(0, 1, 4, 3, 2, __x);
        }

        constexpr int fpclassify(double __x)
        {
            return __builtin_fpclassify(0, 1, 4, 3, 2, __x);
        }

        constexpr int fpclassify(long double __x)
        {
            return __builtin_fpclassify(0, 1, 4, 3, 2, __x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, int>::__type fpclassify(_Tp __x)
        {
            return __x != 0 ? 4 : 2;
        }

        constexpr bool isfinite(float __x)
        {
            return __builtin_isfinite(__x);
        }

        constexpr bool isfinite(double __x)
        {
            return __builtin_isfinite(__x);
        }

        constexpr bool isfinite(long double __x)
        {
            return __builtin_isfinite(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, bool>::__type isfinite(_Tp __x)
        {
            return true;
        }

        constexpr bool isinf(float __x)
        {
            return __builtin_isinf(__x);
        }

        constexpr bool isinf(double __x)
        {
            return __builtin_isinf(__x);
        }

        constexpr bool isinf(long double __x)
        {
            return __builtin_isinf(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, bool>::__type isinf(_Tp __x)
        {
            return false;
        }

        constexpr bool isnan(float __x)
        {
            return __builtin_isnan(__x);
        }

        constexpr bool isnan(double __x)
        {
            return __builtin_isnan(__x);
        }

        constexpr bool isnan(long double __x)
        {
            return __builtin_isnan(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, bool>::__type isnan(_Tp __x)
        {
            return false;
        }

        constexpr bool isnormal(float __x)
        {
            return __builtin_isnormal(__x);
        }

        constexpr bool isnormal(double __x)
        {
            return __builtin_isnormal(__x);
        }

        constexpr bool isnormal(long double __x)
        {
            return __builtin_isnormal(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, bool>::__type isnormal(_Tp __x)
        {
            return __x != 0 ? true : false;
        }

        constexpr bool signbit(float __x)
        {
            return __builtin_signbit(__x);
        }

        constexpr bool signbit(double __x)
        {
            return __builtin_signbit(__x);
        }

        constexpr bool signbit(long double __x)
        {
            return __builtin_signbit(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, bool>::__type signbit(_Tp __x)
        {
            return __x < 0 ? true : false;
        }

        constexpr bool isgreater(float __x, float __y)
        {
            return __builtin_isgreater(__x, __y);
        }

        constexpr bool isgreater(double __x, double __y)
        {
            return __builtin_isgreater(__x, __y);
        }

        constexpr bool isgreater(long double __x, long double __y)
        {
            return __builtin_isgreater(__x, __y);
        }

        template <typename _Tp, typename _Up> constexpr typename __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value && __is_arithmetic<_Up>::__value), bool>::__type isgreater(_Tp __x, _Up __y)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return __builtin_isgreater(__type(__x), __type(__y));
        }

        constexpr bool isgreaterequal(float __x, float __y)
        {
            return __builtin_isgreaterequal(__x, __y);
        }

        constexpr bool isgreaterequal(double __x, double __y)
        {
            return __builtin_isgreaterequal(__x, __y);
        }

        constexpr bool isgreaterequal(long double __x, long double __y)
        {
            return __builtin_isgreaterequal(__x, __y);
        }

        template <typename _Tp, typename _Up> constexpr typename __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value && __is_arithmetic<_Up>::__value), bool>::__type isgreaterequal(_Tp __x, _Up __y)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return __builtin_isgreaterequal(__type(__x), __type(__y));
        }

        constexpr bool isless(float __x, float __y)
        {
            return __builtin_isless(__x, __y);
        }

        constexpr bool isless(double __x, double __y)
        {
            return __builtin_isless(__x, __y);
        }

        constexpr bool isless(long double __x, long double __y)
        {
            return __builtin_isless(__x, __y);
        }

        template <typename _Tp, typename _Up> constexpr typename __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value && __is_arithmetic<_Up>::__value), bool>::__type isless(_Tp __x, _Up __y)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return __builtin_isless(__type(__x), __type(__y));
        }

        constexpr bool islessequal(float __x, float __y)
        {
            return __builtin_islessequal(__x, __y);
        }

        constexpr bool islessequal(double __x, double __y)
        {
            return __builtin_islessequal(__x, __y);
        }

        constexpr bool islessequal(long double __x, long double __y)
        {
            return __builtin_islessequal(__x, __y);
        }

        template <typename _Tp, typename _Up> constexpr typename __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value && __is_arithmetic<_Up>::__value), bool>::__type islessequal(_Tp __x, _Up __y)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return __builtin_islessequal(__type(__x), __type(__y));
        }

        constexpr bool islessgreater(float __x, float __y)
        {
            return __builtin_islessgreater(__x, __y);
        }

        constexpr bool islessgreater(double __x, double __y)
        {
            return __builtin_islessgreater(__x, __y);
        }

        constexpr bool islessgreater(long double __x, long double __y)
        {
            return __builtin_islessgreater(__x, __y);
        }

        template <typename _Tp, typename _Up> constexpr typename __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value && __is_arithmetic<_Up>::__value), bool>::__type islessgreater(_Tp __x, _Up __y)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return __builtin_islessgreater(__type(__x), __type(__y));
        }

        constexpr bool isunordered(float __x, float __y)
        {
            return __builtin_isunordered(__x, __y);
        }

        constexpr bool isunordered(double __x, double __y)
        {
            return __builtin_isunordered(__x, __y);
        }

        constexpr bool isunordered(long double __x, long double __y)
        {
            return __builtin_isunordered(__x, __y);
        }

        template <typename _Tp, typename _Up> constexpr typename __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value && __is_arithmetic<_Up>::__value), bool>::__type isunordered(_Tp __x, _Up __y)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return __builtin_isunordered(__type(__x), __type(__y));
        }
        using ::double_t;
        using ::float_t;

        using ::acosh;
        using ::acoshf;
        using ::acoshl;

        using ::asinh;
        using ::asinhf;
        using ::asinhl;

        using ::atanh;
        using ::atanhf;
        using ::atanhl;

        using ::cbrt;
        using ::cbrtf;
        using ::cbrtl;

        using ::copysign;
        using ::copysignf;
        using ::copysignl;

        using ::erf;
        using ::erff;
        using ::erfl;

        using ::erfc;
        using ::erfcf;
        using ::erfcl;

        using ::exp2;
        using ::exp2f;
        using ::exp2l;

        using ::expm1;
        using ::expm1f;
        using ::expm1l;

        using ::fdim;
        using ::fdimf;
        using ::fdiml;

        using ::fma;
        using ::fmaf;
        using ::fmal;

        using ::fmax;
        using ::fmaxf;
        using ::fmaxl;

        using ::fmin;
        using ::fminf;
        using ::fminl;

        using ::hypot;
        using ::hypotf;
        using ::hypotl;

        using ::ilogb;
        using ::ilogbf;
        using ::ilogbl;

        using ::lgamma;
        using ::lgammaf;
        using ::lgammal;

        using ::llrint;
        using ::llrintf;
        using ::llrintl;

        using ::llround;
        using ::llroundf;
        using ::llroundl;

        using ::log1p;
        using ::log1pf;
        using ::log1pl;

        using ::log2;
        using ::log2f;
        using ::log2l;

        using ::logb;
        using ::logbf;
        using ::logbl;

        using ::lrint;
        using ::lrintf;
        using ::lrintl;

        using ::lround;
        using ::lroundf;
        using ::lroundl;

        using ::nan;
        using ::nanf;
        using ::nanl;

        using ::nearbyint;
        using ::nearbyintf;
        using ::nearbyintl;

        using ::nextafter;
        using ::nextafterf;
        using ::nextafterl;

        using ::nexttoward;
        using ::nexttowardf;
        using ::nexttowardl;

        using ::remainder;
        using ::remainderf;
        using ::remainderl;

        using ::remquo;
        using ::remquof;
        using ::remquol;

        using ::rint;
        using ::rintf;
        using ::rintl;

        using ::round;
        using ::roundf;
        using ::roundl;

        using ::scalbln;
        using ::scalblnf;
        using ::scalblnl;

        using ::scalbn;
        using ::scalbnf;
        using ::scalbnl;

        using ::tgamma;
        using ::tgammaf;
        using ::tgammal;

        using ::trunc;
        using ::truncf;
        using ::truncl;

        constexpr float acosh(float __x)
        {
            return __builtin_acoshf(__x);
        }

        constexpr long double acosh(long double __x)
        {
            return __builtin_acoshl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type acosh(_Tp __x)
        {
            return __builtin_acosh(__x);
        }

        constexpr float asinh(float __x)
        {
            return __builtin_asinhf(__x);
        }

        constexpr long double asinh(long double __x)
        {
            return __builtin_asinhl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type asinh(_Tp __x)
        {
            return __builtin_asinh(__x);
        }

        constexpr float atanh(float __x)
        {
            return __builtin_atanhf(__x);
        }

        constexpr long double atanh(long double __x)
        {
            return __builtin_atanhl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type atanh(_Tp __x)
        {
            return __builtin_atanh(__x);
        }

        constexpr float cbrt(float __x)
        {
            return __builtin_cbrtf(__x);
        }

        constexpr long double cbrt(long double __x)
        {
            return __builtin_cbrtl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type cbrt(_Tp __x)
        {
            return __builtin_cbrt(__x);
        }

        constexpr float copysign(float __x, float __y)
        {
            return __builtin_copysignf(__x, __y);
        }

        constexpr long double copysign(long double __x, long double __y)
        {
            return __builtin_copysignl(__x, __y);
        }

        template <typename _Tp, typename _Up> constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type copysign(_Tp __x, _Up __y)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return copysign(__type(__x), __type(__y));
        }

        constexpr float erf(float __x)
        {
            return __builtin_erff(__x);
        }

        constexpr long double erf(long double __x)
        {
            return __builtin_erfl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type erf(_Tp __x)
        {
            return __builtin_erf(__x);
        }

        constexpr float erfc(float __x)
        {
            return __builtin_erfcf(__x);
        }

        constexpr long double erfc(long double __x)
        {
            return __builtin_erfcl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type erfc(_Tp __x)
        {
            return __builtin_erfc(__x);
        }

        constexpr float exp2(float __x)
        {
            return __builtin_exp2f(__x);
        }

        constexpr long double exp2(long double __x)
        {
            return __builtin_exp2l(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type exp2(_Tp __x)
        {
            return __builtin_exp2(__x);
        }

        constexpr float expm1(float __x)
        {
            return __builtin_expm1f(__x);
        }

        constexpr long double expm1(long double __x)
        {
            return __builtin_expm1l(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type expm1(_Tp __x)
        {
            return __builtin_expm1(__x);
        }

        constexpr float fdim(float __x, float __y)
        {
            return __builtin_fdimf(__x, __y);
        }

        constexpr long double fdim(long double __x, long double __y)
        {
            return __builtin_fdiml(__x, __y);
        }

        template <typename _Tp, typename _Up> constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type fdim(_Tp __x, _Up __y)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return fdim(__type(__x), __type(__y));
        }

        constexpr float fma(float __x, float __y, float __z)
        {
            return __builtin_fmaf(__x, __y, __z);
        }

        constexpr long double fma(long double __x, long double __y, long double __z)
        {
            return __builtin_fmal(__x, __y, __z);
        }

        template <typename _Tp, typename _Up, typename _Vp> constexpr typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type fma(_Tp __x, _Up __y, _Vp __z)
        {
            typedef typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type __type;
            return fma(__type(__x), __type(__y), __type(__z));
        }

        constexpr float fmax(float __x, float __y)
        {
            return __builtin_fmaxf(__x, __y);
        }

        constexpr long double fmax(long double __x, long double __y)
        {
            return __builtin_fmaxl(__x, __y);
        }

        template <typename _Tp, typename _Up> constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type fmax(_Tp __x, _Up __y)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return fmax(__type(__x), __type(__y));
        }

        constexpr float fmin(float __x, float __y)
        {
            return __builtin_fminf(__x, __y);
        }

        constexpr long double fmin(long double __x, long double __y)
        {
            return __builtin_fminl(__x, __y);
        }

        template <typename _Tp, typename _Up> constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type fmin(_Tp __x, _Up __y)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return fmin(__type(__x), __type(__y));
        }

        constexpr float hypot(float __x, float __y)
        {
            return __builtin_hypotf(__x, __y);
        }

        constexpr long double hypot(long double __x, long double __y)
        {
            return __builtin_hypotl(__x, __y);
        }

        template <typename _Tp, typename _Up> constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type hypot(_Tp __x, _Up __y)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return hypot(__type(__x), __type(__y));
        }

        constexpr int ilogb(float __x)
        {
            return __builtin_ilogbf(__x);
        }

        constexpr int ilogb(long double __x)
        {
            return __builtin_ilogbl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, int>::__type ilogb(_Tp __x)
        {
            return __builtin_ilogb(__x);
        }

        constexpr float lgamma(float __x)
        {
            return __builtin_lgammaf(__x);
        }

        constexpr long double lgamma(long double __x)
        {
            return __builtin_lgammal(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type lgamma(_Tp __x)
        {
            return __builtin_lgamma(__x);
        }

        constexpr long long llrint(float __x)
        {
            return __builtin_llrintf(__x);
        }

        constexpr long long llrint(long double __x)
        {
            return __builtin_llrintl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, long long>::__type llrint(_Tp __x)
        {
            return __builtin_llrint(__x);
        }

        constexpr long long llround(float __x)
        {
            return __builtin_llroundf(__x);
        }

        constexpr long long llround(long double __x)
        {
            return __builtin_llroundl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, long long>::__type llround(_Tp __x)
        {
            return __builtin_llround(__x);
        }

        constexpr float log1p(float __x)
        {
            return __builtin_log1pf(__x);
        }

        constexpr long double log1p(long double __x)
        {
            return __builtin_log1pl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type log1p(_Tp __x)
        {
            return __builtin_log1p(__x);
        }

        constexpr float log2(float __x)
        {
            return __builtin_log2f(__x);
        }

        constexpr long double log2(long double __x)
        {
            return __builtin_log2l(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type log2(_Tp __x)
        {
            return __builtin_log2(__x);
        }

        constexpr float logb(float __x)
        {
            return __builtin_logbf(__x);
        }

        constexpr long double logb(long double __x)
        {
            return __builtin_logbl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type logb(_Tp __x)
        {
            return __builtin_logb(__x);
        }

        constexpr long lrint(float __x)
        {
            return __builtin_lrintf(__x);
        }

        constexpr long lrint(long double __x)
        {
            return __builtin_lrintl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, long>::__type lrint(_Tp __x)
        {
            return __builtin_lrint(__x);
        }

        constexpr long lround(float __x)
        {
            return __builtin_lroundf(__x);
        }

        constexpr long lround(long double __x)
        {
            return __builtin_lroundl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, long>::__type lround(_Tp __x)
        {
            return __builtin_lround(__x);
        }

        constexpr float nearbyint(float __x)
        {
            return __builtin_nearbyintf(__x);
        }

        constexpr long double nearbyint(long double __x)
        {
            return __builtin_nearbyintl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type nearbyint(_Tp __x)
        {
            return __builtin_nearbyint(__x);
        }

        constexpr float nextafter(float __x, float __y)
        {
            return __builtin_nextafterf(__x, __y);
        }

        constexpr long double nextafter(long double __x, long double __y)
        {
            return __builtin_nextafterl(__x, __y);
        }

        template <typename _Tp, typename _Up> constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type nextafter(_Tp __x, _Up __y)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return nextafter(__type(__x), __type(__y));
        }

        constexpr float nexttoward(float __x, long double __y)
        {
            return __builtin_nexttowardf(__x, __y);
        }

        constexpr long double nexttoward(long double __x, long double __y)
        {
            return __builtin_nexttowardl(__x, __y);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type nexttoward(_Tp __x, long double __y)
        {
            return __builtin_nexttoward(__x, __y);
        }

        constexpr float remainder(float __x, float __y)
        {
            return __builtin_remainderf(__x, __y);
        }

        constexpr long double remainder(long double __x, long double __y)
        {
            return __builtin_remainderl(__x, __y);
        }

        template <typename _Tp, typename _Up> constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type remainder(_Tp __x, _Up __y)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return remainder(__type(__x), __type(__y));
        }

        inline float remquo(float __x, float __y, int* __pquo)
        {
            return __builtin_remquof(__x, __y, __pquo);
        }

        inline long double remquo(long double __x, long double __y, int* __pquo)
        {
            return __builtin_remquol(__x, __y, __pquo);
        }

        template <typename _Tp, typename _Up> inline typename __gnu_cxx::__promote_2<_Tp, _Up>::__type remquo(_Tp __x, _Up __y, int* __pquo)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
            return remquo(__type(__x), __type(__y), __pquo);
        }

        constexpr float rint(float __x)
        {
            return __builtin_rintf(__x);
        }

        constexpr long double rint(long double __x)
        {
            return __builtin_rintl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type rint(_Tp __x)
        {
            return __builtin_rint(__x);
        }

        constexpr float round(float __x)
        {
            return __builtin_roundf(__x);
        }

        constexpr long double round(long double __x)
        {
            return __builtin_roundl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type round(_Tp __x)
        {
            return __builtin_round(__x);
        }

        constexpr float scalbln(float __x, long __ex)
        {
            return __builtin_scalblnf(__x, __ex);
        }

        constexpr long double scalbln(long double __x, long __ex)
        {
            return __builtin_scalblnl(__x, __ex);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type scalbln(_Tp __x, long __ex)
        {
            return __builtin_scalbln(__x, __ex);
        }

        constexpr float scalbn(float __x, int __ex)
        {
            return __builtin_scalbnf(__x, __ex);
        }

        constexpr long double scalbn(long double __x, int __ex)
        {
            return __builtin_scalbnl(__x, __ex);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type scalbn(_Tp __x, int __ex)
        {
            return __builtin_scalbn(__x, __ex);
        }

        constexpr float tgamma(float __x)
        {
            return __builtin_tgammaf(__x);
        }

        constexpr long double tgamma(long double __x)
        {
            return __builtin_tgammal(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type tgamma(_Tp __x)
        {
            return __builtin_tgamma(__x);
        }

        constexpr float trunc(float __x)
        {
            return __builtin_truncf(__x);
        }

        constexpr long double trunc(long double __x)
        {
            return __builtin_truncl(__x);
        }

        template <typename _Tp> constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value, double>::__type trunc(_Tp __x)
        {
            return __builtin_trunc(__x);
        }
        template <typename _Tp> inline _Tp __hypot3(_Tp __x, _Tp __y, _Tp __z)
        {
            __x = std::abs(__x);
            __y = std::abs(__y);
            __z = std::abs(__z);
            if (_Tp __a = __x < __y ? __y < __z ? __z : __y : __x < __z ? __z : __x)
                return __a * std::sqrt((__x / __a) * (__x / __a) + (__y / __a) * (__y / __a) + (__z / __a) * (__z / __a));
            else
                return {};
        }

        inline float hypot(float __x, float __y, float __z)
        {
            return std::__hypot3<float>(__x, __y, __z);
        }

        inline double hypot(double __x, double __y, double __z)
        {
            return std::__hypot3<double>(__x, __y, __z);
        }

        inline long double hypot(long double __x, long double __y, long double __z)
        {
            return std::__hypot3<long double>(__x, __y, __z);
        }

        template <typename _Tp, typename _Up, typename _Vp> typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type hypot(_Tp __x, _Up __y, _Vp __z)
        {
            using __type = typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type;
            return std::__hypot3<__type>(__x, __y, __z);
        }

        template <typename _Fp> constexpr _Fp __lerp(_Fp __a, _Fp __b, _Fp __t) noexcept
        {
            if (__a <= 0 && __b >= 0 || __a >= 0 && __b <= 0)
                return __t * __b + (1 - __t) * __a;

            if (__t == 1)
                return __b;

            const _Fp __x = __a + __t * (__b - __a);
            return __t > 1 == __b > __a ? (__b < __x ? __x : __b) : (__b > __x ? __x : __b);
        }

        constexpr float lerp(float __a, float __b, float __t) noexcept
        {
            return std::__lerp(__a, __b, __t);
        }

        constexpr double lerp(double __a, double __b, double __t) noexcept
        {
            return std::__lerp(__a, __b, __t);
        }

        constexpr long double lerp(long double __a, long double __b, long double __t) noexcept
        {
            return std::__lerp(__a, __b, __t);
        }

    } // namespace )

#pragma GCC visibility push(default)

    namespace std __attribute__((__visibility__("default")))
    {

        void __throw_bad_exception(void) __attribute__((__noreturn__));

        void __throw_bad_alloc(void) __attribute__((__noreturn__));

        void __throw_bad_cast(void) __attribute__((__noreturn__));

        void __throw_bad_typeid(void) __attribute__((__noreturn__));

        void __throw_logic_error(const char*) __attribute__((__noreturn__));

        void __throw_domain_error(const char*) __attribute__((__noreturn__));

        void __throw_invalid_argument(const char*) __attribute__((__noreturn__));

        void __throw_length_error(const char*) __attribute__((__noreturn__));

        void __throw_out_of_range(const char*) __attribute__((__noreturn__));

        void __throw_out_of_range_fmt(const char*, ...) __attribute__((__noreturn__)) __attribute__((__format__(__gnu_printf__, 1, 2)));

        void __throw_runtime_error(const char*) __attribute__((__noreturn__));

        void __throw_range_error(const char*) __attribute__((__noreturn__));

        void __throw_overflow_error(const char*) __attribute__((__noreturn__));

        void __throw_underflow_error(const char*) __attribute__((__noreturn__));

        void __throw_ios_failure(const char*) __attribute__((__noreturn__));

        void __throw_ios_failure(const char*, int) __attribute__((__noreturn__));

        void __throw_system_error(int) __attribute__((__noreturn__));

        void __throw_future_error(int) __attribute__((__noreturn__));

        void __throw_bad_function_call() __attribute__((__noreturn__));

    } // namespace )

    namespace __gnu_cxx __attribute__((__visibility__("default")))
    {
        template <typename _Value> struct __numeric_traits_integer
        {

            static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
            static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);

            static const bool __is_signed = ((_Value)(-1) < 0);
            static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
        };

        template <typename _Value> const _Value __numeric_traits_integer<_Value>::__min;

        template <typename _Value> const _Value __numeric_traits_integer<_Value>::__max;

        template <typename _Value> const bool __numeric_traits_integer<_Value>::__is_signed;

        template <typename _Value> const int __numeric_traits_integer<_Value>::__digits;
        template <typename _Value> struct __numeric_traits_floating
        {

            static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 643L / 2136);

            static const bool __is_signed = true;
            static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
            static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
        };

        template <typename _Value> const int __numeric_traits_floating<_Value>::__max_digits10;

        template <typename _Value> const bool __numeric_traits_floating<_Value>::__is_signed;

        template <typename _Value> const int __numeric_traits_floating<_Value>::__digits10;

        template <typename _Value> const int __numeric_traits_floating<_Value>::__max_exponent10;

        template <typename _Value> struct __numeric_traits : public __conditional_type<std::__is_integer<_Value>::__value, __numeric_traits_integer<_Value>, __numeric_traits_floating<_Value>>::__type
        {
        };

    } // namespace )

    namespace std __attribute__((__visibility__("default")))
    {

        template <typename _Tp> inline constexpr _Tp* __addressof(_Tp & __r) noexcept
        {
            return __builtin_addressof(__r);
        }

    } // namespace )

    namespace std __attribute__((__visibility__("default")))
    {
        template <typename _Tp, _Tp __v> struct integral_constant
        {
            static constexpr _Tp value = __v;
            typedef _Tp value_type;
            typedef integral_constant<_Tp, __v> type;
            constexpr operator value_type() const noexcept
            {
                return value;
            }

            constexpr value_type operator()() const noexcept
            {
                return value;
            }
        };

        template <typename _Tp, _Tp __v> constexpr _Tp integral_constant<_Tp, __v>::value;

        typedef integral_constant<bool, true> true_type;

        typedef integral_constant<bool, false> false_type;

        template <bool __v> using __bool_constant = integral_constant<bool, __v>;

        template <bool __v> using bool_constant = integral_constant<bool, __v>;

        template <bool, typename, typename> struct conditional;

        template <typename...> struct __or_;

        template <> struct __or_<> : public false_type
        {
        };

        template <typename _B1> struct __or_<_B1> : public _B1
        {
        };

        template <typename _B1, typename _B2> struct __or_<_B1, _B2> : public conditional<_B1::value, _B1, _B2>::type
        {
        };

        template <typename _B1, typename _B2, typename _B3, typename... _Bn> struct __or_<_B1, _B2, _B3, _Bn...> : public conditional<_B1::value, _B1, __or_<_B2, _B3, _Bn...>>::type
        {
        };

        template <typename...> struct __and_;

        template <> struct __and_<> : public true_type
        {
        };

        template <typename _B1> struct __and_<_B1> : public _B1
        {
        };

        template <typename _B1, typename _B2> struct __and_<_B1, _B2> : public conditional<_B1::value, _B2, _B1>::type
        {
        };

        template <typename _B1, typename _B2, typename _B3, typename... _Bn> struct __and_<_B1, _B2, _B3, _Bn...> : public conditional<_B1::value, __and_<_B2, _B3, _Bn...>, _B1>::type
        {
        };

        template <typename _Pp> struct __not_ : public __bool_constant<!bool(_Pp::value)>
        {
        };

        template <typename... _Bn> inline constexpr bool __or_v = __or_<_Bn...>::value;
        template <typename... _Bn> inline constexpr bool __and_v = __and_<_Bn...>::value;

        template <typename... _Bn> struct conjunction : __and_<_Bn...>
        {
        };

        template <typename... _Bn> struct disjunction : __or_<_Bn...>
        {
        };

        template <typename _Pp> struct negation : __not_<_Pp>
        {
        };

        template <typename... _Bn> inline constexpr bool conjunction_v = conjunction<_Bn...>::value;

        template <typename... _Bn> inline constexpr bool disjunction_v = disjunction<_Bn...>::value;

        template <typename _Pp> inline constexpr bool negation_v = negation<_Pp>::value;
        template <typename _Tp> struct __success_type
        {
            typedef _Tp type;
        };

        struct __failure_type
        {
        };

        template <typename> struct remove_cv;

        template <typename> struct __is_void_helper : public false_type
        {
        };

        template <> struct __is_void_helper<void> : public true_type
        {
        };

        template <typename _Tp> struct is_void : public __is_void_helper<typename remove_cv<_Tp>::type>::type
        {
        };

        template <typename> struct __is_integral_helper : public false_type
        {
        };

        template <> struct __is_integral_helper<bool> : public true_type
        {
        };

        template <> struct __is_integral_helper<char> : public true_type
        {
        };

        template <> struct __is_integral_helper<signed char> : public true_type
        {
        };

        template <> struct __is_integral_helper<unsigned char> : public true_type
        {
        };

        template <> struct __is_integral_helper<wchar_t> : public true_type
        {
        };

        template <> struct __is_integral_helper<char8_t> : public true_type
        {
        };

        template <> struct __is_integral_helper<char16_t> : public true_type
        {
        };

        template <> struct __is_integral_helper<char32_t> : public true_type
        {
        };

        template <> struct __is_integral_helper<short> : public true_type
        {
        };

        template <> struct __is_integral_helper<unsigned short> : public true_type
        {
        };

        template <> struct __is_integral_helper<int> : public true_type
        {
        };

        template <> struct __is_integral_helper<unsigned int> : public true_type
        {
        };

        template <> struct __is_integral_helper<long> : public true_type
        {
        };

        template <> struct __is_integral_helper<unsigned long> : public true_type
        {
        };

        template <> struct __is_integral_helper<long long> : public true_type
        {
        };

        template <> struct __is_integral_helper<unsigned long long> : public true_type
        {
        };

        template <> struct __is_integral_helper<__int128> : public true_type
        {
        };

        template <> struct __is_integral_helper<unsigned __int128> : public true_type
        {
        };
        template <typename _Tp> struct is_integral : public __is_integral_helper<typename remove_cv<_Tp>::type>::type
        {
        };

        template <typename> struct __is_floating_point_helper : public false_type
        {
        };

        template <> struct __is_floating_point_helper<float> : public true_type
        {
        };

        template <> struct __is_floating_point_helper<double> : public true_type
        {
        };

        template <> struct __is_floating_point_helper<long double> : public true_type
        {
        };

        template <> struct __is_floating_point_helper<__float128> : public true_type
        {
        };

        template <typename _Tp> struct is_floating_point : public __is_floating_point_helper<typename remove_cv<_Tp>::type>::type
        {
        };

        template <typename> struct is_array : public false_type
        {
        };

        template <typename _Tp, std::size_t _Size> struct is_array<_Tp[_Size]> : public true_type
        {
        };

        template <typename _Tp> struct is_array<_Tp[]> : public true_type
        {
        };

        template <typename> struct __is_pointer_helper : public false_type
        {
        };

        template <typename _Tp> struct __is_pointer_helper<_Tp*> : public true_type
        {
        };

        template <typename _Tp> struct is_pointer : public __is_pointer_helper<typename remove_cv<_Tp>::type>::type
        {
        };

        template <typename> struct is_lvalue_reference : public false_type
        {
        };

        template <typename _Tp> struct is_lvalue_reference<_Tp&> : public true_type
        {
        };

        template <typename> struct is_rvalue_reference : public false_type
        {
        };

        template <typename _Tp> struct is_rvalue_reference<_Tp&&> : public true_type
        {
        };

        template <typename> struct is_function;

        template <typename> struct __is_member_object_pointer_helper : public false_type
        {
        };

        template <typename _Tp, typename _Cp> struct __is_member_object_pointer_helper<_Tp _Cp::*> : public __not_<is_function<_Tp>>::type
        {
        };

        template <typename _Tp> struct is_member_object_pointer : public __is_member_object_pointer_helper<typename remove_cv<_Tp>::type>::type
        {
        };

        template <typename> struct __is_member_function_pointer_helper : public false_type
        {
        };

        template <typename _Tp, typename _Cp> struct __is_member_function_pointer_helper<_Tp _Cp::*> : public is_function<_Tp>::type
        {
        };

        template <typename _Tp> struct is_member_function_pointer : public __is_member_function_pointer_helper<typename remove_cv<_Tp>::type>::type
        {
        };

        template <typename _Tp> struct is_enum : public integral_constant<bool, __is_enum(_Tp)>
        {
        };

        template <typename _Tp> struct is_union : public integral_constant<bool, __is_union(_Tp)>
        {
        };

        template <typename _Tp> struct is_class : public integral_constant<bool, __is_class(_Tp)>
        {
        };

        template <typename> struct is_function : public false_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes...) noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes...)& noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes...)&& noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes......) noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes......)& noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes......)&& noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes...) const noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes...) const& noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes...) const&& noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes......) const noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes......) const& noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes......) const&& noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes...) volatile noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes...) volatile& noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes...) volatile&& noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes......) volatile noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes......) volatile& noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes......) volatile&& noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes...) const volatile noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes...) const volatile& noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes...) const volatile&& noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes......) const volatile noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes......) const volatile& noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _ArgTypes, bool _NE> struct is_function<_Res(_ArgTypes......) const volatile&& noexcept(_NE)> : public true_type
        {
        };

        template <typename> struct __is_null_pointer_helper : public false_type
        {
        };

        template <> struct __is_null_pointer_helper<std::nullptr_t> : public true_type
        {
        };

        template <typename _Tp> struct is_null_pointer : public __is_null_pointer_helper<typename remove_cv<_Tp>::type>::type
        {
        };

        template <typename _Tp> struct __is_nullptr_t : public is_null_pointer<_Tp>
        {
        };

        template <typename _Tp> struct is_reference : public __or_<is_lvalue_reference<_Tp>, is_rvalue_reference<_Tp>>::type
        {
        };

        template <typename _Tp> struct is_arithmetic : public __or_<is_integral<_Tp>, is_floating_point<_Tp>>::type
        {
        };

        template <typename _Tp> struct is_fundamental : public __or_<is_arithmetic<_Tp>, is_void<_Tp>, is_null_pointer<_Tp>>::type
        {
        };

        template <typename _Tp> struct is_object : public __not_<__or_<is_function<_Tp>, is_reference<_Tp>, is_void<_Tp>>>::type
        {
        };

        template <typename> struct is_member_pointer;

        template <typename _Tp> struct is_scalar : public __or_<is_arithmetic<_Tp>, is_enum<_Tp>, is_pointer<_Tp>, is_member_pointer<_Tp>, is_null_pointer<_Tp>>::type
        {
        };

        template <typename _Tp> struct is_compound : public __not_<is_fundamental<_Tp>>::type
        {
        };

        template <typename _Tp> struct __is_member_pointer_helper : public false_type
        {
        };

        template <typename _Tp, typename _Cp> struct __is_member_pointer_helper<_Tp _Cp::*> : public true_type
        {
        };

        template <typename _Tp> struct is_member_pointer : public __is_member_pointer_helper<typename remove_cv<_Tp>::type>::type
        {
        };

        template <typename _Tp> struct __is_referenceable : public __or_<is_object<_Tp>, is_reference<_Tp>>::type
        {
        };

        template <typename _Res, typename... _Args, bool _NE> struct __is_referenceable<_Res(_Args...) noexcept(_NE)> : public true_type
        {
        };

        template <typename _Res, typename... _Args, bool _NE> struct __is_referenceable<_Res(_Args......) noexcept(_NE)> : public true_type
        {
        };

        template <typename> struct is_const : public false_type
        {
        };

        template <typename _Tp> struct is_const<_Tp const> : public true_type
        {
        };

        template <typename> struct is_volatile : public false_type
        {
        };

        template <typename _Tp> struct is_volatile<_Tp volatile> : public true_type
        {
        };

        template <typename _Tp> struct is_trivial : public integral_constant<bool, __is_trivial(_Tp)>
        {
        };

        template <typename _Tp> struct is_trivially_copyable : public integral_constant<bool, __is_trivially_copyable(_Tp)>
        {
        };

        template <typename _Tp> struct is_standard_layout : public integral_constant<bool, __is_standard_layout(_Tp)>
        {
        };

        template <typename _Tp> struct is_pod : public integral_constant<bool, __is_pod(_Tp)>
        {
        };

        template <typename _Tp> struct is_literal_type : public integral_constant<bool, __is_literal_type(_Tp)>
        {
        };

        template <typename _Tp> struct is_empty : public integral_constant<bool, __is_empty(_Tp)>
        {
        };

        template <typename _Tp> struct is_polymorphic : public integral_constant<bool, __is_polymorphic(_Tp)>
        {
        };

        template <typename _Tp> struct is_final : public integral_constant<bool, __is_final(_Tp)>
        {
        };

        template <typename _Tp> struct is_abstract : public integral_constant<bool, __is_abstract(_Tp)>
        {
        };

        template <typename _Tp, bool = is_arithmetic<_Tp>::value> struct __is_signed_helper : public false_type
        {
        };

        template <typename _Tp> struct __is_signed_helper<_Tp, true> : public integral_constant<bool, _Tp(-1) < _Tp(0)>
        {
        };

        template <typename _Tp> struct is_signed : public __is_signed_helper<_Tp>::type
        {
        };

        template <typename _Tp> struct is_unsigned : public __and_<is_arithmetic<_Tp>, __not_<is_signed<_Tp>>>
        {
        };
        template <typename _Tp, typename _Up = _Tp&&> _Up __declval(int);

        template <typename _Tp> _Tp __declval(long);

        template <typename _Tp> auto declval() noexcept->decltype(__declval<_Tp>(0));

        template <typename, unsigned = 0> struct extent;

        template <typename> struct remove_all_extents;

        template <typename _Tp> struct __is_array_known_bounds : public integral_constant<bool, (extent<_Tp>::value > 0)>
        {
        };

        template <typename _Tp> struct __is_array_unknown_bounds : public __and_<is_array<_Tp>, __not_<extent<_Tp>>>
        {
        };

        struct __do_is_destructible_impl
        {
            template <typename _Tp, typename = decltype(declval<_Tp&>().~_Tp())> static true_type __test(int);

            template <typename> static false_type __test(...);
        };

        template <typename _Tp> struct __is_destructible_impl : public __do_is_destructible_impl
        {
            typedef decltype(__test<_Tp>(0)) type;
        };

        template <typename _Tp, bool = __or_<is_void<_Tp>, __is_array_unknown_bounds<_Tp>, is_function<_Tp>>::value, bool = __or_<is_reference<_Tp>, is_scalar<_Tp>>::value>
        struct __is_destructible_safe;

        template <typename _Tp> struct __is_destructible_safe<_Tp, false, false> : public __is_destructible_impl<typename remove_all_extents<_Tp>::type>::type
        {
        };

        template <typename _Tp> struct __is_destructible_safe<_Tp, true, false> : public false_type
        {
        };

        template <typename _Tp> struct __is_destructible_safe<_Tp, false, true> : public true_type
        {
        };

        template <typename _Tp> struct is_destructible : public __is_destructible_safe<_Tp>::type
        {
        };

        struct __do_is_nt_destructible_impl
        {
            template <typename _Tp> static __bool_constant<noexcept(declval<_Tp&>().~_Tp())> __test(int);

            template <typename> static false_type __test(...);
        };

        template <typename _Tp> struct __is_nt_destructible_impl : public __do_is_nt_destructible_impl
        {
            typedef decltype(__test<_Tp>(0)) type;
        };

        template <typename _Tp, bool = __or_<is_void<_Tp>, __is_array_unknown_bounds<_Tp>, is_function<_Tp>>::value, bool = __or_<is_reference<_Tp>, is_scalar<_Tp>>::value>
        struct __is_nt_destructible_safe;

        template <typename _Tp> struct __is_nt_destructible_safe<_Tp, false, false> : public __is_nt_destructible_impl<typename remove_all_extents<_Tp>::type>::type
        {
        };

        template <typename _Tp> struct __is_nt_destructible_safe<_Tp, true, false> : public false_type
        {
        };

        template <typename _Tp> struct __is_nt_destructible_safe<_Tp, false, true> : public true_type
        {
        };

        template <typename _Tp> struct is_nothrow_destructible : public __is_nt_destructible_safe<_Tp>::type
        {
        };

        template <typename _Tp, typename... _Args> struct is_constructible : public __bool_constant<__is_constructible(_Tp, _Args...)>
        {
        };

        template <typename _Tp> struct is_default_constructible : public is_constructible<_Tp>::type
        {
        };

        template <typename _Tp, bool = __is_referenceable<_Tp>::value> struct __is_copy_constructible_impl;

        template <typename _Tp> struct __is_copy_constructible_impl<_Tp, false> : public false_type
        {
        };

        template <typename _Tp> struct __is_copy_constructible_impl<_Tp, true> : public is_constructible<_Tp, const _Tp&>
        {
        };

        template <typename _Tp> struct is_copy_constructible : public __is_copy_constructible_impl<_Tp>
        {
        };

        template <typename _Tp, bool = __is_referenceable<_Tp>::value> struct __is_move_constructible_impl;

        template <typename _Tp> struct __is_move_constructible_impl<_Tp, false> : public false_type
        {
        };

        template <typename _Tp> struct __is_move_constructible_impl<_Tp, true> : public is_constructible<_Tp, _Tp&&>
        {
        };

        template <typename _Tp> struct is_move_constructible : public __is_move_constructible_impl<_Tp>
        {
        };

        template <typename _Tp> struct __is_nt_default_constructible_atom : public integral_constant<bool, noexcept(_Tp())>
        {
        };

        template <typename _Tp, bool = is_array<_Tp>::value> struct __is_nt_default_constructible_impl;

        template <typename _Tp>
        struct __is_nt_default_constructible_impl<_Tp, true> : public __and_<__is_array_known_bounds<_Tp>, __is_nt_default_constructible_atom<typename remove_all_extents<_Tp>::type>>
        {
        };

        template <typename _Tp> struct __is_nt_default_constructible_impl<_Tp, false> : public __is_nt_default_constructible_atom<_Tp>
        {
        };

        template <typename _Tp> struct is_nothrow_default_constructible : public __and_<is_default_constructible<_Tp>, __is_nt_default_constructible_impl<_Tp>>
        {
        };

        template <typename _Tp, typename... _Args> struct __is_nt_constructible_impl : public integral_constant<bool, noexcept(_Tp(declval<_Args>()...))>
        {
        };

        template <typename _Tp, typename _Arg> struct __is_nt_constructible_impl<_Tp, _Arg> : public integral_constant<bool, noexcept(static_cast<_Tp>(declval<_Arg>()))>
        {
        };

        template <typename _Tp> struct __is_nt_constructible_impl<_Tp> : public is_nothrow_default_constructible<_Tp>
        {
        };

        template <typename _Tp, typename... _Args> struct is_nothrow_constructible : public __and_<is_constructible<_Tp, _Args...>, __is_nt_constructible_impl<_Tp, _Args...>>
        {
        };

        template <typename _Tp, bool = __is_referenceable<_Tp>::value> struct __is_nothrow_copy_constructible_impl;

        template <typename _Tp> struct __is_nothrow_copy_constructible_impl<_Tp, false> : public false_type
        {
        };

        template <typename _Tp> struct __is_nothrow_copy_constructible_impl<_Tp, true> : public is_nothrow_constructible<_Tp, const _Tp&>
        {
        };

        template <typename _Tp> struct is_nothrow_copy_constructible : public __is_nothrow_copy_constructible_impl<_Tp>
        {
        };

        template <typename _Tp, bool = __is_referenceable<_Tp>::value> struct __is_nothrow_move_constructible_impl;

        template <typename _Tp> struct __is_nothrow_move_constructible_impl<_Tp, false> : public false_type
        {
        };

        template <typename _Tp> struct __is_nothrow_move_constructible_impl<_Tp, true> : public is_nothrow_constructible<_Tp, _Tp&&>
        {
        };

        template <typename _Tp> struct is_nothrow_move_constructible : public __is_nothrow_move_constructible_impl<_Tp>
        {
        };

        template <typename _Tp, typename _Up> struct is_assignable : public __bool_constant<__is_assignable(_Tp, _Up)>
        {
        };

        template <typename _Tp, bool = __is_referenceable<_Tp>::value> struct __is_copy_assignable_impl;

        template <typename _Tp> struct __is_copy_assignable_impl<_Tp, false> : public false_type
        {
        };

        template <typename _Tp> struct __is_copy_assignable_impl<_Tp, true> : public is_assignable<_Tp&, const _Tp&>
        {
        };

        template <typename _Tp> struct is_copy_assignable : public __is_copy_assignable_impl<_Tp>
        {
        };

        template <typename _Tp, bool = __is_referenceable<_Tp>::value> struct __is_move_assignable_impl;

        template <typename _Tp> struct __is_move_assignable_impl<_Tp, false> : public false_type
        {
        };

        template <typename _Tp> struct __is_move_assignable_impl<_Tp, true> : public is_assignable<_Tp&, _Tp&&>
        {
        };

        template <typename _Tp> struct is_move_assignable : public __is_move_assignable_impl<_Tp>
        {
        };

        template <typename _Tp, typename _Up> struct __is_nt_assignable_impl : public integral_constant<bool, noexcept(declval<_Tp>() = declval<_Up>())>
        {
        };

        template <typename _Tp, typename _Up> struct is_nothrow_assignable : public __and_<is_assignable<_Tp, _Up>, __is_nt_assignable_impl<_Tp, _Up>>
        {
        };

        template <typename _Tp, bool = __is_referenceable<_Tp>::value> struct __is_nt_copy_assignable_impl;

        template <typename _Tp> struct __is_nt_copy_assignable_impl<_Tp, false> : public false_type
        {
        };

        template <typename _Tp> struct __is_nt_copy_assignable_impl<_Tp, true> : public is_nothrow_assignable<_Tp&, const _Tp&>
        {
        };

        template <typename _Tp> struct is_nothrow_copy_assignable : public __is_nt_copy_assignable_impl<_Tp>
        {
        };

        template <typename _Tp, bool = __is_referenceable<_Tp>::value> struct __is_nt_move_assignable_impl;

        template <typename _Tp> struct __is_nt_move_assignable_impl<_Tp, false> : public false_type
        {
        };

        template <typename _Tp> struct __is_nt_move_assignable_impl<_Tp, true> : public is_nothrow_assignable<_Tp&, _Tp&&>
        {
        };

        template <typename _Tp> struct is_nothrow_move_assignable : public __is_nt_move_assignable_impl<_Tp>
        {
        };

        template <typename _Tp, typename... _Args> struct is_trivially_constructible : public __bool_constant<__is_trivially_constructible(_Tp, _Args...)>
        {
        };

        template <typename _Tp> struct is_trivially_default_constructible : public is_trivially_constructible<_Tp>::type
        {
        };

        struct __do_is_implicitly_default_constructible_impl
        {
            template <typename _Tp> static void __helper(const _Tp&);

            template <typename _Tp> static true_type __test(const _Tp&, decltype(__helper<const _Tp&>({}))* = 0);

            static false_type __test(...);
        };

        template <typename _Tp> struct __is_implicitly_default_constructible_impl : public __do_is_implicitly_default_constructible_impl
        {
            typedef decltype(__test(declval<_Tp>())) type;
        };

        template <typename _Tp> struct __is_implicitly_default_constructible_safe : public __is_implicitly_default_constructible_impl<_Tp>::type
        {
        };

        template <typename _Tp> struct __is_implicitly_default_constructible : public __and_<is_default_constructible<_Tp>, __is_implicitly_default_constructible_safe<_Tp>>
        {
        };

        template <typename _Tp, bool = __is_referenceable<_Tp>::value> struct __is_trivially_copy_constructible_impl;

        template <typename _Tp> struct __is_trivially_copy_constructible_impl<_Tp, false> : public false_type
        {
        };

        template <typename _Tp>
        struct __is_trivially_copy_constructible_impl<_Tp, true> : public __and_<is_copy_constructible<_Tp>, integral_constant<bool, __is_trivially_constructible(_Tp, const _Tp&)>>
        {
        };

        template <typename _Tp> struct is_trivially_copy_constructible : public __is_trivially_copy_constructible_impl<_Tp>
        {
        };

        template <typename _Tp, bool = __is_referenceable<_Tp>::value> struct __is_trivially_move_constructible_impl;

        template <typename _Tp> struct __is_trivially_move_constructible_impl<_Tp, false> : public false_type
        {
        };

        template <typename _Tp> struct __is_trivially_move_constructible_impl<_Tp, true> : public __and_<is_move_constructible<_Tp>, integral_constant<bool, __is_trivially_constructible(_Tp, _Tp &&)>>
        {
        };

        template <typename _Tp> struct is_trivially_move_constructible : public __is_trivially_move_constructible_impl<_Tp>
        {
        };

        template <typename _Tp, typename _Up> struct is_trivially_assignable : public __bool_constant<__is_trivially_assignable(_Tp, _Up)>
        {
        };

        template <typename _Tp, bool = __is_referenceable<_Tp>::value> struct __is_trivially_copy_assignable_impl;

        template <typename _Tp> struct __is_trivially_copy_assignable_impl<_Tp, false> : public false_type
        {
        };

        template <typename _Tp> struct __is_trivially_copy_assignable_impl<_Tp, true> : public __bool_constant<__is_trivially_assignable(_Tp&, const _Tp&)>
        {
        };

        template <typename _Tp> struct is_trivially_copy_assignable : public __is_trivially_copy_assignable_impl<_Tp>
        {
        };

        template <typename _Tp, bool = __is_referenceable<_Tp>::value> struct __is_trivially_move_assignable_impl;

        template <typename _Tp> struct __is_trivially_move_assignable_impl<_Tp, false> : public false_type
        {
        };

        template <typename _Tp> struct __is_trivially_move_assignable_impl<_Tp, true> : public __bool_constant<__is_trivially_assignable(_Tp&, _Tp &&)>
        {
        };

        template <typename _Tp> struct is_trivially_move_assignable : public __is_trivially_move_assignable_impl<_Tp>
        {
        };

        template <typename _Tp> struct is_trivially_destructible : public __and_<is_destructible<_Tp>, __bool_constant<__has_trivial_destructor(_Tp)>>
        {
        };

        template <typename _Tp> struct has_virtual_destructor : public integral_constant<bool, __has_virtual_destructor(_Tp)>
        {
        };

        template <typename _Tp> struct alignment_of : public integral_constant<std::size_t, alignof(_Tp)>
        {
        };

        template <typename> struct rank : public integral_constant<std::size_t, 0>
        {
        };

        template <typename _Tp, std::size_t _Size> struct rank<_Tp[_Size]> : public integral_constant<std::size_t, 1 + rank<_Tp>::value>
        {
        };

        template <typename _Tp> struct rank<_Tp[]> : public integral_constant<std::size_t, 1 + rank<_Tp>::value>
        {
        };

        template <typename, unsigned _Uint> struct extent : public integral_constant<std::size_t, 0>
        {
        };

        template <typename _Tp, unsigned _Uint, std::size_t _Size> struct extent<_Tp[_Size], _Uint> : public integral_constant<std::size_t, _Uint == 0 ? _Size : extent<_Tp, _Uint - 1>::value>
        {
        };

        template <typename _Tp, unsigned _Uint> struct extent<_Tp[], _Uint> : public integral_constant<std::size_t, _Uint == 0 ? 0 : extent<_Tp, _Uint - 1>::value>
        {
        };

        template <typename, typename> struct is_same : public false_type
        {
        };

        template <typename _Tp> struct is_same<_Tp, _Tp> : public true_type
        {
        };

        template <typename _Base, typename _Derived> struct is_base_of : public integral_constant<bool, __is_base_of(_Base, _Derived)>
        {
        };

        template <typename _From, typename _To, bool = __or_<is_void<_From>, is_function<_To>, is_array<_To>>::value> struct __is_convertible_helper
        {
            typedef typename is_void<_To>::type type;
        };

        template <typename _From, typename _To> class __is_convertible_helper<_From, _To, false>
        {
            template <typename _To1> static void __test_aux(_To1) noexcept;

            template <typename _From1, typename _To1, typename = decltype(__test_aux<_To1>(std::declval<_From1>()))> static true_type __test(int);

            template <typename, typename> static false_type __test(...);

          public:
            typedef decltype(__test<_From, _To>(0)) type;
        };

        template <typename _From, typename _To> struct is_convertible : public __is_convertible_helper<_From, _To>::type
        {
        };

        template <typename _From, typename _To, bool = __or_<is_void<_From>, is_function<_To>, is_array<_To>>::value> struct __is_nt_convertible_helper : is_void<_To>
        {
        };

        template <typename _From, typename _To> class __is_nt_convertible_helper<_From, _To, false>
        {
            template <typename _To1> static void __test_aux(_To1) noexcept;

            template <typename _From1, typename _To1> static bool_constant<noexcept(__test_aux<_To1>(std::declval<_From1>()))> __test(int);

            template <typename, typename> static false_type __test(...);

          public:
            using type = decltype(__test<_From, _To>(0));
        };

        template <typename _From, typename _To> struct is_nothrow_convertible : public __is_nt_convertible_helper<_From, _To>::type
        {
        };

        template <typename _From, typename _To> inline constexpr bool is_nothrow_convertible_v = is_nothrow_convertible<_From, _To>::value;

        template <typename _Tp> struct remove_const
        {
            typedef _Tp type;
        };

        template <typename _Tp> struct remove_const<_Tp const>
        {
            typedef _Tp type;
        };

        template <typename _Tp> struct remove_volatile
        {
            typedef _Tp type;
        };

        template <typename _Tp> struct remove_volatile<_Tp volatile>
        {
            typedef _Tp type;
        };

        template <typename _Tp> struct remove_cv
        {
            typedef typename remove_const<typename remove_volatile<_Tp>::type>::type type;
        };

        template <typename _Tp> struct add_const
        {
            typedef _Tp const type;
        };

        template <typename _Tp> struct add_volatile
        {
            typedef _Tp volatile type;
        };

        template <typename _Tp> struct add_cv
        {
            typedef typename add_const<typename add_volatile<_Tp>::type>::type type;
        };

        template <typename _Tp> using remove_const_t = typename remove_const<_Tp>::type;

        template <typename _Tp> using remove_volatile_t = typename remove_volatile<_Tp>::type;

        template <typename _Tp> using remove_cv_t = typename remove_cv<_Tp>::type;

        template <typename _Tp> using add_const_t = typename add_const<_Tp>::type;

        template <typename _Tp> using add_volatile_t = typename add_volatile<_Tp>::type;

        template <typename _Tp> using add_cv_t = typename add_cv<_Tp>::type;

        template <typename _Tp> struct remove_reference
        {
            typedef _Tp type;
        };

        template <typename _Tp> struct remove_reference<_Tp&>
        {
            typedef _Tp type;
        };

        template <typename _Tp> struct remove_reference<_Tp&&>
        {
            typedef _Tp type;
        };

        template <typename _Tp, bool = __is_referenceable<_Tp>::value> struct __add_lvalue_reference_helper
        {
            typedef _Tp type;
        };

        template <typename _Tp> struct __add_lvalue_reference_helper<_Tp, true>
        {
            typedef _Tp& type;
        };

        template <typename _Tp> struct add_lvalue_reference : public __add_lvalue_reference_helper<_Tp>
        {
        };

        template <typename _Tp, bool = __is_referenceable<_Tp>::value> struct __add_rvalue_reference_helper
        {
            typedef _Tp type;
        };

        template <typename _Tp> struct __add_rvalue_reference_helper<_Tp, true>
        {
            typedef _Tp&& type;
        };

        template <typename _Tp> struct add_rvalue_reference : public __add_rvalue_reference_helper<_Tp>
        {
        };

        template <typename _Tp> using remove_reference_t = typename remove_reference<_Tp>::type;

        template <typename _Tp> using add_lvalue_reference_t = typename add_lvalue_reference<_Tp>::type;

        template <typename _Tp> using add_rvalue_reference_t = typename add_rvalue_reference<_Tp>::type;

        template <typename _Unqualified, bool _IsConst, bool _IsVol> struct __cv_selector;

        template <typename _Unqualified> struct __cv_selector<_Unqualified, false, false>
        {
            typedef _Unqualified __type;
        };

        template <typename _Unqualified> struct __cv_selector<_Unqualified, false, true>
        {
            typedef volatile _Unqualified __type;
        };

        template <typename _Unqualified> struct __cv_selector<_Unqualified, true, false>
        {
            typedef const _Unqualified __type;
        };

        template <typename _Unqualified> struct __cv_selector<_Unqualified, true, true>
        {
            typedef const volatile _Unqualified __type;
        };

        template <typename _Qualified, typename _Unqualified, bool _IsConst = is_const<_Qualified>::value, bool _IsVol = is_volatile<_Qualified>::value> class __match_cv_qualifiers
        {
            typedef __cv_selector<_Unqualified, _IsConst, _IsVol> __match;

          public:
            typedef typename __match::__type __type;
        };

        template <typename _Tp> struct __make_unsigned
        {
            typedef _Tp __type;
        };

        template <> struct __make_unsigned<char>
        {
            typedef unsigned char __type;
        };

        template <> struct __make_unsigned<signed char>
        {
            typedef unsigned char __type;
        };

        template <> struct __make_unsigned<short>
        {
            typedef unsigned short __type;
        };

        template <> struct __make_unsigned<int>
        {
            typedef unsigned int __type;
        };

        template <> struct __make_unsigned<long>
        {
            typedef unsigned long __type;
        };

        template <> struct __make_unsigned<long long>
        {
            typedef unsigned long long __type;
        };

        template <> struct __make_unsigned<__int128>
        {
            typedef unsigned __int128 __type;
        };
        template <typename _Tp, bool _IsInt = is_integral<_Tp>::value, bool _IsEnum = is_enum<_Tp>::value> class __make_unsigned_selector;

        template <typename _Tp> class __make_unsigned_selector<_Tp, true, false>
        {
            using __unsigned_type = typename __make_unsigned<typename remove_cv<_Tp>::type>::__type;

          public:
            using __type = typename __match_cv_qualifiers<_Tp, __unsigned_type>::__type;
        };

        class __make_unsigned_selector_base
        {
          protected:
            template <typename...> struct _List
            {
            };

            template <typename _Tp, typename... _Up> struct _List<_Tp, _Up...> : _List<_Up...>
            {
                static constexpr size_t __size = sizeof(_Tp);
            };

            template <size_t _Sz, typename _Tp, bool = (_Sz <= _Tp::__size)> struct __select;

            template <size_t _Sz, typename _Uint, typename... _UInts> struct __select<_Sz, _List<_Uint, _UInts...>, true>
            {
                using __type = _Uint;
            };

            template <size_t _Sz, typename _Uint, typename... _UInts> struct __select<_Sz, _List<_Uint, _UInts...>, false> : __select<_Sz, _List<_UInts...>>
            {
            };
        };

        template <typename _Tp> class __make_unsigned_selector<_Tp, false, true> : __make_unsigned_selector_base
        {

            using _UInts = _List<unsigned char, unsigned short, unsigned int, unsigned long, unsigned long long>;

            using __unsigned_type = typename __select<sizeof(_Tp), _UInts>::__type;

          public:
            using __type = typename __match_cv_qualifiers<_Tp, __unsigned_type>::__type;
        };

        template <> struct __make_unsigned<wchar_t>
        {
            using __type = typename __make_unsigned_selector<wchar_t, false, true>::__type;
        };

        template <> struct __make_unsigned<char8_t>
        {
            using __type = typename __make_unsigned_selector<char8_t, false, true>::__type;
        };

        template <> struct __make_unsigned<char16_t>
        {
            using __type = typename __make_unsigned_selector<char16_t, false, true>::__type;
        };

        template <> struct __make_unsigned<char32_t>
        {
            using __type = typename __make_unsigned_selector<char32_t, false, true>::__type;
        };

        template <typename _Tp> struct make_unsigned
        {
            typedef typename __make_unsigned_selector<_Tp>::__type type;
        };

        template <> struct make_unsigned<bool>;

        template <typename _Tp> struct __make_signed
        {
            typedef _Tp __type;
        };

        template <> struct __make_signed<char>
        {
            typedef signed char __type;
        };

        template <> struct __make_signed<unsigned char>
        {
            typedef signed char __type;
        };

        template <> struct __make_signed<unsigned short>
        {
            typedef signed short __type;
        };

        template <> struct __make_signed<unsigned int>
        {
            typedef signed int __type;
        };

        template <> struct __make_signed<unsigned long>
        {
            typedef signed long __type;
        };

        template <> struct __make_signed<unsigned long long>
        {
            typedef signed long long __type;
        };

        template <> struct __make_signed<unsigned __int128>
        {
            typedef __int128 __type;
        };
        template <typename _Tp, bool _IsInt = is_integral<_Tp>::value, bool _IsEnum = is_enum<_Tp>::value> class __make_signed_selector;

        template <typename _Tp> class __make_signed_selector<_Tp, true, false>
        {
            using __signed_type = typename __make_signed<typename remove_cv<_Tp>::type>::__type;

          public:
            using __type = typename __match_cv_qualifiers<_Tp, __signed_type>::__type;
        };

        template <typename _Tp> class __make_signed_selector<_Tp, false, true>
        {
            typedef typename __make_unsigned_selector<_Tp>::__type __unsigned_type;

          public:
            typedef typename __make_signed_selector<__unsigned_type>::__type __type;
        };

        template <> struct __make_signed<wchar_t>
        {
            using __type = typename __make_signed_selector<wchar_t, false, true>::__type;
        };

        template <> struct __make_signed<char8_t>
        {
            using __type = typename __make_signed_selector<char8_t, false, true>::__type;
        };

        template <> struct __make_signed<char16_t>
        {
            using __type = typename __make_signed_selector<char16_t, false, true>::__type;
        };

        template <> struct __make_signed<char32_t>
        {
            using __type = typename __make_signed_selector<char32_t, false, true>::__type;
        };

        template <typename _Tp> struct make_signed
        {
            typedef typename __make_signed_selector<_Tp>::__type type;
        };

        template <> struct make_signed<bool>;

        template <typename _Tp> using make_signed_t = typename make_signed<_Tp>::type;

        template <typename _Tp> using make_unsigned_t = typename make_unsigned<_Tp>::type;

        template <typename _Tp> struct remove_extent
        {
            typedef _Tp type;
        };

        template <typename _Tp, std::size_t _Size> struct remove_extent<_Tp[_Size]>
        {
            typedef _Tp type;
        };

        template <typename _Tp> struct remove_extent<_Tp[]>
        {
            typedef _Tp type;
        };

        template <typename _Tp> struct remove_all_extents
        {
            typedef _Tp type;
        };

        template <typename _Tp, std::size_t _Size> struct remove_all_extents<_Tp[_Size]>
        {
            typedef typename remove_all_extents<_Tp>::type type;
        };

        template <typename _Tp> struct remove_all_extents<_Tp[]>
        {
            typedef typename remove_all_extents<_Tp>::type type;
        };

        template <typename _Tp> using remove_extent_t = typename remove_extent<_Tp>::type;

        template <typename _Tp> using remove_all_extents_t = typename remove_all_extents<_Tp>::type;

        template <typename _Tp, typename> struct __remove_pointer_helper
        {
            typedef _Tp type;
        };

        template <typename _Tp, typename _Up> struct __remove_pointer_helper<_Tp, _Up*>
        {
            typedef _Up type;
        };

        template <typename _Tp> struct remove_pointer : public __remove_pointer_helper<_Tp, typename remove_cv<_Tp>::type>
        {
        };

        template <typename _Tp, bool = __or_<__is_referenceable<_Tp>, is_void<_Tp>>::value> struct __add_pointer_helper
        {
            typedef _Tp type;
        };

        template <typename _Tp> struct __add_pointer_helper<_Tp, true>
        {
            typedef typename remove_reference<_Tp>::type* type;
        };

        template <typename _Tp> struct add_pointer : public __add_pointer_helper<_Tp>
        {
        };

        template <typename _Tp> using remove_pointer_t = typename remove_pointer<_Tp>::type;

        template <typename _Tp> using add_pointer_t = typename add_pointer<_Tp>::type;

        template <std::size_t _Len> struct __aligned_storage_msa
        {
            union __type
            {
                unsigned char __data[_Len];
                struct __attribute__((__aligned__))
                {
                } __align;
            };
        };
        template <std::size_t _Len, std::size_t _Align = __alignof__(typename __aligned_storage_msa<_Len>::__type)> struct aligned_storage
        {
            union type
            {
                unsigned char __data[_Len];
                struct __attribute__((__aligned__((_Align))))
                {
                } __align;
            };
        };

        template <typename... _Types> struct __strictest_alignment
        {
            static const size_t _S_alignment = 0;
            static const size_t _S_size = 0;
        };

        template <typename _Tp, typename... _Types> struct __strictest_alignment<_Tp, _Types...>
        {
            static const size_t _S_alignment = alignof(_Tp) > __strictest_alignment<_Types...>::_S_alignment ? alignof(_Tp) : __strictest_alignment<_Types...>::_S_alignment;
            static const size_t _S_size = sizeof(_Tp) > __strictest_alignment<_Types...>::_S_size ? sizeof(_Tp) : __strictest_alignment<_Types...>::_S_size;
        };
        template <size_t _Len, typename... _Types> struct aligned_union
        {
          private:
            static_assert(sizeof...(_Types) != 0, "At least one type is required");

            using __strictest = __strictest_alignment<_Types...>;
            static const size_t _S_len = _Len > __strictest::_S_size ? _Len : __strictest::_S_size;

          public:
            static const size_t alignment_value = __strictest::_S_alignment;

            typedef typename aligned_storage<_S_len, alignment_value>::type type;
        };

        template <size_t _Len, typename... _Types> const size_t aligned_union<_Len, _Types...>::alignment_value;

        template <typename _Up, bool _IsArray = is_array<_Up>::value, bool _IsFunction = is_function<_Up>::value> struct __decay_selector;

        template <typename _Up> struct __decay_selector<_Up, false, false>
        {
            typedef typename remove_cv<_Up>::type __type;
        };

        template <typename _Up> struct __decay_selector<_Up, true, false>
        {
            typedef typename remove_extent<_Up>::type* __type;
        };

        template <typename _Up> struct __decay_selector<_Up, false, true>
        {
            typedef typename add_pointer<_Up>::type __type;
        };

        template <typename _Tp> class decay
        {
            typedef typename remove_reference<_Tp>::type __remove_type;

          public:
            typedef typename __decay_selector<__remove_type>::__type type;
        };

        template <typename _Tp> class reference_wrapper;

        template <typename _Tp> struct __strip_reference_wrapper
        {
            typedef _Tp __type;
        };

        template <typename _Tp> struct __strip_reference_wrapper<reference_wrapper<_Tp>>
        {
            typedef _Tp& __type;
        };

        template <typename _Tp> struct __decay_and_strip
        {
            typedef typename __strip_reference_wrapper<typename decay<_Tp>::type>::__type __type;
        };

        template <bool, typename _Tp = void> struct enable_if
        {
        };

        template <typename _Tp> struct enable_if<true, _Tp>
        {
            typedef _Tp type;
        };

        template <typename... _Cond> using _Require = typename enable_if<__and_<_Cond...>::value>::type;

        template <bool _Cond, typename _Iftrue, typename _Iffalse> struct conditional
        {
            typedef _Iftrue type;
        };

        template <typename _Iftrue, typename _Iffalse> struct conditional<false, _Iftrue, _Iffalse>
        {
            typedef _Iffalse type;
        };

        template <typename... _Tp> struct common_type;

        struct __do_common_type_impl
        {
            template <typename _Tp, typename _Up> static __success_type<typename decay<decltype(true ? std::declval<_Tp>() : std::declval<_Up>())>::type> _S_test(int);

            template <typename, typename> static __failure_type _S_test(...);
        };

        template <typename _Tp, typename _Up> struct __common_type_impl : private __do_common_type_impl
        {
            typedef decltype(_S_test<_Tp, _Up>(0)) type;
        };

        struct __do_member_type_wrapper
        {
            template <typename _Tp> static __success_type<typename _Tp::type> _S_test(int);

            template <typename> static __failure_type _S_test(...);
        };

        template <typename _Tp> struct __member_type_wrapper : private __do_member_type_wrapper
        {
            typedef decltype(_S_test<_Tp>(0)) type;
        };

        template <typename _CTp, typename... _Args> struct __expanded_common_type_wrapper
        {
            typedef common_type<typename _CTp::type, _Args...> type;
        };

        template <typename... _Args> struct __expanded_common_type_wrapper<__failure_type, _Args...>
        {
            typedef __failure_type type;
        };

        template <> struct common_type<>
        {
        };

        template <typename _Tp> struct common_type<_Tp> : common_type<_Tp, _Tp>
        {
        };

        template <typename _Tp, typename _Up> struct common_type<_Tp, _Up> : public __common_type_impl<_Tp, _Up>::type
        {
        };

        template <typename _Tp, typename _Up, typename... _Vp>
        struct common_type<_Tp, _Up, _Vp...> : public __expanded_common_type_wrapper<typename __member_type_wrapper<common_type<_Tp, _Up>>::type, _Vp...>::type
        {
        };

        template <typename _Tp, bool = is_enum<_Tp>::value> struct __underlying_type_impl
        {
            using type = __underlying_type(_Tp);
        };

        template <typename _Tp> struct __underlying_type_impl<_Tp, false>
        {
        };

        template <typename _Tp> struct underlying_type : public __underlying_type_impl<_Tp>
        {
        };

        template <typename _Tp> struct __declval_protector
        {
            static const bool __stop = false;
        };

        template <typename _Tp> auto declval() noexcept->decltype(__declval<_Tp>(0))
        {
            static_assert(__declval_protector<_Tp>::__stop, "declval() must not be used!");
            return __declval<_Tp>(0);
        }

        template <typename _Tp> using __remove_cvref_t = typename remove_cv<typename remove_reference<_Tp>::type>::type;

        template <typename _Signature> class result_of;

        struct __invoke_memfun_ref
        {
        };
        struct __invoke_memfun_deref
        {
        };
        struct __invoke_memobj_ref
        {
        };
        struct __invoke_memobj_deref
        {
        };
        struct __invoke_other
        {
        };

        template <typename _Tp, typename _Tag> struct __result_of_success : __success_type<_Tp>
        {
            using __invoke_type = _Tag;
        };

        struct __result_of_memfun_ref_impl
        {
            template <typename _Fp, typename _Tp1, typename... _Args>
            static __result_of_success<decltype((std::declval<_Tp1>().*std::declval<_Fp>())(std::declval<_Args>()...)), __invoke_memfun_ref> _S_test(int);

            template <typename...> static __failure_type _S_test(...);
        };

        template <typename _MemPtr, typename _Arg, typename... _Args> struct __result_of_memfun_ref : private __result_of_memfun_ref_impl
        {
            typedef decltype(_S_test<_MemPtr, _Arg, _Args...>(0)) type;
        };

        struct __result_of_memfun_deref_impl
        {
            template <typename _Fp, typename _Tp1, typename... _Args>
            static __result_of_success<decltype(((*std::declval<_Tp1>()).*std::declval<_Fp>())(std::declval<_Args>()...)), __invoke_memfun_deref> _S_test(int);

            template <typename...> static __failure_type _S_test(...);
        };

        template <typename _MemPtr, typename _Arg, typename... _Args> struct __result_of_memfun_deref : private __result_of_memfun_deref_impl
        {
            typedef decltype(_S_test<_MemPtr, _Arg, _Args...>(0)) type;
        };

        struct __result_of_memobj_ref_impl
        {
            template <typename _Fp, typename _Tp1> static __result_of_success<decltype(std::declval<_Tp1>().*std::declval<_Fp>()), __invoke_memobj_ref> _S_test(int);

            template <typename, typename> static __failure_type _S_test(...);
        };

        template <typename _MemPtr, typename _Arg> struct __result_of_memobj_ref : private __result_of_memobj_ref_impl
        {
            typedef decltype(_S_test<_MemPtr, _Arg>(0)) type;
        };

        struct __result_of_memobj_deref_impl
        {
            template <typename _Fp, typename _Tp1> static __result_of_success<decltype((*std::declval<_Tp1>()).*std::declval<_Fp>()), __invoke_memobj_deref> _S_test(int);

            template <typename, typename> static __failure_type _S_test(...);
        };

        template <typename _MemPtr, typename _Arg> struct __result_of_memobj_deref : private __result_of_memobj_deref_impl
        {
            typedef decltype(_S_test<_MemPtr, _Arg>(0)) type;
        };

        template <typename _MemPtr, typename _Arg> struct __result_of_memobj;

        template <typename _Res, typename _Class, typename _Arg> struct __result_of_memobj<_Res _Class::*, _Arg>
        {
            typedef __remove_cvref_t<_Arg> _Argval;
            typedef _Res _Class::*_MemPtr;
            typedef
                typename conditional<__or_<is_same<_Argval, _Class>, is_base_of<_Class, _Argval>>::value, __result_of_memobj_ref<_MemPtr, _Arg>, __result_of_memobj_deref<_MemPtr, _Arg>>::type::type
                    type;
        };

        template <typename _MemPtr, typename _Arg, typename... _Args> struct __result_of_memfun;

        template <typename _Res, typename _Class, typename _Arg, typename... _Args> struct __result_of_memfun<_Res _Class::*, _Arg, _Args...>
        {
            typedef typename remove_reference<_Arg>::type _Argval;
            typedef _Res _Class::*_MemPtr;
            typedef typename conditional<is_base_of<_Class, _Argval>::value, __result_of_memfun_ref<_MemPtr, _Arg, _Args...>, __result_of_memfun_deref<_MemPtr, _Arg, _Args...>>::type::type type;
        };

        template <typename _Tp, typename _Up = __remove_cvref_t<_Tp>> struct __inv_unwrap
        {
            using type = _Tp;
        };

        template <typename _Tp, typename _Up> struct __inv_unwrap<_Tp, reference_wrapper<_Up>>
        {
            using type = _Up&;
        };

        template <bool, bool, typename _Functor, typename... _ArgTypes> struct __result_of_impl
        {
            typedef __failure_type type;
        };

        template <typename _MemPtr, typename _Arg> struct __result_of_impl<true, false, _MemPtr, _Arg> : public __result_of_memobj<typename decay<_MemPtr>::type, typename __inv_unwrap<_Arg>::type>
        {
        };

        template <typename _MemPtr, typename _Arg, typename... _Args>
        struct __result_of_impl<false, true, _MemPtr, _Arg, _Args...> : public __result_of_memfun<typename decay<_MemPtr>::type, typename __inv_unwrap<_Arg>::type, _Args...>
        {
        };

        struct __result_of_other_impl
        {
            template <typename _Fn, typename... _Args> static __result_of_success<decltype(std::declval<_Fn>()(std::declval<_Args>()...)), __invoke_other> _S_test(int);

            template <typename...> static __failure_type _S_test(...);
        };

        template <typename _Functor, typename... _ArgTypes> struct __result_of_impl<false, false, _Functor, _ArgTypes...> : private __result_of_other_impl
        {
            typedef decltype(_S_test<_Functor, _ArgTypes...>(0)) type;
        };

        template <typename _Functor, typename... _ArgTypes>
        struct __invoke_result : public __result_of_impl<is_member_object_pointer<typename remove_reference<_Functor>::type>::value,
                                                         is_member_function_pointer<typename remove_reference<_Functor>::type>::value, _Functor, _ArgTypes...>::type
        {
        };

        template <typename _Functor, typename... _ArgTypes> struct result_of<_Functor(_ArgTypes...)> : public __invoke_result<_Functor, _ArgTypes...>
        {
        };

        template <size_t _Len, size_t _Align = __alignof__(typename __aligned_storage_msa<_Len>::__type)> using aligned_storage_t = typename aligned_storage<_Len, _Align>::type;

        template <size_t _Len, typename... _Types> using aligned_union_t = typename aligned_union<_Len, _Types...>::type;

        template <typename _Tp> using decay_t = typename decay<_Tp>::type;

        template <bool _Cond, typename _Tp = void> using enable_if_t = typename enable_if<_Cond, _Tp>::type;

        template <bool _Cond, typename _Iftrue, typename _Iffalse> using conditional_t = typename conditional<_Cond, _Iftrue, _Iffalse>::type;

        template <typename... _Tp> using common_type_t = typename common_type<_Tp...>::type;

        template <typename _Tp> using underlying_type_t = typename underlying_type<_Tp>::type;

        template <typename _Tp> using result_of_t = typename result_of<_Tp>::type;

        template <bool _Cond, typename _Tp = void> using __enable_if_t = typename enable_if<_Cond, _Tp>::type;

        template <typename...> using __void_t = void;

        template <typename...> using void_t = void;

        template <typename _Default, typename _AlwaysVoid, template <typename...> class _Op, typename... _Args> struct __detector
        {
            using value_t = false_type;
            using type = _Default;
        };

        template <typename _Default, template <typename...> class _Op, typename... _Args> struct __detector<_Default, __void_t<_Op<_Args...>>, _Op, _Args...>
        {
            using value_t = true_type;
            using type = _Op<_Args...>;
        };

        template <typename _Default, template <typename...> class _Op, typename... _Args> using __detected_or = __detector<_Default, void, _Op, _Args...>;

        template <typename _Default, template <typename...> class _Op, typename... _Args> using __detected_or_t = typename __detected_or<_Default, _Op, _Args...>::type;
        template <typename _Tp> struct __is_swappable;

        template <typename _Tp> struct __is_nothrow_swappable;

        template <typename... _Elements> class tuple;

        template <typename> struct __is_tuple_like_impl : false_type
        {
        };

        template <typename... _Tps> struct __is_tuple_like_impl<tuple<_Tps...>> : true_type
        {
        };

        template <typename _Tp> struct __is_tuple_like : public __is_tuple_like_impl<__remove_cvref_t<_Tp>>::type
        {
        };

        template <typename _Tp>
        inline typename enable_if<__and_<__not_<__is_tuple_like<_Tp>>, is_move_constructible<_Tp>, is_move_assignable<_Tp>>::value>::type swap(_Tp&, _Tp&) noexcept(
            __and_<is_nothrow_move_constructible<_Tp>, is_nothrow_move_assignable<_Tp>>::value);

        template <typename _Tp, size_t _Nm> inline typename enable_if<__is_swappable<_Tp>::value>::type swap(_Tp(&__a)[_Nm], _Tp(&__b)[_Nm]) noexcept(__is_nothrow_swappable<_Tp>::value);

        namespace __swappable_details
        {
        using std::swap;

        struct __do_is_swappable_impl
        {
            template <typename _Tp, typename = decltype(swap(std::declval<_Tp&>(), std::declval<_Tp&>()))> static true_type __test(int);

            template <typename> static false_type __test(...);
        };

        struct __do_is_nothrow_swappable_impl
        {
            template <typename _Tp> static __bool_constant<noexcept(swap(std::declval<_Tp&>(), std::declval<_Tp&>()))> __test(int);

            template <typename> static false_type __test(...);
        };

        } // namespace __swappable_details

        template <typename _Tp> struct __is_swappable_impl : public __swappable_details::__do_is_swappable_impl
        {
            typedef decltype(__test<_Tp>(0)) type;
        };

        template <typename _Tp> struct __is_nothrow_swappable_impl : public __swappable_details::__do_is_nothrow_swappable_impl
        {
            typedef decltype(__test<_Tp>(0)) type;
        };

        template <typename _Tp> struct __is_swappable : public __is_swappable_impl<_Tp>::type
        {
        };

        template <typename _Tp> struct __is_nothrow_swappable : public __is_nothrow_swappable_impl<_Tp>::type
        {
        };

        template <typename _Tp> struct is_swappable : public __is_swappable_impl<_Tp>::type
        {
        };

        template <typename _Tp> struct is_nothrow_swappable : public __is_nothrow_swappable_impl<_Tp>::type
        {
        };

        template <typename _Tp> inline constexpr bool is_swappable_v = is_swappable<_Tp>::value;

        template <typename _Tp> inline constexpr bool is_nothrow_swappable_v = is_nothrow_swappable<_Tp>::value;

        namespace __swappable_with_details
        {
        using std::swap;

        struct __do_is_swappable_with_impl
        {
            template <typename _Tp, typename _Up, typename = decltype(swap(std::declval<_Tp>(), std::declval<_Up>())), typename = decltype(swap(std::declval<_Up>(), std::declval<_Tp>()))>
            static true_type __test(int);

            template <typename, typename> static false_type __test(...);
        };

        struct __do_is_nothrow_swappable_with_impl
        {
            template <typename _Tp, typename _Up>
            static __bool_constant<noexcept(swap(std::declval<_Tp>(), std::declval<_Up>())) && noexcept(swap(std::declval<_Up>(), std::declval<_Tp>()))> __test(int);

            template <typename, typename> static false_type __test(...);
        };

        } // namespace __swappable_with_details

        template <typename _Tp, typename _Up> struct __is_swappable_with_impl : public __swappable_with_details::__do_is_swappable_with_impl
        {
            typedef decltype(__test<_Tp, _Up>(0)) type;
        };

        template <typename _Tp> struct __is_swappable_with_impl<_Tp&, _Tp&> : public __swappable_details::__do_is_swappable_impl
        {
            typedef decltype(__test<_Tp&>(0)) type;
        };

        template <typename _Tp, typename _Up> struct __is_nothrow_swappable_with_impl : public __swappable_with_details::__do_is_nothrow_swappable_with_impl
        {
            typedef decltype(__test<_Tp, _Up>(0)) type;
        };

        template <typename _Tp> struct __is_nothrow_swappable_with_impl<_Tp&, _Tp&> : public __swappable_details::__do_is_nothrow_swappable_impl
        {
            typedef decltype(__test<_Tp&>(0)) type;
        };

        template <typename _Tp, typename _Up> struct is_swappable_with : public __is_swappable_with_impl<_Tp, _Up>::type
        {
        };

        template <typename _Tp, typename _Up> struct is_nothrow_swappable_with : public __is_nothrow_swappable_with_impl<_Tp, _Up>::type
        {
        };

        template <typename _Tp, typename _Up> inline constexpr bool is_swappable_with_v = is_swappable_with<_Tp, _Up>::value;

        template <typename _Tp, typename _Up> inline constexpr bool is_nothrow_swappable_with_v = is_nothrow_swappable_with<_Tp, _Up>::value;

        template <typename _Result, typename _Ret, bool = is_void<_Ret>::value, typename = void> struct __is_invocable_impl : false_type
        {
        };

        template <typename _Result, typename _Ret> struct __is_invocable_impl<_Result, _Ret, true, __void_t<typename _Result::type>> : true_type
        {
        };

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"

        template <typename _Result, typename _Ret> struct __is_invocable_impl<_Result, _Ret, false, __void_t<typename _Result::type>>
        {
          private:
            static typename _Result::type _S_get();

            template <typename _Tp> static void _S_conv(_Tp);

            template <typename _Tp, typename = decltype(_S_conv<_Tp>(_S_get()))> static true_type _S_test(int);

            template <typename _Tp> static false_type _S_test(...);

          public:
            using type = decltype(_S_test<_Ret>(1));
        };
#pragma GCC diagnostic pop

        template <typename _Fn, typename... _ArgTypes> struct __is_invocable : __is_invocable_impl<__invoke_result<_Fn, _ArgTypes...>, void>::type
        {
        };

        template <typename _Fn, typename _Tp, typename... _Args> constexpr bool __call_is_nt(__invoke_memfun_ref)
        {
            using _Up = typename __inv_unwrap<_Tp>::type;
            return noexcept((std::declval<_Up>().*std::declval<_Fn>())(std::declval<_Args>()...));
        }

        template <typename _Fn, typename _Tp, typename... _Args> constexpr bool __call_is_nt(__invoke_memfun_deref)
        {
            return noexcept(((*std::declval<_Tp>()).*std::declval<_Fn>())(std::declval<_Args>()...));
        }

        template <typename _Fn, typename _Tp> constexpr bool __call_is_nt(__invoke_memobj_ref)
        {
            using _Up = typename __inv_unwrap<_Tp>::type;
            return noexcept(std::declval<_Up>().*std::declval<_Fn>());
        }

        template <typename _Fn, typename _Tp> constexpr bool __call_is_nt(__invoke_memobj_deref)
        {
            return noexcept((*std::declval<_Tp>()).*std::declval<_Fn>());
        }

        template <typename _Fn, typename... _Args> constexpr bool __call_is_nt(__invoke_other)
        {
            return noexcept(std::declval<_Fn>()(std::declval<_Args>()...));
        }

        template <typename _Result, typename _Fn, typename... _Args> struct __call_is_nothrow : __bool_constant<std::__call_is_nt<_Fn, _Args...>(typename _Result::__invoke_type{})>
        {
        };

        template <typename _Fn, typename... _Args> using __call_is_nothrow_ = __call_is_nothrow<__invoke_result<_Fn, _Args...>, _Fn, _Args...>;

        template <typename _Fn, typename... _Args> struct __is_nothrow_invocable : __and_<__is_invocable<_Fn, _Args...>, __call_is_nothrow_<_Fn, _Args...>>::type
        {
        };

        struct __nonesuch
        {
            __nonesuch() = delete;
            ~__nonesuch() = delete;
            __nonesuch(__nonesuch const&) = delete;
            void operator=(__nonesuch const&) = delete;
        };

        template <typename _Functor, typename... _ArgTypes> struct invoke_result : public __invoke_result<_Functor, _ArgTypes...>
        {
        };

        template <typename _Fn, typename... _Args> using invoke_result_t = typename invoke_result<_Fn, _Args...>::type;

        template <typename _Fn, typename... _ArgTypes> struct is_invocable : __is_invocable_impl<__invoke_result<_Fn, _ArgTypes...>, void>::type
        {
        };

        template <typename _Ret, typename _Fn, typename... _ArgTypes> struct is_invocable_r : __is_invocable_impl<__invoke_result<_Fn, _ArgTypes...>, _Ret>::type
        {
        };

        template <typename _Fn, typename... _ArgTypes> struct is_nothrow_invocable : __and_<__is_invocable_impl<__invoke_result<_Fn, _ArgTypes...>, void>, __call_is_nothrow_<_Fn, _ArgTypes...>>::type
        {
        };

        template <typename _Result, typename _Ret, typename = void> struct __is_nt_invocable_impl : false_type
        {
        };

        template <typename _Result, typename _Ret>
        struct __is_nt_invocable_impl<_Result, _Ret, __void_t<typename _Result::type>>
            : __or_<is_void<_Ret>, __and_<is_convertible<typename _Result::type, _Ret>, is_nothrow_constructible<_Ret, typename _Result::type>>>
        {
        };

        template <typename _Ret, typename _Fn, typename... _ArgTypes>
        struct is_nothrow_invocable_r : __and_<__is_nt_invocable_impl<__invoke_result<_Fn, _ArgTypes...>, _Ret>, __call_is_nothrow_<_Fn, _ArgTypes...>>::type
        {
        };

        template <typename _Fn, typename... _Args> inline constexpr bool is_invocable_v = is_invocable<_Fn, _Args...>::value;

        template <typename _Fn, typename... _Args> inline constexpr bool is_nothrow_invocable_v = is_nothrow_invocable<_Fn, _Args...>::value;

        template <typename _Fn, typename... _Args> inline constexpr bool is_invocable_r_v = is_invocable_r<_Fn, _Args...>::value;

        template <typename _Fn, typename... _Args> inline constexpr bool is_nothrow_invocable_r_v = is_nothrow_invocable_r<_Fn, _Args...>::value;

        template <typename _Tp> inline constexpr bool is_void_v = is_void<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_null_pointer_v = is_null_pointer<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_integral_v = is_integral<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_floating_point_v = is_floating_point<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_array_v = is_array<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_pointer_v = is_pointer<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_lvalue_reference_v = is_lvalue_reference<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_rvalue_reference_v = is_rvalue_reference<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_member_object_pointer_v = is_member_object_pointer<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_member_function_pointer_v = is_member_function_pointer<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_enum_v = is_enum<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_union_v = is_union<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_class_v = is_class<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_function_v = is_function<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_reference_v = is_reference<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_arithmetic_v = is_arithmetic<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_fundamental_v = is_fundamental<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_object_v = is_object<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_scalar_v = is_scalar<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_compound_v = is_compound<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_member_pointer_v = is_member_pointer<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_const_v = is_const<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_volatile_v = is_volatile<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_trivial_v = is_trivial<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_trivially_copyable_v = is_trivially_copyable<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_standard_layout_v = is_standard_layout<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_pod_v = is_pod<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_literal_type_v = is_literal_type<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_empty_v = is_empty<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_polymorphic_v = is_polymorphic<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_abstract_v = is_abstract<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_final_v = is_final<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_signed_v = is_signed<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_unsigned_v = is_unsigned<_Tp>::value;
        template <typename _Tp, typename... _Args> inline constexpr bool is_constructible_v = is_constructible<_Tp, _Args...>::value;
        template <typename _Tp> inline constexpr bool is_default_constructible_v = is_default_constructible<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_copy_constructible_v = is_copy_constructible<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_move_constructible_v = is_move_constructible<_Tp>::value;
        template <typename _Tp, typename _Up> inline constexpr bool is_assignable_v = is_assignable<_Tp, _Up>::value;
        template <typename _Tp> inline constexpr bool is_copy_assignable_v = is_copy_assignable<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_move_assignable_v = is_move_assignable<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_destructible_v = is_destructible<_Tp>::value;
        template <typename _Tp, typename... _Args> inline constexpr bool is_trivially_constructible_v = is_trivially_constructible<_Tp, _Args...>::value;
        template <typename _Tp> inline constexpr bool is_trivially_default_constructible_v = is_trivially_default_constructible<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_trivially_copy_constructible_v = is_trivially_copy_constructible<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_trivially_move_constructible_v = is_trivially_move_constructible<_Tp>::value;
        template <typename _Tp, typename _Up> inline constexpr bool is_trivially_assignable_v = is_trivially_assignable<_Tp, _Up>::value;
        template <typename _Tp> inline constexpr bool is_trivially_copy_assignable_v = is_trivially_copy_assignable<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_trivially_move_assignable_v = is_trivially_move_assignable<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_trivially_destructible_v = is_trivially_destructible<_Tp>::value;
        template <typename _Tp, typename... _Args> inline constexpr bool is_nothrow_constructible_v = is_nothrow_constructible<_Tp, _Args...>::value;
        template <typename _Tp> inline constexpr bool is_nothrow_default_constructible_v = is_nothrow_default_constructible<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_nothrow_copy_constructible_v = is_nothrow_copy_constructible<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_nothrow_move_constructible_v = is_nothrow_move_constructible<_Tp>::value;
        template <typename _Tp, typename _Up> inline constexpr bool is_nothrow_assignable_v = is_nothrow_assignable<_Tp, _Up>::value;
        template <typename _Tp> inline constexpr bool is_nothrow_copy_assignable_v = is_nothrow_copy_assignable<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_nothrow_move_assignable_v = is_nothrow_move_assignable<_Tp>::value;
        template <typename _Tp> inline constexpr bool is_nothrow_destructible_v = is_nothrow_destructible<_Tp>::value;
        template <typename _Tp> inline constexpr bool has_virtual_destructor_v = has_virtual_destructor<_Tp>::value;
        template <typename _Tp> inline constexpr size_t alignment_of_v = alignment_of<_Tp>::value;
        template <typename _Tp> inline constexpr size_t rank_v = rank<_Tp>::value;
        template <typename _Tp, unsigned _Idx = 0> inline constexpr size_t extent_v = extent<_Tp, _Idx>::value;
        template <typename _Tp, typename _Up> inline constexpr bool is_same_v = is_same<_Tp, _Up>::value;
        template <typename _Base, typename _Derived> inline constexpr bool is_base_of_v = is_base_of<_Base, _Derived>::value;
        template <typename _From, typename _To> inline constexpr bool is_convertible_v = is_convertible<_From, _To>::value;

        template <typename _Tp> struct has_unique_object_representations : bool_constant<__has_unique_object_representations(remove_cv_t<remove_all_extents_t<_Tp>>)>
        {
        };

        template <typename _Tp> inline constexpr bool has_unique_object_representations_v = has_unique_object_representations<_Tp>::value;

        template <typename _Tp> struct is_aggregate : bool_constant<__is_aggregate(remove_cv_t<_Tp>)>
        {
        };

        template <typename _Tp> inline constexpr bool is_aggregate_v = is_aggregate<_Tp>::value;

        template <typename _Tp> struct remove_cvref
        {
            using type = __remove_cvref_t<_Tp>;
        };

        template <typename _Tp> using remove_cvref_t = __remove_cvref_t<_Tp>;

        template <typename _Tp> struct type_identity
        {
            using type = _Tp;
        };

        template <typename _Tp> using type_identity_t = typename type_identity<_Tp>::type;

        template <typename _Tp> struct unwrap_reference
        {
            using type = _Tp;
        };

        template <typename _Tp> struct unwrap_reference<reference_wrapper<_Tp>>
        {
            using type = _Tp&;
        };

        template <typename _Tp> using unwrap_reference_t = typename unwrap_reference<_Tp>::type;

        template <typename _Tp> struct unwrap_ref_decay
        {
            using type = unwrap_reference_t<decay_t<_Tp>>;
        };

        template <typename _Tp> using unwrap_ref_decay_t = typename unwrap_ref_decay<_Tp>::type;

        template <typename _Tp> struct is_bounded_array : public __is_array_known_bounds<_Tp>
        {
        };

        template <typename _Tp> struct is_unbounded_array : public __is_array_unknown_bounds<_Tp>
        {
        };

        template <typename _Tp> inline constexpr bool is_bounded_array_v = is_bounded_array<_Tp>::value;

        template <typename _Tp> inline constexpr bool is_unbounded_array_v = is_unbounded_array<_Tp>::value;

        constexpr inline bool is_constant_evaluated() noexcept
        {
            return __builtin_is_constant_evaluated();
        }

    } // namespace )

    namespace std __attribute__((__visibility__("default")))
    {
        template <typename _Tp> constexpr _Tp&& forward(typename std::remove_reference<_Tp>::type & __t) noexcept
        {
            return static_cast<_Tp&&>(__t);
        }

        template <typename _Tp> constexpr _Tp&& forward(typename std::remove_reference<_Tp>::type && __t) noexcept
        {
            static_assert(!std::is_lvalue_reference<_Tp>::value, "template argument"
                                                                 " substituting _Tp is an lvalue reference type");
            return static_cast<_Tp&&>(__t);
        }

        template <typename _Tp> constexpr typename std::remove_reference<_Tp>::type&& move(_Tp && __t) noexcept
        {
            return static_cast<typename std::remove_reference<_Tp>::type&&>(__t);
        }

        template <typename _Tp> struct __move_if_noexcept_cond : public __and_<__not_<is_nothrow_move_constructible<_Tp>>, is_copy_constructible<_Tp>>::type
        {
        };
        template <typename _Tp> constexpr typename conditional<__move_if_noexcept_cond<_Tp>::value, const _Tp&, _Tp&&>::type move_if_noexcept(_Tp & __x) noexcept
        {
            return std::move(__x);
        }
        template <typename _Tp> inline constexpr _Tp* addressof(_Tp & __r) noexcept
        {
            return std::__addressof(__r);
        }

        template <typename _Tp> const _Tp* addressof(const _Tp&&) = delete;

        template <typename _Tp, typename _Up = _Tp> inline _Tp __exchange(_Tp & __obj, _Up && __new_val)
        {
            _Tp __old_val = std::move(__obj);
            __obj = std::forward<_Up>(__new_val);
            return __old_val;
        }
        template <typename _Tp>
        inline

            typename enable_if<__and_<__not_<__is_tuple_like<_Tp>>, is_move_constructible<_Tp>, is_move_assignable<_Tp>>::value>::type swap(_Tp & __a, _Tp & __b) noexcept(
                __and_<is_nothrow_move_constructible<_Tp>, is_nothrow_move_assignable<_Tp>>::value)

        {

            _Tp __tmp = std::move(__a);
            __a = std::move(__b);
            __b = std::move(__tmp);
        }

        template <typename _Tp, size_t _Nm>
        inline

            typename enable_if<__is_swappable<_Tp>::value>::type swap(_Tp(&__a)[_Nm], _Tp(&__b)[_Nm]) noexcept(__is_nothrow_swappable<_Tp>::value)

        {
            for (size_t __n = 0; __n < _Nm; ++__n)
                swap(__a[__n], __b[__n]);
        }

    } // namespace )

    namespace std __attribute__((__visibility__("default")))
    {
        struct piecewise_construct_t
        {
            explicit piecewise_construct_t() = default;
        };

        inline constexpr piecewise_construct_t piecewise_construct = piecewise_construct_t();

        template <typename...> class tuple;

        template <std::size_t...> struct _Index_tuple;

        template <bool, typename _T1, typename _T2> struct _PCC
        {
            template <typename _U1, typename _U2> static constexpr bool _ConstructiblePair()
            {
                return __and_<is_constructible<_T1, const _U1&>, is_constructible<_T2, const _U2&>>::value;
            }

            template <typename _U1, typename _U2> static constexpr bool _ImplicitlyConvertiblePair()
            {
                return __and_<is_convertible<const _U1&, _T1>, is_convertible<const _U2&, _T2>>::value;
            }

            template <typename _U1, typename _U2> static constexpr bool _MoveConstructiblePair()
            {
                return __and_<is_constructible<_T1, _U1&&>, is_constructible<_T2, _U2&&>>::value;
            }

            template <typename _U1, typename _U2> static constexpr bool _ImplicitlyMoveConvertiblePair()
            {
                return __and_<is_convertible<_U1&&, _T1>, is_convertible<_U2&&, _T2>>::value;
            }

            template <bool __implicit, typename _U1, typename _U2> static constexpr bool _CopyMovePair()
            {
                using __do_converts = __and_<is_convertible<const _U1&, _T1>, is_convertible<_U2&&, _T2>>;
                using __converts = typename conditional<__implicit, __do_converts, __not_<__do_converts>>::type;
                return __and_<is_constructible<_T1, const _U1&>, is_constructible<_T2, _U2&&>, __converts>::value;
            }

            template <bool __implicit, typename _U1, typename _U2> static constexpr bool _MoveCopyPair()
            {
                using __do_converts = __and_<is_convertible<_U1&&, _T1>, is_convertible<const _U2&, _T2>>;
                using __converts = typename conditional<__implicit, __do_converts, __not_<__do_converts>>::type;
                return __and_<is_constructible<_T1, _U1&&>, is_constructible<_T2, const _U2&&>, __converts>::value;
            }
        };

        template <typename _T1, typename _T2> struct _PCC<false, _T1, _T2>
        {
            template <typename _U1, typename _U2> static constexpr bool _ConstructiblePair()
            {
                return false;
            }

            template <typename _U1, typename _U2> static constexpr bool _ImplicitlyConvertiblePair()
            {
                return false;
            }

            template <typename _U1, typename _U2> static constexpr bool _MoveConstructiblePair()
            {
                return false;
            }

            template <typename _U1, typename _U2> static constexpr bool _ImplicitlyMoveConvertiblePair()
            {
                return false;
            }
        };

        struct __nonesuch_no_braces : std::__nonesuch
        {
            explicit __nonesuch_no_braces(const __nonesuch&) = delete;
        };

        template <typename _U1, typename _U2> class __pair_base
        {

            template <typename _T1, typename _T2> friend struct pair;
            __pair_base() = default;
            ~__pair_base() = default;
            __pair_base(const __pair_base&) = default;
            __pair_base& operator=(const __pair_base&) = delete;
        };

        template <typename _T1, typename _T2> struct pair : private __pair_base<_T1, _T2>
        {
            typedef _T1 first_type;
            typedef _T2 second_type;

            _T1 first;
            _T2 second;

            template <typename _U1 = _T1, typename _U2 = _T2,
                      typename enable_if<__and_<__is_implicitly_default_constructible<_U1>, __is_implicitly_default_constructible<_U2>>::value, bool>::type = true>

            constexpr pair() : first(), second()
            {
            }

            template <typename _U1 = _T1, typename _U2 = _T2,
                      typename enable_if<__and_<is_default_constructible<_U1>, is_default_constructible<_U2>,
                                                __not_<__and_<__is_implicitly_default_constructible<_U1>, __is_implicitly_default_constructible<_U2>>>>::value,
                                         bool>::type = false>
            explicit constexpr pair() : first(), second()
            {
            }
            using _PCCP = _PCC<true, _T1, _T2>;

            template <typename _U1 = _T1, typename _U2 = _T2,
                      typename enable_if<_PCCP::template _ConstructiblePair<_U1, _U2>() && _PCCP::template _ImplicitlyConvertiblePair<_U1, _U2>(), bool>::type = true>
            constexpr pair(const _T1& __a, const _T2& __b) : first(__a), second(__b)
            {
            }

            template <typename _U1 = _T1, typename _U2 = _T2,
                      typename enable_if<_PCCP::template _ConstructiblePair<_U1, _U2>() && !_PCCP::template _ImplicitlyConvertiblePair<_U1, _U2>(), bool>::type = false>
            explicit constexpr pair(const _T1& __a, const _T2& __b) : first(__a), second(__b)
            {
            }
            template <typename _U1, typename _U2> using _PCCFP = _PCC<!is_same<_T1, _U1>::value || !is_same<_T2, _U2>::value, _T1, _T2>;

            template <typename _U1, typename _U2,
                      typename enable_if<_PCCFP<_U1, _U2>::template _ConstructiblePair<_U1, _U2>() && _PCCFP<_U1, _U2>::template _ImplicitlyConvertiblePair<_U1, _U2>(), bool>::type = true>
            constexpr pair(const pair<_U1, _U2>& __p) : first(__p.first), second(__p.second)
            {
            }

            template <typename _U1, typename _U2,
                      typename enable_if<_PCCFP<_U1, _U2>::template _ConstructiblePair<_U1, _U2>() && !_PCCFP<_U1, _U2>::template _ImplicitlyConvertiblePair<_U1, _U2>(), bool>::type = false>
            explicit constexpr pair(const pair<_U1, _U2>& __p) : first(__p.first), second(__p.second)
            {
            }

            constexpr pair(const pair&) = default;
            constexpr pair(pair&&) = default;

            template <typename _U1, typename enable_if<_PCCP::template _MoveCopyPair<true, _U1, _T2>(), bool>::type = true>
            constexpr pair(_U1&& __x, const _T2& __y) : first(std::forward<_U1>(__x)), second(__y)
            {
            }

            template <typename _U1, typename enable_if<_PCCP::template _MoveCopyPair<false, _U1, _T2>(), bool>::type = false>
            explicit constexpr pair(_U1&& __x, const _T2& __y) : first(std::forward<_U1>(__x)), second(__y)
            {
            }

            template <typename _U2, typename enable_if<_PCCP::template _CopyMovePair<true, _T1, _U2>(), bool>::type = true>
            constexpr pair(const _T1& __x, _U2&& __y) : first(__x), second(std::forward<_U2>(__y))
            {
            }

            template <typename _U2, typename enable_if<_PCCP::template _CopyMovePair<false, _T1, _U2>(), bool>::type = false>
            explicit pair(const _T1& __x, _U2&& __y) : first(__x), second(std::forward<_U2>(__y))
            {
            }

            template <typename _U1, typename _U2,
                      typename enable_if<_PCCP::template _MoveConstructiblePair<_U1, _U2>() && _PCCP::template _ImplicitlyMoveConvertiblePair<_U1, _U2>(), bool>::type = true>
            constexpr pair(_U1&& __x, _U2&& __y) : first(std::forward<_U1>(__x)), second(std::forward<_U2>(__y))
            {
            }

            template <typename _U1, typename _U2,
                      typename enable_if<_PCCP::template _MoveConstructiblePair<_U1, _U2>() && !_PCCP::template _ImplicitlyMoveConvertiblePair<_U1, _U2>(), bool>::type = false>
            explicit constexpr pair(_U1&& __x, _U2&& __y) : first(std::forward<_U1>(__x)), second(std::forward<_U2>(__y))
            {
            }

            template <typename _U1, typename _U2,
                      typename enable_if<_PCCFP<_U1, _U2>::template _MoveConstructiblePair<_U1, _U2>() && _PCCFP<_U1, _U2>::template _ImplicitlyMoveConvertiblePair<_U1, _U2>(), bool>::type = true>
            constexpr pair(pair<_U1, _U2>&& __p) : first(std::forward<_U1>(__p.first)), second(std::forward<_U2>(__p.second))
            {
            }

            template <typename _U1, typename _U2,
                      typename enable_if<_PCCFP<_U1, _U2>::template _MoveConstructiblePair<_U1, _U2>() && !_PCCFP<_U1, _U2>::template _ImplicitlyMoveConvertiblePair<_U1, _U2>(), bool>::type = false>
            explicit constexpr pair(pair<_U1, _U2>&& __p) : first(std::forward<_U1>(__p.first)), second(std::forward<_U2>(__p.second))
            {
            }

            template <typename... _Args1, typename... _Args2> pair(piecewise_construct_t, tuple<_Args1...>, tuple<_Args2...>);

            pair& operator=(typename conditional<__and_<is_copy_assignable<_T1>, is_copy_assignable<_T2>>::value, const pair&, const __nonesuch_no_braces&>::type __p)
            {
                first = __p.first;
                second = __p.second;
                return *this;
            }

            pair& operator=(typename conditional<__and_<is_move_assignable<_T1>, is_move_assignable<_T2>>::value, pair&&, __nonesuch_no_braces&&>::type __p) noexcept(
                __and_<is_nothrow_move_assignable<_T1>, is_nothrow_move_assignable<_T2>>::value)
            {
                first = std::forward<first_type>(__p.first);
                second = std::forward<second_type>(__p.second);
                return *this;
            }

            template <typename _U1, typename _U2> typename enable_if<__and_<is_assignable<_T1&, const _U1&>, is_assignable<_T2&, const _U2&>>::value, pair&>::type operator=(const pair<_U1, _U2>& __p)
            {
                first = __p.first;
                second = __p.second;
                return *this;
            }

            template <typename _U1, typename _U2> typename enable_if<__and_<is_assignable<_T1&, _U1&&>, is_assignable<_T2&, _U2&&>>::value, pair&>::type operator=(pair<_U1, _U2>&& __p)
            {
                first = std::forward<_U1>(__p.first);
                second = std::forward<_U2>(__p.second);
                return *this;
            }

            void swap(pair& __p) noexcept(__and_<__is_nothrow_swappable<_T1>, __is_nothrow_swappable<_T2>>::value)
            {
                using std::swap;
                swap(first, __p.first);
                swap(second, __p.second);
            }

          private:
            template <typename... _Args1, std::size_t... _Indexes1, typename... _Args2, std::size_t... _Indexes2>
            pair(tuple<_Args1...>&, tuple<_Args2...>&, _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
        };

        template <typename _T1, typename _T2> pair(_T1, _T2) -> pair<_T1, _T2>;

        template <typename _T1, typename _T2> inline constexpr bool operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
        {
            return __x.first == __y.first && __x.second == __y.second;
        }

        template <typename _T1, typename _T2> inline constexpr bool operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
        {
            return __x.first < __y.first || (!(__y.first < __x.first) && __x.second < __y.second);
        }

        template <typename _T1, typename _T2> inline constexpr bool operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
        {
            return !(__x == __y);
        }

        template <typename _T1, typename _T2> inline constexpr bool operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
        {
            return __y < __x;
        }

        template <typename _T1, typename _T2> inline constexpr bool operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
        {
            return !(__y < __x);
        }

        template <typename _T1, typename _T2> inline constexpr bool operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
        {
            return !(__x < __y);
        }

        template <typename _T1, typename _T2>
        inline

            typename enable_if<__and_<__is_swappable<_T1>, __is_swappable<_T2>>::value>::type

                swap(pair<_T1, _T2> & __x, pair<_T1, _T2> & __y) noexcept(noexcept(__x.swap(__y)))
        {
            __x.swap(__y);
        }

        template <typename _T1, typename _T2> typename enable_if<!__and_<__is_swappable<_T1>, __is_swappable<_T2>>::value>::type swap(pair<_T1, _T2>&, pair<_T1, _T2>&) = delete;
        template <typename _T1, typename _T2> constexpr pair<typename __decay_and_strip<_T1>::__type, typename __decay_and_strip<_T2>::__type> make_pair(_T1 && __x, _T2 && __y)
        {
            typedef typename __decay_and_strip<_T1>::__type __ds_type1;
            typedef typename __decay_and_strip<_T2>::__type __ds_type2;
            typedef pair<__ds_type1, __ds_type2> __pair_type;
            return __pair_type(std::forward<_T1>(__x), std::forward<_T2>(__y));
        }
    } // namespace )

    namespace std __attribute__((__visibility__("default")))
    {
        struct input_iterator_tag
        {
        };

        struct output_iterator_tag
        {
        };

        struct forward_iterator_tag : public input_iterator_tag
        {
        };

        struct bidirectional_iterator_tag : public forward_iterator_tag
        {
        };

        struct random_access_iterator_tag : public bidirectional_iterator_tag
        {
        };
        template <typename _Category, typename _Tp, typename _Distance = ptrdiff_t, typename _Pointer = _Tp*, typename _Reference = _Tp&> struct iterator
        {

            typedef _Category iterator_category;

            typedef _Tp value_type;

            typedef _Distance difference_type;

            typedef _Pointer pointer;

            typedef _Reference reference;
        };
        template <typename _Iterator, typename = __void_t<>> struct __iterator_traits
        {
        };

        template <typename _Iterator>
        struct __iterator_traits<
            _Iterator, __void_t<typename _Iterator::iterator_category, typename _Iterator::value_type, typename _Iterator::difference_type, typename _Iterator::pointer, typename _Iterator::reference>>
        {
            typedef typename _Iterator::iterator_category iterator_category;
            typedef typename _Iterator::value_type value_type;
            typedef typename _Iterator::difference_type difference_type;
            typedef typename _Iterator::pointer pointer;
            typedef typename _Iterator::reference reference;
        };

        template <typename _Iterator> struct iterator_traits : public __iterator_traits<_Iterator>
        {
        };
        template <typename _Tp> struct iterator_traits<_Tp*>
        {
            typedef random_access_iterator_tag iterator_category;
            typedef _Tp value_type;
            typedef ptrdiff_t difference_type;
            typedef _Tp* pointer;
            typedef _Tp& reference;
        };

        template <typename _Tp> struct iterator_traits<const _Tp*>
        {
            typedef random_access_iterator_tag iterator_category;
            typedef _Tp value_type;
            typedef ptrdiff_t difference_type;
            typedef const _Tp* pointer;
            typedef const _Tp& reference;
        };

        template <typename _Iter> inline constexpr typename iterator_traits<_Iter>::iterator_category __iterator_category(const _Iter&)
        {
            return typename iterator_traits<_Iter>::iterator_category();
        }
        template <typename _InIter> using _RequireInputIter = typename enable_if<is_convertible<typename iterator_traits<_InIter>::iterator_category, input_iterator_tag>::value>::type;

    } // namespace )

    namespace std __attribute__((__visibility__("default")))
    {

        template <typename> struct _List_iterator;
        template <typename> struct _List_const_iterator;

        template <typename _InputIterator> inline constexpr typename iterator_traits<_InputIterator>::difference_type __distance(_InputIterator __first, _InputIterator __last, input_iterator_tag)
        {

            typename iterator_traits<_InputIterator>::difference_type __n = 0;
            while (__first != __last)
            {
                ++__first;
                ++__n;
            }
            return __n;
        }

        template <typename _RandomAccessIterator>
        inline constexpr typename iterator_traits<_RandomAccessIterator>::difference_type __distance(_RandomAccessIterator __first, _RandomAccessIterator __last, random_access_iterator_tag)
        {

            return __last - __first;
        }

        template <typename _Tp> ptrdiff_t __distance(std::_List_iterator<_Tp>, std::_List_iterator<_Tp>, input_iterator_tag);

        template <typename _Tp> ptrdiff_t __distance(std::_List_const_iterator<_Tp>, std::_List_const_iterator<_Tp>, input_iterator_tag);
        template <typename _InputIterator> inline constexpr typename iterator_traits<_InputIterator>::difference_type distance(_InputIterator __first, _InputIterator __last)
        {

            return std::__distance(__first, __last, std::__iterator_category(__first));
        }

        template <typename _InputIterator, typename _Distance> inline constexpr void __advance(_InputIterator & __i, _Distance __n, input_iterator_tag)
        {

            ;
            while (__n--)
                ++__i;
        }

        template <typename _BidirectionalIterator, typename _Distance> inline constexpr void __advance(_BidirectionalIterator & __i, _Distance __n, bidirectional_iterator_tag)
        {

            if (__n > 0)
                while (__n--)
                    ++__i;
            else
                while (__n++)
                    --__i;
        }

        template <typename _RandomAccessIterator, typename _Distance> inline constexpr void __advance(_RandomAccessIterator & __i, _Distance __n, random_access_iterator_tag)
        {

            if (__builtin_constant_p(__n) && __n == 1)
                ++__i;
            else if (__builtin_constant_p(__n) && __n == -1)
                --__i;
            else
                __i += __n;
        }
        template <typename _InputIterator, typename _Distance> inline constexpr void advance(_InputIterator & __i, _Distance __n)
        {

            typename iterator_traits<_InputIterator>::difference_type __d = __n;
            std::__advance(__i, __d, std::__iterator_category(__i));
        }

        template <typename _InputIterator> inline constexpr _InputIterator next(_InputIterator __x, typename iterator_traits<_InputIterator>::difference_type __n = 1)
        {

            std::advance(__x, __n);
            return __x;
        }

        template <typename _BidirectionalIterator> inline constexpr _BidirectionalIterator prev(_BidirectionalIterator __x, typename iterator_traits<_BidirectionalIterator>::difference_type __n = 1)
        {

            std::advance(__x, -__n);
            return __x;
        }

    } // namespace )
    namespace __gnu_debug
    {
    struct _Safe_iterator_base;
    }

    namespace std __attribute__((__visibility__("default")))
    {

        class __undefined;

        template <typename _Tp> struct __get_first_arg
        {
            using type = __undefined;
        };

        template <template <typename, typename...> class _Template, typename _Tp, typename... _Types> struct __get_first_arg<_Template<_Tp, _Types...>>
        {
            using type = _Tp;
        };

        template <typename _Tp> using __get_first_arg_t = typename __get_first_arg<_Tp>::type;

        template <typename _Tp, typename _Up> struct __replace_first_arg
        {
        };

        template <template <typename, typename...> class _Template, typename _Up, typename _Tp, typename... _Types> struct __replace_first_arg<_Template<_Tp, _Types...>, _Up>
        {
            using type = _Template<_Up, _Types...>;
        };

        template <typename _Tp, typename _Up> using __replace_first_arg_t = typename __replace_first_arg<_Tp, _Up>::type;

        template <typename _Tp> using __make_not_void = typename conditional<is_void<_Tp>::value, __undefined, _Tp>::type;

        template <typename _Ptr> struct pointer_traits
        {
          private:
            template <typename _Tp> using __element_type = typename _Tp::element_type;

            template <typename _Tp> using __difference_type = typename _Tp::difference_type;

            template <typename _Tp, typename _Up, typename = void> struct __rebind : __replace_first_arg<_Tp, _Up>
            {
            };

            template <typename _Tp, typename _Up> struct __rebind<_Tp, _Up, __void_t<typename _Tp::template rebind<_Up>>>
            {
                using type = typename _Tp::template rebind<_Up>;
            };

          public:
            using pointer = _Ptr;

            using element_type = __detected_or_t<__get_first_arg_t<_Ptr>, __element_type, _Ptr>;

            using difference_type = __detected_or_t<ptrdiff_t, __difference_type, _Ptr>;

            template <typename _Up> using rebind = typename __rebind<_Ptr, _Up>::type;

            static _Ptr pointer_to(__make_not_void<element_type>& __e)
            {
                return _Ptr::pointer_to(__e);
            }

            static_assert(!is_same<element_type, __undefined>::value, "pointer type defines element_type or is like SomePointer<T, Args>");
        };

        template <typename _Tp> struct pointer_traits<_Tp*>
        {

            typedef _Tp* pointer;

            typedef _Tp element_type;

            typedef ptrdiff_t difference_type;

            template <typename _Up> using rebind = _Up*;

            static constexpr pointer pointer_to(__make_not_void<element_type>& __r) noexcept
            {
                return std::addressof(__r);
            }
        };

        template <typename _Ptr, typename _Tp> using __ptr_rebind = typename pointer_traits<_Ptr>::template rebind<_Tp>;

        template <typename _Tp> constexpr _Tp* __to_address(_Tp * __ptr) noexcept
        {
            static_assert(!std::is_function<_Tp>::value, "not a function pointer");
            return __ptr;
        }

        template <typename _Ptr> constexpr auto __to_address(const _Ptr& __ptr) noexcept->decltype(std::pointer_traits<_Ptr>::to_address(__ptr))
        {
            return std::pointer_traits<_Ptr>::to_address(__ptr);
        }

        template <typename _Ptr, typename... _None> constexpr auto __to_address(const _Ptr& __ptr, _None...) noexcept
        {
            if constexpr (is_base_of_v<__gnu_debug::_Safe_iterator_base, _Ptr>)
                return std::__to_address(__ptr.base().operator->());
            else
                return std::__to_address(__ptr.operator->());
        }
        template <typename _Tp> constexpr _Tp* to_address(_Tp * __ptr) noexcept
        {
            return std::__to_address(__ptr);
        }
        template <typename _Ptr> constexpr auto to_address(const _Ptr& __ptr) noexcept
        {
            return std::__to_address(__ptr);
        }

    } // namespace )
    namespace std __attribute__((__visibility__("default")))
    {
        template <typename _Iterator>
        class reverse_iterator : public iterator<typename iterator_traits<_Iterator>::iterator_category, typename iterator_traits<_Iterator>::value_type,
                                                 typename iterator_traits<_Iterator>::difference_type, typename iterator_traits<_Iterator>::pointer, typename iterator_traits<_Iterator>::reference>
        {
          protected:
            _Iterator current;

            typedef iterator_traits<_Iterator> __traits_type;

          public:
            typedef _Iterator iterator_type;
            typedef typename __traits_type::difference_type difference_type;
            typedef typename __traits_type::pointer pointer;
            typedef typename __traits_type::reference reference;
            constexpr reverse_iterator() : current() {}

            explicit constexpr reverse_iterator(iterator_type __x) : current(__x) {}

            constexpr reverse_iterator(const reverse_iterator& __x) : current(__x.current) {}

            reverse_iterator& operator=(const reverse_iterator&) = default;

            template <typename _Iter> constexpr reverse_iterator(const reverse_iterator<_Iter>& __x) : current(__x.base()) {}

            constexpr iterator_type base() const
            {
                return current;
            }
            constexpr reference operator*() const
            {
                _Iterator __tmp = current;
                return *--__tmp;
            }

            constexpr pointer operator->() const
            {

                _Iterator __tmp = current;
                --__tmp;
                return _S_to_pointer(__tmp);
            }

            constexpr reverse_iterator& operator++()
            {
                --current;
                return *this;
            }

            constexpr reverse_iterator operator++(int)
            {
                reverse_iterator __tmp = *this;
                --current;
                return __tmp;
            }

            constexpr reverse_iterator& operator--()
            {
                ++current;
                return *this;
            }

            constexpr reverse_iterator operator--(int)
            {
                reverse_iterator __tmp = *this;
                ++current;
                return __tmp;
            }

            constexpr reverse_iterator operator+(difference_type __n) const
            {
                return reverse_iterator(current - __n);
            }

            constexpr reverse_iterator& operator+=(difference_type __n)
            {
                current -= __n;
                return *this;
            }

            constexpr reverse_iterator operator-(difference_type __n) const
            {
                return reverse_iterator(current + __n);
            }

            constexpr reverse_iterator& operator-=(difference_type __n)
            {
                current += __n;
                return *this;
            }

            constexpr reference operator[](difference_type __n) const
            {
                return *(*this + __n);
            }

          private:
            template <typename _Tp> static constexpr _Tp* _S_to_pointer(_Tp* __p)
            {
                return __p;
            }

            template <typename _Tp> static constexpr pointer _S_to_pointer(_Tp __t)
            {
                return __t.operator->();
            }
        };
        template <typename _Iterator> inline constexpr bool operator==(const reverse_iterator<_Iterator>& __x, const reverse_iterator<_Iterator>& __y)
        {
            return __x.base() == __y.base();
        }

        template <typename _Iterator> inline constexpr bool operator<(const reverse_iterator<_Iterator>& __x, const reverse_iterator<_Iterator>& __y)
        {
            return __y.base() < __x.base();
        }

        template <typename _Iterator> inline constexpr bool operator!=(const reverse_iterator<_Iterator>& __x, const reverse_iterator<_Iterator>& __y)
        {
            return !(__x == __y);
        }

        template <typename _Iterator> inline constexpr bool operator>(const reverse_iterator<_Iterator>& __x, const reverse_iterator<_Iterator>& __y)
        {
            return __y < __x;
        }

        template <typename _Iterator> inline constexpr bool operator<=(const reverse_iterator<_Iterator>& __x, const reverse_iterator<_Iterator>& __y)
        {
            return !(__y < __x);
        }

        template <typename _Iterator> inline constexpr bool operator>=(const reverse_iterator<_Iterator>& __x, const reverse_iterator<_Iterator>& __y)
        {
            return !(__x < __y);
        }

        template <typename _IteratorL, typename _IteratorR> inline constexpr bool operator==(const reverse_iterator<_IteratorL>& __x, const reverse_iterator<_IteratorR>& __y)
        {
            return __x.base() == __y.base();
        }

        template <typename _IteratorL, typename _IteratorR> inline constexpr bool operator<(const reverse_iterator<_IteratorL>& __x, const reverse_iterator<_IteratorR>& __y)
        {
            return __y.base() < __x.base();
        }

        template <typename _IteratorL, typename _IteratorR> inline constexpr bool operator!=(const reverse_iterator<_IteratorL>& __x, const reverse_iterator<_IteratorR>& __y)
        {
            return !(__x == __y);
        }

        template <typename _IteratorL, typename _IteratorR> inline constexpr bool operator>(const reverse_iterator<_IteratorL>& __x, const reverse_iterator<_IteratorR>& __y)
        {
            return __y < __x;
        }

        template <typename _IteratorL, typename _IteratorR> inline constexpr bool operator<=(const reverse_iterator<_IteratorL>& __x, const reverse_iterator<_IteratorR>& __y)
        {
            return !(__y < __x);
        }

        template <typename _IteratorL, typename _IteratorR> inline constexpr bool operator>=(const reverse_iterator<_IteratorL>& __x, const reverse_iterator<_IteratorR>& __y)
        {
            return !(__x < __y);
        }
        template <typename _IteratorL, typename _IteratorR>
        inline constexpr auto operator-(const reverse_iterator<_IteratorL>& __x, const reverse_iterator<_IteratorR>& __y)->decltype(__y.base() - __x.base())
        {
            return __y.base() - __x.base();
        }

        template <typename _Iterator> inline constexpr reverse_iterator<_Iterator> operator+(typename reverse_iterator<_Iterator>::difference_type __n, const reverse_iterator<_Iterator>& __x)
        {
            return reverse_iterator<_Iterator>(__x.base() - __n);
        }

        template <typename _Iterator> inline constexpr reverse_iterator<_Iterator> __make_reverse_iterator(_Iterator __i)
        {
            return reverse_iterator<_Iterator>(__i);
        }

        template <typename _Iterator> inline constexpr reverse_iterator<_Iterator> make_reverse_iterator(_Iterator __i)
        {
            return reverse_iterator<_Iterator>(__i);
        }

        template <typename _Iterator> auto __niter_base(reverse_iterator<_Iterator> __it)->decltype(__make_reverse_iterator(__niter_base(__it.base())))
        {
            return __make_reverse_iterator(__niter_base(__it.base()));
        }

        template <typename _Iterator> struct __is_move_iterator<reverse_iterator<_Iterator>> : __is_move_iterator<_Iterator>
        {
        };

        template <typename _Iterator> auto __miter_base(reverse_iterator<_Iterator> __it)->decltype(__make_reverse_iterator(__miter_base(__it.base())))
        {
            return __make_reverse_iterator(__miter_base(__it.base()));
        }
        template <typename _Container> class back_insert_iterator : public iterator<output_iterator_tag, void, void, void, void>
        {
          protected:
            _Container* container;

          public:
            typedef _Container container_type;

            explicit back_insert_iterator(_Container& __x) : container(std::__addressof(__x)) {}
            back_insert_iterator& operator=(const typename _Container::value_type& __value)
            {
                container->push_back(__value);
                return *this;
            }

            back_insert_iterator& operator=(typename _Container::value_type&& __value)
            {
                container->push_back(std::move(__value));
                return *this;
            }

            back_insert_iterator& operator*()
            {
                return *this;
            }

            back_insert_iterator& operator++()
            {
                return *this;
            }

            back_insert_iterator operator++(int)
            {
                return *this;
            }
        };
        template <typename _Container> inline back_insert_iterator<_Container> back_inserter(_Container & __x)
        {
            return back_insert_iterator<_Container>(__x);
        }
        template <typename _Container> class front_insert_iterator : public iterator<output_iterator_tag, void, void, void, void>
        {
          protected:
            _Container* container;

          public:
            typedef _Container container_type;

            explicit front_insert_iterator(_Container& __x) : container(std::__addressof(__x)) {}
            front_insert_iterator& operator=(const typename _Container::value_type& __value)
            {
                container->push_front(__value);
                return *this;
            }

            front_insert_iterator& operator=(typename _Container::value_type&& __value)
            {
                container->push_front(std::move(__value));
                return *this;
            }

            front_insert_iterator& operator*()
            {
                return *this;
            }

            front_insert_iterator& operator++()
            {
                return *this;
            }

            front_insert_iterator operator++(int)
            {
                return *this;
            }
        };
        template <typename _Container> inline front_insert_iterator<_Container> front_inserter(_Container & __x)
        {
            return front_insert_iterator<_Container>(__x);
        }
        template <typename _Container> class insert_iterator : public iterator<output_iterator_tag, void, void, void, void>
        {
          protected:
            _Container* container;
            typename _Container::iterator iter;

          public:
            typedef _Container container_type;

            insert_iterator(_Container& __x, typename _Container::iterator __i) : container(std::__addressof(__x)), iter(__i) {}
            insert_iterator& operator=(const typename _Container::value_type& __value)
            {
                iter = container->insert(iter, __value);
                ++iter;
                return *this;
            }

            insert_iterator& operator=(typename _Container::value_type&& __value)
            {
                iter = container->insert(iter, std::move(__value));
                ++iter;
                return *this;
            }

            insert_iterator& operator*()
            {
                return *this;
            }

            insert_iterator& operator++()
            {
                return *this;
            }

            insert_iterator& operator++(int)
            {
                return *this;
            }
        };
        template <typename _Container, typename _Iterator> inline insert_iterator<_Container> inserter(_Container & __x, _Iterator __i)
        {
            return insert_iterator<_Container>(__x, typename _Container::iterator(__i));
        }

    } // namespace )

    namespace __gnu_cxx __attribute__((__visibility__("default")))
    {
        using std::iterator;
        using std::iterator_traits;
        template <typename _Iterator, typename _Container> class __normal_iterator
        {
          protected:
            _Iterator _M_current;

            typedef iterator_traits<_Iterator> __traits_type;

          public:
            typedef _Iterator iterator_type;
            typedef typename __traits_type::iterator_category iterator_category;
            typedef typename __traits_type::value_type value_type;
            typedef typename __traits_type::difference_type difference_type;
            typedef typename __traits_type::reference reference;
            typedef typename __traits_type::pointer pointer;

            constexpr __normal_iterator() noexcept : _M_current(_Iterator()) {}

            explicit __normal_iterator(const _Iterator& __i) noexcept : _M_current(__i) {}

            template <typename _Iter>
            __normal_iterator(const __normal_iterator<_Iter, typename __enable_if<(std::__are_same<_Iter, typename _Container::pointer>::__value), _Container>::__type>& __i) noexcept
                : _M_current(__i.base())
            {
            }

            reference operator*() const noexcept
            {
                return *_M_current;
            }

            pointer operator->() const noexcept
            {
                return _M_current;
            }

            __normal_iterator& operator++() noexcept
            {
                ++_M_current;
                return *this;
            }

            __normal_iterator operator++(int) noexcept
            {
                return __normal_iterator(_M_current++);
            }

            __normal_iterator& operator--() noexcept
            {
                --_M_current;
                return *this;
            }

            __normal_iterator operator--(int) noexcept
            {
                return __normal_iterator(_M_current--);
            }

            reference operator[](difference_type __n) const noexcept
            {
                return _M_current[__n];
            }

            __normal_iterator& operator+=(difference_type __n) noexcept
            {
                _M_current += __n;
                return *this;
            }

            __normal_iterator operator+(difference_type __n) const noexcept
            {
                return __normal_iterator(_M_current + __n);
            }

            __normal_iterator& operator-=(difference_type __n) noexcept
            {
                _M_current -= __n;
                return *this;
            }

            __normal_iterator operator-(difference_type __n) const noexcept
            {
                return __normal_iterator(_M_current - __n);
            }

            const _Iterator& base() const noexcept
            {
                return _M_current;
            }
        };
        template <typename _IteratorL, typename _IteratorR, typename _Container>
        inline bool operator==(const __normal_iterator<_IteratorL, _Container>& __lhs, const __normal_iterator<_IteratorR, _Container>& __rhs) noexcept
        {
            return __lhs.base() == __rhs.base();
        }

        template <typename _Iterator, typename _Container> inline bool operator==(const __normal_iterator<_Iterator, _Container>& __lhs, const __normal_iterator<_Iterator, _Container>& __rhs) noexcept
        {
            return __lhs.base() == __rhs.base();
        }

        template <typename _IteratorL, typename _IteratorR, typename _Container>
        inline bool operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs, const __normal_iterator<_IteratorR, _Container>& __rhs) noexcept
        {
            return __lhs.base() != __rhs.base();
        }

        template <typename _Iterator, typename _Container> inline bool operator!=(const __normal_iterator<_Iterator, _Container>& __lhs, const __normal_iterator<_Iterator, _Container>& __rhs) noexcept
        {
            return __lhs.base() != __rhs.base();
        }

        template <typename _IteratorL, typename _IteratorR, typename _Container>
        inline bool operator<(const __normal_iterator<_IteratorL, _Container>& __lhs, const __normal_iterator<_IteratorR, _Container>& __rhs) noexcept
        {
            return __lhs.base() < __rhs.base();
        }

        template <typename _Iterator, typename _Container> inline bool operator<(const __normal_iterator<_Iterator, _Container>& __lhs, const __normal_iterator<_Iterator, _Container>& __rhs) noexcept
        {
            return __lhs.base() < __rhs.base();
        }

        template <typename _IteratorL, typename _IteratorR, typename _Container>
        inline bool operator>(const __normal_iterator<_IteratorL, _Container>& __lhs, const __normal_iterator<_IteratorR, _Container>& __rhs) noexcept
        {
            return __lhs.base() > __rhs.base();
        }

        template <typename _Iterator, typename _Container> inline bool operator>(const __normal_iterator<_Iterator, _Container>& __lhs, const __normal_iterator<_Iterator, _Container>& __rhs) noexcept
        {
            return __lhs.base() > __rhs.base();
        }

        template <typename _IteratorL, typename _IteratorR, typename _Container>
        inline bool operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs, const __normal_iterator<_IteratorR, _Container>& __rhs) noexcept
        {
            return __lhs.base() <= __rhs.base();
        }

        template <typename _Iterator, typename _Container> inline bool operator<=(const __normal_iterator<_Iterator, _Container>& __lhs, const __normal_iterator<_Iterator, _Container>& __rhs) noexcept
        {
            return __lhs.base() <= __rhs.base();
        }

        template <typename _IteratorL, typename _IteratorR, typename _Container>
        inline bool operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs, const __normal_iterator<_IteratorR, _Container>& __rhs) noexcept
        {
            return __lhs.base() >= __rhs.base();
        }

        template <typename _Iterator, typename _Container> inline bool operator>=(const __normal_iterator<_Iterator, _Container>& __lhs, const __normal_iterator<_Iterator, _Container>& __rhs) noexcept
        {
            return __lhs.base() >= __rhs.base();
        }

        template <typename _IteratorL, typename _IteratorR, typename _Container>

        inline auto operator-(const __normal_iterator<_IteratorL, _Container>& __lhs, const __normal_iterator<_IteratorR, _Container>& __rhs) noexcept->decltype(__lhs.base() - __rhs.base())

        {
            return __lhs.base() - __rhs.base();
        }

        template <typename _Iterator, typename _Container>
        inline typename __normal_iterator<_Iterator, _Container>::difference_type operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
                                                                                            const __normal_iterator<_Iterator, _Container>& __rhs) noexcept
        {
            return __lhs.base() - __rhs.base();
        }

        template <typename _Iterator, typename _Container>
        inline __normal_iterator<_Iterator, _Container> operator+(typename __normal_iterator<_Iterator, _Container>::difference_type __n, const __normal_iterator<_Iterator, _Container>& __i) noexcept
        {
            return __normal_iterator<_Iterator, _Container>(__i.base() + __n);
        }

    } // namespace )

    namespace std __attribute__((__visibility__("default")))
    {

        template <typename _Iterator, typename _Container>
        _Iterator __niter_base(__gnu_cxx::__normal_iterator<_Iterator, _Container> __it) noexcept(std::is_nothrow_copy_constructible<_Iterator>::value)
        {
            return __it.base();
        }
        template <typename _Iterator> class move_iterator
        {
          protected:
            _Iterator _M_current;

            typedef iterator_traits<_Iterator> __traits_type;
            typedef typename __traits_type::reference __base_ref;

          public:
            typedef _Iterator iterator_type;
            typedef typename __traits_type::iterator_category iterator_category;
            typedef typename __traits_type::value_type value_type;
            typedef typename __traits_type::difference_type difference_type;

            typedef _Iterator pointer;

            typedef typename conditional<is_reference<__base_ref>::value, typename remove_reference<__base_ref>::type&&, __base_ref>::type reference;

            constexpr move_iterator() : _M_current() {}

            explicit constexpr move_iterator(iterator_type __i) : _M_current(__i) {}

            template <typename _Iter> constexpr move_iterator(const move_iterator<_Iter>& __i) : _M_current(__i.base()) {}

            constexpr iterator_type base() const
            {
                return _M_current;
            }

            constexpr reference operator*() const
            {
                return static_cast<reference>(*_M_current);
            }

            constexpr pointer operator->() const
            {
                return _M_current;
            }

            constexpr move_iterator& operator++()
            {
                ++_M_current;
                return *this;
            }

            constexpr move_iterator operator++(int)
            {
                move_iterator __tmp = *this;
                ++_M_current;
                return __tmp;
            }

            constexpr move_iterator& operator--()
            {
                --_M_current;
                return *this;
            }

            constexpr move_iterator operator--(int)
            {
                move_iterator __tmp = *this;
                --_M_current;
                return __tmp;
            }

            constexpr move_iterator operator+(difference_type __n) const
            {
                return move_iterator(_M_current + __n);
            }

            constexpr move_iterator& operator+=(difference_type __n)
            {
                _M_current += __n;
                return *this;
            }

            constexpr move_iterator operator-(difference_type __n) const
            {
                return move_iterator(_M_current - __n);
            }

            constexpr move_iterator& operator-=(difference_type __n)
            {
                _M_current -= __n;
                return *this;
            }

            constexpr reference operator[](difference_type __n) const
            {
                return std::move(_M_current[__n]);
            }
        };

        template <typename _IteratorL, typename _IteratorR> inline constexpr bool operator==(const move_iterator<_IteratorL>& __x, const move_iterator<_IteratorR>& __y)
        {
            return __x.base() == __y.base();
        }

        template <typename _Iterator> inline constexpr bool operator==(const move_iterator<_Iterator>& __x, const move_iterator<_Iterator>& __y)
        {
            return __x.base() == __y.base();
        }

        template <typename _IteratorL, typename _IteratorR> inline constexpr bool operator!=(const move_iterator<_IteratorL>& __x, const move_iterator<_IteratorR>& __y)
        {
            return !(__x == __y);
        }

        template <typename _Iterator> inline constexpr bool operator!=(const move_iterator<_Iterator>& __x, const move_iterator<_Iterator>& __y)
        {
            return !(__x == __y);
        }

        template <typename _IteratorL, typename _IteratorR> inline constexpr bool operator<(const move_iterator<_IteratorL>& __x, const move_iterator<_IteratorR>& __y)
        {
            return __x.base() < __y.base();
        }

        template <typename _Iterator> inline constexpr bool operator<(const move_iterator<_Iterator>& __x, const move_iterator<_Iterator>& __y)
        {
            return __x.base() < __y.base();
        }

        template <typename _IteratorL, typename _IteratorR> inline constexpr bool operator<=(const move_iterator<_IteratorL>& __x, const move_iterator<_IteratorR>& __y)
        {
            return !(__y < __x);
        }

        template <typename _Iterator> inline constexpr bool operator<=(const move_iterator<_Iterator>& __x, const move_iterator<_Iterator>& __y)
        {
            return !(__y < __x);
        }

        template <typename _IteratorL, typename _IteratorR> inline constexpr bool operator>(const move_iterator<_IteratorL>& __x, const move_iterator<_IteratorR>& __y)
        {
            return __y < __x;
        }

        template <typename _Iterator> inline constexpr bool operator>(const move_iterator<_Iterator>& __x, const move_iterator<_Iterator>& __y)
        {
            return __y < __x;
        }

        template <typename _IteratorL, typename _IteratorR> inline constexpr bool operator>=(const move_iterator<_IteratorL>& __x, const move_iterator<_IteratorR>& __y)
        {
            return !(__x < __y);
        }

        template <typename _Iterator> inline constexpr bool operator>=(const move_iterator<_Iterator>& __x, const move_iterator<_Iterator>& __y)
        {
            return !(__x < __y);
        }

        template <typename _IteratorL, typename _IteratorR>
        inline constexpr auto operator-(const move_iterator<_IteratorL>& __x, const move_iterator<_IteratorR>& __y)->decltype(__x.base() - __y.base())
        {
            return __x.base() - __y.base();
        }

        template <typename _Iterator> inline constexpr move_iterator<_Iterator> operator+(typename move_iterator<_Iterator>::difference_type __n, const move_iterator<_Iterator>& __x)
        {
            return __x + __n;
        }

        template <typename _Iterator> inline constexpr move_iterator<_Iterator> make_move_iterator(_Iterator __i)
        {
            return move_iterator<_Iterator>(__i);
        }

        template <typename _Iterator,
                  typename _ReturnType = typename conditional<__move_if_noexcept_cond<typename iterator_traits<_Iterator>::value_type>::value, _Iterator, move_iterator<_Iterator>>::type>
        inline constexpr _ReturnType __make_move_if_noexcept_iterator(_Iterator __i)
        {
            return _ReturnType(__i);
        }

        template <typename _Tp, typename _ReturnType = typename conditional<__move_if_noexcept_cond<_Tp>::value, const _Tp*, move_iterator<_Tp*>>::type>
        inline constexpr _ReturnType __make_move_if_noexcept_iterator(_Tp * __i)
        {
            return _ReturnType(__i);
        }

        template <typename _Iterator> auto __niter_base(move_iterator<_Iterator> __it)->decltype(make_move_iterator(__niter_base(__it.base())))
        {
            return make_move_iterator(__niter_base(__it.base()));
        }

        template <typename _Iterator> struct __is_move_iterator<move_iterator<_Iterator>>
        {
            enum
            {
                __value = 1
            };
            typedef __true_type __type;
        };

        template <typename _Iterator> auto __miter_base(move_iterator<_Iterator> __it)->decltype(__miter_base(__it.base()))
        {
            return __miter_base(__it.base());
        }
        template <typename _InputIterator> using __iter_key_t = remove_const_t<typename iterator_traits<_InputIterator>::value_type::first_type>;

        template <typename _InputIterator> using __iter_val_t = typename iterator_traits<_InputIterator>::value_type::second_type;

        template <typename _T1, typename _T2> struct pair;

        template <typename _InputIterator> using __iter_to_alloc_t = pair<add_const_t<__iter_key_t<_InputIterator>>, __iter_val_t<_InputIterator>>;

    } // namespace )

    namespace std
    {
    namespace __debug
    {
    }
    } // namespace std

    namespace __gnu_debug
    {
    using namespace std::__debug;
    }

    namespace __gnu_cxx
    {
    namespace __ops
    {
    struct _Iter_less_iter
    {
        template <typename _Iterator1, typename _Iterator2> constexpr bool operator()(_Iterator1 __it1, _Iterator2 __it2) const
        {
            return *__it1 < *__it2;
        }
    };

    constexpr inline _Iter_less_iter __iter_less_iter()
    {
        return _Iter_less_iter();
    }

    struct _Iter_less_val
    {

        constexpr _Iter_less_val() = default;

        explicit _Iter_less_val(_Iter_less_iter) {}

        template <typename _Iterator, typename _Value> bool operator()(_Iterator __it, _Value& __val) const
        {
            return *__it < __val;
        }
    };

    inline _Iter_less_val __iter_less_val()
    {
        return _Iter_less_val();
    }

    inline _Iter_less_val __iter_comp_val(_Iter_less_iter)
    {
        return _Iter_less_val();
    }

    struct _Val_less_iter
    {

        constexpr _Val_less_iter() = default;

        explicit _Val_less_iter(_Iter_less_iter) {}

        template <typename _Value, typename _Iterator> bool operator()(_Value& __val, _Iterator __it) const
        {
            return __val < *__it;
        }
    };

    inline _Val_less_iter __val_less_iter()
    {
        return _Val_less_iter();
    }

    inline _Val_less_iter __val_comp_iter(_Iter_less_iter)
    {
        return _Val_less_iter();
    }

    struct _Iter_equal_to_iter
    {
        template <typename _Iterator1, typename _Iterator2> bool operator()(_Iterator1 __it1, _Iterator2 __it2) const
        {
            return *__it1 == *__it2;
        }
    };

    inline _Iter_equal_to_iter __iter_equal_to_iter()
    {
        return _Iter_equal_to_iter();
    }

    struct _Iter_equal_to_val
    {
        template <typename _Iterator, typename _Value> bool operator()(_Iterator __it, _Value& __val) const
        {
            return *__it == __val;
        }
    };

    inline _Iter_equal_to_val __iter_equal_to_val()
    {
        return _Iter_equal_to_val();
    }

    inline _Iter_equal_to_val __iter_comp_val(_Iter_equal_to_iter)
    {
        return _Iter_equal_to_val();
    }

    template <typename _Compare> struct _Iter_comp_iter
    {
        _Compare _M_comp;

        explicit constexpr _Iter_comp_iter(_Compare __comp) : _M_comp(std::move(__comp)) {}

        template <typename _Iterator1, typename _Iterator2> constexpr bool operator()(_Iterator1 __it1, _Iterator2 __it2)
        {
            return bool(_M_comp(*__it1, *__it2));
        }
    };

    template <typename _Compare> constexpr inline _Iter_comp_iter<_Compare> __iter_comp_iter(_Compare __comp)
    {
        return _Iter_comp_iter<_Compare>(std::move(__comp));
    }

    template <typename _Compare> struct _Iter_comp_val
    {
        _Compare _M_comp;

        explicit _Iter_comp_val(_Compare __comp) : _M_comp(std::move(__comp)) {}

        explicit _Iter_comp_val(const _Iter_comp_iter<_Compare>& __comp) : _M_comp(__comp._M_comp) {}

        explicit _Iter_comp_val(_Iter_comp_iter<_Compare>&& __comp) : _M_comp(std::move(__comp._M_comp)) {}

        template <typename _Iterator, typename _Value> bool operator()(_Iterator __it, _Value& __val)
        {
            return bool(_M_comp(*__it, __val));
        }
    };

    template <typename _Compare> inline _Iter_comp_val<_Compare> __iter_comp_val(_Compare __comp)
    {
        return _Iter_comp_val<_Compare>(std::move(__comp));
    }

    template <typename _Compare> inline _Iter_comp_val<_Compare> __iter_comp_val(_Iter_comp_iter<_Compare> __comp)
    {
        return _Iter_comp_val<_Compare>(std::move(__comp));
    }

    template <typename _Compare> struct _Val_comp_iter
    {
        _Compare _M_comp;

        explicit _Val_comp_iter(_Compare __comp) : _M_comp(std::move(__comp)) {}

        explicit _Val_comp_iter(const _Iter_comp_iter<_Compare>& __comp) : _M_comp(__comp._M_comp) {}

        explicit _Val_comp_iter(_Iter_comp_iter<_Compare>&& __comp) : _M_comp(std::move(__comp._M_comp)) {}

        template <typename _Value, typename _Iterator> bool operator()(_Value& __val, _Iterator __it)
        {
            return bool(_M_comp(__val, *__it));
        }
    };

    template <typename _Compare> inline _Val_comp_iter<_Compare> __val_comp_iter(_Compare __comp)
    {
        return _Val_comp_iter<_Compare>(std::move(__comp));
    }

    template <typename _Compare> inline _Val_comp_iter<_Compare> __val_comp_iter(_Iter_comp_iter<_Compare> __comp)
    {
        return _Val_comp_iter<_Compare>(std::move(__comp));
    }

    template <typename _Value> struct _Iter_equals_val
    {
        _Value& _M_value;

        explicit _Iter_equals_val(_Value& __value) : _M_value(__value) {}

        template <typename _Iterator> bool operator()(_Iterator __it)
        {
            return *__it == _M_value;
        }
    };

    template <typename _Value> inline _Iter_equals_val<_Value> __iter_equals_val(_Value& __val)
    {
        return _Iter_equals_val<_Value>(__val);
    }

    template <typename _Iterator1> struct _Iter_equals_iter
    {
        _Iterator1 _M_it1;

        explicit _Iter_equals_iter(_Iterator1 __it1) : _M_it1(__it1) {}

        template <typename _Iterator2> bool operator()(_Iterator2 __it2)
        {
            return *__it2 == *_M_it1;
        }
    };

    template <typename _Iterator> inline _Iter_equals_iter<_Iterator> __iter_comp_iter(_Iter_equal_to_iter, _Iterator __it)
    {
        return _Iter_equals_iter<_Iterator>(__it);
    }

    template <typename _Predicate> struct _Iter_pred
    {
        _Predicate _M_pred;

        explicit _Iter_pred(_Predicate __pred) : _M_pred(std::move(__pred)) {}

        template <typename _Iterator> bool operator()(_Iterator __it)
        {
            return bool(_M_pred(*__it));
        }
    };

    template <typename _Predicate> inline _Iter_pred<_Predicate> __pred_iter(_Predicate __pred)
    {
        return _Iter_pred<_Predicate>(std::move(__pred));
    }

    template <typename _Compare, typename _Value> struct _Iter_comp_to_val
    {
        _Compare _M_comp;
        _Value& _M_value;

        _Iter_comp_to_val(_Compare __comp, _Value& __value) : _M_comp(std::move(__comp)), _M_value(__value) {}

        template <typename _Iterator> bool operator()(_Iterator __it)
        {
            return bool(_M_comp(*__it, _M_value));
        }
    };

    template <typename _Compare, typename _Value> _Iter_comp_to_val<_Compare, _Value> __iter_comp_val(_Compare __comp, _Value& __val)
    {
        return _Iter_comp_to_val<_Compare, _Value>(std::move(__comp), __val);
    }

    template <typename _Compare, typename _Iterator1> struct _Iter_comp_to_iter
    {
        _Compare _M_comp;
        _Iterator1 _M_it1;

        _Iter_comp_to_iter(_Compare __comp, _Iterator1 __it1) : _M_comp(std::move(__comp)), _M_it1(__it1) {}

        template <typename _Iterator2> bool operator()(_Iterator2 __it2)
        {
            return bool(_M_comp(*__it2, *_M_it1));
        }
    };

    template <typename _Compare, typename _Iterator> inline _Iter_comp_to_iter<_Compare, _Iterator> __iter_comp_iter(_Iter_comp_iter<_Compare> __comp, _Iterator __it)
    {
        return _Iter_comp_to_iter<_Compare, _Iterator>(std::move(__comp._M_comp), __it);
    }

    template <typename _Predicate> struct _Iter_negate
    {
        _Predicate _M_pred;

        explicit _Iter_negate(_Predicate __pred) : _M_pred(std::move(__pred)) {}

        template <typename _Iterator> bool operator()(_Iterator __it)
        {
            return !bool(_M_pred(*__it));
        }
    };

    template <typename _Predicate> inline _Iter_negate<_Predicate> __negate(_Iter_pred<_Predicate> __pred)
    {
        return _Iter_negate<_Predicate>(std::move(__pred._M_pred));
    }

    } // namespace __ops
    } // namespace __gnu_cxx

    namespace std __attribute__((__visibility__("default")))
    {
        template <typename _ForwardIterator1, typename _ForwardIterator2> inline void iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
            swap(*__a, *__b);
        }
        template <typename _ForwardIterator1, typename _ForwardIterator2> _ForwardIterator2 swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 __first2)
        {

            ;

            for (; __first1 != __last1; ++__first1, (void)++__first2)
                std::iter_swap(__first1, __first2);
            return __first2;
        }
        template <typename _Tp> constexpr inline const _Tp& min(const _Tp& __a, const _Tp& __b)
        {

            if (__b < __a)
                return __b;
            return __a;
        }
        template <typename _Tp> constexpr inline const _Tp& max(const _Tp& __a, const _Tp& __b)
        {

            if (__a < __b)
                return __b;
            return __a;
        }
        template <typename _Tp, typename _Compare> constexpr inline const _Tp& min(const _Tp& __a, const _Tp& __b, _Compare __comp)
        {

            if (__comp(__b, __a))
                return __b;
            return __a;
        }
        template <typename _Tp, typename _Compare> constexpr inline const _Tp& max(const _Tp& __a, const _Tp& __b, _Compare __comp)
        {

            if (__comp(__a, __b))
                return __b;
            return __a;
        }

        template <typename _Iterator> inline _Iterator __niter_base(_Iterator __it) noexcept(std::is_nothrow_copy_constructible<_Iterator>::value)
        {
            return __it;
        }

        template <typename _From, typename _To> inline _From __niter_wrap(_From __from, _To __res)
        {
            return __from + (__res - std::__niter_base(__from));
        }

        template <typename _Iterator> inline _Iterator __niter_wrap(const _Iterator&, _Iterator __res)
        {
            return __res;
        }

        template <bool _IsMove, bool _IsSimple, typename _Category> struct __copy_move
        {
            template <typename _II, typename _OI> static _OI __copy_m(_II __first, _II __last, _OI __result)
            {
                for (; __first != __last; ++__result, (void)++__first)
                    *__result = *__first;
                return __result;
            }
        };

        template <typename _Category> struct __copy_move<true, false, _Category>
        {
            template <typename _II, typename _OI> static _OI __copy_m(_II __first, _II __last, _OI __result)
            {
                for (; __first != __last; ++__result, (void)++__first)
                    *__result = std::move(*__first);
                return __result;
            }
        };

        template <> struct __copy_move<false, false, random_access_iterator_tag>
        {
            template <typename _II, typename _OI> static _OI __copy_m(_II __first, _II __last, _OI __result)
            {
                typedef typename iterator_traits<_II>::difference_type _Distance;
                for (_Distance __n = __last - __first; __n > 0; --__n)
                {
                    *__result = *__first;
                    ++__first;
                    ++__result;
                }
                return __result;
            }
        };

        template <> struct __copy_move<true, false, random_access_iterator_tag>
        {
            template <typename _II, typename _OI> static _OI __copy_m(_II __first, _II __last, _OI __result)
            {
                typedef typename iterator_traits<_II>::difference_type _Distance;
                for (_Distance __n = __last - __first; __n > 0; --__n)
                {
                    *__result = std::move(*__first);
                    ++__first;
                    ++__result;
                }
                return __result;
            }
        };

        template <bool _IsMove> struct __copy_move<_IsMove, true, random_access_iterator_tag>
        {
            template <typename _Tp> static _Tp* __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
            {

                using __assignable = conditional<_IsMove, is_move_assignable<_Tp>, is_copy_assignable<_Tp>>;

                static_assert(__assignable::type::value, "type is not assignable");

                const ptrdiff_t _Num = __last - __first;
                if (_Num)
                    __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
                return __result + _Num;
            }
        };

        template <bool _IsMove, typename _II, typename _OI> inline _OI __copy_move_a(_II __first, _II __last, _OI __result)
        {
            typedef typename iterator_traits<_II>::value_type _ValueTypeI;
            typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
            typedef typename iterator_traits<_II>::iterator_category _Category;
            const bool __simple = (__is_trivially_copyable(_ValueTypeI) && __is_pointer<_II>::__value && __is_pointer<_OI>::__value && __are_same<_ValueTypeI, _ValueTypeO>::__value);

            return std::__copy_move<_IsMove, __simple, _Category>::__copy_m(__first, __last, __result);
        }

        template <typename _CharT> struct char_traits;

        template <typename _CharT, typename _Traits> class istreambuf_iterator;

        template <typename _CharT, typename _Traits> class ostreambuf_iterator;

        template <bool _IsMove, typename _CharT>
        typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, ostreambuf_iterator<_CharT, char_traits<_CharT>>>::__type __copy_move_a2(_CharT*, _CharT*,
                                                                                                                                             ostreambuf_iterator<_CharT, char_traits<_CharT>>);

        template <bool _IsMove, typename _CharT>
        typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, ostreambuf_iterator<_CharT, char_traits<_CharT>>>::__type __copy_move_a2(const _CharT*, const _CharT*,
                                                                                                                                             ostreambuf_iterator<_CharT, char_traits<_CharT>>);

        template <bool _IsMove, typename _CharT>
        typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, _CharT*>::__type __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT>>, istreambuf_iterator<_CharT, char_traits<_CharT>>,
                                                                                                    _CharT*);

        template <bool _IsMove, typename _II, typename _OI> inline _OI __copy_move_a2(_II __first, _II __last, _OI __result)
        {
            return std::__niter_wrap(__result, std::__copy_move_a<_IsMove>(std::__niter_base(__first), std::__niter_base(__last), std::__niter_base(__result)));
        }
        template <typename _II, typename _OI> inline _OI copy(_II __first, _II __last, _OI __result)
        {

            ;

            return std::__copy_move_a2<__is_move_iterator<_II>::__value>(std::__miter_base(__first), std::__miter_base(__last), __result);
        }
        template <typename _II, typename _OI> inline _OI move(_II __first, _II __last, _OI __result)
        {

            ;

            return std::__copy_move_a2<true>(std::__miter_base(__first), std::__miter_base(__last), __result);
        }

        template <bool, bool, typename> struct __copy_move_backward
        {
            template <typename _BI1, typename _BI2> static _BI2 __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
            {
                while (__first != __last)
                    *--__result = *--__last;
                return __result;
            }
        };

        template <typename _Category> struct __copy_move_backward<true, false, _Category>
        {
            template <typename _BI1, typename _BI2> static _BI2 __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
            {
                while (__first != __last)
                    *--__result = std::move(*--__last);
                return __result;
            }
        };

        template <> struct __copy_move_backward<false, false, random_access_iterator_tag>
        {
            template <typename _BI1, typename _BI2> static _BI2 __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
            {
                typename iterator_traits<_BI1>::difference_type __n;
                for (__n = __last - __first; __n > 0; --__n)
                    *--__result = *--__last;
                return __result;
            }
        };

        template <> struct __copy_move_backward<true, false, random_access_iterator_tag>
        {
            template <typename _BI1, typename _BI2> static _BI2 __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
            {
                typename iterator_traits<_BI1>::difference_type __n;
                for (__n = __last - __first; __n > 0; --__n)
                    *--__result = std::move(*--__last);
                return __result;
            }
        };

        template <bool _IsMove> struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
        {
            template <typename _Tp> static _Tp* __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
            {

                using __assignable = conditional<_IsMove, is_move_assignable<_Tp>, is_copy_assignable<_Tp>>;

                static_assert(__assignable::type::value, "type is not assignable");

                const ptrdiff_t _Num = __last - __first;
                if (_Num)
                    __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
                return __result - _Num;
            }
        };

        template <bool _IsMove, typename _BI1, typename _BI2> inline _BI2 __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
        {
            typedef typename iterator_traits<_BI1>::value_type _ValueType1;
            typedef typename iterator_traits<_BI2>::value_type _ValueType2;
            typedef typename iterator_traits<_BI1>::iterator_category _Category;
            const bool __simple = (__is_trivially_copyable(_ValueType1) && __is_pointer<_BI1>::__value && __is_pointer<_BI2>::__value && __are_same<_ValueType1, _ValueType2>::__value);

            return std::__copy_move_backward<_IsMove, __simple, _Category>::__copy_move_b(__first, __last, __result);
        }

        template <bool _IsMove, typename _BI1, typename _BI2> inline _BI2 __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
        {
            return std::__niter_wrap(__result, std::__copy_move_backward_a<_IsMove>(std::__niter_base(__first), std::__niter_base(__last), std::__niter_base(__result)));
        }
        template <typename _BI1, typename _BI2> inline _BI2 copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
        {

            ;

            return std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>(std::__miter_base(__first), std::__miter_base(__last), __result);
        }
        template <typename _BI1, typename _BI2> inline _BI2 move_backward(_BI1 __first, _BI1 __last, _BI2 __result)
        {

            ;

            return std::__copy_move_backward_a2<true>(std::__miter_base(__first), std::__miter_base(__last), __result);
        }

        template <typename _ForwardIterator, typename _Tp>
        inline typename __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type __fill_a(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
        {
            for (; __first != __last; ++__first)
                *__first = __value;
        }

        template <typename _ForwardIterator, typename _Tp>
        inline typename __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type __fill_a(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
        {
            const _Tp __tmp = __value;
            for (; __first != __last; ++__first)
                *__first = __tmp;
        }

        template <typename _Tp> inline typename __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type __fill_a(_Tp * __first, _Tp * __last, const _Tp& __c)
        {
            const _Tp __tmp = __c;
            if (const size_t __len = __last - __first)
                __builtin_memset(__first, static_cast<unsigned char>(__tmp), __len);
        }
        template <typename _ForwardIterator, typename _Tp> inline void fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
        {

            ;

            std::__fill_a(std::__niter_base(__first), std::__niter_base(__last), __value);
        }

        template <typename _OutputIterator, typename _Size, typename _Tp>
        inline typename __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
        {
            for (__decltype(__n + 0) __niter = __n; __niter > 0; --__niter, (void)++__first)
                *__first = __value;
            return __first;
        }

        template <typename _OutputIterator, typename _Size, typename _Tp>
        inline typename __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
        {
            const _Tp __tmp = __value;
            for (__decltype(__n + 0) __niter = __n; __niter > 0; --__niter, (void)++__first)
                *__first = __tmp;
            return __first;
        }

        template <typename _Size, typename _Tp> inline typename __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type __fill_n_a(_Tp * __first, _Size __n, const _Tp& __c)
        {
            std::__fill_a(__first, __first + __n, __c);
            return __first + __n;
        }
        template <typename _OI, typename _Size, typename _Tp> inline _OI fill_n(_OI __first, _Size __n, const _Tp& __value)
        {

            ;

            return std::__niter_wrap(__first, std::__fill_n_a(std::__niter_base(__first), __n, __value));
        }

        template <bool _BoolType> struct __equal
        {
            template <typename _II1, typename _II2> static bool equal(_II1 __first1, _II1 __last1, _II2 __first2)
            {
                for (; __first1 != __last1; ++__first1, (void)++__first2)
                    if (!(*__first1 == *__first2))
                        return false;
                return true;
            }
        };

        template <> struct __equal<true>
        {
            template <typename _Tp> static bool equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
            {
                if (const size_t __len = (__last1 - __first1))
                    return !__builtin_memcmp(__first1, __first2, sizeof(_Tp) * __len);
                return true;
            }
        };

        template <typename _II1, typename _II2> inline bool __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
        {
            typedef typename iterator_traits<_II1>::value_type _ValueType1;
            typedef typename iterator_traits<_II2>::value_type _ValueType2;
            const bool __simple = ((__is_integer<_ValueType1>::__value || __is_pointer<_ValueType1>::__value) && __is_pointer<_II1>::__value && __is_pointer<_II2>::__value &&
                                   __are_same<_ValueType1, _ValueType2>::__value);

            return std::__equal<__simple>::equal(__first1, __last1, __first2);
        }

        template <typename, typename> struct __lc_rai
        {
            template <typename _II1, typename _II2> static _II1 __newlast1(_II1, _II1 __last1, _II2, _II2)
            {
                return __last1;
            }

            template <typename _II> static bool __cnd2(_II __first, _II __last)
            {
                return __first != __last;
            }
        };

        template <> struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
        {
            template <typename _RAI1, typename _RAI2> static _RAI1 __newlast1(_RAI1 __first1, _RAI1 __last1, _RAI2 __first2, _RAI2 __last2)
            {
                const typename iterator_traits<_RAI1>::difference_type __diff1 = __last1 - __first1;
                const typename iterator_traits<_RAI2>::difference_type __diff2 = __last2 - __first2;
                return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
            }

            template <typename _RAI> static bool __cnd2(_RAI, _RAI)
            {
                return true;
            }
        };

        template <typename _II1, typename _II2, typename _Compare> bool __lexicographical_compare_impl(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2, _Compare __comp)
        {
            typedef typename iterator_traits<_II1>::iterator_category _Category1;
            typedef typename iterator_traits<_II2>::iterator_category _Category2;
            typedef std::__lc_rai<_Category1, _Category2> __rai_type;

            __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
            for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2); ++__first1, (void)++__first2)
            {
                if (__comp(__first1, __first2))
                    return true;
                if (__comp(__first2, __first1))
                    return false;
            }
            return __first1 == __last1 && __first2 != __last2;
        }

        template <bool _BoolType> struct __lexicographical_compare
        {
            template <typename _II1, typename _II2> static bool __lc(_II1, _II1, _II2, _II2);
        };

        template <bool _BoolType> template <typename _II1, typename _II2> bool __lexicographical_compare<_BoolType>::__lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
        {
            return std::__lexicographical_compare_impl(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_less_iter());
        }

        template <> struct __lexicographical_compare<true>
        {
            template <typename _Tp, typename _Up> static bool __lc(const _Tp* __first1, const _Tp* __last1, const _Up* __first2, const _Up* __last2)
            {
                const size_t __len1 = __last1 - __first1;
                const size_t __len2 = __last2 - __first2;
                if (const size_t __len = std::min(__len1, __len2))
                    if (int __result = __builtin_memcmp(__first1, __first2, __len))
                        return __result < 0;
                return __len1 < __len2;
            }
        };

        template <typename _II1, typename _II2> inline bool __lexicographical_compare_aux(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
        {
            typedef typename iterator_traits<_II1>::value_type _ValueType1;
            typedef typename iterator_traits<_II2>::value_type _ValueType2;
            const bool __simple = (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed &&
                                   !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed && __is_pointer<_II1>::__value && __is_pointer<_II2>::__value);

            return std::__lexicographical_compare<__simple>::__lc(__first1, __last1, __first2, __last2);
        }

        template <typename _ForwardIterator, typename _Tp, typename _Compare> _ForwardIterator __lower_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __val, _Compare __comp)
        {
            typedef typename iterator_traits<_ForwardIterator>::difference_type _DistanceType;

            _DistanceType __len = std::distance(__first, __last);

            while (__len > 0)
            {
                _DistanceType __half = __len >> 1;
                _ForwardIterator __middle = __first;
                std::advance(__middle, __half);
                if (__comp(__middle, __val))
                {
                    __first = __middle;
                    ++__first;
                    __len = __len - __half - 1;
                }
                else
                    __len = __half;
            }
            return __first;
        }
        template <typename _ForwardIterator, typename _Tp> inline _ForwardIterator lower_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __val)
        {

            ;

            return std::__lower_bound(__first, __last, __val, __gnu_cxx::__ops::__iter_less_val());
        }

        inline constexpr int __lg(int __n)
        {
            return (int)sizeof(int) * 8 - 1 - __builtin_clz(__n);
        }

        inline constexpr unsigned __lg(unsigned __n)
        {
            return (int)sizeof(int) * 8 - 1 - __builtin_clz(__n);
        }

        inline constexpr long __lg(long __n)
        {
            return (int)sizeof(long) * 8 - 1 - __builtin_clzl(__n);
        }

        inline constexpr unsigned long __lg(unsigned long __n)
        {
            return (int)sizeof(long) * 8 - 1 - __builtin_clzl(__n);
        }

        inline constexpr long long __lg(long long __n)
        {
            return (int)sizeof(long long) * 8 - 1 - __builtin_clzll(__n);
        }

        inline constexpr unsigned long long __lg(unsigned long long __n)
        {
            return (int)sizeof(long long) * 8 - 1 - __builtin_clzll(__n);
        }
        template <typename _II1, typename _II2> inline bool equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {

            ;

            return std::__equal_aux(std::__niter_base(__first1), std::__niter_base(__last1), std::__niter_base(__first2));
        }
        template <typename _IIter1, typename _IIter2, typename _BinaryPredicate> inline bool equal(_IIter1 __first1, _IIter1 __last1, _IIter2 __first2, _BinaryPredicate __binary_pred)
        {

            ;

            for (; __first1 != __last1; ++__first1, (void)++__first2)
                if (!bool(__binary_pred(*__first1, *__first2)))
                    return false;
            return true;
        }

        template <typename _II1, typename _II2> inline bool __equal4(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
        {
            using _RATag = random_access_iterator_tag;
            using _Cat1 = typename iterator_traits<_II1>::iterator_category;
            using _Cat2 = typename iterator_traits<_II2>::iterator_category;
            using _RAIters = __and_<is_same<_Cat1, _RATag>, is_same<_Cat2, _RATag>>;
            if (_RAIters())
            {
                auto __d1 = std::distance(__first1, __last1);
                auto __d2 = std::distance(__first2, __last2);
                if (__d1 != __d2)
                    return false;
                return std::equal(__first1, __last1, __first2);
            }

            for (; __first1 != __last1 && __first2 != __last2; ++__first1, (void)++__first2)
                if (!(*__first1 == *__first2))
                    return false;
            return __first1 == __last1 && __first2 == __last2;
        }

        template <typename _II1, typename _II2, typename _BinaryPredicate> inline bool __equal4(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2, _BinaryPredicate __binary_pred)
        {
            using _RATag = random_access_iterator_tag;
            using _Cat1 = typename iterator_traits<_II1>::iterator_category;
            using _Cat2 = typename iterator_traits<_II2>::iterator_category;
            using _RAIters = __and_<is_same<_Cat1, _RATag>, is_same<_Cat2, _RATag>>;
            if (_RAIters())
            {
                auto __d1 = std::distance(__first1, __last1);
                auto __d2 = std::distance(__first2, __last2);
                if (__d1 != __d2)
                    return false;
                return std::equal(__first1, __last1, __first2, __binary_pred);
            }

            for (; __first1 != __last1 && __first2 != __last2; ++__first1, (void)++__first2)
                if (!bool(__binary_pred(*__first1, *__first2)))
                    return false;
            return __first1 == __last1 && __first2 == __last2;
        }
        template <typename _II1, typename _II2> inline bool equal(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
        {

            ;
            ;

            return std::__equal4(__first1, __last1, __first2, __last2);
        }
        template <typename _IIter1, typename _IIter2, typename _BinaryPredicate> inline bool equal(_IIter1 __first1, _IIter1 __last1, _IIter2 __first2, _IIter2 __last2, _BinaryPredicate __binary_pred)
        {

            ;
            ;

            return std::__equal4(__first1, __last1, __first2, __last2, __binary_pred);
        }
        template <typename _II1, typename _II2> inline bool lexicographical_compare(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
        {
            ;
            ;

            return std::__lexicographical_compare_aux(std::__niter_base(__first1), std::__niter_base(__last1), std::__niter_base(__first2), std::__niter_base(__last2));
        }
        template <typename _II1, typename _II2, typename _Compare> inline bool lexicographical_compare(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2, _Compare __comp)
        {

            ;
            ;

            return std::__lexicographical_compare_impl(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_comp_iter(__comp));
        }

        template <typename _InputIterator1, typename _InputIterator2, typename _BinaryPredicate>
        pair<_InputIterator1, _InputIterator2> __mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 __first2, _BinaryPredicate __binary_pred)
        {
            while (__first1 != __last1 && __binary_pred(__first1, __first2))
            {
                ++__first1;
                ++__first2;
            }
            return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
        }
        template <typename _InputIterator1, typename _InputIterator2>
        inline pair<_InputIterator1, _InputIterator2> mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 __first2)
        {

            ;

            return std::__mismatch(__first1, __last1, __first2, __gnu_cxx::__ops::__iter_equal_to_iter());
        }
        template <typename _InputIterator1, typename _InputIterator2, typename _BinaryPredicate>
        inline pair<_InputIterator1, _InputIterator2> mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 __first2, _BinaryPredicate __binary_pred)
        {

            ;

            return std::__mismatch(__first1, __last1, __first2, __gnu_cxx::__ops::__iter_comp_iter(__binary_pred));
        }

        template <typename _InputIterator1, typename _InputIterator2, typename _BinaryPredicate>
        pair<_InputIterator1, _InputIterator2> __mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 __first2, _InputIterator2 __last2, _BinaryPredicate __binary_pred)
        {
            while (__first1 != __last1 && __first2 != __last2 && __binary_pred(__first1, __first2))
            {
                ++__first1;
                ++__first2;
            }
            return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
        }
        template <typename _InputIterator1, typename _InputIterator2>
        inline pair<_InputIterator1, _InputIterator2> mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 __first2, _InputIterator2 __last2)
        {

            ;
            ;

            return std::__mismatch(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_equal_to_iter());
        }
        template <typename _InputIterator1, typename _InputIterator2, typename _BinaryPredicate>
        inline pair<_InputIterator1, _InputIterator2> mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 __first2, _InputIterator2 __last2, _BinaryPredicate __binary_pred)
        {

            ;
            ;

            return std::__mismatch(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_comp_iter(__binary_pred));
        }

    } // namespace )
    namespace std __attribute__((__visibility__("default")))
    {

        enum float_round_style
        {
            round_indeterminate = -1,
            round_toward_zero = 0,
            round_to_nearest = 1,
            round_toward_infinity = 2,
            round_toward_neg_infinity = 3
        };

        enum float_denorm_style
        {

            denorm_indeterminate = -1,

            denorm_absent = 0,

            denorm_present = 1
        };
        struct __numeric_limits_base
        {

            static constexpr bool is_specialized = false;

            static constexpr int digits = 0;

            static constexpr int digits10 = 0;

            static constexpr int max_digits10 = 0;

            static constexpr bool is_signed = false;

            static constexpr bool is_integer = false;

            static constexpr bool is_exact = false;

            static constexpr int radix = 0;

            static constexpr int min_exponent = 0;

            static constexpr int min_exponent10 = 0;

            static constexpr int max_exponent = 0;

            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;

            static constexpr bool has_quiet_NaN = false;

            static constexpr bool has_signaling_NaN = false;

            static constexpr float_denorm_style has_denorm = denorm_absent;

            static constexpr bool has_denorm_loss = false;

            static constexpr bool is_iec559 = false;

            static constexpr bool is_bounded = false;
            static constexpr bool is_modulo = false;

            static constexpr bool traps = false;

            static constexpr bool tinyness_before = false;

            static constexpr float_round_style round_style = round_toward_zero;
        };
        template <typename _Tp> struct numeric_limits : public __numeric_limits_base
        {

            static constexpr _Tp min() noexcept
            {
                return _Tp();
            }

            static constexpr _Tp max() noexcept
            {
                return _Tp();
            }

            static constexpr _Tp lowest() noexcept
            {
                return _Tp();
            }

            static constexpr _Tp epsilon() noexcept
            {
                return _Tp();
            }

            static constexpr _Tp round_error() noexcept
            {
                return _Tp();
            }

            static constexpr _Tp infinity() noexcept
            {
                return _Tp();
            }

            static constexpr _Tp quiet_NaN() noexcept
            {
                return _Tp();
            }

            static constexpr _Tp signaling_NaN() noexcept
            {
                return _Tp();
            }

            static constexpr _Tp denorm_min() noexcept
            {
                return _Tp();
            }
        };

        template <typename _Tp> struct numeric_limits<const _Tp> : public numeric_limits<_Tp>
        {
        };

        template <typename _Tp> struct numeric_limits<volatile _Tp> : public numeric_limits<_Tp>
        {
        };

        template <typename _Tp> struct numeric_limits<const volatile _Tp> : public numeric_limits<_Tp>
        {
        };
        template <> struct numeric_limits<bool>
        {
            static constexpr bool is_specialized = true;

            static constexpr bool min() noexcept
            {
                return false;
            }

            static constexpr bool max() noexcept
            {
                return true;
            }

            static constexpr bool lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = 1;
            static constexpr int digits10 = 0;

            static constexpr int max_digits10 = 0;

            static constexpr bool is_signed = false;
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr bool epsilon() noexcept
            {
                return false;
            }

            static constexpr bool round_error() noexcept
            {
                return false;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr bool infinity() noexcept
            {
                return false;
            }

            static constexpr bool quiet_NaN() noexcept
            {
                return false;
            }

            static constexpr bool signaling_NaN() noexcept
            {
                return false;
            }

            static constexpr bool denorm_min() noexcept
            {
                return false;
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = false;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };

        template <> struct numeric_limits<char>
        {
            static constexpr bool is_specialized = true;

            static constexpr char min() noexcept
            {
                return (((char)(-1) < 0) ? -(((char)(-1) < 0) ? (((((char)1 << ((sizeof(char) * 8 - ((char)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char)0) - 1 : (char)0);
            }

            static constexpr char max() noexcept
            {
                return (((char)(-1) < 0) ? (((((char)1 << ((sizeof(char) * 8 - ((char)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char)0);
            }

            static constexpr char lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = (sizeof(char) * 8 - ((char)(-1) < 0));
            static constexpr int digits10 = ((sizeof(char) * 8 - ((char)(-1) < 0)) * 643L / 2136);

            static constexpr int max_digits10 = 0;

            static constexpr bool is_signed = ((char)(-1) < 0);
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr char epsilon() noexcept
            {
                return 0;
            }

            static constexpr char round_error() noexcept
            {
                return 0;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr char infinity() noexcept
            {
                return char();
            }

            static constexpr char quiet_NaN() noexcept
            {
                return char();
            }

            static constexpr char signaling_NaN() noexcept
            {
                return char();
            }

            static constexpr char denorm_min() noexcept
            {
                return static_cast<char>(0);
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = !is_signed;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };

        template <> struct numeric_limits<signed char>
        {
            static constexpr bool is_specialized = true;

            static constexpr signed char min() noexcept
            {
                return -127 - 1;
            }

            static constexpr signed char max() noexcept
            {
                return 127;
            }

            static constexpr signed char lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = (sizeof(signed char) * 8 - ((signed char)(-1) < 0));
            static constexpr int digits10 = ((sizeof(signed char) * 8 - ((signed char)(-1) < 0)) * 643L / 2136);

            static constexpr int max_digits10 = 0;

            static constexpr bool is_signed = true;
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr signed char epsilon() noexcept
            {
                return 0;
            }

            static constexpr signed char round_error() noexcept
            {
                return 0;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr signed char infinity() noexcept
            {
                return static_cast<signed char>(0);
            }

            static constexpr signed char quiet_NaN() noexcept
            {
                return static_cast<signed char>(0);
            }

            static constexpr signed char signaling_NaN() noexcept
            {
                return static_cast<signed char>(0);
            }

            static constexpr signed char denorm_min() noexcept
            {
                return static_cast<signed char>(0);
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = false;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };

        template <> struct numeric_limits<unsigned char>
        {
            static constexpr bool is_specialized = true;

            static constexpr unsigned char min() noexcept
            {
                return 0;
            }

            static constexpr unsigned char max() noexcept
            {
                return 127 * 2U + 1;
            }

            static constexpr unsigned char lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = (sizeof(unsigned char) * 8 - ((unsigned char)(-1) < 0));
            static constexpr int digits10 = ((sizeof(unsigned char) * 8 - ((unsigned char)(-1) < 0)) * 643L / 2136);

            static constexpr int max_digits10 = 0;

            static constexpr bool is_signed = false;
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr unsigned char epsilon() noexcept
            {
                return 0;
            }

            static constexpr unsigned char round_error() noexcept
            {
                return 0;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr unsigned char infinity() noexcept
            {
                return static_cast<unsigned char>(0);
            }

            static constexpr unsigned char quiet_NaN() noexcept
            {
                return static_cast<unsigned char>(0);
            }

            static constexpr unsigned char signaling_NaN() noexcept
            {
                return static_cast<unsigned char>(0);
            }

            static constexpr unsigned char denorm_min() noexcept
            {
                return static_cast<unsigned char>(0);
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = true;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };

        template <> struct numeric_limits<wchar_t>
        {
            static constexpr bool is_specialized = true;

            static constexpr wchar_t min() noexcept
            {
                return (((wchar_t)(-1) < 0) ? -(((wchar_t)(-1) < 0) ? (((((wchar_t)1 << ((sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(wchar_t)0) - 1 : (wchar_t)0);
            }

            static constexpr wchar_t max() noexcept
            {
                return (((wchar_t)(-1) < 0) ? (((((wchar_t)1 << ((sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(wchar_t)0);
            }

            static constexpr wchar_t lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = (sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0));
            static constexpr int digits10 = ((sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0)) * 643L / 2136);

            static constexpr int max_digits10 = 0;

            static constexpr bool is_signed = ((wchar_t)(-1) < 0);
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr wchar_t epsilon() noexcept
            {
                return 0;
            }

            static constexpr wchar_t round_error() noexcept
            {
                return 0;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr wchar_t infinity() noexcept
            {
                return wchar_t();
            }

            static constexpr wchar_t quiet_NaN() noexcept
            {
                return wchar_t();
            }

            static constexpr wchar_t signaling_NaN() noexcept
            {
                return wchar_t();
            }

            static constexpr wchar_t denorm_min() noexcept
            {
                return wchar_t();
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = !is_signed;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };

        template <> struct numeric_limits<char8_t>
        {
            static constexpr bool is_specialized = true;

            static constexpr char8_t min() noexcept
            {
                return (((char8_t)(-1) < 0) ? -(((char8_t)(-1) < 0) ? (((((char8_t)1 << ((sizeof(char8_t) * 8 - ((char8_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char8_t)0) - 1 : (char8_t)0);
            }

            static constexpr char8_t max() noexcept
            {
                return (((char8_t)(-1) < 0) ? (((((char8_t)1 << ((sizeof(char8_t) * 8 - ((char8_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char8_t)0);
            }

            static constexpr char8_t lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = (sizeof(char8_t) * 8 - ((char8_t)(-1) < 0));
            static constexpr int digits10 = ((sizeof(char8_t) * 8 - ((char8_t)(-1) < 0)) * 643L / 2136);
            static constexpr int max_digits10 = 0;
            static constexpr bool is_signed = ((char8_t)(-1) < 0);
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr char8_t epsilon() noexcept
            {
                return 0;
            }

            static constexpr char8_t round_error() noexcept
            {
                return 0;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr char8_t infinity() noexcept
            {
                return char8_t();
            }

            static constexpr char8_t quiet_NaN() noexcept
            {
                return char8_t();
            }

            static constexpr char8_t signaling_NaN() noexcept
            {
                return char8_t();
            }

            static constexpr char8_t denorm_min() noexcept
            {
                return char8_t();
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = !is_signed;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };

        template <> struct numeric_limits<char16_t>
        {
            static constexpr bool is_specialized = true;

            static constexpr char16_t min() noexcept
            {
                return (((char16_t)(-1) < 0) ? -(((char16_t)(-1) < 0) ? (((((char16_t)1 << ((sizeof(char16_t) * 8 - ((char16_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char16_t)0) - 1 : (char16_t)0);
            }

            static constexpr char16_t max() noexcept
            {
                return (((char16_t)(-1) < 0) ? (((((char16_t)1 << ((sizeof(char16_t) * 8 - ((char16_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char16_t)0);
            }

            static constexpr char16_t lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = (sizeof(char16_t) * 8 - ((char16_t)(-1) < 0));
            static constexpr int digits10 = ((sizeof(char16_t) * 8 - ((char16_t)(-1) < 0)) * 643L / 2136);
            static constexpr int max_digits10 = 0;
            static constexpr bool is_signed = ((char16_t)(-1) < 0);
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr char16_t epsilon() noexcept
            {
                return 0;
            }

            static constexpr char16_t round_error() noexcept
            {
                return 0;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr char16_t infinity() noexcept
            {
                return char16_t();
            }

            static constexpr char16_t quiet_NaN() noexcept
            {
                return char16_t();
            }

            static constexpr char16_t signaling_NaN() noexcept
            {
                return char16_t();
            }

            static constexpr char16_t denorm_min() noexcept
            {
                return char16_t();
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = !is_signed;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };

        template <> struct numeric_limits<char32_t>
        {
            static constexpr bool is_specialized = true;

            static constexpr char32_t min() noexcept
            {
                return (((char32_t)(-1) < 0) ? -(((char32_t)(-1) < 0) ? (((((char32_t)1 << ((sizeof(char32_t) * 8 - ((char32_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char32_t)0) - 1 : (char32_t)0);
            }

            static constexpr char32_t max() noexcept
            {
                return (((char32_t)(-1) < 0) ? (((((char32_t)1 << ((sizeof(char32_t) * 8 - ((char32_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char32_t)0);
            }

            static constexpr char32_t lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = (sizeof(char32_t) * 8 - ((char32_t)(-1) < 0));
            static constexpr int digits10 = ((sizeof(char32_t) * 8 - ((char32_t)(-1) < 0)) * 643L / 2136);
            static constexpr int max_digits10 = 0;
            static constexpr bool is_signed = ((char32_t)(-1) < 0);
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr char32_t epsilon() noexcept
            {
                return 0;
            }

            static constexpr char32_t round_error() noexcept
            {
                return 0;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr char32_t infinity() noexcept
            {
                return char32_t();
            }

            static constexpr char32_t quiet_NaN() noexcept
            {
                return char32_t();
            }

            static constexpr char32_t signaling_NaN() noexcept
            {
                return char32_t();
            }

            static constexpr char32_t denorm_min() noexcept
            {
                return char32_t();
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = !is_signed;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };

        template <> struct numeric_limits<short>
        {
            static constexpr bool is_specialized = true;

            static constexpr short min() noexcept
            {
                return -32767 - 1;
            }

            static constexpr short max() noexcept
            {
                return 32767;
            }

            static constexpr short lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = (sizeof(short) * 8 - ((short)(-1) < 0));
            static constexpr int digits10 = ((sizeof(short) * 8 - ((short)(-1) < 0)) * 643L / 2136);

            static constexpr int max_digits10 = 0;

            static constexpr bool is_signed = true;
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr short epsilon() noexcept
            {
                return 0;
            }

            static constexpr short round_error() noexcept
            {
                return 0;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr short infinity() noexcept
            {
                return short();
            }

            static constexpr short quiet_NaN() noexcept
            {
                return short();
            }

            static constexpr short signaling_NaN() noexcept
            {
                return short();
            }

            static constexpr short denorm_min() noexcept
            {
                return short();
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = false;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };

        template <> struct numeric_limits<unsigned short>
        {
            static constexpr bool is_specialized = true;

            static constexpr unsigned short min() noexcept
            {
                return 0;
            }

            static constexpr unsigned short max() noexcept
            {
                return 32767 * 2U + 1;
            }

            static constexpr unsigned short lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = (sizeof(unsigned short) * 8 - ((unsigned short)(-1) < 0));
            static constexpr int digits10 = ((sizeof(unsigned short) * 8 - ((unsigned short)(-1) < 0)) * 643L / 2136);

            static constexpr int max_digits10 = 0;

            static constexpr bool is_signed = false;
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr unsigned short epsilon() noexcept
            {
                return 0;
            }

            static constexpr unsigned short round_error() noexcept
            {
                return 0;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr unsigned short infinity() noexcept
            {
                return static_cast<unsigned short>(0);
            }

            static constexpr unsigned short quiet_NaN() noexcept
            {
                return static_cast<unsigned short>(0);
            }

            static constexpr unsigned short signaling_NaN() noexcept
            {
                return static_cast<unsigned short>(0);
            }

            static constexpr unsigned short denorm_min() noexcept
            {
                return static_cast<unsigned short>(0);
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = true;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };

        template <> struct numeric_limits<int>
        {
            static constexpr bool is_specialized = true;

            static constexpr int min() noexcept
            {
                return -2147483647 - 1;
            }

            static constexpr int max() noexcept
            {
                return 2147483647;
            }

            static constexpr int lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = (sizeof(int) * 8 - ((int)(-1) < 0));
            static constexpr int digits10 = ((sizeof(int) * 8 - ((int)(-1) < 0)) * 643L / 2136);

            static constexpr int max_digits10 = 0;

            static constexpr bool is_signed = true;
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr int epsilon() noexcept
            {
                return 0;
            }

            static constexpr int round_error() noexcept
            {
                return 0;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr int infinity() noexcept
            {
                return static_cast<int>(0);
            }

            static constexpr int quiet_NaN() noexcept
            {
                return static_cast<int>(0);
            }

            static constexpr int signaling_NaN() noexcept
            {
                return static_cast<int>(0);
            }

            static constexpr int denorm_min() noexcept
            {
                return static_cast<int>(0);
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = false;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };

        template <> struct numeric_limits<unsigned int>
        {
            static constexpr bool is_specialized = true;

            static constexpr unsigned int min() noexcept
            {
                return 0;
            }

            static constexpr unsigned int max() noexcept
            {
                return 2147483647 * 2U + 1;
            }

            static constexpr unsigned int lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = (sizeof(unsigned int) * 8 - ((unsigned int)(-1) < 0));
            static constexpr int digits10 = ((sizeof(unsigned int) * 8 - ((unsigned int)(-1) < 0)) * 643L / 2136);

            static constexpr int max_digits10 = 0;

            static constexpr bool is_signed = false;
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr unsigned int epsilon() noexcept
            {
                return 0;
            }

            static constexpr unsigned int round_error() noexcept
            {
                return 0;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr unsigned int infinity() noexcept
            {
                return static_cast<unsigned int>(0);
            }

            static constexpr unsigned int quiet_NaN() noexcept
            {
                return static_cast<unsigned int>(0);
            }

            static constexpr unsigned int signaling_NaN() noexcept
            {
                return static_cast<unsigned int>(0);
            }

            static constexpr unsigned int denorm_min() noexcept
            {
                return static_cast<unsigned int>(0);
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = true;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };

        template <> struct numeric_limits<long>
        {
            static constexpr bool is_specialized = true;

            static constexpr long min() noexcept
            {
                return -9223372036854775807L - 1;
            }

            static constexpr long max() noexcept
            {
                return 9223372036854775807L;
            }

            static constexpr long lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = (sizeof(long) * 8 - ((long)(-1) < 0));
            static constexpr int digits10 = ((sizeof(long) * 8 - ((long)(-1) < 0)) * 643L / 2136);

            static constexpr int max_digits10 = 0;

            static constexpr bool is_signed = true;
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr long epsilon() noexcept
            {
                return 0;
            }

            static constexpr long round_error() noexcept
            {
                return 0;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr long infinity() noexcept
            {
                return static_cast<long>(0);
            }

            static constexpr long quiet_NaN() noexcept
            {
                return static_cast<long>(0);
            }

            static constexpr long signaling_NaN() noexcept
            {
                return static_cast<long>(0);
            }

            static constexpr long denorm_min() noexcept
            {
                return static_cast<long>(0);
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = false;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };

        template <> struct numeric_limits<unsigned long>
        {
            static constexpr bool is_specialized = true;

            static constexpr unsigned long min() noexcept
            {
                return 0;
            }

            static constexpr unsigned long max() noexcept
            {
                return 9223372036854775807L * 2UL + 1;
            }

            static constexpr unsigned long lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = (sizeof(unsigned long) * 8 - ((unsigned long)(-1) < 0));
            static constexpr int digits10 = ((sizeof(unsigned long) * 8 - ((unsigned long)(-1) < 0)) * 643L / 2136);

            static constexpr int max_digits10 = 0;

            static constexpr bool is_signed = false;
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr unsigned long epsilon() noexcept
            {
                return 0;
            }

            static constexpr unsigned long round_error() noexcept
            {
                return 0;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr unsigned long infinity() noexcept
            {
                return static_cast<unsigned long>(0);
            }

            static constexpr unsigned long quiet_NaN() noexcept
            {
                return static_cast<unsigned long>(0);
            }

            static constexpr unsigned long signaling_NaN() noexcept
            {
                return static_cast<unsigned long>(0);
            }

            static constexpr unsigned long denorm_min() noexcept
            {
                return static_cast<unsigned long>(0);
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = true;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };

        template <> struct numeric_limits<long long>
        {
            static constexpr bool is_specialized = true;

            static constexpr long long min() noexcept
            {
                return -9223372036854775807LL - 1;
            }

            static constexpr long long max() noexcept
            {
                return 9223372036854775807LL;
            }

            static constexpr long long lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = (sizeof(long long) * 8 - ((long long)(-1) < 0));
            static constexpr int digits10 = ((sizeof(long long) * 8 - ((long long)(-1) < 0)) * 643L / 2136);

            static constexpr int max_digits10 = 0;

            static constexpr bool is_signed = true;
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr long long epsilon() noexcept
            {
                return 0;
            }

            static constexpr long long round_error() noexcept
            {
                return 0;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr long long infinity() noexcept
            {
                return static_cast<long long>(0);
            }

            static constexpr long long quiet_NaN() noexcept
            {
                return static_cast<long long>(0);
            }

            static constexpr long long signaling_NaN() noexcept
            {
                return static_cast<long long>(0);
            }

            static constexpr long long denorm_min() noexcept
            {
                return static_cast<long long>(0);
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = false;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };

        template <> struct numeric_limits<unsigned long long>
        {
            static constexpr bool is_specialized = true;

            static constexpr unsigned long long min() noexcept
            {
                return 0;
            }

            static constexpr unsigned long long max() noexcept
            {
                return 9223372036854775807LL * 2ULL + 1;
            }

            static constexpr unsigned long long lowest() noexcept
            {
                return min();
            }

            static constexpr int digits = (sizeof(unsigned long long) * 8 - ((unsigned long long)(-1) < 0));
            static constexpr int digits10 = ((sizeof(unsigned long long) * 8 - ((unsigned long long)(-1) < 0)) * 643L / 2136);

            static constexpr int max_digits10 = 0;

            static constexpr bool is_signed = false;
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;

            static constexpr unsigned long long epsilon() noexcept
            {
                return 0;
            }

            static constexpr unsigned long long round_error() noexcept
            {
                return 0;
            }

            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;

            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr unsigned long long infinity() noexcept
            {
                return static_cast<unsigned long long>(0);
            }

            static constexpr unsigned long long quiet_NaN() noexcept
            {
                return static_cast<unsigned long long>(0);
            }

            static constexpr unsigned long long signaling_NaN() noexcept
            {
                return static_cast<unsigned long long>(0);
            }

            static constexpr unsigned long long denorm_min() noexcept
            {
                return static_cast<unsigned long long>(0);
            }

            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = true;

            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };
        template <> struct numeric_limits<__int128>
        {
            static constexpr bool is_specialized = true;
            static constexpr __int128 min() noexcept
            {
                return (((__int128)(-1) < 0) ? -(((__int128)(-1) < 0) ? (((((__int128)1 << ((128 - ((__int128)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(__int128)0) - 1 : (__int128)0);
            }
            static constexpr __int128 max() noexcept
            {
                return (((__int128)(-1) < 0) ? (((((__int128)1 << ((128 - ((__int128)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(__int128)0);
            }
            static constexpr int digits = 128 - 1;
            static constexpr int digits10 = (128 - 1) * 643L / 2136;
            static constexpr bool is_signed = true;
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;
            static constexpr __int128 epsilon() noexcept
            {
                return 0;
            }
            static constexpr __int128 round_error() noexcept
            {
                return 0;
            }
            static constexpr __int128 lowest() noexcept
            {
                return min();
            }
            static constexpr int max_digits10 = 0;
            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;
            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;
            static constexpr __int128 infinity() noexcept
            {
                return static_cast<__int128>(0);
            }
            static constexpr __int128 quiet_NaN() noexcept
            {
                return static_cast<__int128>(0);
            }
            static constexpr __int128 signaling_NaN() noexcept
            {
                return static_cast<__int128>(0);
            }
            static constexpr __int128 denorm_min() noexcept
            {
                return static_cast<__int128>(0);
            }
            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = false;
            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };
        template <> struct numeric_limits<unsigned __int128>
        {
            static constexpr bool is_specialized = true;
            static constexpr unsigned __int128 min() noexcept
            {
                return 0;
            }
            static constexpr unsigned __int128 max() noexcept
            {
                return (((unsigned __int128)(-1) < 0) ? (((((unsigned __int128)1 << ((128 - ((unsigned __int128)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(unsigned __int128)0);
            }
            static constexpr unsigned __int128 lowest() noexcept
            {
                return min();
            }
            static constexpr int max_digits10 = 0;
            static constexpr int digits = 128;
            static constexpr int digits10 = 128 * 643L / 2136;
            static constexpr bool is_signed = false;
            static constexpr bool is_integer = true;
            static constexpr bool is_exact = true;
            static constexpr int radix = 2;
            static constexpr unsigned __int128 epsilon() noexcept
            {
                return 0;
            }
            static constexpr unsigned __int128 round_error() noexcept
            {
                return 0;
            }
            static constexpr int min_exponent = 0;
            static constexpr int min_exponent10 = 0;
            static constexpr int max_exponent = 0;
            static constexpr int max_exponent10 = 0;
            static constexpr bool has_infinity = false;
            static constexpr bool has_quiet_NaN = false;
            static constexpr bool has_signaling_NaN = false;
            static constexpr float_denorm_style has_denorm = denorm_absent;
            static constexpr bool has_denorm_loss = false;
            static constexpr unsigned __int128 infinity() noexcept
            {
                return static_cast<unsigned __int128>(0);
            }
            static constexpr unsigned __int128 quiet_NaN() noexcept
            {
                return static_cast<unsigned __int128>(0);
            }
            static constexpr unsigned __int128 signaling_NaN() noexcept
            {
                return static_cast<unsigned __int128>(0);
            }
            static constexpr unsigned __int128 denorm_min() noexcept
            {
                return static_cast<unsigned __int128>(0);
            }
            static constexpr bool is_iec559 = false;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = true;
            static constexpr bool traps = true;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_toward_zero;
        };
        template <> struct numeric_limits<float>
        {
            static constexpr bool is_specialized = true;

            static constexpr float min() noexcept
            {
                return 1.17549435e-38F;
            }

            static constexpr float max() noexcept
            {
                return 3.40282347e+38F;
            }

            static constexpr float lowest() noexcept
            {
                return -3.40282347e+38F;
            }

            static constexpr int digits = 24;
            static constexpr int digits10 = 6;

            static constexpr int max_digits10 = (2 + (24) * 643L / 2136);

            static constexpr bool is_signed = true;
            static constexpr bool is_integer = false;
            static constexpr bool is_exact = false;
            static constexpr int radix = 2;

            static constexpr float epsilon() noexcept
            {
                return 1.19209290e-7F;
            }

            static constexpr float round_error() noexcept
            {
                return 0.5F;
            }

            static constexpr int min_exponent = (-125);
            static constexpr int min_exponent10 = (-37);
            static constexpr int max_exponent = 128;
            static constexpr int max_exponent10 = 38;

            static constexpr bool has_infinity = 1;
            static constexpr bool has_quiet_NaN = 1;
            static constexpr bool has_signaling_NaN = has_quiet_NaN;
            static constexpr float_denorm_style has_denorm = bool(1) ? denorm_present : denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr float infinity() noexcept
            {
                return __builtin_huge_valf();
            }

            static constexpr float quiet_NaN() noexcept
            {
                return __builtin_nanf("");
            }

            static constexpr float signaling_NaN() noexcept
            {
                return __builtin_nansf("");
            }

            static constexpr float denorm_min() noexcept
            {
                return 1.40129846e-45F;
            }

            static constexpr bool is_iec559 = has_infinity && has_quiet_NaN && has_denorm == denorm_present;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = false;

            static constexpr bool traps = false;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_to_nearest;
        };

        template <> struct numeric_limits<double>
        {
            static constexpr bool is_specialized = true;

            static constexpr double min() noexcept
            {
                return 2.2250738585072014e-308;
            }

            static constexpr double max() noexcept
            {
                return 1.7976931348623157e+308;
            }

            static constexpr double lowest() noexcept
            {
                return -1.7976931348623157e+308;
            }

            static constexpr int digits = 53;
            static constexpr int digits10 = 15;

            static constexpr int max_digits10 = (2 + (53) * 643L / 2136);

            static constexpr bool is_signed = true;
            static constexpr bool is_integer = false;
            static constexpr bool is_exact = false;
            static constexpr int radix = 2;

            static constexpr double epsilon() noexcept
            {
                return 2.2204460492503131e-16;
            }

            static constexpr double round_error() noexcept
            {
                return 0.5;
            }

            static constexpr int min_exponent = (-1021);
            static constexpr int min_exponent10 = (-307);
            static constexpr int max_exponent = 1024;
            static constexpr int max_exponent10 = 308;

            static constexpr bool has_infinity = 1;
            static constexpr bool has_quiet_NaN = 1;
            static constexpr bool has_signaling_NaN = has_quiet_NaN;
            static constexpr float_denorm_style has_denorm = bool(1) ? denorm_present : denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr double infinity() noexcept
            {
                return __builtin_huge_val();
            }

            static constexpr double quiet_NaN() noexcept
            {
                return __builtin_nan("");
            }

            static constexpr double signaling_NaN() noexcept
            {
                return __builtin_nans("");
            }

            static constexpr double denorm_min() noexcept
            {
                return 4.9406564584124654e-324;
            }

            static constexpr bool is_iec559 = has_infinity && has_quiet_NaN && has_denorm == denorm_present;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = false;

            static constexpr bool traps = false;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_to_nearest;
        };

        template <> struct numeric_limits<long double>
        {
            static constexpr bool is_specialized = true;

            static constexpr long double min() noexcept
            {
                return 3.36210314311209350626e-4932L;
            }

            static constexpr long double max() noexcept
            {
                return 1.18973149535723176502e+4932L;
            }

            static constexpr long double lowest() noexcept
            {
                return -1.18973149535723176502e+4932L;
            }

            static constexpr int digits = 64;
            static constexpr int digits10 = 18;

            static constexpr int max_digits10 = (2 + (64) * 643L / 2136);

            static constexpr bool is_signed = true;
            static constexpr bool is_integer = false;
            static constexpr bool is_exact = false;
            static constexpr int radix = 2;

            static constexpr long double epsilon() noexcept
            {
                return 1.08420217248550443401e-19L;
            }

            static constexpr long double round_error() noexcept
            {
                return 0.5L;
            }

            static constexpr int min_exponent = (-16381);
            static constexpr int min_exponent10 = (-4931);
            static constexpr int max_exponent = 16384;
            static constexpr int max_exponent10 = 4932;

            static constexpr bool has_infinity = 1;
            static constexpr bool has_quiet_NaN = 1;
            static constexpr bool has_signaling_NaN = has_quiet_NaN;
            static constexpr float_denorm_style has_denorm = bool(1) ? denorm_present : denorm_absent;
            static constexpr bool has_denorm_loss = false;

            static constexpr long double infinity() noexcept
            {
                return __builtin_huge_vall();
            }

            static constexpr long double quiet_NaN() noexcept
            {
                return __builtin_nanl("");
            }

            static constexpr long double signaling_NaN() noexcept
            {
                return __builtin_nansl("");
            }

            static constexpr long double denorm_min() noexcept
            {
                return 3.64519953188247460253e-4951L;
            }

            static constexpr bool is_iec559 = has_infinity && has_quiet_NaN && has_denorm == denorm_present;
            static constexpr bool is_bounded = true;
            static constexpr bool is_modulo = false;

            static constexpr bool traps = false;
            static constexpr bool tinyness_before = false;
            static constexpr float_round_style round_style = round_to_nearest;
        };

    } // namespace )

    namespace std __attribute__((__visibility__("default")))
    {
        namespace __detail
        {

        template <typename _Tp> struct __floating_point_constant
        {
            static const _Tp __value;
        };

        template <typename _Tp> struct __numeric_constants
        {

            static _Tp __pi() throw()
            {
                return static_cast<_Tp>(3.1415926535897932384626433832795029L);
            }

            static _Tp __pi_2() throw()
            {
                return static_cast<_Tp>(1.5707963267948966192313216916397514L);
            }

            static _Tp __pi_3() throw()
            {
                return static_cast<_Tp>(1.0471975511965977461542144610931676L);
            }

            static _Tp __pi_4() throw()
            {
                return static_cast<_Tp>(0.7853981633974483096156608458198757L);
            }

            static _Tp __1_pi() throw()
            {
                return static_cast<_Tp>(0.3183098861837906715377675267450287L);
            }

            static _Tp __2_sqrtpi() throw()
            {
                return static_cast<_Tp>(1.1283791670955125738961589031215452L);
            }

            static _Tp __sqrt2() throw()
            {
                return static_cast<_Tp>(1.4142135623730950488016887242096981L);
            }

            static _Tp __sqrt3() throw()
            {
                return static_cast<_Tp>(1.7320508075688772935274463415058723L);
            }

            static _Tp __sqrtpio2() throw()
            {
                return static_cast<_Tp>(1.2533141373155002512078826424055226L);
            }

            static _Tp __sqrt1_2() throw()
            {
                return static_cast<_Tp>(0.7071067811865475244008443621048490L);
            }

            static _Tp __lnpi() throw()
            {
                return static_cast<_Tp>(1.1447298858494001741434273513530587L);
            }

            static _Tp __gamma_e() throw()
            {
                return static_cast<_Tp>(0.5772156649015328606065120900824024L);
            }

            static _Tp __euler() throw()
            {
                return static_cast<_Tp>(2.7182818284590452353602874713526625L);
            }
        };
        template <typename _Tp> inline bool __isnan(_Tp __x)
        {
            return std::isnan(__x);
        }
        } // namespace __detail

    } // namespace )

    namespace std __attribute__((__visibility__("default")))
    {
        namespace __detail
        {
        template <typename _Tp> _Tp __bernoulli_series(unsigned int __n)
        {

            static const _Tp __num[28] = {_Tp(1UL),
                                          -_Tp(1UL) / _Tp(2UL),
                                          _Tp(1UL) / _Tp(6UL),
                                          _Tp(0UL),
                                          -_Tp(1UL) / _Tp(30UL),
                                          _Tp(0UL),
                                          _Tp(1UL) / _Tp(42UL),
                                          _Tp(0UL),
                                          -_Tp(1UL) / _Tp(30UL),
                                          _Tp(0UL),
                                          _Tp(5UL) / _Tp(66UL),
                                          _Tp(0UL),
                                          -_Tp(691UL) / _Tp(2730UL),
                                          _Tp(0UL),
                                          _Tp(7UL) / _Tp(6UL),
                                          _Tp(0UL),
                                          -_Tp(3617UL) / _Tp(510UL),
                                          _Tp(0UL),
                                          _Tp(43867UL) / _Tp(798UL),
                                          _Tp(0UL),
                                          -_Tp(174611) / _Tp(330UL),
                                          _Tp(0UL),
                                          _Tp(854513UL) / _Tp(138UL),
                                          _Tp(0UL),
                                          -_Tp(236364091UL) / _Tp(2730UL),
                                          _Tp(0UL),
                                          _Tp(8553103UL) / _Tp(6UL),
                                          _Tp(0UL)};

            if (__n == 0)
                return _Tp(1);

            if (__n == 1)
                return -_Tp(1) / _Tp(2);

            if (__n % 2 == 1)
                return _Tp(0);

            if (__n < 28)
                return __num[__n];

            _Tp __fact = _Tp(1);
            if ((__n / 2) % 2 == 0)
                __fact *= _Tp(-1);
            for (unsigned int __k = 1; __k <= __n; ++__k)
                __fact *= __k / (_Tp(2) * __numeric_constants<_Tp>::__pi());
            __fact *= _Tp(2);

            _Tp __sum = _Tp(0);
            for (unsigned int __i = 1; __i < 1000; ++__i)
            {
                _Tp __term = std::pow(_Tp(__i), -_Tp(__n));
                if (__term < std::numeric_limits<_Tp>::epsilon())
                    break;
                __sum += __term;
            }

            return __fact * __sum;
        }
        template <typename _Tp> inline _Tp __bernoulli(int __n)
        {
            return __bernoulli_series<_Tp>(__n);
        }
        template <typename _Tp> _Tp __log_gamma_bernoulli(_Tp __x)
        {
            _Tp __lg = (__x - _Tp(0.5L)) * std::log(__x) - __x + _Tp(0.5L) * std::log(_Tp(2) * __numeric_constants<_Tp>::__pi());

            const _Tp __xx = __x * __x;
            _Tp __help = _Tp(1) / __x;
            for (unsigned int __i = 1; __i < 20; ++__i)
            {
                const _Tp __2i = _Tp(2 * __i);
                __help /= __2i * (__2i - _Tp(1)) * __xx;
                __lg += __bernoulli<_Tp>(2 * __i) * __help;
            }

            return __lg;
        }
        template <typename _Tp> _Tp __log_gamma_lanczos(_Tp __x)
        {
            const _Tp __xm1 = __x - _Tp(1);

            static const _Tp __lanczos_cheb_7[9] = {_Tp(0.99999999999980993227684700473478L), _Tp(676.520368121885098567009190444019L), _Tp(-1259.13921672240287047156078755283L),
                                                    _Tp(771.3234287776530788486528258894L),   _Tp(-176.61502916214059906584551354L),    _Tp(12.507343278686904814458936853L),
                                                    _Tp(-0.13857109526572011689554707L),      _Tp(9.984369578019570859563e-6L),         _Tp(1.50563273514931155834e-7L)};

            static const _Tp __LOGROOT2PI = _Tp(0.9189385332046727417803297364056176L);

            _Tp __sum = __lanczos_cheb_7[0];
            for (unsigned int __k = 1; __k < 9; ++__k)
                __sum += __lanczos_cheb_7[__k] / (__xm1 + __k);

            const _Tp __term1 = (__xm1 + _Tp(0.5L)) * std::log((__xm1 + _Tp(7.5L)) / __numeric_constants<_Tp>::__euler());
            const _Tp __term2 = __LOGROOT2PI + std::log(__sum);
            const _Tp __result = __term1 + (__term2 - _Tp(7));

            return __result;
        }
        template <typename _Tp> _Tp __log_gamma(_Tp __x)
        {
            if (__x > _Tp(0.5L))
                return __log_gamma_lanczos(__x);
            else
            {
                const _Tp __sin_fact = std::abs(std::sin(__numeric_constants<_Tp>::__pi() * __x));
                if (__sin_fact == _Tp(0))
                    std::__throw_domain_error(("Argument is nonpositive integer "
                                               "in __log_gamma"));

                return __numeric_constants<_Tp>::__lnpi() - std::log(__sin_fact) - __log_gamma_lanczos(_Tp(1) - __x);
            }
        }
        template <typename _Tp> _Tp __log_gamma_sign(_Tp __x)
        {
            if (__x > _Tp(0))
                return _Tp(1);
            else
            {
                const _Tp __sin_fact = std::sin(__numeric_constants<_Tp>::__pi() * __x);
                if (__sin_fact > _Tp(0))
                    return (1);
                else if (__sin_fact < _Tp(0))
                    return -_Tp(1);
                else
                    return _Tp(0);
            }
        }
        template <typename _Tp> _Tp __log_bincoef(unsigned int __n, unsigned int __k)
        {

            static const _Tp __max_bincoeff = std::numeric_limits<_Tp>::max_exponent10 * std::log(_Tp(10)) - _Tp(1);

            _Tp __coeff = ::std::lgamma(_Tp(1 + __n)) - ::std::lgamma(_Tp(1 + __k)) - ::std::lgamma(_Tp(1 + __n - __k));
        }
        template <typename _Tp> _Tp __bincoef(unsigned int __n, unsigned int __k)
        {

            static const _Tp __max_bincoeff = std::numeric_limits<_Tp>::max_exponent10 * std::log(_Tp(10)) - _Tp(1);

            const _Tp __log_coeff = __log_bincoef<_Tp>(__n, __k);
            if (__log_coeff > __max_bincoeff)
                return std::numeric_limits<_Tp>::quiet_NaN();
            else
                return std::exp(__log_coeff);
        }
        template <typename _Tp> inline _Tp __gamma(_Tp __x)
        {
            return std::exp(__log_gamma(__x));
        }
        template <typename _Tp> _Tp __psi_series(_Tp __x)
        {
            _Tp __sum = -__numeric_constants<_Tp>::__gamma_e() - _Tp(1) / __x;
            const unsigned int __max_iter = 100000;
            for (unsigned int __k = 1; __k < __max_iter; ++__k)
            {
                const _Tp __term = __x / (__k * (__k + __x));
                __sum += __term;
                if (std::abs(__term / __sum) < std::numeric_limits<_Tp>::epsilon())
                    break;
            }
            return __sum;
        }
        template <typename _Tp> _Tp __psi_asymp(_Tp __x)
        {
            _Tp __sum = std::log(__x) - _Tp(0.5L) / __x;
            const _Tp __xx = __x * __x;
            _Tp __xp = __xx;
            const unsigned int __max_iter = 100;
            for (unsigned int __k = 1; __k < __max_iter; ++__k)
            {
                const _Tp __term = __bernoulli<_Tp>(2 * __k) / (2 * __k * __xp);
                __sum -= __term;
                if (std::abs(__term / __sum) < std::numeric_limits<_Tp>::epsilon())
                    break;
                __xp *= __xx;
            }
            return __sum;
        }
        template <typename _Tp> _Tp __psi(_Tp __x)
        {
            const int __n = static_cast<int>(__x + 0.5L);
            const _Tp __eps = _Tp(4) * std::numeric_limits<_Tp>::epsilon();
            if (__n <= 0 && std::abs(__x - _Tp(__n)) < __eps)
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (__x < _Tp(0))
            {
                const _Tp __pi = __numeric_constants<_Tp>::__pi();
                return __psi(_Tp(1) - __x) - __pi * std::cos(__pi * __x) / std::sin(__pi * __x);
            }
            else if (__x > _Tp(100))
                return __psi_asymp(__x);
            else
                return __psi_series(__x);
        }
        template <typename _Tp> _Tp __psi(unsigned int __n, _Tp __x)
        {
            if (__x <= _Tp(0))
                std::__throw_domain_error(("Argument out of range "
                                           "in __psi"));

            else if (__n == 0)
                return __psi(__x);
            else
            {
                const _Tp __hzeta = __hurwitz_zeta(_Tp(__n + 1), __x);

                const _Tp __ln_nfact = ::std::lgamma(_Tp(__n + 1));

                _Tp __result = std::exp(__ln_nfact) * __hzeta;
                if (__n % 2 == 1)
                    __result = -__result;
                return __result;
            }
        }
        } // namespace __detail

    } // namespace )
    namespace std __attribute__((__visibility__("default")))
    {
        namespace __detail
        {
        template <typename _Tp> void __gamma_temme(_Tp __mu, _Tp& __gam1, _Tp& __gam2, _Tp& __gampl, _Tp& __gammi)
        {

            __gampl = _Tp(1) / ::std::tgamma(_Tp(1) + __mu);
            __gammi = _Tp(1) / ::std::tgamma(_Tp(1) - __mu);

            if (std::abs(__mu) < std::numeric_limits<_Tp>::epsilon())
                __gam1 = -_Tp(__numeric_constants<_Tp>::__gamma_e());
            else
                __gam1 = (__gammi - __gampl) / (_Tp(2) * __mu);

            __gam2 = (__gammi + __gampl) / (_Tp(2));

            return;
        }
        template <typename _Tp> void __bessel_jn(_Tp __nu, _Tp __x, _Tp& __Jnu, _Tp& __Nnu, _Tp& __Jpnu, _Tp& __Npnu)
        {
            if (__x == _Tp(0))
            {
                if (__nu == _Tp(0))
                {
                    __Jnu = _Tp(1);
                    __Jpnu = _Tp(0);
                }
                else if (__nu == _Tp(1))
                {
                    __Jnu = _Tp(0);
                    __Jpnu = _Tp(0.5L);
                }
                else
                {
                    __Jnu = _Tp(0);
                    __Jpnu = _Tp(0);
                }
                __Nnu = -std::numeric_limits<_Tp>::infinity();
                __Npnu = std::numeric_limits<_Tp>::infinity();
                return;
            }

            const _Tp __eps = std::numeric_limits<_Tp>::epsilon();

            const _Tp __fp_min = std::sqrt(std::numeric_limits<_Tp>::min());
            const int __max_iter = 15000;
            const _Tp __x_min = _Tp(2);

            const int __nl = (__x < __x_min ? static_cast<int>(__nu + _Tp(0.5L)) : std::max(0, static_cast<int>(__nu - __x + _Tp(1.5L))));

            const _Tp __mu = __nu - __nl;
            const _Tp __mu2 = __mu * __mu;
            const _Tp __xi = _Tp(1) / __x;
            const _Tp __xi2 = _Tp(2) * __xi;
            _Tp __w = __xi2 / __numeric_constants<_Tp>::__pi();
            int __isign = 1;
            _Tp __h = __nu * __xi;
            if (__h < __fp_min)
                __h = __fp_min;
            _Tp __b = __xi2 * __nu;
            _Tp __d = _Tp(0);
            _Tp __c = __h;
            int __i;
            for (__i = 1; __i <= __max_iter; ++__i)
            {
                __b += __xi2;
                __d = __b - __d;
                if (std::abs(__d) < __fp_min)
                    __d = __fp_min;
                __c = __b - _Tp(1) / __c;
                if (std::abs(__c) < __fp_min)
                    __c = __fp_min;
                __d = _Tp(1) / __d;
                const _Tp __del = __c * __d;
                __h *= __del;
                if (__d < _Tp(0))
                    __isign = -__isign;
                if (std::abs(__del - _Tp(1)) < __eps)
                    break;
            }
            if (__i > __max_iter)
                std::__throw_runtime_error(("Argument x too large in __bessel_jn; "
                                            "try asymptotic expansion."));

            _Tp __Jnul = __isign * __fp_min;
            _Tp __Jpnul = __h * __Jnul;
            _Tp __Jnul1 = __Jnul;
            _Tp __Jpnu1 = __Jpnul;
            _Tp __fact = __nu * __xi;
            for (int __l = __nl; __l >= 1; --__l)
            {
                const _Tp __Jnutemp = __fact * __Jnul + __Jpnul;
                __fact -= __xi;
                __Jpnul = __fact * __Jnutemp - __Jnul;
                __Jnul = __Jnutemp;
            }
            if (__Jnul == _Tp(0))
                __Jnul = __eps;
            _Tp __f = __Jpnul / __Jnul;
            _Tp __Nmu, __Nnu1, __Npmu, __Jmu;
            if (__x < __x_min)
            {
                const _Tp __x2 = __x / _Tp(2);
                const _Tp __pimu = __numeric_constants<_Tp>::__pi() * __mu;
                _Tp __fact = (std::abs(__pimu) < __eps ? _Tp(1) : __pimu / std::sin(__pimu));
                _Tp __d = -std::log(__x2);
                _Tp __e = __mu * __d;
                _Tp __fact2 = (std::abs(__e) < __eps ? _Tp(1) : std::sinh(__e) / __e);
                _Tp __gam1, __gam2, __gampl, __gammi;
                __gamma_temme(__mu, __gam1, __gam2, __gampl, __gammi);
                _Tp __ff = (_Tp(2) / __numeric_constants<_Tp>::__pi()) * __fact * (__gam1 * std::cosh(__e) + __gam2 * __fact2 * __d);
                __e = std::exp(__e);
                _Tp __p = __e / (__numeric_constants<_Tp>::__pi() * __gampl);
                _Tp __q = _Tp(1) / (__e * __numeric_constants<_Tp>::__pi() * __gammi);
                const _Tp __pimu2 = __pimu / _Tp(2);
                _Tp __fact3 = (std::abs(__pimu2) < __eps ? _Tp(1) : std::sin(__pimu2) / __pimu2);
                _Tp __r = __numeric_constants<_Tp>::__pi() * __pimu2 * __fact3 * __fact3;
                _Tp __c = _Tp(1);
                __d = -__x2 * __x2;
                _Tp __sum = __ff + __r * __q;
                _Tp __sum1 = __p;
                for (__i = 1; __i <= __max_iter; ++__i)
                {
                    __ff = (__i * __ff + __p + __q) / (__i * __i - __mu2);
                    __c *= __d / _Tp(__i);
                    __p /= _Tp(__i) - __mu;
                    __q /= _Tp(__i) + __mu;
                    const _Tp __del = __c * (__ff + __r * __q);
                    __sum += __del;
                    const _Tp __del1 = __c * __p - __i * __del;
                    __sum1 += __del1;
                    if (std::abs(__del) < __eps * (_Tp(1) + std::abs(__sum)))
                        break;
                }
                if (__i > __max_iter)
                    std::__throw_runtime_error(("Bessel y series failed to converge "
                                                "in __bessel_jn."));

                __Nmu = -__sum;
                __Nnu1 = -__sum1 * __xi2;
                __Npmu = __mu * __xi * __Nmu - __Nnu1;
                __Jmu = __w / (__Npmu - __f * __Nmu);
            }
            else
            {
                _Tp __a = _Tp(0.25L) - __mu2;
                _Tp __q = _Tp(1);
                _Tp __p = -__xi / _Tp(2);
                _Tp __br = _Tp(2) * __x;
                _Tp __bi = _Tp(2);
                _Tp __fact = __a * __xi / (__p * __p + __q * __q);
                _Tp __cr = __br + __q * __fact;
                _Tp __ci = __bi + __p * __fact;
                _Tp __den = __br * __br + __bi * __bi;
                _Tp __dr = __br / __den;
                _Tp __di = -__bi / __den;
                _Tp __dlr = __cr * __dr - __ci * __di;
                _Tp __dli = __cr * __di + __ci * __dr;
                _Tp __temp = __p * __dlr - __q * __dli;
                __q = __p * __dli + __q * __dlr;
                __p = __temp;
                int __i;
                for (__i = 2; __i <= __max_iter; ++__i)
                {
                    __a += _Tp(2 * (__i - 1));
                    __bi += _Tp(2);
                    __dr = __a * __dr + __br;
                    __di = __a * __di + __bi;
                    if (std::abs(__dr) + std::abs(__di) < __fp_min)
                        __dr = __fp_min;
                    __fact = __a / (__cr * __cr + __ci * __ci);
                    __cr = __br + __cr * __fact;
                    __ci = __bi - __ci * __fact;
                    if (std::abs(__cr) + std::abs(__ci) < __fp_min)
                        __cr = __fp_min;
                    __den = __dr * __dr + __di * __di;
                    __dr /= __den;
                    __di /= -__den;
                    __dlr = __cr * __dr - __ci * __di;
                    __dli = __cr * __di + __ci * __dr;
                    __temp = __p * __dlr - __q * __dli;
                    __q = __p * __dli + __q * __dlr;
                    __p = __temp;
                    if (std::abs(__dlr - _Tp(1)) + std::abs(__dli) < __eps)
                        break;
                }
                if (__i > __max_iter)
                    std::__throw_runtime_error(("Lentz's method failed "
                                                "in __bessel_jn."));

                const _Tp __gam = (__p - __f) / __q;
                __Jmu = std::sqrt(__w / ((__p - __f) * __gam + __q));

                __Jmu = ::std::copysign(__Jmu, __Jnul);

                __Nmu = __gam * __Jmu;
                __Npmu = (__p + __q / __gam) * __Nmu;
                __Nnu1 = __mu * __xi * __Nmu - __Npmu;
            }
            __fact = __Jmu / __Jnul;
            __Jnu = __fact * __Jnul1;
            __Jpnu = __fact * __Jpnu1;
            for (__i = 1; __i <= __nl; ++__i)
            {
                const _Tp __Nnutemp = (__mu + __i) * __xi2 * __Nnu1 - __Nmu;
                __Nmu = __Nnu1;
                __Nnu1 = __Nnutemp;
            }
            __Nnu = __Nmu;
            __Npnu = __nu * __xi * __Nmu - __Nnu1;

            return;
        }
        template <typename _Tp> void __cyl_bessel_jn_asymp(_Tp __nu, _Tp __x, _Tp& __Jnu, _Tp& __Nnu)
        {
            const _Tp __mu = _Tp(4) * __nu * __nu;
            const _Tp __8x = _Tp(8) * __x;

            _Tp __P = _Tp(0);
            _Tp __Q = _Tp(0);

            _Tp __k = _Tp(0);
            _Tp __term = _Tp(1);

            int __epsP = 0;
            int __epsQ = 0;

            _Tp __eps = std::numeric_limits<_Tp>::epsilon();

            do
            {
                __term *= (__k == 0 ? _Tp(1) : -(__mu - (2 * __k - 1) * (2 * __k - 1)) / (__k * __8x));

                __epsP = std::abs(__term) < __eps * std::abs(__P);
                __P += __term;

                __k++;

                __term *= (__mu - (2 * __k - 1) * (2 * __k - 1)) / (__k * __8x);
                __epsQ = std::abs(__term) < __eps * std::abs(__Q);
                __Q += __term;

                if (__epsP && __epsQ && __k > (__nu / 2.))
                    break;

                __k++;
            } while (__k < 1000);

            const _Tp __chi = __x - (__nu + _Tp(0.5L)) * __numeric_constants<_Tp>::__pi_2();

            const _Tp __c = std::cos(__chi);
            const _Tp __s = std::sin(__chi);

            const _Tp __coef = std::sqrt(_Tp(2) / (__numeric_constants<_Tp>::__pi() * __x));

            __Jnu = __coef * (__c * __P - __s * __Q);
            __Nnu = __coef * (__s * __P + __c * __Q);

            return;
        }
        template <typename _Tp> _Tp __cyl_bessel_ij_series(_Tp __nu, _Tp __x, _Tp __sgn, unsigned int __max_iter)
        {
            if (__x == _Tp(0))
                return __nu == _Tp(0) ? _Tp(1) : _Tp(0);

            const _Tp __x2 = __x / _Tp(2);
            _Tp __fact = __nu * std::log(__x2);

            __fact -= ::std::lgamma(__nu + _Tp(1));

            __fact = std::exp(__fact);
            const _Tp __xx4 = __sgn * __x2 * __x2;
            _Tp __Jn = _Tp(1);
            _Tp __term = _Tp(1);

            for (unsigned int __i = 1; __i < __max_iter; ++__i)
            {
                __term *= __xx4 / (_Tp(__i) * (__nu + _Tp(__i)));
                __Jn += __term;
                if (std::abs(__term / __Jn) < std::numeric_limits<_Tp>::epsilon())
                    break;
            }

            return __fact * __Jn;
        }
        template <typename _Tp> _Tp __cyl_bessel_j(_Tp __nu, _Tp __x)
        {
            if (__nu < _Tp(0) || __x < _Tp(0))
                std::__throw_domain_error(("Bad argument "
                                           "in __cyl_bessel_j."));

            else if (__isnan(__nu) || __isnan(__x))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (__x * __x < _Tp(10) * (__nu + _Tp(1)))
                return __cyl_bessel_ij_series(__nu, __x, -_Tp(1), 200);
            else if (__x > _Tp(1000))
            {
                _Tp __J_nu, __N_nu;
                __cyl_bessel_jn_asymp(__nu, __x, __J_nu, __N_nu);
                return __J_nu;
            }
            else
            {
                _Tp __J_nu, __N_nu, __Jp_nu, __Np_nu;
                __bessel_jn(__nu, __x, __J_nu, __N_nu, __Jp_nu, __Np_nu);
                return __J_nu;
            }
        }
        template <typename _Tp> _Tp __cyl_neumann_n(_Tp __nu, _Tp __x)
        {
            if (__nu < _Tp(0) || __x < _Tp(0))
                std::__throw_domain_error(("Bad argument "
                                           "in __cyl_neumann_n."));

            else if (__isnan(__nu) || __isnan(__x))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (__x > _Tp(1000))
            {
                _Tp __J_nu, __N_nu;
                __cyl_bessel_jn_asymp(__nu, __x, __J_nu, __N_nu);
                return __N_nu;
            }
            else
            {
                _Tp __J_nu, __N_nu, __Jp_nu, __Np_nu;
                __bessel_jn(__nu, __x, __J_nu, __N_nu, __Jp_nu, __Np_nu);
                return __N_nu;
            }
        }
        template <typename _Tp> void __sph_bessel_jn(unsigned int __n, _Tp __x, _Tp& __j_n, _Tp& __n_n, _Tp& __jp_n, _Tp& __np_n)
        {
            const _Tp __nu = _Tp(__n) + _Tp(0.5L);

            _Tp __J_nu, __N_nu, __Jp_nu, __Np_nu;
            __bessel_jn(__nu, __x, __J_nu, __N_nu, __Jp_nu, __Np_nu);

            const _Tp __factor = __numeric_constants<_Tp>::__sqrtpio2() / std::sqrt(__x);

            __j_n = __factor * __J_nu;
            __n_n = __factor * __N_nu;
            __jp_n = __factor * __Jp_nu - __j_n / (_Tp(2) * __x);
            __np_n = __factor * __Np_nu - __n_n / (_Tp(2) * __x);

            return;
        }
        template <typename _Tp> _Tp __sph_bessel(unsigned int __n, _Tp __x)
        {
            if (__x < _Tp(0))
                std::__throw_domain_error(("Bad argument "
                                           "in __sph_bessel."));

            else if (__isnan(__x))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (__x == _Tp(0))
            {
                if (__n == 0)
                    return _Tp(1);
                else
                    return _Tp(0);
            }
            else
            {
                _Tp __j_n, __n_n, __jp_n, __np_n;
                __sph_bessel_jn(__n, __x, __j_n, __n_n, __jp_n, __np_n);
                return __j_n;
            }
        }
        template <typename _Tp> _Tp __sph_neumann(unsigned int __n, _Tp __x)
        {
            if (__x < _Tp(0))
                std::__throw_domain_error(("Bad argument "
                                           "in __sph_neumann."));

            else if (__isnan(__x))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (__x == _Tp(0))
                return -std::numeric_limits<_Tp>::infinity();
            else
            {
                _Tp __j_n, __n_n, __jp_n, __np_n;
                __sph_bessel_jn(__n, __x, __j_n, __n_n, __jp_n, __np_n);
                return __n_n;
            }
        }
        } // namespace __detail

    } // namespace )
    namespace std __attribute__((__visibility__("default")))
    {
        namespace __detail
        {
        template <typename _Tp> _Tp __beta_gamma(_Tp __x, _Tp __y)
        {

            _Tp __bet;

            if (__x > __y)
            {
                __bet = ::std::tgamma(__x) / ::std::tgamma(__x + __y);
                __bet *= ::std::tgamma(__y);
            }
            else
            {
                __bet = ::std::tgamma(__y) / ::std::tgamma(__x + __y);
                __bet *= ::std::tgamma(__x);
            }
            return __bet;
        }
        template <typename _Tp> _Tp __beta_lgamma(_Tp __x, _Tp __y)
        {

            _Tp __bet = ::std::lgamma(__x) + ::std::lgamma(__y) - ::std::lgamma(__x + __y);

            __bet = std::exp(__bet);
            return __bet;
        }
        template <typename _Tp> _Tp __beta_product(_Tp __x, _Tp __y)
        {

            _Tp __bet = (__x + __y) / (__x * __y);

            unsigned int __max_iter = 1000000;
            for (unsigned int __k = 1; __k < __max_iter; ++__k)
            {
                _Tp __term = (_Tp(1) + (__x + __y) / __k) / ((_Tp(1) + __x / __k) * (_Tp(1) + __y / __k));
                __bet *= __term;
            }

            return __bet;
        }
        template <typename _Tp> inline _Tp __beta(_Tp __x, _Tp __y)
        {
            if (__isnan(__x) || __isnan(__y))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else
                return __beta_lgamma(__x, __y);
        }
        } // namespace __detail

    } // namespace )
    namespace std __attribute__((__visibility__("default")))
    {
        namespace __detail
        {
        template <typename _Tp> _Tp __ellint_rf(_Tp __x, _Tp __y, _Tp __z)
        {
            const _Tp __min = std::numeric_limits<_Tp>::min();
            const _Tp __max = std::numeric_limits<_Tp>::max();
            const _Tp __lolim = _Tp(5) * __min;
            const _Tp __uplim = __max / _Tp(5);

            if (__x < _Tp(0) || __y < _Tp(0) || __z < _Tp(0))
                std::__throw_domain_error(("Argument less than zero "
                                           "in __ellint_rf."));

            else if (__x + __y < __lolim || __x + __z < __lolim || __y + __z < __lolim)
                std::__throw_domain_error(("Argument too small in __ellint_rf"));
            else
            {
                const _Tp __c0 = _Tp(1) / _Tp(4);
                const _Tp __c1 = _Tp(1) / _Tp(24);
                const _Tp __c2 = _Tp(1) / _Tp(10);
                const _Tp __c3 = _Tp(3) / _Tp(44);
                const _Tp __c4 = _Tp(1) / _Tp(14);

                _Tp __xn = __x;
                _Tp __yn = __y;
                _Tp __zn = __z;

                const _Tp __eps = std::numeric_limits<_Tp>::epsilon();
                const _Tp __errtol = std::pow(__eps, _Tp(1) / _Tp(6));
                _Tp __mu;
                _Tp __xndev, __yndev, __zndev;

                const unsigned int __max_iter = 100;
                for (unsigned int __iter = 0; __iter < __max_iter; ++__iter)
                {
                    __mu = (__xn + __yn + __zn) / _Tp(3);
                    __xndev = 2 - (__mu + __xn) / __mu;
                    __yndev = 2 - (__mu + __yn) / __mu;
                    __zndev = 2 - (__mu + __zn) / __mu;
                    _Tp __epsilon = std::max(std::abs(__xndev), std::abs(__yndev));
                    __epsilon = std::max(__epsilon, std::abs(__zndev));
                    if (__epsilon < __errtol)
                        break;
                    const _Tp __xnroot = std::sqrt(__xn);
                    const _Tp __ynroot = std::sqrt(__yn);
                    const _Tp __znroot = std::sqrt(__zn);
                    const _Tp __lambda = __xnroot * (__ynroot + __znroot) + __ynroot * __znroot;
                    __xn = __c0 * (__xn + __lambda);
                    __yn = __c0 * (__yn + __lambda);
                    __zn = __c0 * (__zn + __lambda);
                }

                const _Tp __e2 = __xndev * __yndev - __zndev * __zndev;
                const _Tp __e3 = __xndev * __yndev * __zndev;
                const _Tp __s = _Tp(1) + (__c1 * __e2 - __c2 - __c3 * __e3) * __e2 + __c4 * __e3;

                return __s / std::sqrt(__mu);
            }
        }
        template <typename _Tp> _Tp __comp_ellint_1_series(_Tp __k)
        {

            const _Tp __kk = __k * __k;

            _Tp __term = __kk / _Tp(4);
            _Tp __sum = _Tp(1) + __term;

            const unsigned int __max_iter = 1000;
            for (unsigned int __i = 2; __i < __max_iter; ++__i)
            {
                __term *= (2 * __i - 1) * __kk / (2 * __i);
                if (__term < std::numeric_limits<_Tp>::epsilon())
                    break;
                __sum += __term;
            }

            return __numeric_constants<_Tp>::__pi_2() * __sum;
        }
        template <typename _Tp> _Tp __comp_ellint_1(_Tp __k)
        {

            if (__isnan(__k))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (std::abs(__k) >= _Tp(1))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else
                return __ellint_rf(_Tp(0), _Tp(1) - __k * __k, _Tp(1));
        }
        template <typename _Tp> _Tp __ellint_1(_Tp __k, _Tp __phi)
        {

            if (__isnan(__k) || __isnan(__phi))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (std::abs(__k) > _Tp(1))
                std::__throw_domain_error(("Bad argument in __ellint_1."));
            else
            {

                const int __n = std::floor(__phi / __numeric_constants<_Tp>::__pi() + _Tp(0.5L));
                const _Tp __phi_red = __phi - __n * __numeric_constants<_Tp>::__pi();

                const _Tp __s = std::sin(__phi_red);
                const _Tp __c = std::cos(__phi_red);

                const _Tp __F = __s * __ellint_rf(__c * __c, _Tp(1) - __k * __k * __s * __s, _Tp(1));

                if (__n == 0)
                    return __F;
                else
                    return __F + _Tp(2) * __n * __comp_ellint_1(__k);
            }
        }
        template <typename _Tp> _Tp __comp_ellint_2_series(_Tp __k)
        {

            const _Tp __kk = __k * __k;

            _Tp __term = __kk;
            _Tp __sum = __term;

            const unsigned int __max_iter = 1000;
            for (unsigned int __i = 2; __i < __max_iter; ++__i)
            {
                const _Tp __i2m = 2 * __i - 1;
                const _Tp __i2 = 2 * __i;
                __term *= __i2m * __i2m * __kk / (__i2 * __i2);
                if (__term < std::numeric_limits<_Tp>::epsilon())
                    break;
                __sum += __term / __i2m;
            }

            return __numeric_constants<_Tp>::__pi_2() * (_Tp(1) - __sum);
        }
        template <typename _Tp> _Tp __ellint_rd(_Tp __x, _Tp __y, _Tp __z)
        {
            const _Tp __eps = std::numeric_limits<_Tp>::epsilon();
            const _Tp __errtol = std::pow(__eps / _Tp(8), _Tp(1) / _Tp(6));
            const _Tp __min = std::numeric_limits<_Tp>::min();
            const _Tp __max = std::numeric_limits<_Tp>::max();
            const _Tp __lolim = _Tp(2) / std::pow(__max, _Tp(2) / _Tp(3));
            const _Tp __uplim = std::pow(_Tp(0.1L) * __errtol / __min, _Tp(2) / _Tp(3));

            if (__x < _Tp(0) || __y < _Tp(0))
                std::__throw_domain_error(("Argument less than zero "
                                           "in __ellint_rd."));

            else if (__x + __y < __lolim || __z < __lolim)
                std::__throw_domain_error(("Argument too small "
                                           "in __ellint_rd."));

            else
            {
                const _Tp __c0 = _Tp(1) / _Tp(4);
                const _Tp __c1 = _Tp(3) / _Tp(14);
                const _Tp __c2 = _Tp(1) / _Tp(6);
                const _Tp __c3 = _Tp(9) / _Tp(22);
                const _Tp __c4 = _Tp(3) / _Tp(26);

                _Tp __xn = __x;
                _Tp __yn = __y;
                _Tp __zn = __z;
                _Tp __sigma = _Tp(0);
                _Tp __power4 = _Tp(1);

                _Tp __mu;
                _Tp __xndev, __yndev, __zndev;

                const unsigned int __max_iter = 100;
                for (unsigned int __iter = 0; __iter < __max_iter; ++__iter)
                {
                    __mu = (__xn + __yn + _Tp(3) * __zn) / _Tp(5);
                    __xndev = (__mu - __xn) / __mu;
                    __yndev = (__mu - __yn) / __mu;
                    __zndev = (__mu - __zn) / __mu;
                    _Tp __epsilon = std::max(std::abs(__xndev), std::abs(__yndev));
                    __epsilon = std::max(__epsilon, std::abs(__zndev));
                    if (__epsilon < __errtol)
                        break;
                    _Tp __xnroot = std::sqrt(__xn);
                    _Tp __ynroot = std::sqrt(__yn);
                    _Tp __znroot = std::sqrt(__zn);
                    _Tp __lambda = __xnroot * (__ynroot + __znroot) + __ynroot * __znroot;
                    __sigma += __power4 / (__znroot * (__zn + __lambda));
                    __power4 *= __c0;
                    __xn = __c0 * (__xn + __lambda);
                    __yn = __c0 * (__yn + __lambda);
                    __zn = __c0 * (__zn + __lambda);
                }

                _Tp __eaa = __xndev * __yndev;
                _Tp __eb = __zndev * __zndev;
                _Tp __ec = __eaa - __eb;
                _Tp __ed = __eaa - _Tp(6) * __eb;
                _Tp __ef = __ed + __ec + __ec;
                _Tp __s1 = __ed * (-__c1 + __c3 * __ed / _Tp(3) - _Tp(3) * __c4 * __zndev * __ef / _Tp(2));
                _Tp __s2 = __zndev * (__c2 * __ef + __zndev * (-__c3 * __ec - __zndev * __c4 - __eaa));

                return _Tp(3) * __sigma + __power4 * (_Tp(1) + __s1 + __s2) / (__mu * std::sqrt(__mu));
            }
        }
        template <typename _Tp> _Tp __comp_ellint_2(_Tp __k)
        {

            if (__isnan(__k))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (std::abs(__k) == 1)
                return _Tp(1);
            else if (std::abs(__k) > _Tp(1))
                std::__throw_domain_error(("Bad argument in __comp_ellint_2."));
            else
            {
                const _Tp __kk = __k * __k;

                return __ellint_rf(_Tp(0), _Tp(1) - __kk, _Tp(1)) - __kk * __ellint_rd(_Tp(0), _Tp(1) - __kk, _Tp(1)) / _Tp(3);
            }
        }
        template <typename _Tp> _Tp __ellint_2(_Tp __k, _Tp __phi)
        {

            if (__isnan(__k) || __isnan(__phi))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (std::abs(__k) > _Tp(1))
                std::__throw_domain_error(("Bad argument in __ellint_2."));
            else
            {

                const int __n = std::floor(__phi / __numeric_constants<_Tp>::__pi() + _Tp(0.5L));
                const _Tp __phi_red = __phi - __n * __numeric_constants<_Tp>::__pi();

                const _Tp __kk = __k * __k;
                const _Tp __s = std::sin(__phi_red);
                const _Tp __ss = __s * __s;
                const _Tp __sss = __ss * __s;
                const _Tp __c = std::cos(__phi_red);
                const _Tp __cc = __c * __c;

                const _Tp __E = __s * __ellint_rf(__cc, _Tp(1) - __kk * __ss, _Tp(1)) - __kk * __sss * __ellint_rd(__cc, _Tp(1) - __kk * __ss, _Tp(1)) / _Tp(3);

                if (__n == 0)
                    return __E;
                else
                    return __E + _Tp(2) * __n * __comp_ellint_2(__k);
            }
        }
        template <typename _Tp> _Tp __ellint_rc(_Tp __x, _Tp __y)
        {
            const _Tp __min = std::numeric_limits<_Tp>::min();
            const _Tp __max = std::numeric_limits<_Tp>::max();
            const _Tp __lolim = _Tp(5) * __min;
            const _Tp __uplim = __max / _Tp(5);

            if (__x < _Tp(0) || __y < _Tp(0) || __x + __y < __lolim)
                std::__throw_domain_error(("Argument less than zero "
                                           "in __ellint_rc."));

            else
            {
                const _Tp __c0 = _Tp(1) / _Tp(4);
                const _Tp __c1 = _Tp(1) / _Tp(7);
                const _Tp __c2 = _Tp(9) / _Tp(22);
                const _Tp __c3 = _Tp(3) / _Tp(10);
                const _Tp __c4 = _Tp(3) / _Tp(8);

                _Tp __xn = __x;
                _Tp __yn = __y;

                const _Tp __eps = std::numeric_limits<_Tp>::epsilon();
                const _Tp __errtol = std::pow(__eps / _Tp(30), _Tp(1) / _Tp(6));
                _Tp __mu;
                _Tp __sn;

                const unsigned int __max_iter = 100;
                for (unsigned int __iter = 0; __iter < __max_iter; ++__iter)
                {
                    __mu = (__xn + _Tp(2) * __yn) / _Tp(3);
                    __sn = (__yn + __mu) / __mu - _Tp(2);
                    if (std::abs(__sn) < __errtol)
                        break;
                    const _Tp __lambda = _Tp(2) * std::sqrt(__xn) * std::sqrt(__yn) + __yn;
                    __xn = __c0 * (__xn + __lambda);
                    __yn = __c0 * (__yn + __lambda);
                }

                _Tp __s = __sn * __sn * (__c3 + __sn * (__c1 + __sn * (__c4 + __sn * __c2)));

                return (_Tp(1) + __s) / std::sqrt(__mu);
            }
        }
        template <typename _Tp> _Tp __ellint_rj(_Tp __x, _Tp __y, _Tp __z, _Tp __p)
        {
            const _Tp __min = std::numeric_limits<_Tp>::min();
            const _Tp __max = std::numeric_limits<_Tp>::max();
            const _Tp __lolim = std::pow(_Tp(5) * __min, _Tp(1) / _Tp(3));
            const _Tp __uplim = _Tp(0.3L) * std::pow(_Tp(0.2L) * __max, _Tp(1) / _Tp(3));

            if (__x < _Tp(0) || __y < _Tp(0) || __z < _Tp(0))
                std::__throw_domain_error(("Argument less than zero "
                                           "in __ellint_rj."));

            else if (__x + __y < __lolim || __x + __z < __lolim || __y + __z < __lolim || __p < __lolim)
                std::__throw_domain_error(("Argument too small "
                                           "in __ellint_rj"));

            else
            {
                const _Tp __c0 = _Tp(1) / _Tp(4);
                const _Tp __c1 = _Tp(3) / _Tp(14);
                const _Tp __c2 = _Tp(1) / _Tp(3);
                const _Tp __c3 = _Tp(3) / _Tp(22);
                const _Tp __c4 = _Tp(3) / _Tp(26);

                _Tp __xn = __x;
                _Tp __yn = __y;
                _Tp __zn = __z;
                _Tp __pn = __p;
                _Tp __sigma = _Tp(0);
                _Tp __power4 = _Tp(1);

                const _Tp __eps = std::numeric_limits<_Tp>::epsilon();
                const _Tp __errtol = std::pow(__eps / _Tp(8), _Tp(1) / _Tp(6));

                _Tp __lambda, __mu;
                _Tp __xndev, __yndev, __zndev, __pndev;

                const unsigned int __max_iter = 100;
                for (unsigned int __iter = 0; __iter < __max_iter; ++__iter)
                {
                    __mu = (__xn + __yn + __zn + _Tp(2) * __pn) / _Tp(5);
                    __xndev = (__mu - __xn) / __mu;
                    __yndev = (__mu - __yn) / __mu;
                    __zndev = (__mu - __zn) / __mu;
                    __pndev = (__mu - __pn) / __mu;
                    _Tp __epsilon = std::max(std::abs(__xndev), std::abs(__yndev));
                    __epsilon = std::max(__epsilon, std::abs(__zndev));
                    __epsilon = std::max(__epsilon, std::abs(__pndev));
                    if (__epsilon < __errtol)
                        break;
                    const _Tp __xnroot = std::sqrt(__xn);
                    const _Tp __ynroot = std::sqrt(__yn);
                    const _Tp __znroot = std::sqrt(__zn);
                    const _Tp __lambda = __xnroot * (__ynroot + __znroot) + __ynroot * __znroot;
                    const _Tp __alpha1 = __pn * (__xnroot + __ynroot + __znroot) + __xnroot * __ynroot * __znroot;
                    const _Tp __alpha2 = __alpha1 * __alpha1;
                    const _Tp __beta = __pn * (__pn + __lambda) * (__pn + __lambda);
                    __sigma += __power4 * __ellint_rc(__alpha2, __beta);
                    __power4 *= __c0;
                    __xn = __c0 * (__xn + __lambda);
                    __yn = __c0 * (__yn + __lambda);
                    __zn = __c0 * (__zn + __lambda);
                    __pn = __c0 * (__pn + __lambda);
                }

                _Tp __eaa = __xndev * (__yndev + __zndev) + __yndev * __zndev;
                _Tp __eb = __xndev * __yndev * __zndev;
                _Tp __ec = __pndev * __pndev;
                _Tp __e2 = __eaa - _Tp(3) * __ec;
                _Tp __e3 = __eb + _Tp(2) * __pndev * (__eaa - __ec);
                _Tp __s1 = _Tp(1) + __e2 * (-__c1 + _Tp(3) * __c3 * __e2 / _Tp(4) - _Tp(3) * __c4 * __e3 / _Tp(2));
                _Tp __s2 = __eb * (__c2 / _Tp(2) + __pndev * (-__c3 - __c3 + __pndev * __c4));
                _Tp __s3 = __pndev * __eaa * (__c2 - __pndev * __c3) - __c2 * __pndev * __ec;

                return _Tp(3) * __sigma + __power4 * (__s1 + __s2 + __s3) / (__mu * std::sqrt(__mu));
            }
        }
        template <typename _Tp> _Tp __comp_ellint_3(_Tp __k, _Tp __nu)
        {

            if (__isnan(__k) || __isnan(__nu))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (__nu == _Tp(1))
                return std::numeric_limits<_Tp>::infinity();
            else if (std::abs(__k) > _Tp(1))
                std::__throw_domain_error(("Bad argument in __comp_ellint_3."));
            else
            {
                const _Tp __kk = __k * __k;

                return __ellint_rf(_Tp(0), _Tp(1) - __kk, _Tp(1)) + __nu * __ellint_rj(_Tp(0), _Tp(1) - __kk, _Tp(1), _Tp(1) - __nu) / _Tp(3);
            }
        }
        template <typename _Tp> _Tp __ellint_3(_Tp __k, _Tp __nu, _Tp __phi)
        {

            if (__isnan(__k) || __isnan(__nu) || __isnan(__phi))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (std::abs(__k) > _Tp(1))
                std::__throw_domain_error(("Bad argument in __ellint_3."));
            else
            {

                const int __n = std::floor(__phi / __numeric_constants<_Tp>::__pi() + _Tp(0.5L));
                const _Tp __phi_red = __phi - __n * __numeric_constants<_Tp>::__pi();

                const _Tp __kk = __k * __k;
                const _Tp __s = std::sin(__phi_red);
                const _Tp __ss = __s * __s;
                const _Tp __sss = __ss * __s;
                const _Tp __c = std::cos(__phi_red);
                const _Tp __cc = __c * __c;

                const _Tp __Pi = __s * __ellint_rf(__cc, _Tp(1) - __kk * __ss, _Tp(1)) + __nu * __sss * __ellint_rj(__cc, _Tp(1) - __kk * __ss, _Tp(1), _Tp(1) - __nu * __ss) / _Tp(3);

                if (__n == 0)
                    return __Pi;
                else
                    return __Pi + _Tp(2) * __n * __comp_ellint_3(__k, __nu);
            }
        }
        } // namespace __detail

    } // namespace )
    namespace std __attribute__((__visibility__("default")))
    {
        namespace __detail
        {
        template <typename _Tp> _Tp __expint_E1(_Tp);
        template <typename _Tp> _Tp __expint_E1_series(_Tp __x)
        {
            const _Tp __eps = std::numeric_limits<_Tp>::epsilon();
            _Tp __term = _Tp(1);
            _Tp __esum = _Tp(0);
            _Tp __osum = _Tp(0);
            const unsigned int __max_iter = 1000;
            for (unsigned int __i = 1; __i < __max_iter; ++__i)
            {
                __term *= -__x / __i;
                if (std::abs(__term) < __eps)
                    break;
                if (__term >= _Tp(0))
                    __esum += __term / __i;
                else
                    __osum += __term / __i;
            }

            return -__esum - __osum - __numeric_constants<_Tp>::__gamma_e() - std::log(__x);
        }
        template <typename _Tp> _Tp __expint_E1_asymp(_Tp __x)
        {
            _Tp __term = _Tp(1);
            _Tp __esum = _Tp(1);
            _Tp __osum = _Tp(0);
            const unsigned int __max_iter = 1000;
            for (unsigned int __i = 1; __i < __max_iter; ++__i)
            {
                _Tp __prev = __term;
                __term *= -__i / __x;
                if (std::abs(__term) > std::abs(__prev))
                    break;
                if (__term >= _Tp(0))
                    __esum += __term;
                else
                    __osum += __term;
            }

            return std::exp(-__x) * (__esum + __osum) / __x;
        }
        template <typename _Tp> _Tp __expint_En_series(unsigned int __n, _Tp __x)
        {
            const unsigned int __max_iter = 1000;
            const _Tp __eps = std::numeric_limits<_Tp>::epsilon();
            const int __nm1 = __n - 1;
            _Tp __ans = (__nm1 != 0 ? _Tp(1) / __nm1 : -std::log(__x) - __numeric_constants<_Tp>::__gamma_e());
            _Tp __fact = _Tp(1);
            for (int __i = 1; __i <= __max_iter; ++__i)
            {
                __fact *= -__x / _Tp(__i);
                _Tp __del;
                if (__i != __nm1)
                    __del = -__fact / _Tp(__i - __nm1);
                else
                {
                    _Tp __psi = -__numeric_constants<_Tp>::gamma_e();
                    for (int __ii = 1; __ii <= __nm1; ++__ii)
                        __psi += _Tp(1) / _Tp(__ii);
                    __del = __fact * (__psi - std::log(__x));
                }
                __ans += __del;
                if (std::abs(__del) < __eps * std::abs(__ans))
                    return __ans;
            }
            std::__throw_runtime_error(("Series summation failed "
                                        "in __expint_En_series."));
        }
        template <typename _Tp> _Tp __expint_En_cont_frac(unsigned int __n, _Tp __x)
        {
            const unsigned int __max_iter = 1000;
            const _Tp __eps = std::numeric_limits<_Tp>::epsilon();
            const _Tp __fp_min = std::numeric_limits<_Tp>::min();
            const int __nm1 = __n - 1;
            _Tp __b = __x + _Tp(__n);
            _Tp __c = _Tp(1) / __fp_min;
            _Tp __d = _Tp(1) / __b;
            _Tp __h = __d;
            for (unsigned int __i = 1; __i <= __max_iter; ++__i)
            {
                _Tp __a = -_Tp(__i * (__nm1 + __i));
                __b += _Tp(2);
                __d = _Tp(1) / (__a * __d + __b);
                __c = __b + __a / __c;
                const _Tp __del = __c * __d;
                __h *= __del;
                if (std::abs(__del - _Tp(1)) < __eps)
                {
                    const _Tp __ans = __h * std::exp(-__x);
                    return __ans;
                }
            }
            std::__throw_runtime_error(("Continued fraction failed "
                                        "in __expint_En_cont_frac."));
        }
        template <typename _Tp> _Tp __expint_En_recursion(unsigned int __n, _Tp __x)
        {
            _Tp __En;
            _Tp __E1 = __expint_E1(__x);
            if (__x < _Tp(__n))
            {

                __En = __E1;
                for (unsigned int __j = 2; __j < __n; ++__j)
                    __En = (std::exp(-__x) - __x * __En) / _Tp(__j - 1);
            }
            else
            {

                __En = _Tp(1);
                const int __N = __n + 20;
                _Tp __save = _Tp(0);
                for (int __j = __N; __j > 0; --__j)
                {
                    __En = (std::exp(-__x) - __j * __En) / __x;
                    if (__j == __n)
                        __save = __En;
                }
                _Tp __norm = __En / __E1;
                __En /= __norm;
            }

            return __En;
        }
        template <typename _Tp> _Tp __expint_Ei_series(_Tp __x)
        {
            _Tp __term = _Tp(1);
            _Tp __sum = _Tp(0);
            const unsigned int __max_iter = 1000;
            for (unsigned int __i = 1; __i < __max_iter; ++__i)
            {
                __term *= __x / __i;
                __sum += __term / __i;
                if (__term < std::numeric_limits<_Tp>::epsilon() * __sum)
                    break;
            }

            return __numeric_constants<_Tp>::__gamma_e() + __sum + std::log(__x);
        }
        template <typename _Tp> _Tp __expint_Ei_asymp(_Tp __x)
        {
            _Tp __term = _Tp(1);
            _Tp __sum = _Tp(1);
            const unsigned int __max_iter = 1000;
            for (unsigned int __i = 1; __i < __max_iter; ++__i)
            {
                _Tp __prev = __term;
                __term *= __i / __x;
                if (__term < std::numeric_limits<_Tp>::epsilon())
                    break;
                if (__term >= __prev)
                    break;
                __sum += __term;
            }

            return std::exp(__x) * __sum / __x;
        }
        template <typename _Tp> _Tp __expint_Ei(_Tp __x)
        {
            if (__x < _Tp(0))
                return -__expint_E1(-__x);
            else if (__x < -std::log(std::numeric_limits<_Tp>::epsilon()))
                return __expint_Ei_series(__x);
            else
                return __expint_Ei_asymp(__x);
        }
        template <typename _Tp> _Tp __expint_E1(_Tp __x)
        {
            if (__x < _Tp(0))
                return -__expint_Ei(-__x);
            else if (__x < _Tp(1))
                return __expint_E1_series(__x);
            else if (__x < _Tp(100))
                return __expint_En_cont_frac(1, __x);
            else
                return __expint_E1_asymp(__x);
        }
        template <typename _Tp> _Tp __expint_asymp(unsigned int __n, _Tp __x)
        {
            _Tp __term = _Tp(1);
            _Tp __sum = _Tp(1);
            for (unsigned int __i = 1; __i <= __n; ++__i)
            {
                _Tp __prev = __term;
                __term *= -(__n - __i + 1) / __x;
                if (std::abs(__term) > std::abs(__prev))
                    break;
                __sum += __term;
            }

            return std::exp(-__x) * __sum / __x;
        }
        template <typename _Tp> _Tp __expint_large_n(unsigned int __n, _Tp __x)
        {
            const _Tp __xpn = __x + __n;
            const _Tp __xpn2 = __xpn * __xpn;
            _Tp __term = _Tp(1);
            _Tp __sum = _Tp(1);
            for (unsigned int __i = 1; __i <= __n; ++__i)
            {
                _Tp __prev = __term;
                __term *= (__n - 2 * (__i - 1) * __x) / __xpn2;
                if (std::abs(__term) < std::numeric_limits<_Tp>::epsilon())
                    break;
                __sum += __term;
            }

            return std::exp(-__x) * __sum / __xpn;
        }
        template <typename _Tp> _Tp __expint(unsigned int __n, _Tp __x)
        {

            if (__isnan(__x))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (__n <= 1 && __x == _Tp(0))
                return std::numeric_limits<_Tp>::infinity();
            else
            {
                _Tp __E0 = std::exp(__x) / __x;
                if (__n == 0)
                    return __E0;

                _Tp __E1 = __expint_E1(__x);
                if (__n == 1)
                    return __E1;

                if (__x == _Tp(0))
                    return _Tp(1) / static_cast<_Tp>(__n - 1);

                _Tp __En = __expint_En_recursion(__n, __x);

                return __En;
            }
        }
        template <typename _Tp> inline _Tp __expint(_Tp __x)
        {
            if (__isnan(__x))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else
                return __expint_Ei(__x);
        }
        } // namespace __detail

    } // namespace )
    namespace std __attribute__((__visibility__("default")))
    {
        namespace __detail
        {
        template <typename _Tp> _Tp __conf_hyperg_series(_Tp __a, _Tp __c, _Tp __x)
        {
            const _Tp __eps = std::numeric_limits<_Tp>::epsilon();

            _Tp __term = _Tp(1);
            _Tp __Fac = _Tp(1);
            const unsigned int __max_iter = 100000;
            unsigned int __i;
            for (__i = 0; __i < __max_iter; ++__i)
            {
                __term *= (__a + _Tp(__i)) * __x / ((__c + _Tp(__i)) * _Tp(1 + __i));
                if (std::abs(__term) < __eps)
                {
                    break;
                }
                __Fac += __term;
            }
            if (__i == __max_iter)
                std::__throw_runtime_error(("Series failed to converge "
                                            "in __conf_hyperg_series."));

            return __Fac;
        }
        template <typename _Tp> _Tp __conf_hyperg_luke(_Tp __a, _Tp __c, _Tp __xin)
        {
            const _Tp __big = std::pow(std::numeric_limits<_Tp>::max(), _Tp(0.16L));
            const int __nmax = 20000;
            const _Tp __eps = std::numeric_limits<_Tp>::epsilon();
            const _Tp __x = -__xin;
            const _Tp __x3 = __x * __x * __x;
            const _Tp __t0 = __a / __c;
            const _Tp __t1 = (__a + _Tp(1)) / (_Tp(2) * __c);
            const _Tp __t2 = (__a + _Tp(2)) / (_Tp(2) * (__c + _Tp(1)));
            _Tp __F = _Tp(1);
            _Tp __prec;

            _Tp __Bnm3 = _Tp(1);
            _Tp __Bnm2 = _Tp(1) + __t1 * __x;
            _Tp __Bnm1 = _Tp(1) + __t2 * __x * (_Tp(1) + __t1 / _Tp(3) * __x);

            _Tp __Anm3 = _Tp(1);
            _Tp __Anm2 = __Bnm2 - __t0 * __x;
            _Tp __Anm1 = __Bnm1 - __t0 * (_Tp(1) + __t2 * __x) * __x + __t0 * __t1 * (__c / (__c + _Tp(1))) * __x * __x;

            int __n = 3;
            while (1)
            {
                _Tp __npam1 = _Tp(__n - 1) + __a;
                _Tp __npcm1 = _Tp(__n - 1) + __c;
                _Tp __npam2 = _Tp(__n - 2) + __a;
                _Tp __npcm2 = _Tp(__n - 2) + __c;
                _Tp __tnm1 = _Tp(2 * __n - 1);
                _Tp __tnm3 = _Tp(2 * __n - 3);
                _Tp __tnm5 = _Tp(2 * __n - 5);
                _Tp __F1 = (_Tp(__n - 2) - __a) / (_Tp(2) * __tnm3 * __npcm1);
                _Tp __F2 = (_Tp(__n) + __a) * __npam1 / (_Tp(4) * __tnm1 * __tnm3 * __npcm2 * __npcm1);
                _Tp __F3 = -__npam2 * __npam1 * (_Tp(__n - 2) - __a) / (_Tp(8) * __tnm3 * __tnm3 * __tnm5 * (_Tp(__n - 3) + __c) * __npcm2 * __npcm1);
                _Tp __E = -__npam1 * (_Tp(__n - 1) - __c) / (_Tp(2) * __tnm3 * __npcm2 * __npcm1);

                _Tp __An = (_Tp(1) + __F1 * __x) * __Anm1 + (__E + __F2 * __x) * __x * __Anm2 + __F3 * __x3 * __Anm3;
                _Tp __Bn = (_Tp(1) + __F1 * __x) * __Bnm1 + (__E + __F2 * __x) * __x * __Bnm2 + __F3 * __x3 * __Bnm3;
                _Tp __r = __An / __Bn;

                __prec = std::abs((__F - __r) / __F);
                __F = __r;

                if (__prec < __eps || __n > __nmax)
                    break;

                if (std::abs(__An) > __big || std::abs(__Bn) > __big)
                {
                    __An /= __big;
                    __Bn /= __big;
                    __Anm1 /= __big;
                    __Bnm1 /= __big;
                    __Anm2 /= __big;
                    __Bnm2 /= __big;
                    __Anm3 /= __big;
                    __Bnm3 /= __big;
                }
                else if (std::abs(__An) < _Tp(1) / __big || std::abs(__Bn) < _Tp(1) / __big)
                {
                    __An *= __big;
                    __Bn *= __big;
                    __Anm1 *= __big;
                    __Bnm1 *= __big;
                    __Anm2 *= __big;
                    __Bnm2 *= __big;
                    __Anm3 *= __big;
                    __Bnm3 *= __big;
                }

                ++__n;
                __Bnm3 = __Bnm2;
                __Bnm2 = __Bnm1;
                __Bnm1 = __Bn;
                __Anm3 = __Anm2;
                __Anm2 = __Anm1;
                __Anm1 = __An;
            }

            if (__n >= __nmax)
                std::__throw_runtime_error(("Iteration failed to converge "
                                            "in __conf_hyperg_luke."));

            return __F;
        }
        template <typename _Tp> _Tp __conf_hyperg(_Tp __a, _Tp __c, _Tp __x)
        {

            const _Tp __c_nint = ::std::nearbyint(__c);

            if (__isnan(__a) || __isnan(__c) || __isnan(__x))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (__c_nint == __c && __c_nint <= 0)
                return std::numeric_limits<_Tp>::infinity();
            else if (__a == _Tp(0))
                return _Tp(1);
            else if (__c == __a)
                return std::exp(__x);
            else if (__x < _Tp(0))
                return __conf_hyperg_luke(__a, __c, __x);
            else
                return __conf_hyperg_series(__a, __c, __x);
        }
        template <typename _Tp> _Tp __hyperg_series(_Tp __a, _Tp __b, _Tp __c, _Tp __x)
        {
            const _Tp __eps = std::numeric_limits<_Tp>::epsilon();

            _Tp __term = _Tp(1);
            _Tp __Fabc = _Tp(1);
            const unsigned int __max_iter = 100000;
            unsigned int __i;
            for (__i = 0; __i < __max_iter; ++__i)
            {
                __term *= (__a + _Tp(__i)) * (__b + _Tp(__i)) * __x / ((__c + _Tp(__i)) * _Tp(1 + __i));
                if (std::abs(__term) < __eps)
                {
                    break;
                }
                __Fabc += __term;
            }
            if (__i == __max_iter)
                std::__throw_runtime_error(("Series failed to converge "
                                            "in __hyperg_series."));

            return __Fabc;
        }

        template <typename _Tp> _Tp __hyperg_luke(_Tp __a, _Tp __b, _Tp __c, _Tp __xin)
        {
            const _Tp __big = std::pow(std::numeric_limits<_Tp>::max(), _Tp(0.16L));
            const int __nmax = 20000;
            const _Tp __eps = std::numeric_limits<_Tp>::epsilon();
            const _Tp __x = -__xin;
            const _Tp __x3 = __x * __x * __x;
            const _Tp __t0 = __a * __b / __c;
            const _Tp __t1 = (__a + _Tp(1)) * (__b + _Tp(1)) / (_Tp(2) * __c);
            const _Tp __t2 = (__a + _Tp(2)) * (__b + _Tp(2)) / (_Tp(2) * (__c + _Tp(1)));

            _Tp __F = _Tp(1);

            _Tp __Bnm3 = _Tp(1);
            _Tp __Bnm2 = _Tp(1) + __t1 * __x;
            _Tp __Bnm1 = _Tp(1) + __t2 * __x * (_Tp(1) + __t1 / _Tp(3) * __x);

            _Tp __Anm3 = _Tp(1);
            _Tp __Anm2 = __Bnm2 - __t0 * __x;
            _Tp __Anm1 = __Bnm1 - __t0 * (_Tp(1) + __t2 * __x) * __x + __t0 * __t1 * (__c / (__c + _Tp(1))) * __x * __x;

            int __n = 3;
            while (1)
            {
                const _Tp __npam1 = _Tp(__n - 1) + __a;
                const _Tp __npbm1 = _Tp(__n - 1) + __b;
                const _Tp __npcm1 = _Tp(__n - 1) + __c;
                const _Tp __npam2 = _Tp(__n - 2) + __a;
                const _Tp __npbm2 = _Tp(__n - 2) + __b;
                const _Tp __npcm2 = _Tp(__n - 2) + __c;
                const _Tp __tnm1 = _Tp(2 * __n - 1);
                const _Tp __tnm3 = _Tp(2 * __n - 3);
                const _Tp __tnm5 = _Tp(2 * __n - 5);
                const _Tp __n2 = __n * __n;
                const _Tp __F1 = (_Tp(3) * __n2 + (__a + __b - _Tp(6)) * __n + _Tp(2) - __a * __b - _Tp(2) * (__a + __b)) / (_Tp(2) * __tnm3 * __npcm1);
                const _Tp __F2 = -(_Tp(3) * __n2 - (__a + __b + _Tp(6)) * __n + _Tp(2) - __a * __b) * __npam1 * __npbm1 / (_Tp(4) * __tnm1 * __tnm3 * __npcm2 * __npcm1);
                const _Tp __F3 = (__npam2 * __npam1 * __npbm2 * __npbm1 * (_Tp(__n - 2) - __a) * (_Tp(__n - 2) - __b)) / (_Tp(8) * __tnm3 * __tnm3 * __tnm5 * (_Tp(__n - 3) + __c) * __npcm2 * __npcm1);
                const _Tp __E = -__npam1 * __npbm1 * (_Tp(__n - 1) - __c) / (_Tp(2) * __tnm3 * __npcm2 * __npcm1);

                _Tp __An = (_Tp(1) + __F1 * __x) * __Anm1 + (__E + __F2 * __x) * __x * __Anm2 + __F3 * __x3 * __Anm3;
                _Tp __Bn = (_Tp(1) + __F1 * __x) * __Bnm1 + (__E + __F2 * __x) * __x * __Bnm2 + __F3 * __x3 * __Bnm3;
                const _Tp __r = __An / __Bn;

                const _Tp __prec = std::abs((__F - __r) / __F);
                __F = __r;

                if (__prec < __eps || __n > __nmax)
                    break;

                if (std::abs(__An) > __big || std::abs(__Bn) > __big)
                {
                    __An /= __big;
                    __Bn /= __big;
                    __Anm1 /= __big;
                    __Bnm1 /= __big;
                    __Anm2 /= __big;
                    __Bnm2 /= __big;
                    __Anm3 /= __big;
                    __Bnm3 /= __big;
                }
                else if (std::abs(__An) < _Tp(1) / __big || std::abs(__Bn) < _Tp(1) / __big)
                {
                    __An *= __big;
                    __Bn *= __big;
                    __Anm1 *= __big;
                    __Bnm1 *= __big;
                    __Anm2 *= __big;
                    __Bnm2 *= __big;
                    __Anm3 *= __big;
                    __Bnm3 *= __big;
                }

                ++__n;
                __Bnm3 = __Bnm2;
                __Bnm2 = __Bnm1;
                __Bnm1 = __Bn;
                __Anm3 = __Anm2;
                __Anm2 = __Anm1;
                __Anm1 = __An;
            }

            if (__n >= __nmax)
                std::__throw_runtime_error(("Iteration failed to converge "
                                            "in __hyperg_luke."));

            return __F;
        }
        template <typename _Tp> _Tp __hyperg_reflect(_Tp __a, _Tp __b, _Tp __c, _Tp __x)
        {
            const _Tp __d = __c - __a - __b;
            const int __intd = std::floor(__d + _Tp(0.5L));
            const _Tp __eps = std::numeric_limits<_Tp>::epsilon();
            const _Tp __toler = _Tp(1000) * __eps;
            const _Tp __log_max = std::log(std::numeric_limits<_Tp>::max());
            const bool __d_integer = (std::abs(__d - __intd) < __toler);

            if (__d_integer)
            {
                const _Tp __ln_omx = std::log(_Tp(1) - __x);
                const _Tp __ad = std::abs(__d);
                _Tp __F1, __F2;

                _Tp __d1, __d2;
                if (__d >= _Tp(0))
                {
                    __d1 = __d;
                    __d2 = _Tp(0);
                }
                else
                {
                    __d1 = _Tp(0);
                    __d2 = __d;
                }

                const _Tp __lng_c = __log_gamma(__c);

                if (__ad < __eps)
                {

                    __F1 = _Tp(0);
                }
                else
                {

                    bool __ok_d1 = true;
                    _Tp __lng_ad, __lng_ad1, __lng_bd1;
                    try
                    {
                        __lng_ad = __log_gamma(__ad);
                        __lng_ad1 = __log_gamma(__a + __d1);
                        __lng_bd1 = __log_gamma(__b + __d1);
                    }
                    catch (...)
                    {
                        __ok_d1 = false;
                    }

                    if (__ok_d1)
                    {

                        _Tp __sum1 = _Tp(1);
                        _Tp __term = _Tp(1);
                        _Tp __ln_pre1 = __lng_ad + __lng_c + __d2 * __ln_omx - __lng_ad1 - __lng_bd1;

                        for (int __i = 1; __i < __ad; ++__i)
                        {
                            const int __j = __i - 1;
                            __term *= (__a + __d2 + __j) * (__b + __d2 + __j) / (_Tp(1) + __d2 + __j) / __i * (_Tp(1) - __x);
                            __sum1 += __term;
                        }

                        if (__ln_pre1 > __log_max)
                            std::__throw_runtime_error(("Overflow of gamma functions"
                                                        " in __hyperg_luke."));

                        else
                            __F1 = std::exp(__ln_pre1) * __sum1;
                    }
                    else
                    {

                        __F1 = _Tp(0);
                    }
                }

                bool __ok_d2 = true;
                _Tp __lng_ad2, __lng_bd2;
                try
                {
                    __lng_ad2 = __log_gamma(__a + __d2);
                    __lng_bd2 = __log_gamma(__b + __d2);
                }
                catch (...)
                {
                    __ok_d2 = false;
                }

                if (__ok_d2)
                {

                    const int __maxiter = 2000;
                    const _Tp __psi_1 = -__numeric_constants<_Tp>::__gamma_e();
                    const _Tp __psi_1pd = __psi(_Tp(1) + __ad);
                    const _Tp __psi_apd1 = __psi(__a + __d1);
                    const _Tp __psi_bpd1 = __psi(__b + __d1);

                    _Tp __psi_term = __psi_1 + __psi_1pd - __psi_apd1 - __psi_bpd1 - __ln_omx;
                    _Tp __fact = _Tp(1);
                    _Tp __sum2 = __psi_term;
                    _Tp __ln_pre2 = __lng_c + __d1 * __ln_omx - __lng_ad2 - __lng_bd2;

                    int __j;
                    for (__j = 1; __j < __maxiter; ++__j)
                    {

                        const _Tp __term1 = _Tp(1) / _Tp(__j) + _Tp(1) / (__ad + __j);
                        const _Tp __term2 = _Tp(1) / (__a + __d1 + _Tp(__j - 1)) + _Tp(1) / (__b + __d1 + _Tp(__j - 1));
                        __psi_term += __term1 - __term2;
                        __fact *= (__a + __d1 + _Tp(__j - 1)) * (__b + __d1 + _Tp(__j - 1)) / ((__ad + __j) * __j) * (_Tp(1) - __x);
                        const _Tp __delta = __fact * __psi_term;
                        __sum2 += __delta;
                        if (std::abs(__delta) < __eps * std::abs(__sum2))
                            break;
                    }
                    if (__j == __maxiter)
                        std::__throw_runtime_error(("Sum F2 failed to converge "
                                                    "in __hyperg_reflect"));

                    if (__sum2 == _Tp(0))
                        __F2 = _Tp(0);
                    else
                        __F2 = std::exp(__ln_pre2) * __sum2;
                }
                else
                {

                    __F2 = _Tp(0);
                }

                const _Tp __sgn_2 = (__intd % 2 == 1 ? -_Tp(1) : _Tp(1));
                const _Tp __F = __F1 + __sgn_2 * __F2;

                return __F;
            }
            else
            {

                bool __ok1 = true;
                _Tp __sgn_g1ca = _Tp(0), __ln_g1ca = _Tp(0);
                _Tp __sgn_g1cb = _Tp(0), __ln_g1cb = _Tp(0);
                try
                {
                    __sgn_g1ca = __log_gamma_sign(__c - __a);
                    __ln_g1ca = __log_gamma(__c - __a);
                    __sgn_g1cb = __log_gamma_sign(__c - __b);
                    __ln_g1cb = __log_gamma(__c - __b);
                }
                catch (...)
                {
                    __ok1 = false;
                }

                bool __ok2 = true;
                _Tp __sgn_g2a = _Tp(0), __ln_g2a = _Tp(0);
                _Tp __sgn_g2b = _Tp(0), __ln_g2b = _Tp(0);
                try
                {
                    __sgn_g2a = __log_gamma_sign(__a);
                    __ln_g2a = __log_gamma(__a);
                    __sgn_g2b = __log_gamma_sign(__b);
                    __ln_g2b = __log_gamma(__b);
                }
                catch (...)
                {
                    __ok2 = false;
                }

                const _Tp __sgn_gc = __log_gamma_sign(__c);
                const _Tp __ln_gc = __log_gamma(__c);
                const _Tp __sgn_gd = __log_gamma_sign(__d);
                const _Tp __ln_gd = __log_gamma(__d);
                const _Tp __sgn_gmd = __log_gamma_sign(-__d);
                const _Tp __ln_gmd = __log_gamma(-__d);

                const _Tp __sgn1 = __sgn_gc * __sgn_gd * __sgn_g1ca * __sgn_g1cb;
                const _Tp __sgn2 = __sgn_gc * __sgn_gmd * __sgn_g2a * __sgn_g2b;

                _Tp __pre1, __pre2;
                if (__ok1 && __ok2)
                {
                    _Tp __ln_pre1 = __ln_gc + __ln_gd - __ln_g1ca - __ln_g1cb;
                    _Tp __ln_pre2 = __ln_gc + __ln_gmd - __ln_g2a - __ln_g2b + __d * std::log(_Tp(1) - __x);
                    if (__ln_pre1 < __log_max && __ln_pre2 < __log_max)
                    {
                        __pre1 = std::exp(__ln_pre1);
                        __pre2 = std::exp(__ln_pre2);
                        __pre1 *= __sgn1;
                        __pre2 *= __sgn2;
                    }
                    else
                    {
                        std::__throw_runtime_error(("Overflow of gamma functions "
                                                    "in __hyperg_reflect"));
                    }
                }
                else if (__ok1 && !__ok2)
                {
                    _Tp __ln_pre1 = __ln_gc + __ln_gd - __ln_g1ca - __ln_g1cb;
                    if (__ln_pre1 < __log_max)
                    {
                        __pre1 = std::exp(__ln_pre1);
                        __pre1 *= __sgn1;
                        __pre2 = _Tp(0);
                    }
                    else
                    {
                        std::__throw_runtime_error(("Overflow of gamma functions "
                                                    "in __hyperg_reflect"));
                    }
                }
                else if (!__ok1 && __ok2)
                {
                    _Tp __ln_pre2 = __ln_gc + __ln_gmd - __ln_g2a - __ln_g2b + __d * std::log(_Tp(1) - __x);
                    if (__ln_pre2 < __log_max)
                    {
                        __pre1 = _Tp(0);
                        __pre2 = std::exp(__ln_pre2);
                        __pre2 *= __sgn2;
                    }
                    else
                    {
                        std::__throw_runtime_error(("Overflow of gamma functions "
                                                    "in __hyperg_reflect"));
                    }
                }
                else
                {
                    __pre1 = _Tp(0);
                    __pre2 = _Tp(0);
                    std::__throw_runtime_error(("Underflow of gamma functions "
                                                "in __hyperg_reflect"));
                }

                const _Tp __F1 = __hyperg_series(__a, __b, _Tp(1) - __d, _Tp(1) - __x);
                const _Tp __F2 = __hyperg_series(__c - __a, __c - __b, _Tp(1) + __d, _Tp(1) - __x);

                const _Tp __F = __pre1 * __F1 + __pre2 * __F2;

                return __F;
            }
        }
        template <typename _Tp> _Tp __hyperg(_Tp __a, _Tp __b, _Tp __c, _Tp __x)
        {

            const _Tp __a_nint = ::std::nearbyint(__a);
            const _Tp __b_nint = ::std::nearbyint(__b);
            const _Tp __c_nint = ::std::nearbyint(__c);

            const _Tp __toler = _Tp(1000) * std::numeric_limits<_Tp>::epsilon();
            if (std::abs(__x) >= _Tp(1))
                std::__throw_domain_error(("Argument outside unit circle "
                                           "in __hyperg."));

            else if (__isnan(__a) || __isnan(__b) || __isnan(__c) || __isnan(__x))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (__c_nint == __c && __c_nint <= _Tp(0))
                return std::numeric_limits<_Tp>::infinity();
            else if (std::abs(__c - __b) < __toler || std::abs(__c - __a) < __toler)
                return std::pow(_Tp(1) - __x, __c - __a - __b);
            else if (__a >= _Tp(0) && __b >= _Tp(0) && __c >= _Tp(0) && __x >= _Tp(0) && __x < _Tp(0.995L))
                return __hyperg_series(__a, __b, __c, __x);
            else if (std::abs(__a) < _Tp(10) && std::abs(__b) < _Tp(10))
            {

                if (__a < _Tp(0) && std::abs(__a - __a_nint) < __toler)
                    return __hyperg_series(__a_nint, __b, __c, __x);
                else if (__b < _Tp(0) && std::abs(__b - __b_nint) < __toler)
                    return __hyperg_series(__a, __b_nint, __c, __x);
                else if (__x < -_Tp(0.25L))
                    return __hyperg_luke(__a, __b, __c, __x);
                else if (__x < _Tp(0.5L))
                    return __hyperg_series(__a, __b, __c, __x);
                else if (std::abs(__c) > _Tp(10))
                    return __hyperg_series(__a, __b, __c, __x);
                else
                    return __hyperg_reflect(__a, __b, __c, __x);
            }
            else
                return __hyperg_luke(__a, __b, __c, __x);
        }
        } // namespace __detail

    } // namespace )
    namespace std __attribute__((__visibility__("default")))
    {
        namespace __detail
        {
        template <typename _Tp> _Tp __poly_legendre_p(unsigned int __l, _Tp __x)
        {

            if (__isnan(__x))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (__x == +_Tp(1))
                return +_Tp(1);
            else if (__x == -_Tp(1))
                return (__l % 2 == 1 ? -_Tp(1) : +_Tp(1));
            else
            {
                _Tp __p_lm2 = _Tp(1);
                if (__l == 0)
                    return __p_lm2;

                _Tp __p_lm1 = __x;
                if (__l == 1)
                    return __p_lm1;

                _Tp __p_l = 0;
                for (unsigned int __ll = 2; __ll <= __l; ++__ll)
                {

                    __p_l = _Tp(2) * __x * __p_lm1 - __p_lm2 - (__x * __p_lm1 - __p_lm2) / _Tp(__ll);
                    __p_lm2 = __p_lm1;
                    __p_lm1 = __p_l;
                }

                return __p_l;
            }
        }
        template <typename _Tp> _Tp __assoc_legendre_p(unsigned int __l, unsigned int __m, _Tp __x, _Tp __phase = _Tp(+1))
        {

            if (__m > __l)
                return _Tp(0);
            else if (__isnan(__x))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (__m == 0)
                return __poly_legendre_p(__l, __x);
            else
            {
                _Tp __p_mm = _Tp(1);
                if (__m > 0)
                {

                    _Tp __root = std::sqrt(_Tp(1) - __x) * std::sqrt(_Tp(1) + __x);
                    _Tp __fact = _Tp(1);
                    for (unsigned int __i = 1; __i <= __m; ++__i)
                    {
                        __p_mm *= __phase * __fact * __root;
                        __fact += _Tp(2);
                    }
                }
                if (__l == __m)
                    return __p_mm;

                _Tp __p_mp1m = _Tp(2 * __m + 1) * __x * __p_mm;
                if (__l == __m + 1)
                    return __p_mp1m;

                _Tp __p_lm2m = __p_mm;
                _Tp __P_lm1m = __p_mp1m;
                _Tp __p_lm = _Tp(0);
                for (unsigned int __j = __m + 2; __j <= __l; ++__j)
                {
                    __p_lm = (_Tp(2 * __j - 1) * __x * __P_lm1m - _Tp(__j + __m - 1) * __p_lm2m) / _Tp(__j - __m);
                    __p_lm2m = __P_lm1m;
                    __P_lm1m = __p_lm;
                }

                return __p_lm;
            }
        }
        template <typename _Tp> _Tp __sph_legendre(unsigned int __l, unsigned int __m, _Tp __theta)
        {
            if (__isnan(__theta))
                return std::numeric_limits<_Tp>::quiet_NaN();

            const _Tp __x = std::cos(__theta);

            if (__m > __l)
                return _Tp(0);
            else if (__m == 0)
            {
                _Tp __P = __poly_legendre_p(__l, __x);
                _Tp __fact = std::sqrt(_Tp(2 * __l + 1) / (_Tp(4) * __numeric_constants<_Tp>::__pi()));
                __P *= __fact;
                return __P;
            }
            else if (__x == _Tp(1) || __x == -_Tp(1))
            {

                return _Tp(0);
            }
            else
            {

                const _Tp __sgn = (__m % 2 == 1 ? -_Tp(1) : _Tp(1));
                const _Tp __y_mp1m_factor = __x * std::sqrt(_Tp(2 * __m + 3));

                const _Tp __lncirc = ::std::log1p(-__x * __x);

                const _Tp __lnpoch = ::std::lgamma(_Tp(__m + _Tp(0.5L))) - ::std::lgamma(_Tp(__m));

                const _Tp __lnpre_val = -_Tp(0.25L) * __numeric_constants<_Tp>::__lnpi() + _Tp(0.5L) * (__lnpoch + __m * __lncirc);
                const _Tp __sr = std::sqrt((_Tp(2) + _Tp(1) / __m) / (_Tp(4) * __numeric_constants<_Tp>::__pi()));
                _Tp __y_mm = __sgn * __sr * std::exp(__lnpre_val);
                _Tp __y_mp1m = __y_mp1m_factor * __y_mm;

                if (__l == __m)
                    return __y_mm;
                else if (__l == __m + 1)
                    return __y_mp1m;
                else
                {
                    _Tp __y_lm = _Tp(0);

                    for (int __ll = __m + 2; __ll <= __l; ++__ll)
                    {
                        const _Tp __rat1 = _Tp(__ll - __m) / _Tp(__ll + __m);
                        const _Tp __rat2 = _Tp(__ll - __m - 1) / _Tp(__ll + __m - 1);
                        const _Tp __fact1 = std::sqrt(__rat1 * _Tp(2 * __ll + 1) * _Tp(2 * __ll - 1));
                        const _Tp __fact2 = std::sqrt(__rat1 * __rat2 * _Tp(2 * __ll + 1) / _Tp(2 * __ll - 3));
                        __y_lm = (__x * __y_mp1m * __fact1 - (__ll + __m - 1) * __y_mm * __fact2) / _Tp(__ll - __m);
                        __y_mm = __y_mp1m;
                        __y_mp1m = __y_lm;
                    }

                    return __y_lm;
                }
            }
        }
        } // namespace __detail

    } // namespace )
    namespace std __attribute__((__visibility__("default")))
    {
        namespace __detail
        {
        template <typename _Tp> void __bessel_ik(_Tp __nu, _Tp __x, _Tp& __Inu, _Tp& __Knu, _Tp& __Ipnu, _Tp& __Kpnu)
        {
            if (__x == _Tp(0))
            {
                if (__nu == _Tp(0))
                {
                    __Inu = _Tp(1);
                    __Ipnu = _Tp(0);
                }
                else if (__nu == _Tp(1))
                {
                    __Inu = _Tp(0);
                    __Ipnu = _Tp(0.5L);
                }
                else
                {
                    __Inu = _Tp(0);
                    __Ipnu = _Tp(0);
                }
                __Knu = std::numeric_limits<_Tp>::infinity();
                __Kpnu = -std::numeric_limits<_Tp>::infinity();
                return;
            }

            const _Tp __eps = std::numeric_limits<_Tp>::epsilon();
            const _Tp __fp_min = _Tp(10) * std::numeric_limits<_Tp>::epsilon();
            const int __max_iter = 15000;
            const _Tp __x_min = _Tp(2);

            const int __nl = static_cast<int>(__nu + _Tp(0.5L));

            const _Tp __mu = __nu - __nl;
            const _Tp __mu2 = __mu * __mu;
            const _Tp __xi = _Tp(1) / __x;
            const _Tp __xi2 = _Tp(2) * __xi;
            _Tp __h = __nu * __xi;
            if (__h < __fp_min)
                __h = __fp_min;
            _Tp __b = __xi2 * __nu;
            _Tp __d = _Tp(0);
            _Tp __c = __h;
            int __i;
            for (__i = 1; __i <= __max_iter; ++__i)
            {
                __b += __xi2;
                __d = _Tp(1) / (__b + __d);
                __c = __b + _Tp(1) / __c;
                const _Tp __del = __c * __d;
                __h *= __del;
                if (std::abs(__del - _Tp(1)) < __eps)
                    break;
            }
            if (__i > __max_iter)
                std::__throw_runtime_error(("Argument x too large "
                                            "in __bessel_ik; "
                                            "try asymptotic expansion."));

            _Tp __Inul = __fp_min;
            _Tp __Ipnul = __h * __Inul;
            _Tp __Inul1 = __Inul;
            _Tp __Ipnu1 = __Ipnul;
            _Tp __fact = __nu * __xi;
            for (int __l = __nl; __l >= 1; --__l)
            {
                const _Tp __Inutemp = __fact * __Inul + __Ipnul;
                __fact -= __xi;
                __Ipnul = __fact * __Inutemp + __Inul;
                __Inul = __Inutemp;
            }
            _Tp __f = __Ipnul / __Inul;
            _Tp __Kmu, __Knu1;
            if (__x < __x_min)
            {
                const _Tp __x2 = __x / _Tp(2);
                const _Tp __pimu = __numeric_constants<_Tp>::__pi() * __mu;
                const _Tp __fact = (std::abs(__pimu) < __eps ? _Tp(1) : __pimu / std::sin(__pimu));
                _Tp __d = -std::log(__x2);
                _Tp __e = __mu * __d;
                const _Tp __fact2 = (std::abs(__e) < __eps ? _Tp(1) : std::sinh(__e) / __e);
                _Tp __gam1, __gam2, __gampl, __gammi;
                __gamma_temme(__mu, __gam1, __gam2, __gampl, __gammi);
                _Tp __ff = __fact * (__gam1 * std::cosh(__e) + __gam2 * __fact2 * __d);
                _Tp __sum = __ff;
                __e = std::exp(__e);
                _Tp __p = __e / (_Tp(2) * __gampl);
                _Tp __q = _Tp(1) / (_Tp(2) * __e * __gammi);
                _Tp __c = _Tp(1);
                __d = __x2 * __x2;
                _Tp __sum1 = __p;
                int __i;
                for (__i = 1; __i <= __max_iter; ++__i)
                {
                    __ff = (__i * __ff + __p + __q) / (__i * __i - __mu2);
                    __c *= __d / __i;
                    __p /= __i - __mu;
                    __q /= __i + __mu;
                    const _Tp __del = __c * __ff;
                    __sum += __del;
                    const _Tp __del1 = __c * (__p - __i * __ff);
                    __sum1 += __del1;
                    if (std::abs(__del) < __eps * std::abs(__sum))
                        break;
                }
                if (__i > __max_iter)
                    std::__throw_runtime_error(("Bessel k series failed to converge "
                                                "in __bessel_ik."));

                __Kmu = __sum;
                __Knu1 = __sum1 * __xi2;
            }
            else
            {
                _Tp __b = _Tp(2) * (_Tp(1) + __x);
                _Tp __d = _Tp(1) / __b;
                _Tp __delh = __d;
                _Tp __h = __delh;
                _Tp __q1 = _Tp(0);
                _Tp __q2 = _Tp(1);
                _Tp __a1 = _Tp(0.25L) - __mu2;
                _Tp __q = __c = __a1;
                _Tp __a = -__a1;
                _Tp __s = _Tp(1) + __q * __delh;
                int __i;
                for (__i = 2; __i <= __max_iter; ++__i)
                {
                    __a -= 2 * (__i - 1);
                    __c = -__a * __c / __i;
                    const _Tp __qnew = (__q1 - __b * __q2) / __a;
                    __q1 = __q2;
                    __q2 = __qnew;
                    __q += __c * __qnew;
                    __b += _Tp(2);
                    __d = _Tp(1) / (__b + __a * __d);
                    __delh = (__b * __d - _Tp(1)) * __delh;
                    __h += __delh;
                    const _Tp __dels = __q * __delh;
                    __s += __dels;
                    if (std::abs(__dels / __s) < __eps)
                        break;
                }
                if (__i > __max_iter)
                    std::__throw_runtime_error(("Steed's method failed "
                                                "in __bessel_ik."));

                __h = __a1 * __h;
                __Kmu = std::sqrt(__numeric_constants<_Tp>::__pi() / (_Tp(2) * __x)) * std::exp(-__x) / __s;
                __Knu1 = __Kmu * (__mu + __x + _Tp(0.5L) - __h) * __xi;
            }

            _Tp __Kpmu = __mu * __xi * __Kmu - __Knu1;
            _Tp __Inumu = __xi / (__f * __Kmu - __Kpmu);
            __Inu = __Inumu * __Inul1 / __Inul;
            __Ipnu = __Inumu * __Ipnu1 / __Inul;
            for (__i = 1; __i <= __nl; ++__i)
            {
                const _Tp __Knutemp = (__mu + __i) * __xi2 * __Knu1 + __Kmu;
                __Kmu = __Knu1;
                __Knu1 = __Knutemp;
            }
            __Knu = __Kmu;
            __Kpnu = __nu * __xi * __Kmu - __Knu1;

            return;
        }
        template <typename _Tp> _Tp __cyl_bessel_i(_Tp __nu, _Tp __x)
        {
            if (__nu < _Tp(0) || __x < _Tp(0))
                std::__throw_domain_error(("Bad argument "
                                           "in __cyl_bessel_i."));

            else if (__isnan(__nu) || __isnan(__x))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (__x * __x < _Tp(10) * (__nu + _Tp(1)))
                return __cyl_bessel_ij_series(__nu, __x, +_Tp(1), 200);
            else
            {
                _Tp __I_nu, __K_nu, __Ip_nu, __Kp_nu;
                __bessel_ik(__nu, __x, __I_nu, __K_nu, __Ip_nu, __Kp_nu);
                return __I_nu;
            }
        }
        template <typename _Tp> _Tp __cyl_bessel_k(_Tp __nu, _Tp __x)
        {
            if (__nu < _Tp(0) || __x < _Tp(0))
                std::__throw_domain_error(("Bad argument "
                                           "in __cyl_bessel_k."));

            else if (__isnan(__nu) || __isnan(__x))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else
            {
                _Tp __I_nu, __K_nu, __Ip_nu, __Kp_nu;
                __bessel_ik(__nu, __x, __I_nu, __K_nu, __Ip_nu, __Kp_nu);
                return __K_nu;
            }
        }
        template <typename _Tp> void __sph_bessel_ik(unsigned int __n, _Tp __x, _Tp& __i_n, _Tp& __k_n, _Tp& __ip_n, _Tp& __kp_n)
        {
            const _Tp __nu = _Tp(__n) + _Tp(0.5L);

            _Tp __I_nu, __Ip_nu, __K_nu, __Kp_nu;
            __bessel_ik(__nu, __x, __I_nu, __K_nu, __Ip_nu, __Kp_nu);

            const _Tp __factor = __numeric_constants<_Tp>::__sqrtpio2() / std::sqrt(__x);

            __i_n = __factor * __I_nu;
            __k_n = __factor * __K_nu;
            __ip_n = __factor * __Ip_nu - __i_n / (_Tp(2) * __x);
            __kp_n = __factor * __Kp_nu - __k_n / (_Tp(2) * __x);

            return;
        }
        template <typename _Tp> void __airy(_Tp __x, _Tp& __Ai, _Tp& __Bi, _Tp& __Aip, _Tp& __Bip)
        {
            const _Tp __absx = std::abs(__x);
            const _Tp __rootx = std::sqrt(__absx);
            const _Tp __z = _Tp(2) * __absx * __rootx / _Tp(3);
            const _Tp _S_NaN = std::numeric_limits<_Tp>::quiet_NaN();
            const _Tp _S_inf = std::numeric_limits<_Tp>::infinity();

            if (__isnan(__x))
                __Bip = __Aip = __Bi = __Ai = std::numeric_limits<_Tp>::quiet_NaN();
            else if (__z == _S_inf)
            {
                __Aip = __Ai = _Tp(0);
                __Bip = __Bi = _S_inf;
            }
            else if (__z == -_S_inf)
                __Bip = __Aip = __Bi = __Ai = _Tp(0);
            else if (__x > _Tp(0))
            {
                _Tp __I_nu, __Ip_nu, __K_nu, __Kp_nu;

                __bessel_ik(_Tp(1) / _Tp(3), __z, __I_nu, __K_nu, __Ip_nu, __Kp_nu);
                __Ai = __rootx * __K_nu / (__numeric_constants<_Tp>::__sqrt3() * __numeric_constants<_Tp>::__pi());
                __Bi = __rootx * (__K_nu / __numeric_constants<_Tp>::__pi() + _Tp(2) * __I_nu / __numeric_constants<_Tp>::__sqrt3());

                __bessel_ik(_Tp(2) / _Tp(3), __z, __I_nu, __K_nu, __Ip_nu, __Kp_nu);
                __Aip = -__x * __K_nu / (__numeric_constants<_Tp>::__sqrt3() * __numeric_constants<_Tp>::__pi());
                __Bip = __x * (__K_nu / __numeric_constants<_Tp>::__pi() + _Tp(2) * __I_nu / __numeric_constants<_Tp>::__sqrt3());
            }
            else if (__x < _Tp(0))
            {
                _Tp __J_nu, __Jp_nu, __N_nu, __Np_nu;

                __bessel_jn(_Tp(1) / _Tp(3), __z, __J_nu, __N_nu, __Jp_nu, __Np_nu);
                __Ai = __rootx * (__J_nu - __N_nu / __numeric_constants<_Tp>::__sqrt3()) / _Tp(2);
                __Bi = -__rootx * (__N_nu + __J_nu / __numeric_constants<_Tp>::__sqrt3()) / _Tp(2);

                __bessel_jn(_Tp(2) / _Tp(3), __z, __J_nu, __N_nu, __Jp_nu, __Np_nu);
                __Aip = __absx * (__N_nu / __numeric_constants<_Tp>::__sqrt3() + __J_nu) / _Tp(2);
                __Bip = __absx * (__J_nu / __numeric_constants<_Tp>::__sqrt3() - __N_nu) / _Tp(2);
            }
            else
            {

                __Ai = _Tp(0.35502805388781723926L);
                __Bi = __Ai * __numeric_constants<_Tp>::__sqrt3();

                __Aip = -_Tp(0.25881940379280679840L);
                __Bip = -__Aip * __numeric_constants<_Tp>::__sqrt3();
            }

            return;
        }
        } // namespace __detail

    } // namespace )
    namespace std __attribute__((__visibility__("default")))
    {
        namespace __detail
        {
        template <typename _Tp> _Tp __poly_hermite_recursion(unsigned int __n, _Tp __x)
        {

            _Tp __H_0 = 1;
            if (__n == 0)
                return __H_0;

            _Tp __H_1 = 2 * __x;
            if (__n == 1)
                return __H_1;

            _Tp __H_n, __H_nm1, __H_nm2;
            unsigned int __i;
            for (__H_nm2 = __H_0, __H_nm1 = __H_1, __i = 2; __i <= __n; ++__i)
            {
                __H_n = 2 * (__x * __H_nm1 - (__i - 1) * __H_nm2);
                __H_nm2 = __H_nm1;
                __H_nm1 = __H_n;
            }

            return __H_n;
        }
        template <typename _Tp> inline _Tp __poly_hermite(unsigned int __n, _Tp __x)
        {
            if (__isnan(__x))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else
                return __poly_hermite_recursion(__n, __x);
        }
        } // namespace __detail

    } // namespace )
    namespace std __attribute__((__visibility__("default")))
    {
        namespace __detail
        {
        template <typename _Tpa, typename _Tp> _Tp __poly_laguerre_large_n(unsigned __n, _Tpa __alpha1, _Tp __x)
        {
            const _Tp __a = -_Tp(__n);
            const _Tp __b = _Tp(__alpha1) + _Tp(1);
            const _Tp __eta = _Tp(2) * __b - _Tp(4) * __a;
            const _Tp __cos2th = __x / __eta;
            const _Tp __sin2th = _Tp(1) - __cos2th;
            const _Tp __th = std::acos(std::sqrt(__cos2th));
            const _Tp __pre_h = __numeric_constants<_Tp>::__pi_2() * __numeric_constants<_Tp>::__pi_2() * __eta * __eta * __cos2th * __sin2th;

            const _Tp __lg_b = ::std::lgamma(_Tp(__n) + __b);
            const _Tp __lnfact = ::std::lgamma(_Tp(__n + 1));

            _Tp __pre_term1 = _Tp(0.5L) * (_Tp(1) - __b) * std::log(_Tp(0.25L) * __x * __eta);
            _Tp __pre_term2 = _Tp(0.25L) * std::log(__pre_h);
            _Tp __lnpre = __lg_b - __lnfact + _Tp(0.5L) * __x + __pre_term1 - __pre_term2;
            _Tp __ser_term1 = std::sin(__a * __numeric_constants<_Tp>::__pi());
            _Tp __ser_term2 = std::sin(_Tp(0.25L) * __eta * (_Tp(2) * __th - std::sin(_Tp(2) * __th)) + __numeric_constants<_Tp>::__pi_4());
            _Tp __ser = __ser_term1 + __ser_term2;

            return std::exp(__lnpre) * __ser;
        }
        template <typename _Tpa, typename _Tp> _Tp __poly_laguerre_hyperg(unsigned int __n, _Tpa __alpha1, _Tp __x)
        {
            const _Tp __b = _Tp(__alpha1) + _Tp(1);
            const _Tp __mx = -__x;
            const _Tp __tc_sgn = (__x < _Tp(0) ? _Tp(1) : ((__n % 2 == 1) ? -_Tp(1) : _Tp(1)));

            _Tp __tc = _Tp(1);
            const _Tp __ax = std::abs(__x);
            for (unsigned int __k = 1; __k <= __n; ++__k)
                __tc *= (__ax / __k);

            _Tp __term = __tc * __tc_sgn;
            _Tp __sum = __term;
            for (int __k = int(__n) - 1; __k >= 0; --__k)
            {
                __term *= ((__b + _Tp(__k)) / _Tp(int(__n) - __k)) * _Tp(__k + 1) / __mx;
                __sum += __term;
            }

            return __sum;
        }
        template <typename _Tpa, typename _Tp> _Tp __poly_laguerre_recursion(unsigned int __n, _Tpa __alpha1, _Tp __x)
        {

            _Tp __l_0 = _Tp(1);
            if (__n == 0)
                return __l_0;

            _Tp __l_1 = -__x + _Tp(1) + _Tp(__alpha1);
            if (__n == 1)
                return __l_1;

            _Tp __l_n2 = __l_0;
            _Tp __l_n1 = __l_1;
            _Tp __l_n = _Tp(0);
            for (unsigned int __nn = 2; __nn <= __n; ++__nn)
            {
                __l_n = (_Tp(2 * __nn - 1) + _Tp(__alpha1) - __x) * __l_n1 / _Tp(__nn) - (_Tp(__nn - 1) + _Tp(__alpha1)) * __l_n2 / _Tp(__nn);
                __l_n2 = __l_n1;
                __l_n1 = __l_n;
            }

            return __l_n;
        }
        template <typename _Tpa, typename _Tp> _Tp __poly_laguerre(unsigned int __n, _Tpa __alpha1, _Tp __x)
        {
            if (__x < _Tp(0))
                std::__throw_domain_error(("Negative argument "
                                           "in __poly_laguerre."));

            else if (__isnan(__x))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (__n == 0)
                return _Tp(1);
            else if (__n == 1)
                return _Tp(1) + _Tp(__alpha1) - __x;
            else if (__x == _Tp(0))
            {
                _Tp __prod = _Tp(__alpha1) + _Tp(1);
                for (unsigned int __k = 2; __k <= __n; ++__k)
                    __prod *= (_Tp(__alpha1) + _Tp(__k)) / _Tp(__k);
                return __prod;
            }
            else if (__n > 10000000 && _Tp(__alpha1) > -_Tp(1) && __x < _Tp(2) * (_Tp(__alpha1) + _Tp(1)) + _Tp(4 * __n))
                return __poly_laguerre_large_n(__n, __alpha1, __x);
            else if (_Tp(__alpha1) >= _Tp(0) || (__x > _Tp(0) && _Tp(__alpha1) < -_Tp(__n + 1)))
                return __poly_laguerre_recursion(__n, __alpha1, __x);
            else
                return __poly_laguerre_hyperg(__n, __alpha1, __x);
        }
        template <typename _Tp> inline _Tp __assoc_laguerre(unsigned int __n, unsigned int __m, _Tp __x)
        {
            return __poly_laguerre<unsigned int, _Tp>(__n, __m, __x);
        }
        template <typename _Tp> inline _Tp __laguerre(unsigned int __n, _Tp __x)
        {
            return __poly_laguerre<unsigned int, _Tp>(__n, 0, __x);
        }
        } // namespace __detail

    } // namespace )
    namespace std __attribute__((__visibility__("default")))
    {
        namespace __detail
        {
        template <typename _Tp> _Tp __riemann_zeta_sum(_Tp __s)
        {

            if (__s < _Tp(1))
                std::__throw_domain_error(("Bad argument in zeta sum."));

            const unsigned int max_iter = 10000;
            _Tp __zeta = _Tp(0);
            for (unsigned int __k = 1; __k < max_iter; ++__k)
            {
                _Tp __term = std::pow(static_cast<_Tp>(__k), -__s);
                if (__term < std::numeric_limits<_Tp>::epsilon())
                {
                    break;
                }
                __zeta += __term;
            }

            return __zeta;
        }
        template <typename _Tp> _Tp __riemann_zeta_alt(_Tp __s)
        {
            _Tp __sgn = _Tp(1);
            _Tp __zeta = _Tp(0);
            for (unsigned int __i = 1; __i < 10000000; ++__i)
            {
                _Tp __term = __sgn / std::pow(__i, __s);
                if (std::abs(__term) < std::numeric_limits<_Tp>::epsilon())
                    break;
                __zeta += __term;
                __sgn *= _Tp(-1);
            }
            __zeta /= _Tp(1) - std::pow(_Tp(2), _Tp(1) - __s);

            return __zeta;
        }
        template <typename _Tp> _Tp __riemann_zeta_glob(_Tp __s)
        {
            _Tp __zeta = _Tp(0);

            const _Tp __eps = std::numeric_limits<_Tp>::epsilon();

            const _Tp __max_bincoeff = std::numeric_limits<_Tp>::max_exponent10 * std::log(_Tp(10)) - _Tp(1);

            if (__s < _Tp(0))
            {

                if (::std::fmod(__s, _Tp(2)) == _Tp(0))
                    return _Tp(0);
                else

                {
                    _Tp __zeta = __riemann_zeta_glob(_Tp(1) - __s);
                    __zeta *= std::pow(_Tp(2) * __numeric_constants<_Tp>::__pi(), __s) * std::sin(__numeric_constants<_Tp>::__pi_2() * __s)

                              * std::exp(::std::lgamma(_Tp(1) - __s))

                              / __numeric_constants<_Tp>::__pi();
                    return __zeta;
                }
            }

            _Tp __num = _Tp(0.5L);
            const unsigned int __maxit = 10000;
            for (unsigned int __i = 0; __i < __maxit; ++__i)
            {
                bool __punt = false;
                _Tp __sgn = _Tp(1);
                _Tp __term = _Tp(0);
                for (unsigned int __j = 0; __j <= __i; ++__j)
                {

                    _Tp __bincoeff = ::std::lgamma(_Tp(1 + __i)) - ::std::lgamma(_Tp(1 + __j)) - ::std::lgamma(_Tp(1 + __i - __j));

                    if (__bincoeff > __max_bincoeff)
                    {

                        __punt = true;
                        break;
                    }
                    __bincoeff = std::exp(__bincoeff);
                    __term += __sgn * __bincoeff * std::pow(_Tp(1 + __j), -__s);
                    __sgn *= _Tp(-1);
                }
                if (__punt)
                    break;
                __term *= __num;
                __zeta += __term;
                if (std::abs(__term / __zeta) < __eps)
                    break;
                __num *= _Tp(0.5L);
            }

            __zeta /= _Tp(1) - std::pow(_Tp(2), _Tp(1) - __s);

            return __zeta;
        }
        template <typename _Tp> _Tp __riemann_zeta_product(_Tp __s)
        {
            static const _Tp __prime[] = {_Tp(2),  _Tp(3),  _Tp(5),  _Tp(7),  _Tp(11), _Tp(13), _Tp(17), _Tp(19), _Tp(23), _Tp(29), _Tp(31),  _Tp(37),  _Tp(41),  _Tp(43), _Tp(47),
                                          _Tp(53), _Tp(59), _Tp(61), _Tp(67), _Tp(71), _Tp(73), _Tp(79), _Tp(83), _Tp(89), _Tp(97), _Tp(101), _Tp(103), _Tp(107), _Tp(109)};
            static const unsigned int __num_primes = sizeof(__prime) / sizeof(_Tp);

            _Tp __zeta = _Tp(1);
            for (unsigned int __i = 0; __i < __num_primes; ++__i)
            {
                const _Tp __fact = _Tp(1) - std::pow(__prime[__i], -__s);
                __zeta *= __fact;
                if (_Tp(1) - __fact < std::numeric_limits<_Tp>::epsilon())
                    break;
            }

            __zeta = _Tp(1) / __zeta;

            return __zeta;
        }
        template <typename _Tp> _Tp __riemann_zeta(_Tp __s)
        {
            if (__isnan(__s))
                return std::numeric_limits<_Tp>::quiet_NaN();
            else if (__s == _Tp(1))
                return std::numeric_limits<_Tp>::infinity();
            else if (__s < -_Tp(19))
            {
                _Tp __zeta = __riemann_zeta_product(_Tp(1) - __s);
                __zeta *= std::pow(_Tp(2) * __numeric_constants<_Tp>::__pi(), __s) * std::sin(__numeric_constants<_Tp>::__pi_2() * __s)

                          * std::exp(::std::lgamma(_Tp(1) - __s))

                          / __numeric_constants<_Tp>::__pi();
                return __zeta;
            }
            else if (__s < _Tp(20))
            {

                bool __glob = true;
                if (__glob)
                    return __riemann_zeta_glob(__s);
                else
                {
                    if (__s > _Tp(1))
                        return __riemann_zeta_sum(__s);
                    else
                    {
                        _Tp __zeta = std::pow(_Tp(2) * __numeric_constants<_Tp>::__pi(), __s) * std::sin(__numeric_constants<_Tp>::__pi_2() * __s)

                                     * ::std::tgamma(_Tp(1) - __s)

                                     * __riemann_zeta_sum(_Tp(1) - __s);
                        return __zeta;
                    }
                }
            }
            else
                return __riemann_zeta_product(__s);
        }
        template <typename _Tp> _Tp __hurwitz_zeta_glob(_Tp __a, _Tp __s)
        {
            _Tp __zeta = _Tp(0);

            const _Tp __eps = std::numeric_limits<_Tp>::epsilon();

            const _Tp __max_bincoeff = std::numeric_limits<_Tp>::max_exponent10 * std::log(_Tp(10)) - _Tp(1);

            const unsigned int __maxit = 10000;
            for (unsigned int __i = 0; __i < __maxit; ++__i)
            {
                bool __punt = false;
                _Tp __sgn = _Tp(1);
                _Tp __term = _Tp(0);
                for (unsigned int __j = 0; __j <= __i; ++__j)
                {

                    _Tp __bincoeff = ::std::lgamma(_Tp(1 + __i)) - ::std::lgamma(_Tp(1 + __j)) - ::std::lgamma(_Tp(1 + __i - __j));

                    if (__bincoeff > __max_bincoeff)
                    {

                        __punt = true;
                        break;
                    }
                    __bincoeff = std::exp(__bincoeff);
                    __term += __sgn * __bincoeff * std::pow(_Tp(__a + __j), -__s);
                    __sgn *= _Tp(-1);
                }
                if (__punt)
                    break;
                __term /= _Tp(__i + 1);
                if (std::abs(__term / __zeta) < __eps)
                    break;
                __zeta += __term;
            }

            __zeta /= __s - _Tp(1);

            return __zeta;
        }
        template <typename _Tp> inline _Tp __hurwitz_zeta(_Tp __a, _Tp __s)
        {
            return __hurwitz_zeta_glob(__a, __s);
        }
        } // namespace __detail

    } // namespace )

    namespace std __attribute__((__visibility__("default")))
    {
        inline float assoc_laguerref(unsigned int __n, unsigned int __m, float __x)
        {
            return __detail::__assoc_laguerre<float>(__n, __m, __x);
        }

        inline long double assoc_laguerrel(unsigned int __n, unsigned int __m, long double __x)
        {
            return __detail::__assoc_laguerre<long double>(__n, __m, __x);
        }
        template <typename _Tp> inline typename __gnu_cxx::__promote<_Tp>::__type assoc_laguerre(unsigned int __n, unsigned int __m, _Tp __x)
        {
            typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
            return __detail::__assoc_laguerre<__type>(__n, __m, __x);
        }
        inline float assoc_legendref(unsigned int __l, unsigned int __m, float __x)
        {
            return __detail::__assoc_legendre_p<float>(__l, __m, __x);
        }

        inline long double assoc_legendrel(unsigned int __l, unsigned int __m, long double __x)
        {
            return __detail::__assoc_legendre_p<long double>(__l, __m, __x);
        }
        template <typename _Tp> inline typename __gnu_cxx::__promote<_Tp>::__type assoc_legendre(unsigned int __l, unsigned int __m, _Tp __x)
        {
            typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
            return __detail::__assoc_legendre_p<__type>(__l, __m, __x);
        }
        inline float betaf(float __a, float __b)
        {
            return __detail::__beta<float>(__a, __b);
        }

        inline long double betal(long double __a, long double __b)
        {
            return __detail::__beta<long double>(__a, __b);
        }
        template <typename _Tpa, typename _Tpb> inline typename __gnu_cxx::__promote_2<_Tpa, _Tpb>::__type beta(_Tpa __a, _Tpb __b)
        {
            typedef typename __gnu_cxx::__promote_2<_Tpa, _Tpb>::__type __type;
            return __detail::__beta<__type>(__a, __b);
        }
        inline float comp_ellint_1f(float __k)
        {
            return __detail::__comp_ellint_1<float>(__k);
        }

        inline long double comp_ellint_1l(long double __k)
        {
            return __detail::__comp_ellint_1<long double>(__k);
        }
        template <typename _Tp> inline typename __gnu_cxx::__promote<_Tp>::__type comp_ellint_1(_Tp __k)
        {
            typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
            return __detail::__comp_ellint_1<__type>(__k);
        }
        inline float comp_ellint_2f(float __k)
        {
            return __detail::__comp_ellint_2<float>(__k);
        }

        inline long double comp_ellint_2l(long double __k)
        {
            return __detail::__comp_ellint_2<long double>(__k);
        }
        template <typename _Tp> inline typename __gnu_cxx::__promote<_Tp>::__type comp_ellint_2(_Tp __k)
        {
            typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
            return __detail::__comp_ellint_2<__type>(__k);
        }
        inline float comp_ellint_3f(float __k, float __nu)
        {
            return __detail::__comp_ellint_3<float>(__k, __nu);
        }

        inline long double comp_ellint_3l(long double __k, long double __nu)
        {
            return __detail::__comp_ellint_3<long double>(__k, __nu);
        }
        template <typename _Tp, typename _Tpn> inline typename __gnu_cxx::__promote_2<_Tp, _Tpn>::__type comp_ellint_3(_Tp __k, _Tpn __nu)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Tpn>::__type __type;
            return __detail::__comp_ellint_3<__type>(__k, __nu);
        }
        inline float cyl_bessel_if(float __nu, float __x)
        {
            return __detail::__cyl_bessel_i<float>(__nu, __x);
        }

        inline long double cyl_bessel_il(long double __nu, long double __x)
        {
            return __detail::__cyl_bessel_i<long double>(__nu, __x);
        }
        template <typename _Tpnu, typename _Tp> inline typename __gnu_cxx::__promote_2<_Tpnu, _Tp>::__type cyl_bessel_i(_Tpnu __nu, _Tp __x)
        {
            typedef typename __gnu_cxx::__promote_2<_Tpnu, _Tp>::__type __type;
            return __detail::__cyl_bessel_i<__type>(__nu, __x);
        }
        inline float cyl_bessel_jf(float __nu, float __x)
        {
            return __detail::__cyl_bessel_j<float>(__nu, __x);
        }

        inline long double cyl_bessel_jl(long double __nu, long double __x)
        {
            return __detail::__cyl_bessel_j<long double>(__nu, __x);
        }
        template <typename _Tpnu, typename _Tp> inline typename __gnu_cxx::__promote_2<_Tpnu, _Tp>::__type cyl_bessel_j(_Tpnu __nu, _Tp __x)
        {
            typedef typename __gnu_cxx::__promote_2<_Tpnu, _Tp>::__type __type;
            return __detail::__cyl_bessel_j<__type>(__nu, __x);
        }
        inline float cyl_bessel_kf(float __nu, float __x)
        {
            return __detail::__cyl_bessel_k<float>(__nu, __x);
        }

        inline long double cyl_bessel_kl(long double __nu, long double __x)
        {
            return __detail::__cyl_bessel_k<long double>(__nu, __x);
        }
        template <typename _Tpnu, typename _Tp> inline typename __gnu_cxx::__promote_2<_Tpnu, _Tp>::__type cyl_bessel_k(_Tpnu __nu, _Tp __x)
        {
            typedef typename __gnu_cxx::__promote_2<_Tpnu, _Tp>::__type __type;
            return __detail::__cyl_bessel_k<__type>(__nu, __x);
        }
        inline float cyl_neumannf(float __nu, float __x)
        {
            return __detail::__cyl_neumann_n<float>(__nu, __x);
        }

        inline long double cyl_neumannl(long double __nu, long double __x)
        {
            return __detail::__cyl_neumann_n<long double>(__nu, __x);
        }
        template <typename _Tpnu, typename _Tp> inline typename __gnu_cxx::__promote_2<_Tpnu, _Tp>::__type cyl_neumann(_Tpnu __nu, _Tp __x)
        {
            typedef typename __gnu_cxx::__promote_2<_Tpnu, _Tp>::__type __type;
            return __detail::__cyl_neumann_n<__type>(__nu, __x);
        }
        inline float ellint_1f(float __k, float __phi)
        {
            return __detail::__ellint_1<float>(__k, __phi);
        }

        inline long double ellint_1l(long double __k, long double __phi)
        {
            return __detail::__ellint_1<long double>(__k, __phi);
        }
        template <typename _Tp, typename _Tpp> inline typename __gnu_cxx::__promote_2<_Tp, _Tpp>::__type ellint_1(_Tp __k, _Tpp __phi)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Tpp>::__type __type;
            return __detail::__ellint_1<__type>(__k, __phi);
        }
        inline float ellint_2f(float __k, float __phi)
        {
            return __detail::__ellint_2<float>(__k, __phi);
        }

        inline long double ellint_2l(long double __k, long double __phi)
        {
            return __detail::__ellint_2<long double>(__k, __phi);
        }
        template <typename _Tp, typename _Tpp> inline typename __gnu_cxx::__promote_2<_Tp, _Tpp>::__type ellint_2(_Tp __k, _Tpp __phi)
        {
            typedef typename __gnu_cxx::__promote_2<_Tp, _Tpp>::__type __type;
            return __detail::__ellint_2<__type>(__k, __phi);
        }
        inline float ellint_3f(float __k, float __nu, float __phi)
        {
            return __detail::__ellint_3<float>(__k, __nu, __phi);
        }

        inline long double ellint_3l(long double __k, long double __nu, long double __phi)
        {
            return __detail::__ellint_3<long double>(__k, __nu, __phi);
        }
        template <typename _Tp, typename _Tpn, typename _Tpp> inline typename __gnu_cxx::__promote_3<_Tp, _Tpn, _Tpp>::__type ellint_3(_Tp __k, _Tpn __nu, _Tpp __phi)
        {
            typedef typename __gnu_cxx::__promote_3<_Tp, _Tpn, _Tpp>::__type __type;
            return __detail::__ellint_3<__type>(__k, __nu, __phi);
        }
        inline float expintf(float __x)
        {
            return __detail::__expint<float>(__x);
        }

        inline long double expintl(long double __x)
        {
            return __detail::__expint<long double>(__x);
        }
        template <typename _Tp> inline typename __gnu_cxx::__promote<_Tp>::__type expint(_Tp __x)
        {
            typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
            return __detail::__expint<__type>(__x);
        }
        inline float hermitef(unsigned int __n, float __x)
        {
            return __detail::__poly_hermite<float>(__n, __x);
        }

        inline long double hermitel(unsigned int __n, long double __x)
        {
            return __detail::__poly_hermite<long double>(__n, __x);
        }
        template <typename _Tp> inline typename __gnu_cxx::__promote<_Tp>::__type hermite(unsigned int __n, _Tp __x)
        {
            typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
            return __detail::__poly_hermite<__type>(__n, __x);
        }
        inline float laguerref(unsigned int __n, float __x)
        {
            return __detail::__laguerre<float>(__n, __x);
        }

        inline long double laguerrel(unsigned int __n, long double __x)
        {
            return __detail::__laguerre<long double>(__n, __x);
        }
        template <typename _Tp> inline typename __gnu_cxx::__promote<_Tp>::__type laguerre(unsigned int __n, _Tp __x)
        {
            typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
            return __detail::__laguerre<__type>(__n, __x);
        }
        inline float legendref(unsigned int __l, float __x)
        {
            return __detail::__poly_legendre_p<float>(__l, __x);
        }

        inline long double legendrel(unsigned int __l, long double __x)
        {
            return __detail::__poly_legendre_p<long double>(__l, __x);
        }
        template <typename _Tp> inline typename __gnu_cxx::__promote<_Tp>::__type legendre(unsigned int __l, _Tp __x)
        {
            typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
            return __detail::__poly_legendre_p<__type>(__l, __x);
        }
        inline float riemann_zetaf(float __s)
        {
            return __detail::__riemann_zeta<float>(__s);
        }

        inline long double riemann_zetal(long double __s)
        {
            return __detail::__riemann_zeta<long double>(__s);
        }
        template <typename _Tp> inline typename __gnu_cxx::__promote<_Tp>::__type riemann_zeta(_Tp __s)
        {
            typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
            return __detail::__riemann_zeta<__type>(__s);
        }
        inline float sph_besself(unsigned int __n, float __x)
        {
            return __detail::__sph_bessel<float>(__n, __x);
        }

        inline long double sph_bessell(unsigned int __n, long double __x)
        {
            return __detail::__sph_bessel<long double>(__n, __x);
        }
        template <typename _Tp> inline typename __gnu_cxx::__promote<_Tp>::__type sph_bessel(unsigned int __n, _Tp __x)
        {
            typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
            return __detail::__sph_bessel<__type>(__n, __x);
        }
        inline float sph_legendref(unsigned int __l, unsigned int __m, float __theta)
        {
            return __detail::__sph_legendre<float>(__l, __m, __theta);
        }
        inline long double sph_legendrel(unsigned int __l, unsigned int __m, long double __theta)
        {
            return __detail::__sph_legendre<long double>(__l, __m, __theta);
        }
        template <typename _Tp> inline typename __gnu_cxx::__promote<_Tp>::__type sph_legendre(unsigned int __l, unsigned int __m, _Tp __theta)
        {
            typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
            return __detail::__sph_legendre<__type>(__l, __m, __theta);
        }
        inline float sph_neumannf(unsigned int __n, float __x)
        {
            return __detail::__sph_neumann<float>(__n, __x);
        }

        inline long double sph_neumannl(unsigned int __n, long double __x)
        {
            return __detail::__sph_neumann<long double>(__n, __x);
        }
        template <typename _Tp> inline typename __gnu_cxx::__promote<_Tp>::__type sph_neumann(unsigned int __n, _Tp __x)
        {
            typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
            return __detail::__sph_neumann<__type>(__n, __x);
        }

    } // namespace )

    namespace __gnu_cxx __attribute__((__visibility__("default")))
    {

        inline float airy_aif(float __x)
        {
            float __Ai, __Bi, __Aip, __Bip;
            std::__detail::__airy<float>(__x, __Ai, __Bi, __Aip, __Bip);
            return __Ai;
        }

        inline long double airy_ail(long double __x)
        {
            long double __Ai, __Bi, __Aip, __Bip;
            std::__detail::__airy<long double>(__x, __Ai, __Bi, __Aip, __Bip);
            return __Ai;
        }

        template <typename _Tp> inline typename __gnu_cxx::__promote<_Tp>::__type airy_ai(_Tp __x)
        {
            typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
            __type __Ai, __Bi, __Aip, __Bip;
            std::__detail::__airy<__type>(__x, __Ai, __Bi, __Aip, __Bip);
            return __Ai;
        }

        inline float airy_bif(float __x)
        {
            float __Ai, __Bi, __Aip, __Bip;
            std::__detail::__airy<float>(__x, __Ai, __Bi, __Aip, __Bip);
            return __Bi;
        }

        inline long double airy_bil(long double __x)
        {
            long double __Ai, __Bi, __Aip, __Bip;
            std::__detail::__airy<long double>(__x, __Ai, __Bi, __Aip, __Bip);
            return __Bi;
        }

        template <typename _Tp> inline typename __gnu_cxx::__promote<_Tp>::__type airy_bi(_Tp __x)
        {
            typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
            __type __Ai, __Bi, __Aip, __Bip;
            std::__detail::__airy<__type>(__x, __Ai, __Bi, __Aip, __Bip);
            return __Bi;
        }
        inline float conf_hypergf(float __a, float __c, float __x)
        {
            return std::__detail::__conf_hyperg<float>(__a, __c, __x);
        }
        inline long double conf_hypergl(long double __a, long double __c, long double __x)
        {
            return std::__detail::__conf_hyperg<long double>(__a, __c, __x);
        }
        template <typename _Tpa, typename _Tpc, typename _Tp> inline typename __gnu_cxx::__promote_3<_Tpa, _Tpc, _Tp>::__type conf_hyperg(_Tpa __a, _Tpc __c, _Tp __x)
        {
            typedef typename __gnu_cxx::__promote_3<_Tpa, _Tpc, _Tp>::__type __type;
            return std::__detail::__conf_hyperg<__type>(__a, __c, __x);
        }
        inline float hypergf(float __a, float __b, float __c, float __x)
        {
            return std::__detail::__hyperg<float>(__a, __b, __c, __x);
        }
        inline long double hypergl(long double __a, long double __b, long double __c, long double __x)
        {
            return std::__detail::__hyperg<long double>(__a, __b, __c, __x);
        }
        template <typename _Tpa, typename _Tpb, typename _Tpc, typename _Tp> inline typename __gnu_cxx::__promote_4<_Tpa, _Tpb, _Tpc, _Tp>::__type hyperg(_Tpa __a, _Tpb __b, _Tpc __c, _Tp __x)
        {
            typedef typename __gnu_cxx::__promote_4<_Tpa, _Tpb, _Tpc, _Tp>::__type __type;
            return std::__detail::__hyperg<__type>(__a, __b, __c, __x);
        }

    } // namespace )

#pragma GCC visibility pop
}

using std::abs;
using std::acos;
using std::asin;
using std::atan;
using std::atan2;
using std::ceil;
using std::cos;
using std::cosh;
using std::exp;
using std::fabs;
using std::floor;
using std::fmod;
using std::frexp;
using std::ldexp;
using std::log;
using std::log10;
using std::modf;
using std::pow;
using std::sin;
using std::sinh;
using std::sqrt;
using std::tan;
using std::tanh;

using std::fpclassify;
using std::isfinite;
using std::isgreater;
using std::isgreaterequal;
using std::isinf;
using std::isless;
using std::islessequal;
using std::islessgreater;
using std::isnan;
using std::isnormal;
using std::isunordered;
using std::signbit;

using std::acosh;
using std::asinh;
using std::atanh;
using std::cbrt;
using std::copysign;
using std::erf;
using std::erfc;
using std::exp2;
using std::expm1;
using std::fdim;
using std::fma;
using std::fmax;
using std::fmin;
using std::hypot;
using std::ilogb;
using std::lerp;
using std::lgamma;
using std::llrint;
using std::llround;
using std::log1p;
using std::log2;
using std::logb;
using std::lrint;
using std::lround;
using std::nearbyint;
using std::nextafter;
using std::nexttoward;
using std::remainder;
using std::remquo;
using std::rint;
using std::round;
using std::scalbln;
using std::scalbn;
using std::tgamma;
using std::trunc;

namespace math_test
{

template <class _P0> auto fixed_operation_test()
{
    constexpr f64 TOL = 0.001;
    using type_fixed = _P0;

    {
        auto l_original = num(10.42);
        auto l_number = type_fixed::make_s(l_original);
        auto l_retrieved = l_number.to_f64();
        assert(abs(*(l_original - l_retrieved).num_value()) <= TOL);
    }

    {
        auto l_number = type_fixed::make_s(num(10.42));
        auto l_result = l_number + l_number;
        assert(abs(*l_result.to_f64().num_value() - (10.42 * 2)) <= TOL);
    }

    {
        auto l_number_0 = type_fixed::make_s(num(10.42));
        auto l_number_1 = type_fixed::make_s(num(-1.42));
        auto l_result = l_number_0 - l_number_1;
        assert(abs(*l_result.to_f64().num_value() - (10.42 + 1.42)) <= TOL);
    }

    {
        auto l_number_0 = type_fixed::make_s(num(10.42));
        auto l_number_1 = type_fixed::make_s(num(-2.42));
        auto l_result = (l_number_0 * l_number_1).to_f64();
        assert(abs(*l_result.num_value() - (10.42 * -2.42)) <= TOL);
    }

    {
        auto l_number_0 = type_fixed::make_s(num(10.42));
        auto l_number_1 = type_fixed::make_s(num(-2.42));
        auto l_result = (l_number_0 / l_number_1).to_f64();
        assert(abs(*l_result.num_value() - (10.42 / -2.42)) <= TOL);
    }
};

auto fixed_cos_test_accuracy()
{
    auto l_offset = 31.4159265359;
    auto l_start = (-3.14159265359 / 2) + l_offset;
    auto l_end = (3.14159265359 / 2) + l_offset;
    auto l_step_count = 3600;
    auto l_delta = (l_end - l_start) / l_step_count;
    auto l_angle = fangle32::m_pi_4();

    auto l_cos_1 = *trig::cos(l_angle).thiz.to_f64().num_value();
    auto l_cos_2 = *trig::cos(l_angle + fangle32::m_pi()).thiz.to_f64().num_value();
    auto ezef = 10;
}

auto fixed_cos_test()
{
    auto l_cos = *trig::cos(fangle32::make_s(num(-77.1064646915))).thiz.to_f64().num_value();
    auto efd = 20;
};

void main()
{
    fixed_operation_test<fixed<16, Int32>>();
    fixed_operation_test<fixed<24, Int32>>();

    fixed_cos_test_accuracy();
};

}; // namespace math_test

i32 main()
{
    core_test::main();
    math_test::main();
};
