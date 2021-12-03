#pragma once

#include "memory_unsafe.hpp"
#include "container_vector.hpp"

struct MemoryLeakDisabled
{
    func_t(allocate, ctx){};
    func_t(free, ctx){};
    func_tt(track_memory, p_ptr, ctx){};
    func_t(untrack_memory, p_ptr){};
};

struct MemoryLeak
{
    struct Entry
    {
        i8 _active;
        Span<void*> _backtrace;
        void* _ptr;

        func_(clean)
        {
            _active = 0;
            _backtrace.clean();
            _ptr = 0;
        };
    };

    Span<Entry> _leaks;

    func_t(allocate, ctx)
    {
        _leaks.allocate(32, ctx);
        for (loop_iter(i, &_leaks))
        {
            _leaks.at(i)->clean();
        }
    }

    func_s_t(allocate_s, ctx)
    {
        MemoryLeak l_leak;
        l_leak.allocate(ctx);
        return l_leak;
    };

  private:
    func_(__check_leak)
    {
        for (loop_iter(i, &_leaks))
        {
            let l_entry = _leaks.at(i);
            if (l_entry->_active)
            {
                assert(false);
            }
        }
    }

  public:
    func_t(free, ctx)
    {
        __check_leak();
        for (loop_iter(i, &_leaks))
        {
            if (_leaks.at(i)->_backtrace.data())
            {
                _leaks.at(i)->_backtrace.free(ctx);
            }
        }
        _leaks.free(ctx);
    };

  private:
    func_t(__next_index, ctx)
    {
        for (loop_iter(i, &_leaks))
        {
            let l_element = _leaks.at(i);
            if (!l_element->_active)
            {
                return i;
            }
        }
        let l_start_index = _leaks.size() - 1;
        _leaks.resize(_leaks.size() * 2, ctx);
        for (loop_iter_begin(i, l_start_index, &_leaks))
        {
            _leaks.at(i)->clean();
        }
        return __next_index(ctx);
    };

  public:
    func_tt(track_memory, p_ptr, ctx)
    {
        let l_index = __next_index(ctx);
        assert_debug(l_index != -1);
        let l_entry = _leaks.at(l_index);
        l_entry->_active = 1;
        l_entry->_ptr = p_ptr;
        if (!l_entry->_backtrace.data())
        {
            l_entry->_backtrace.allocate(0, ctx);
        }

        // TODO -> backtrace_capture
    };

    func_t(untrack_memory, p_ptr)
    {
        for (loop_iter(i, &_leaks))
        {
            let l_entry = _leaks.at(i);
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
#if __MEMLEAK
    MemoryLeak _memory_leak;
#else
    MemoryLeakDisabled _memory_leak;
#endif

    func_(allocate)
    {
        if constexpr (__MEMLEAK)
        {
            _memory_leak.allocate(&_unsafe_ctx);
        }
    };

    func_s_(allocate_s)
    {
        SysContext thiz;
        thiz.allocate();
        return thiz;
    };

    func_(dispose)
    {
        _memory_leak.free(&_unsafe_ctx);
    };

    func_t(malloc, p_size)
    {
        auto l_ptr = _unsafe_ctx.malloc(p_size);
        if constexpr (__MEMLEAK)
        {
            if (l_ptr)
            {
                _memory_leak.track_memory(l_ptr, &_unsafe_ctx);
            }
        }
        return l_ptr;
    };

    func_t(free, **p_ptr)
    {
        if (p_ptr)
        {
            if constexpr (__MEMLEAK)
            {
                _memory_leak.untrack_memory(*p_ptr);
            }
            _unsafe_ctx.free(p_ptr);
        }
    };

    func_tt(realloc, **p_ptr, p_size)
    {
        if constexpr (__MEMLEAK)
        {
            if (*p_ptr)
            {
                _memory_leak.untrack_memory(*p_ptr);
            }
        }

        _unsafe_ctx.realloc(p_ptr, p_size);

        if constexpr (__MEMLEAK)
        {
            if (*p_ptr)
            {
                _memory_leak.track_memory(*p_ptr, &_unsafe_ctx);
            };
        }
    };
};
