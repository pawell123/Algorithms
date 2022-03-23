#pragma once
#include <algorithm>
#include <iterator>

template <typename Iter>
void selectionSort(Iter begin, Iter end)
{
    while(begin != end)
    {
        std::iter_swap(begin++, std::min_element(begin, end));
    }
}
