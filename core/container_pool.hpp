#pragma once

#include "container_vector.hpp"

template <class _T> struct Pool
{
    Vector<_T> _elements;
    Vector<uimax> _free_indices;

    func_tt(allocate, p_size, ctx)
    {
        _elements.allocate(p_size, ctx);
        _free_indices.allocate(p_size, ctx);
    };

    func_t(free, ctx)
    {
        _elements.free(ctx);
        _free_indices.free(ctx);
    };

    func_(clean)
    {
        _elements.clean();
        _free_indices.clean();
    };

    func_t(is_element_free, p_token)
    {
        for (loop_iter(i, &_free_indices))
        {
            if (*_free_indices.at(i) == p_token)
            {
                return 1;
            }
        }
        return 0;
    };

    func_(has_allocated_elements)
    {
        return _free_indices.size() != _elements.size();
    };

    func_t(at, p_token)
    {
        assert_debug(!is_element_free(p_token));
        return _elements.at(p_token);
    };

    func_tt(push_back, p_element, ctx)
    {
        if (_free_indices.size() > 0)
        {
            let l_token = *_free_indices.at(_free_indices.size() - 1);
            _free_indices.pop_back();
            _elements.at(l_token) = p_element;
            return l_token;
        }
        else
        {
            _elements.push_back(p_element, ctx);
            let l_token = _elements.size() - 1;
            return l_token;
        }
    };

    func_t(push_back_empty, ctx)
    {
        if (_free_indices.size() > 0)
        {
            let l_token = *_free_indices.at(_free_indices.size() - 1);
            _free_indices.pop_back();
            return l_token;
        }
        else
        {
            _elements.push_back_empty(ctx);
            let l_token = _elements.size() - 1;
            return l_token;
        }
    };

    func_tt(remove, p_token, ctx)
    {
        assert_debug(!is_element_free(p_token));
        _free_indices.push_back(p_token, ctx);
        __try_invalidate(_elements.at(p_token));
    };

    func_tt(remove_get, p_token, ctx)
    {
        assert_debug(!is_element_free(p_token));
        _free_indices.push_back(p_token, ctx);
        let l_return = _elements.at(p_token);
        __try_invalidate(_elements.at(p_token));
        return l_return;
    };
};