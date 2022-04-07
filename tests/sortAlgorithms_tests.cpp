#include <gtest/gtest.h>
#include "algorithms/sortAlgorithms.hpp"

TEST(selectionSort, emptyContainer)
{
    std::vector<int> vec{};

    selectionSort(vec.begin(), vec.end());

    const std::vector<int> expected{};
    EXPECT_EQ(vec, expected);
}

TEST(selectionSort, oneElement)
{
    std::vector<int> vec{7};

    selectionSort(vec.begin(), vec.end());

    const std::vector<int> expected{7};
    EXPECT_EQ(vec, expected);
}

TEST(selectionSort, manyDifferentElements)
{
    std::vector<int> vec{2, 8, 1, 0, 5, 5, 10, -1};

    selectionSort(vec.begin(), vec.end());

    const std::vector<int> expected{-1, 0, 1, 2, 5, 5, 8, 10};
    EXPECT_EQ(vec, expected);
}

TEST(selectionSort, manyTheSameElements)
{
    std::vector<int> vec{7, 7, 7, 7, 7, 7, 7};

    selectionSort(vec.begin(), vec.end());

    const std::vector<int> expected{7, 7, 7, 7, 7, 7, 7};
    EXPECT_EQ(vec, expected);
}

TEST(selectionSort, sortedElements)
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7};

    selectionSort(vec.begin(), vec.end());

    const std::vector<int> expected{1, 2, 3, 4, 5, 6, 7};
    EXPECT_EQ(vec, expected);
}

TEST(quickSort, zeroElements)
{
    std::vector<int> vec;

    quickSort(vec.begin(), vec.end());

    EXPECT_EQ(vec, std::vector<int>{});
}

TEST(quickSort, oneElement)
{
    std::vector<int> vec{5};

    quickSort(vec.begin(), vec.end());

    const std::vector<int> expected{5};
    EXPECT_EQ(vec, expected);
}

TEST(quickSort, manyDifferentElements)
{
    std::vector<int> vec{2, 8, 1, 0, 5, 5, 10, -1};

    quickSort(vec.begin(), vec.end());

    const std::vector<int> expected{-1, 0, 1, 2, 5, 5, 8, 10};
    EXPECT_EQ(vec, expected);
}

TEST(quickSort, manyTheSameElements)
{
    std::vector<int> vec{7, 7, 7, 7, 7, 7, 7};

    quickSort(vec.begin(), vec.end());

    const std::vector<int> expected{7, 7, 7, 7, 7, 7, 7};
    EXPECT_EQ(vec, expected);
}

TEST(quickSort, sortedElements)
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7};

    quickSort(vec.begin(), vec.end());

    const std::vector<int> expected{1, 2, 3, 4, 5, 6, 7};
    EXPECT_EQ(vec, expected);
}
