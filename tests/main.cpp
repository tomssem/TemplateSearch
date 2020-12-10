#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include "SearchAlgos.hpp"

TEST_CASE("Search algorithms can sort vectors of int") {
    typedef std::vector<int> VInt;
    typedef decltype (&TemplateSearch::quicksort<VInt::iterator>) D;
    auto algorithm = GENERATE(static_cast<D>(&TemplateSearch::quicksort));

    SECTION("Handle empty string ok") {
        VInt empty = {};
        algorithm(empty.begin(), empty.end());
        REQUIRE(empty == VInt({}));
    }
}
