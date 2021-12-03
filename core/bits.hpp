#pragma once

#include "types.hpp"

// TODO -> migrate all bits_base to inline bitwise operator ENUM_DECLARE_BITS_OP

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

#define ENUM_DECLARE_BITS_OP(EnumType)                                                                                                                                                                 \
    constexpr EnumType operator|(EnumType lhs, EnumType rhs)                                                                                                                                           \
    {                                                                                                                                                                                                  \
        using Underlying = EnumType##_t;                                                                                                                                                               \
        return bits_base<EnumType, Underlying>::set(lhs, rhs);                                                                                                                                         \
    };                                                                                                                                                                                                 \
    constexpr i8 operator&&(EnumType lhs, EnumType rhs)                                                                                                                                                \
    {                                                                                                                                                                                                  \
        using Underlying = EnumType##_t;                                                                                                                                                               \
        return bits_base<EnumType, Underlying>::have(lhs, rhs);                                                                                                                                        \
    }
