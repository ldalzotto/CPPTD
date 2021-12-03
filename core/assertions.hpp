#pragma once

#include "macros.hpp"
#include "types.hpp"
#include <stdlib.h>

func_t(assert, p_condition)
{
    if (!p_condition)
    {
        ::abort();
    }
};

func_t(assert_debug, p_condition)
{
    if (__DEBUG)
    {
        if (!p_condition)
        {
            ::abort();
        }
    }
};

func_b(assert_constexpr)
{
    static_assert(_P0, "");
};

func_ttt(check_array_bound, p_index, p_min, p_max)
{
    assert_debug(p_index >= p_min || p_index < p_max);
};

func_t(check_not_null, p_input)
{
    assert_debug(p_input != NULL);
};
func_b(check_is_wrapper_c)
{
    static_assert(decltype(_P0)::__is_wrapper, "");
};