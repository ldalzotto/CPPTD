#include "core.hpp"

namespace core_test
{

void test_memory()
{

#if 0
#endif
    let _l_ctx = SysContext::allocate_s();
    let ctx = &_l_ctx;
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
        let l_vector = Vector<uimax>::allocate_s(1, ctx);

        for (loop_range(i, 0, 20))
        {
            l_vector.push_back(&i, ctx);
        };
        assert(l_vector.capacity() == 32);

        for (loop_iter(i, &l_vector))
        {
            assert(*l_vector.at(i) == i);
        }

        l_vector.free(ctx);
    }

#if 0
  {
    void *l_ptr;
    allocator_trait<global_allocator> l_allocator =
        allocator_trait<global_allocator>();
    l_allocator.malloc(&l_ptr, (global_heap.heap.page_size / 2) - 1);
    l_allocator.free(&l_ptr);
    l_allocator.malloc(&l_ptr, (global_heap.heap.page_size / 2));
    l_allocator.free(&l_ptr);
    l_allocator.malloc(&l_ptr, (global_heap.heap.page_size / 2) + 1);
    l_allocator.free(&l_ptr);

    if (__CLEAN) {
      sys::pf.assert(!l_ptr);
    }
  }
#endif
    _l_ctx.dispose();
};

func_t(test_slice, ctx)
{
#if 0
#endif
    {
        Span<uimax> l_span_sizet;
        l_span_sizet.allocate(0, ctx);

        // When resizing the span, new memory is allocated
        {
            let l_new_capacity = 10;
            l_span_sizet.resize(l_new_capacity, ctx);
            assert(l_span_sizet.size() == l_new_capacity);
            assert(l_span_sizet.data() != NULL);
        }

        l_span_sizet.free(ctx);
    }

    // Move memory
    {
        Span<uimax> l_span_sizet;
        l_span_sizet.allocate(10, ctx);

        for (loop_range(i, 0, 10))
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
            for (loop_range(i, 0, 2))
            {
                assert(*l_span_sizet.at(i) == i);
            }
        }
        {
            l_span_sizet.memove_up(2, 2, 2);
            assert(*l_span_sizet.at(0) == 3);
            assert(*l_span_sizet.at(5) == 5);
        }

        // limit moves
        {
            for (loop_range(i, 0, 10))
            {
                *l_span_sizet.at(i) = i;
            };

            l_span_sizet.memove_down(6, 2, 2); // writing to the end of the slice is ok
            assert(*l_span_sizet.at(8) == 6);
            assert(*l_span_sizet.at(9) == 7);
            assert(*l_span_sizet.at(5) == 5);

            for (loop_range(i, 0, 10))
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
        let left = l_arr.to_slice();
        arr<uimax, 3> l_arr_2 = {0, 1, 2};
        let right = l_arr_2.to_slice();
        assert(left.compare(&right));
    }

    {
        Span<uimax> l_span_sizet;
        l_span_sizet.allocate(10, ctx);

        arr<uimax, 4> _slice_1 = {0, 1, 2, 3};
        arr<uimax, 4> _slice_2 = {5, 6, 7, 8};

        let l_slice_1 = _slice_1.to_slice();
        let l_slice_2 = _slice_2.to_slice();

        l_span_sizet.copy_at_from_2(1, &l_slice_1, &l_slice_2);

        let l_slice_slided = l_span_sizet.slide(1);
        assert(l_slice_1.compare(&l_slice_slided));
        l_slice_slided = l_span_sizet.slide(5);
        assert(l_slice_2.compare(&l_slice_slided));

        l_span_sizet.free(ctx);
    }

    {
        arr<uimax, 4> _slice = {15, 26, 78, 10};
        let l_slice = _slice.to_slice();
        let l_span_sizet = Span<uimax>::allocate_s(l_slice.size(), ctx);
        l_span_sizet.copy_from(&l_slice);
        assert(l_span_sizet.size() == 4);
        assert(l_slice.compare(&l_span_sizet));
        l_span_sizet.free(ctx);
    }
};

func_tt(__test_any_vector, p_vector, ctx)
{
#if 0
#endif
    // vector_push_back_array
    {
        let l_old_size = p_vector.size();
        arr<uimax, 5> _elements = {0, 1, 2, 3, 4};
        let l_elements_slice = _elements.to_slice();

        p_vector.push_back_slice(&l_elements_slice, ctx);
        assert(p_vector.size() == l_old_size + 5);
        for (loop_iter(i, &p_vector))
        {
            assert(*p_vector.at(i) == *_elements.at(i - l_old_size));
        }
    }
};

func_t(test_vector, ctx)
{
    let l_vector = Vector<uimax>::allocate_s(0, ctx);
    __test_any_vector(l_vector, ctx);
    l_vector.free(ctx);
};

void main()
{
    test_memory();

    // TODO -> use a heap context
    let _l_ctx = SysContext::allocate_s();
    let ctx = &_l_ctx;
    test_slice(ctx);
    test_vector(ctx);
    _l_ctx.dispose();
};
}; // namespace core_test