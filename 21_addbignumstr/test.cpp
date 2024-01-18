#include <catch2/catch_all.hpp>
#include "exercise.hpp"

TEST_CASE("my example 1") {
  REQUIRE(add("1", "5") == "6");
}

TEST_CASE("my exmple 2") {
  REQUIRE(add("100", "77") == "177");
}

TEST_CASE("my exmple 3") {
  REQUIRE(add("123", "1") == "124");
}

TEST_CASE("given example 2") {
  REQUIRE(add("11", "99") == "110");
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
