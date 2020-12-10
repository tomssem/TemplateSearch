#include <concepts>
#include <functional>
#include <iostream>
#include <iterator>

/*
 *  Algorithms targeted:
 *  - quicksort
 *  - mergesort
 *  - radix sort
 *  - count sort
 *  - shell sort
 *  - bubble sort
 *  - insertion sort
 *  - selection sort
 */

using std::cout, std::endl;

template <typename T, typename It>
concept RandomAccessIteratorOfType = requires (It it) {
    std::random_access_iterator<It>;
    std::is_same<int, T>::value;
};

template <typename T, RandomAccessIteratorOfType<T> It>
using PivotSelector = std::function<It(It, It)>;

template <std::random_access_iterator It>
It pivotOnFirst(It begin, It end) {
    return begin;
}

template <typename T, RandomAccessIteratorOfType<T> It>
auto partition(It begin, It end, T pivot) {
    auto it = begin;

    for(auto jt = begin; jt < end; ++jt) {
        if(*jt <= *pivot) {
            swap(it, jt);
            ++it;
        }
    }

    return it - 1;
}

namespace TemplateSearch {
    template <typename RandomAccessIterator,
              typename Compare=std::less<typename std::iterator_traits<RandomAccessIterator>::value_type>>
    void quicksort(RandomAccessIterator begin, RandomAccessIterator end) {
        if(begin < end) {
            auto pivot = pivotOnFirst(begin, end);
            auto pivotIndex = partition(begin, end, pivot);

            cout << "Pivot index at " << std::distance(begin, pivotIndex) << endl;


            quicksort(begin, pivotIndex);
            quicksort(pivotIndex + 1, end);
        }
    }

    template <typename RandomAccessIterator,
              typename Compare=std::less<typename std::iterator_traits<RandomAccessIterator>::value_type>>
    void mergesort(RandomAccessIterator begin, RandomAccessIterator end, Compare cmp = Compare()) {

    }

    template <typename RandomAccessIterator,
              typename Compare=std::less<typename std::iterator_traits<RandomAccessIterator>::value_type>>
    void radixsort(RandomAccessIterator begin, RandomAccessIterator end, Compare cmp = Compare()) {

    }

    template <typename RandomAccessIterator,
              typename Compare=std::less<typename std::iterator_traits<RandomAccessIterator>::value_type>>
    void countsort(RandomAccessIterator begin, RandomAccessIterator end, Compare cmp = Compare()) {

    }

    template <typename RandomAccessIterator,
              typename Compare=std::less<typename std::iterator_traits<RandomAccessIterator>::value_type>>
    void shellsort(RandomAccessIterator begin, RandomAccessIterator end, Compare cmp = Compare()) {

    }

    template <typename RandomAccessIterator,
              typename Compare=std::less<typename std::iterator_traits<RandomAccessIterator>::value_type>>
    void bubblesort(RandomAccessIterator begin, RandomAccessIterator end, Compare cmp = Compare()) {

    }

    template <typename RandomAccessIterator,
              typename Compare=std::less<typename std::iterator_traits<RandomAccessIterator>::value_type>>
    void insertionsort(RandomAccessIterator begin, RandomAccessIterator end, Compare cmp = Compare()) {

    }

    template <typename RandomAccessIterator,
              typename Compare=std::less<typename std::iterator_traits<RandomAccessIterator>::value_type>>
    void selectionsort(RandomAccessIterator begin, RandomAccessIterator end, Compare cmp = Compare()) {

    }
}
