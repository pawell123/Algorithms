#include <gtest/gtest.h>
#include "algorithms/mathFunctions.hpp"

TEST(factorial, zero)
{
    EXPECT_EQ(factorial<unsigned>(0), 0);
    EXPECT_EQ(recursiveFactorial<unsigned>(0), 0);
}

TEST(factorial, one)
{
    EXPECT_EQ(factorial<unsigned>(1), 1);
    EXPECT_EQ(recursiveFactorial<unsigned>(1), 1);
}

TEST(factorial, ten)
{
    EXPECT_EQ(factorial<unsigned long long>(10), 3628800ULL);
    EXPECT_EQ(recursiveFactorial<unsigned>(10), 3628800ULL);
}

TEST(recursiveSum, zeroElements)
{
    const std::vector<int> vec{};
    EXPECT_EQ(recursiveSum(vec.cbegin(), vec.cend()), 0);
}

TEST(recursiveSum, oneElement)
{
    const std::vector<int> vec{10};
    EXPECT_EQ(recursiveSum(vec.cbegin(), vec.cend()), 10);
}

TEST(recursiveSum, manyElements)
{
    const std::vector<int> vec{1, 2, 3, 4, 5};
    EXPECT_EQ(recursiveSum(vec.cbegin(), vec.cend()), 15);
}
