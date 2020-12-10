#include <functional>
#include <iterator>
#include <concepts>

namespace TemplateSearch {
    template <typename RandomAccessIterator,
              typename Compare=std::less<typename std::iterator_traits<RandomAccessIterator>::value_type>>
void quicksort(RandomAccessIterator begin, RandomAccessIterator end, Compare cmp = Compare()) {

}

    int myFunc(int i);
}
