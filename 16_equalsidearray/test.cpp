#include <catch2/catch_all.hpp>
#include "exercise.hpp"

TEST_CASE("example 1") {
  REQUIRE(findSumIndex({1, 2, 3, 4, 3, 2, 1}) == 3);
}

TEST_CASE("my example 1") {
  REQUIRE(findSumIndex({1, 2, 3, 4, 5, 4, 3, 2, 1}) == 4);
}

TEST_CASE("my example 2") {
  REQUIRE(findSumIndex({10, 5, 3, 15}) == 2);
}

TEST_CASE("my example 3") {
  REQUIRE(findSumIndex({1, 2, 3, 4}) == -1);
}

TEST_CASE("my example 4") {
  REQUIRE(findSumIndex({1, 2, 3, 99}) == -1);
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
