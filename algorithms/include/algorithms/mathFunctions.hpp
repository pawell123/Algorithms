#pragma once

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




