#pragma once

#include "container_pool.hpp"
#include "bits.hpp"

using HeapCodeFlag_t = i8;
enum class HeapCodeFlag : HeapCodeFlag_t
{
    UNDEFINED = 0,
    ALLOCATED = 1,
    NOT_ALLOCATED = 2,
    HEAP_RESIZED = 4,
    PAGE_CREATED = 8
};

ENUM_DECLARE_BITS_OP(HeapCodeFlag);

/*
struct HeapPage
{
    Pool<SliceIndex> allocated_chunks;
    Vector<SliceIndex, _Allocator> free_chunks;
    uimax size;
};
*/

// TODO