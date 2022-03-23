#include <gtest/gtest.h>
#include <vector>
#include "algorithms/binarySearch.hpp"


TEST(BinarySearchTests, emptyContainer)
{
    const std::vector<int> vec{};
    const int value = 5;
    EXPECT_FALSE(binarySearch(vec.cbegin(), vec.cend(), value));
    EXPECT_FALSE(recursiveBinarySearch(vec.cbegin(), vec.cend(), value));
}

TEST(BinarySearchTests, oneElementInContainer_found)
{
    const std::vector<int> vec{9};
    const int value = 9;
    EXPECT_TRUE(binarySearch(vec.cbegin(), vec.cend(), value));
    EXPECT_TRUE(binarySearch(vec.cbegin(), vec.cend(), value));

}

TEST(BinarySearchTests, oneElementInContainer_notFound_lowerValue)
{
    const std::vector<int> vec{9};
    const int value = 5;
    EXPECT_FALSE(binarySearch(vec.cbegin(), vec.cend(), value));
    EXPECT_FALSE(recursiveBinarySearch(vec.cbegin(), vec.cend(), value));

}

TEST(BinarySearchTests, oneElementInContainer_notFound_higherValue)
{
    const std::vector<int> vec{9};
    const int value = 11;
    EXPECT_FALSE(binarySearch(vec.cbegin(), vec.cend(), value));
    EXPECT_FALSE(recursiveBinarySearch(vec.cbegin(), vec.cend(), value));

}

TEST(BinarySearchTests, evenNumberOfElements_found)
{
    const std::vector<int> vec{1, 2, 3, 4, 5, 6};
    const int value = 2;
    EXPECT_TRUE(binarySearch(vec.cbegin(), vec.cend(), value));
    EXPECT_TRUE(binarySearch(vec.cbegin(), vec.cend(), value));
}

TEST(BinarySearchTests, evenNumberOfElements_notFound_higherValue)
{
    const std::vector<int> vec{1, 2, 3, 4, 5, 6};
    const int value = 7;
    EXPECT_FALSE(binarySearch(vec.cbegin(), vec.cend(), value));
    EXPECT_FALSE(recursiveBinarySearch(vec.cbegin(), vec.cend(), value));
}

TEST(BinarySearchTests, evenNumberOfElements_notFound_lowerValue)
{
    const std::vector<int> vec{1, 2, 3, 4, 5, 6};
    const int value = 0;
    EXPECT_FALSE(binarySearch(vec.cbegin(), vec.cend(), value));
    EXPECT_FALSE(recursiveBinarySearch(vec.cbegin(), vec.cend(), value));
}

TEST(BinarySearchTests, oddNumberOfElements_found)
{
    const std::vector<int> vec{1, 3, 5, 7, 9};
    const int value = 9;
    EXPECT_TRUE(binarySearch(vec.cbegin(), vec.cend(), value));
    EXPECT_TRUE(binarySearch(vec.cbegin(), vec.cend(), value));
}

TEST(BinarySearchTests, oddNumberOfElements_notFound_lowerValue)
{
    const std::vector<int> vec{1, 3, 5, 7, 9};
    const int value = 0;
    EXPECT_FALSE(binarySearch(vec.cbegin(), vec.cend(), value));
    EXPECT_FALSE(recursiveBinarySearch(vec.cbegin(), vec.cend(), value));
}

TEST(BinarySearchTests, oddNumberOfElements_notFound_higherValue)
{
    const std::vector<int> vec{1, 3, 5, 7, 9};
    const int value = 10;
    EXPECT_FALSE(binarySearch(vec.cbegin(), vec.cend(), value));
    EXPECT_FALSE(recursiveBinarySearch(vec.cbegin(), vec.cend(), value));
}
