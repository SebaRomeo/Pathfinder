#pragma once

namespace pf
{
    template <typename T>
    class IComparable
    {
    public:
        virtual int CompareTo(const T &other) const = 0;
    };
}