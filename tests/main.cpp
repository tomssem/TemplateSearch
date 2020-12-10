#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include "SearchAlgos.hpp"

TEST_CASE("Check the greeting") {
    CHECK("hello" == "hello");
}

TEST_CASE("Very simple") {
    CHECK(3 == 3);
}

TEST_CASE("My func") {
    CHECK(TemplateSearch::myFunc(2) == 0);
}

