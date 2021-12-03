#pragma once
#include "macros.hpp"
#include <stdlib.h>

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

template <class _T0> struct is_numeric
{
    static constexpr bool value = false;
};
#define declare_is_numeric(type)                                                                                                                                                                       \
    template <> struct is_numeric<type>                                                                                                                                                                \
    {                                                                                                                                                                                                  \
        static constexpr bool value = true;                                                                                                                                                            \
    }

declare_is_numeric(i8);
declare_is_numeric(ui8);
declare_is_numeric(i16);
declare_is_numeric(ui16);
declare_is_numeric(i32);
declare_is_numeric(ui32);
declare_is_numeric(i64);
declare_is_numeric(ui64);
declare_is_numeric(f32);
declare_is_numeric(f64);

#undef declare_is_numeric

template <class _T0> struct is_floating
{
    static constexpr bool value = false;
};

#define declare_is_floating(type)                                                                                                                                                                      \
    template <> struct is_floating<type>                                                                                                                                                               \
    {                                                                                                                                                                                                  \
        static constexpr bool value = true;                                                                                                                                                            \
    }

declare_is_floating(f32);
declare_is_floating(f64);

#undef declare_is_floating

template <class _T0> struct number_size
{
    static constexpr uimax value = 0;
};

template <class _Number> struct Number
{
    static_assert(is_numeric<_Number>::value, "");

    _Number _number;

    template <class _P0> constexpr __force_inline Number(_P0 p_number)
    {
        _number = p_number;
    };

    func_t(constexpr __force_inline operator+, p_other)
    {
        using __type_return = decltype(__get_operation_return_type(*this, p_other));
        return __type_return(_number + p_other._number);
    }

    func_t(constexpr __force_inline operator+=, p_other)
    {
        _number += p_other._number;
    }

    func_t(constexpr __force_inline operator-, p_other)
    {
        using __type_return = decltype(__get_operation_return_type(*this, p_other));
        return __type_return(_number - p_other._number);
    }

    func_t(constexpr __force_inline operator-=, p_other)
    {
        _number -= p_other._number;
    }

    func_t(constexpr __force_inline operator*, p_other)
    {
        using __type_return = decltype(__get_operation_return_type(*this, p_other));
        return __type_return(_number * p_other._number);
    }

    func_t(constexpr __force_inline operator*=, p_other)
    {
        _number *= p_other._number;
    }

    func_t(constexpr __force_inline operator/, p_other)
    {
        using __type_return = decltype(__get_operation_return_type(*this, p_other));
        return __type_return(_number / p_other._number);
    }

    func_t(constexpr __force_inline operator/=, p_other)
    {
        _number /= p_other._number;
    }

  private:
    func_s_tt(constexpr __force_inline __get_operation_return_type, p_0, p_1)
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

    func_s_tt(constexpr __force_inline __get_higest_size, p_0, p_1)
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
};

template <class _P0> auto num(_P0 p_input)
{
    return Number<_P0>(p_input);
};

using Int8 = Number<i8>;
using Int32 = Number<i32>;