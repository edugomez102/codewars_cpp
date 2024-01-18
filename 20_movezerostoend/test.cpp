#include <catch2/catch_all.hpp>
#include "exercise.hpp"

TEST_CASE("my example 1") {
  REQUIRE(moveZerosToEnd({1, 2, 0, 0, 3, 6}) == std::vector<int>{1, 2, 3, 6, 0, 0});
}

TEST_CASE("given example") {
  REQUIRE(moveZerosToEnd({1, 0, 1, 2, 0, 1, 3}) == std::vector<int>{1, 1, 2, 1, 3, 0, 0});
}

TEST_CASE("my example 2") {
  REQUIRE(moveZerosToEnd({1, 2, 3, 0}) == std::vector<int>{1, 2, 3, 0});
}
TEST_CASE("name") {
  REQUIRE(moveZerosToEnd(std::vector<int>{1, 2, 0, 1, 0, 1, 0, 3, 0, 1}) ==
      (std::vector<int>{1, 2, 1, 1, 3, 1, 0, 0, 0, 0}));
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
