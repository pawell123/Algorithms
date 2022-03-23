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
