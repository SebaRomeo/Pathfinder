#pragma once

#include "IComparable.h"

namespace pf
{
    template <typename T>
    class IHeapItem : public IComparable<T>
    {
    public:
        int HeapIndex = 0;
    };
}