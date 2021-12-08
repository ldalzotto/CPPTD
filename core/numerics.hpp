#pragma once

#include "types.hpp"

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

template <class _T0> struct higher_numeric
{
};

#define declare_higher_numeric(p_source, p_target)                                                                                                                                                     \
    template <> struct higher_numeric<p_source>                                                                                                                                                        \
    {                                                                                                                                                                                                  \
        using value = p_target;                                                                                                                                                                        \
    }

declare_higher_numeric(i8, i16);
declare_higher_numeric(i16, i32);
declare_higher_numeric(i32, i64);
declare_higher_numeric(i64, i64);
declare_higher_numeric(ui8, ui16);
declare_higher_numeric(ui16, ui32);
declare_higher_numeric(ui32, ui64);
declare_higher_numeric(ui64, ui64);
declare_higher_numeric(f32, f64);
declare_higher_numeric(f64, f64);

#undef declare_higher_numeric

template <class _Number> struct Number
{
    static_assert(is_numeric<_Number>::value, "");
    using type_higher_numeric = typename higher_numeric<_Number>::value;
    using type_higher = Number<type_higher_numeric>;

    _Number _number;

    constexpr __force_inline Number() = default;

    template <class _P0> constexpr __force_inline Number(_P0 p_number)
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

    func_(constexpr __force_inline num_value)
    {
        return &_number;
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

    func_t(constexpr __force_inline operator%, p_other)
    {
        using __type_return = decltype(__get_modulus_return_type(*this, p_other));
        return __type_return(_number % p_other._number);
    }

    func_t(constexpr __force_inline operator<, p_other)
    {
        return (i8)(_number < p_other._number);
    };

    func_t(constexpr __force_inline operator<=, p_other)
    {
        return (i8)(_number <= p_other._number);
    };

    func_t(constexpr __force_inline operator>, p_other)
    {
        return (i8)(_number > p_other._number);
    };

    func_t(constexpr __force_inline operator>=, p_other)
    {
        return (i8)(_number >= p_other._number);
    };

    func_(constexpr __force_inline abs)
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

    func_s_tt(constexpr __force_inline __get_modulus_return_type, p_0, p_1)
    {
        abort();

        assert_constexpr<!is_floating<_P0>::value && !is_floating<_P1>::value>();
        // static_assert(!is_floating<_P0>::value && !is_floating<_P1>::value);
        return p_0;
    };
};

template <class _P0> auto __force_inline constexpr num(_P0 p_input)
{
    return Number<_P0>(p_input);
};

using Int8 = Number<i8>;
using Int32 = Number<i32>;
using Int64 = Number<uimax>;