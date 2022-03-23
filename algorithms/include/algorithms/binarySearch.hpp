#include <iterator>

template <typename Iter, typename Value>
bool binarySearch(Iter begin, Iter end, const Value& value)
{
    auto mid = std::next(begin, std::distance(begin, end) / 2);
    
    while (mid != end and *mid != value)
    {
        if (value < *mid)
        {
            end = mid;
        }
        else
        {
            begin = mid+1;
        }
        mid = std::next(begin, std::distance(begin, end) / 2);
    }
    return mid != end;
}

template <typename Iter, typename Value>
bool recursiveBinarySearch(Iter begin, Iter end, const Value& value)
{
    const auto mid = std::next(begin, std::distance(begin, end) / 2);

    if (mid != end and *mid != value)
    {
        if (value < *mid)
        {
            return binarySearch(begin, mid, value);
        }
        return binarySearch(mid+1, end, value);
    }
    return mid != end;
}
