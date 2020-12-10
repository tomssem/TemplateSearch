#include <vector>
#include "SearchAlgos.hpp"

int main(int argc, char **argv) {
    std::vector<int> test = {1, 2, 3};

    TemplateSearch::quicksort(test.begin(), test.end());
}
