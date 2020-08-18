#define CATCH_CONFIG_MAIN

#include <vector>

#include "catch.hpp"
#include "cpplib.h"

TEST_CASE("RLE Compression") {
  SECTION("Basic positive run") { REQUIRE(true); }
}

TEST_CASE("FindMax") {
  CPPLib cpplib;

  SECTION("Should find max of consecutive numbers") {
    std::vector<int> inputs = {1, 2, 3, 4};
    REQUIRE(cpplib.FindMax(inputs) == 4);
  }

  SECTION("Should find max of consecutive numbers") {
    std::vector<int> inputs = {1, 7, 3, 4};
    REQUIRE(cpplib.FindMax(inputs) == 7);
  }
}
