#pragma once
#include <algorithm>
#include <functional>
#include <iterator>

template <typename FwdIt, typename Compare = std::less<>>
void selectionSort(FwdIt begin, FwdIt end, Compare compare = Compare())
{
    while (begin != end)
    {
        std::iter_swap(begin++, std::min_element(begin, end, compare));
    }
}

template <typename FwdIt, typename Compare = std::less<>>
void quickSort(FwdIt begin, FwdIt end, Compare compare = Compare())
{
    const auto size = std::distance(begin, end);
    if (size <= 1)
    {
        return;
    }

    const auto pivot = *std::next(begin, size / 2);

    const auto middle1 = std::partition(begin, end, [compare, pivot](const auto& elem){
            return compare(elem, pivot);
        });

    const auto middle2 = std::partition(middle1, end, [compare, pivot](const auto& elem){
            return not compare(pivot, elem);
        });

    quickSort(begin, middle1, compare);
    quickSort(middle2, end, compare);
}

