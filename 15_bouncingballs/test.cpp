#include <catch2/catch_all.hpp>
#include "exercise.hpp"

TEST_CASE("my example 1") {
  // may be wrong
  REQUIRE(countBounces(1, 0.5, 0.5) == 1);
}

TEST_CASE("my example, wrong h") {
  REQUIRE(countBounces(-5, 0.5, 0.5) == -1);
}

TEST_CASE("my example, bounce is less") {
  REQUIRE(countBounces(1, -0.5, 0.5) == -1);
}

TEST_CASE("my example, bounce is greater") {
  REQUIRE(countBounces(1, 2, 0.5) == -1);
}

TEST_CASE("my example, window > h") {
  REQUIRE(countBounces(1, 2, 30) == -1);
}

TEST_CASE("given example 1") {
  REQUIRE(countBounces(3, 0.66, 1.5) == 3);
}

TEST_CASE("given example 2") {
  REQUIRE(countBounces(30, 0.66, 1.5) == 15);
}
int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
