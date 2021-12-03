#pragma once

#include "types.hpp"

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
