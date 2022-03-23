#pragma once
#include <cstdint>
#include <iterator>

template <typename T>
T factorial(unsigned n)
{
    if (n == 0)
    {
        return 0;
    }

    T ret = 1;
    for (unsigned i = 1; i <= n; ++i)
    {
        ret *= i;
    }
    return ret;
}

template <typename T>
T recursiveFactorial(unsigned n)
{
    if (n == 0 or n == 1)
    {
        return n;
    }
    return n * recursiveFactorial<T>(n-1);
}

template <typename Iter>
unsigned recursiveSum(Iter begin, Iter end)
{
    while (begin != end)
    {
        return *begin + recursiveSum(std::next(begin), end);
    }
    return 0;
}

template <typename Iter>
std::size_t recursiveNumberOfElements(Iter begin, Iter end)
{
    if (begin == end)
    {
        return 0;
    }
    return 1 + recursiveNumberOfElements(std::next(begin), end);
}
