#include <catch2/catch_all.hpp>
#include "exercise.hpp"

// 1 => 1
// 2 => 3 + 5      = 8
// 3 => 7 + 9 + 11 = 27

TEST_CASE("1") {
  REQUIRE(rowSumOddNumbers(1) == 1);
}

TEST_CASE("2") {
  REQUIRE(rowSumOddNumbers(2) == 8);
}

TEST_CASE("3") {
  REQUIRE(rowSumOddNumbers(3) == 27);
}

TEST_CASE("4") {
  REQUIRE(rowSumOddNumbers(4) == 64);
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
