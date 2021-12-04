#pragma once

#include "macros.hpp"
#include "types.hpp"
#include "memory_unsafe.hpp"

template <class _T> struct Slice
{
    _T* _data;
    uimax _size;

    using _type_data = decltype(_data);

    func_tt(build, p_data, p_size)
    {
        _data = p_data;
        _size = p_size;
    };

    func_s_tt(build_s, p_data, p_size)
    {
        Slice<_T> thiz;
        thiz.build(p_data, p_size);
        return thiz;
    };

    func_(clean)
    {
        _data = nullptr;
        _size = 0;
    };

    func_(invalidate_memory)
    {
        __invalidate(_data, _size);
    };

    func_t(at, p_index)
    {
        check_array_bound(p_index, 0, _size);
        return &_data[p_index];
    };

    func_t(slide, p_offset_index)
    {
        assert_debug(_size >= p_offset_index);
        return Slice<_T>::build_s(_data + p_offset_index, _size - p_offset_index);
    };

    func_ttt(memove_down, p_break_index, p_move_delta, p_moved_block_size)
    {
        __memove_down_safe(p_break_index, p_move_delta, p_moved_block_size);
    };

    func_ttt(memove_up, p_break_index, p_move_delta, p_moved_block_size)
    {
        __memove_up_safe(p_break_index, p_move_delta, p_moved_block_size);
    };

    func_t(copy_to, to)
    {
        __memcpy_safe(to);
    };

    func_t(copy_from, *p_from)
    {
        p_from->copy_to(this);
    };

    // TODO -> recursively template ?
    func_tt(copy_from_2, *p_from_0, *p_from_1)
    {
        p_from_0->copy_to(this);
        let l_to = slide(p_from_0->size);
        p_from_1->copy_to(l_to);
    };

    func_tt(copy_at_from, p_index, *p_from)
    {
        slide(p_index).copy_from(p_from);
    };

    func_ttt(copy_at_from_2, p_index, *p_from_0, *p_from_1)
    {
        copy_at_from(p_index, p_from_0);
        copy_at_from(p_index + p_from_0->_size, p_from_1);
    };

    func_t(compare, p_compared_slice)
    {
        return __memcmp(p_compared_slice);
    };

    func_(size)
    {
        return _size;
    };

    func_(data)
    {
        return _data;
    };

  private:
    func_t(__memget_safe, p_index)
    {
        assert_debug(p_index < _size);
        return &_data[p_index];
    };

    func_tt(__memzero, p_start_index, p_size)
    {
        assert_debug(p_start_index <= _size);            /* The index is inside the slice */
        assert_debug((p_start_index + p_size) <= _size); /* We don't write outside of the slice */

        ::memset(_data + p_start_index, 0, p_size * sizeof(*_data));
    };

    func_ttt(__memove_up, p_break_index, p_move_delta, p_moved_block_size)
    {
        ::memmove(_data + p_break_index - p_move_delta, _data + p_break_index, sizeof(*_data) * p_moved_block_size);
        __try_invalidate(_data + p_break_index - p_move_delta + p_moved_block_size, p_move_delta);
    };

    func_ttt(__memove_up_safe, p_break_index, p_move_delta, p_moved_block_size)
    {
        assert_debug((p_break_index - p_move_delta) < _size);        /* The target memory is inside the slice */
        assert_debug((p_break_index + p_moved_block_size) <= _size); /* We don't write outside of the slice.*/
        __memove_up(p_break_index, p_move_delta, p_moved_block_size);
    };

    func_ttt(__memove_down, p_break_index, p_move_delta, p_moved_block_size)
    {
        ::memmove(_data + p_break_index + p_move_delta, _data + p_break_index, sizeof(*_data) * p_moved_block_size);
        __try_invalidate(_data + p_break_index, p_move_delta);
    };

    func_ttt(__memove_down_safe, p_break_index, p_move_delta, p_moved_block_size)
    {
        assert_debug((p_break_index + p_move_delta) <= _size);                      /* The target memory is inside the slice */
        assert_debug((p_break_index + p_move_delta + p_moved_block_size) <= _size); /* We don't write outside of the slice. */
        __memove_down(p_break_index, p_move_delta, p_moved_block_size);
    };

    func_t(__memcpy, *to)
    {
        ::memcpy((void*)to->_data, (void*)_data, sizeof(*_data) * _size);
    };

    func_t(__memcpy_safe, *to)
    {
        assert_debug(to->_size >= _size); // we don't overlap
        __memcpy(to);
    };

    func_t(__memcmp, *p_compared)
    {
        return (::memcmp(_data, p_compared->data(), sizeof(*_data) * _size) == 0);
    };

    func_t(__memcmp, p_compared)
    {
        return __memcmp(&p_compared);
    };
};

template <class _T, uimax _SIZE> struct arr
{
    _T _data[_SIZE];

    func_t(at, p_index)
    {
        assert_debug(p_index < _SIZE);
        return &_data[p_index];
    };

    func_(constexpr size)
    {
        return _SIZE;
    };

    func_(to_slice)
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

    func_tt(allocate, p_size, ctx)
    {
        *data_p() = (_type_data)ctx->malloc(sizeof(_T) * p_size);
        *size_p() = p_size;
    }

    func_s_tt(allocate_s, p_size, ctx)
    {
        Span<_T> thiz;
        thiz.allocate(p_size, ctx);
        return thiz;
    };

    func_t(free, ctx)
    {
        if (__CLEAN)
        {
            _slice.invalidate_memory();
        }
        ctx->free(data_p());
    };

    func_(clean)
    {
        *data_p() = nullptr;
        *size_p() = 0;
    };

    func_t(at, p_index)
    {
        return _slice.at(p_index);
    };

    func_tt(resize, p_size, ctx)
    {
        if (size() < p_size)
        {
            *size_p() = p_size;
            realloc(ctx);
        }
    };

    func_t(realloc, ctx)
    {
        ctx->realloc(data_p(), sizeof(_T) * size());
    };

    func_wto_ttt(memove_down, &_slice, p_break_index, p_move_delta, p_moved_block_size);
    func_wto_ttt(memove_up, &_slice, p_break_index, p_move_delta, p_moved_block_size);

    func_wto_t(copy_from, &_slice, p_from);
    func_wto_tt(copy_from_2, &_slice, p_from_0, p_from_1);

    func_wto_tt(copy_at_from, &_slice, p_index, p_from);
    func_wto_ttt(copy_at_from_2, &_slice, p_index, p_from_0, p_from_1);

    func_wto_t(slide, &_slice, p_offset_index);

    func_(data)
    {
        return _slice._data;
    };
    func_(data_p)
    {
        return &_slice._data;
    };

    func_(size)
    {
        return _slice._size;
    };

    func_(size_p)
    {
        return &_slice._size;
    };
};

template <class _T> struct Vector
{
    Span<_T> _span;
    uimax _size;

    func_tt(allocate, p_size, ctx)
    {
        _span.allocate(p_size, ctx);
        _size = 0;
    };

    func_s_tt(allocate_s, p_size, ctx)
    {
        Vector<_T> l_vector;
        l_vector.allocate(p_size, ctx);
        return l_vector;
    };

    func_t(free, ctx)
    {
        _span.free(ctx);
    };

    func_(clean)
    {
        _span.clean();
        _size = 0;
    };

    func_t(at, p_index)
    {
        check_array_bound(p_index, 0, size());
        return _span.at(p_index);
    };

    func_tt(resize, p_size, ctx)
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

    func_tt(resize_delta, p_delta_size, ctx)
    {
        resize(size() + p_delta_size, ctx);
    };

    func_ttt(insert_at, *p_element, p_index, ctx)
    {
        resize_delta(1, ctx);
        let l_old_size = _size;
        _size += 1;
        _span._slice.memove_down(p_index, 1, l_old_size - p_index);
        *at(p_index) = *p_element;
    };

    func_ttt(insert_slice_at, *p_slice, p_index, ctx)
    {
        resize_delta(p_slice->size(), ctx);
        let l_old_size = _size;
        _size += p_slice->size();
        _span._slice.memove_down(p_index, p_slice->size(), l_old_size - p_index);
        _span._slice.copy_at_from(p_index, p_slice);
    };

    func_tt(push_back, p_element, ctx)
    {
        resize_delta(1, ctx);
        _size += 1;
        *_span.at(_size - 1) = *p_element;
    };

    func_tt(push_back_slice, p_slice, ctx)
    {
        insert_slice_at(p_slice, _size, ctx);
    };

    func_t(remove, p_index)
    {
        _span._slice.memove_up(p_index + 1, 1, _size - (p_index + 1));
        _size -= 1;
    };

    func_(pop_back)
    {
        assert_debug(_size >= 1);
        if (__CLEAN)
        {
            remove(_size - 1);
        }
        else
        {
            _size -= 1;
        }
    };

    func_(span_p)
    {
        return &_span;
    };

    func_(data)
    {
        return _span.data();
    };

    func_(data_p)
    {
        return _span.data_p();
    };

    func_(size)
    {
        return _size;
    };

    func_(size_p)
    {
        return &_size;
    };

    func_(capacity)
    {
        return _span.size();
    };
};