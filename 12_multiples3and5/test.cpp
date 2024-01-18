#include <catch2/catch_all.hpp>
#include "exercise.hpp"


TEST_CASE("first example") {
  REQUIRE(sumOfMultiples(10) == 23);
}

TEST_CASE("my example 1") {
  REQUIRE(sumOfMultiples(6) == 8);
}

TEST_CASE("my example 2") {
  REQUIRE(sumOfMultiples(13) == 45);
}

TEST_CASE("negative") {
  REQUIRE(sumOfMultiples(-13) == 0);
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
