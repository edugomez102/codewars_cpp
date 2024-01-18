#include <catch2/catch_all.hpp>
#include "exercise.hpp"

TEST_CASE("empty") {
  REQUIRE(orderByWeight("") == "");
}

TEST_CASE("given example") {
  REQUIRE(orderByWeight("56 65 74 100 99 68 86 180 90") == 
      "100 180 90 56 65 74 68 86 99");
}

TEST_CASE("my example 1") {
  REQUIRE(orderByWeight("5 16 21") == "5 21 16");
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
