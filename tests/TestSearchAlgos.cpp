#include <catch2/catch.hpp>

#include "SearchAlgos.hpp"

TEST_CASE("Search algorithms can sort vectors of int", "[vector]") {
    typedef std::vector<int> VInt;
    typedef decltype (&TemplateSearch::quicksort<VInt::iterator>) D;
    auto algorithm = GENERATE(static_cast<D>(&TemplateSearch::quicksort));

    SECTION("Handle empty list ok") {
        VInt empty = {};
        VInt expected = {};

        algorithm(empty.begin(), empty.end());
        REQUIRE(empty == expected);
    }

    SECTION("Handle singleton list ok") {
        VInt single = {0};
        VInt expected = {0};

        algorithm(single.begin(), single.end());
        REQUIRE(single == expected);
    }

    SECTION("Sort already sorted list of two elements") {
        VInt single = {3, 4};
        VInt expected = {3, 4};

        algorithm(single.begin(), single.end());
        REQUIRE(single == expected);
    }

    SECTION("Sort already sorted list of five elements") {
        VInt single = {1, 2, 3, 4, 5};
        VInt expected = {1, 2, 3, 4, 5};

        algorithm(single.begin(), single.end());
        REQUIRE(single == expected);
    }
}

