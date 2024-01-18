#include <catch2/catch_all.hpp>
#include "exercise.hpp"

TEST_CASE("example R") {
  REQUIRE(flip('R', {3, 2, 1, 2}) == std::vector{1, 2, 2, 3});
}

TEST_CASE("example L") {
  REQUIRE(flip('L', {3, 2, 1, 2}) == std::vector{3, 2, 2, 1});
}

TEST_CASE("example 2") {
  REQUIRE(flip('L', {1, 4, 5, 3, 5}) == std::vector{5, 5, 4, 3, 1});
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
