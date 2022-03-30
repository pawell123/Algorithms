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

TEST(recursiveNumberOfElements, zeroElements)
{
    const std::vector<int> vec{};
    EXPECT_EQ(recursiveNumberOfElements(vec.cbegin(), vec.cend()), 0);
}

TEST(recursiveNumberOfElements, oneElement)
{
    const std::vector<int> vec{77};
    EXPECT_EQ(recursiveNumberOfElements(vec.cbegin(), vec.cend()), 1);
}

TEST(recursiveNumberOfElements, manyElements)
{
    const std::vector<int> vec{1, 3, 5, 7, 9};
    EXPECT_EQ(recursiveNumberOfElements(vec.cbegin(), vec.cend()), 5);
}

TEST(recursiveMaximumValue, emptyList)
{
    const std::vector<int> vec;
    EXPECT_EQ(recursiveMaximumValue(vec.cbegin(), vec.cend()), vec.cend());
}

TEST(recursiveMaximumValue, oneElement)
{
    const std::vector<int> vec{7};
    EXPECT_EQ(recursiveMaximumValue(vec.cbegin(), vec.cend()), vec.cbegin());
}

TEST(recursiveMaximumValue, elements123)
{
    const std::vector<int> vec{1, 2, 3};
    EXPECT_EQ(recursiveMaximumValue(vec.cbegin(), vec.cend()), std::prev(vec.cend()));
}

TEST(recursiveMaximumValue, elements321)
{
    const std::vector<int> vec{3, 2, 1};
    EXPECT_EQ(recursiveMaximumValue(vec.cbegin(), vec.cend()), vec.cbegin());
}

TEST(recursiveMaximumValue, elements231)
{
    const std::vector<int> vec{2, 3, 1};
    EXPECT_EQ(recursiveMaximumValue(vec.cbegin(), vec.cend()), std::next(vec.cbegin(), 1));
}
