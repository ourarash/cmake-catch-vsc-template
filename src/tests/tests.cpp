#define CATCH_CONFIG_MAIN

#include <vector>

#include "catch.hpp"
#include "cpplib.h"

TEST_CASE("FindMax") {
  CPPLib cpplib;

  SECTION("Should find max of consecutive numbers") {
    std::vector<int> inputs = {1, 2, 3, 4};
    REQUIRE(cpplib.FindMax(inputs) == 4);
  }

  SECTION("Should find max of non consecutive numbers") {
    std::vector<int> inputs = {1, 7, 3, 4};
    REQUIRE(cpplib.FindMax(inputs) == 7);
  }

  SECTION("Should find max with negative numbers") {
    std::vector<int> inputs = {-1, -7, -3, -4};
    REQUIRE(cpplib.FindMax(inputs) == -1);
  }

  SECTION("Should find max of all equal values") {
    std::vector<int> inputs = {-1, -1, -1, -1};
    REQUIRE(cpplib.FindMax(inputs) == -1);
  }

  SECTION("Should find return min for empty vector") {
    std::vector<int> inputs = {};
    REQUIRE(cpplib.FindMax(inputs) == std::numeric_limits<int>::min());
  }

  SECTION("Should find return min for empty vector") {
    std::vector<int> inputs = {1000};
    REQUIRE(cpplib.FindMax(inputs) == 1000);
  }
}
