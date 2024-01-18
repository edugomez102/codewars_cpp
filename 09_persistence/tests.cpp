#include <catch2/catch_all.hpp>
#include "exercise.hpp"

TEST_CASE("example 39") {
  REQUIRE(persistence(39) == 3);
}

TEST_CASE("example 93") {
  REQUIRE(persistence(93) == 3);
}

TEST_CASE("234") {
  REQUIRE(persistence(234) == 2);
}

TEST_CASE("51") {
  REQUIRE(persistence(51) == 1);
}

TEST_CASE("15") {
  REQUIRE(persistence(15) == 1);
}

TEST_CASE("10") {
  REQUIRE(persistence(10) == 1);
}

TEST_CASE("4 aleady one") {
  REQUIRE(persistence(4) == 0);
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
