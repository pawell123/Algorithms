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
