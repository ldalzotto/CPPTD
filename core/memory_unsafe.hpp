#pragma once

#include "assertions.hpp"
#include "macros.hpp"
#include "types.hpp"
#include "typing.hpp"
#include "string.h"

func_tt(__zero, p_ptr, p_size)
{
    assert_constexpr<is_pointer<decltype(p_ptr)>::value>();
    ::memset(p_ptr, 0, sizeof(*p_ptr) * p_size);
};

func_tt(__invalidate, p_ptr, p_size)
{
    assert_constexpr<is_pointer<decltype(p_ptr)>::value>();
    ::memset(p_ptr, 202, sizeof(*p_ptr) * p_size);
};

func_t(__invalidate, p_ptr)
{
    __invalidate(p_ptr, sizeof(*p_ptr));
}

func_tt(__try_invalidate, p_ptr, p_size)
{
    if (__CLEAN)
    {
        __invalidate(p_ptr, p_size);
    }
};

func_t(__try_invalidate, p_ptr)
{
    if (__CLEAN)
    {
        __invalidate(p_ptr);
    }
};

struct UnsafeContext
{
    func_t(malloc, p_size)
    {
        let l_ptr = ::malloc(p_size);
        check_not_null(l_ptr);
        return l_ptr;
    };

    func_t(free, p_ptr)
    {
        assert_constexpr<is_pointer_pointer<decltype(p_ptr)>::value>();
        check_not_null(p_ptr);
        check_not_null(*p_ptr);
        ::free(*p_ptr);
        *p_ptr = nullptr;
    };

    func_tt(realloc, p_ptr, p_size)
    {
        assert_constexpr<is_pointer_pointer<decltype(p_ptr)>::value>();
        check_not_null(p_ptr);
        check_not_null(*p_ptr);
        let l_new_ptr = ::realloc(*p_ptr, p_size);
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
