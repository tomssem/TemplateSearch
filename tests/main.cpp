#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

TEST_CASE("Check the greeting") {
      CHECK("hello" == "Hello world!");
}

