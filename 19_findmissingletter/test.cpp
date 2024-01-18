#include <catch2/catch_all.hpp>
#include "exercise.hpp"

TEST_CASE("example 1") {
  REQUIRE(findMissing({'a', 'b', 'c', 'd', 'f'}) == 'e');
}

TEST_CASE("example 2") {
  REQUIRE(findMissing({'O', 'Q', 'R', 'S'}) == 'P');
}

TEST_CASE("my test 1") {
  REQUIRE(findMissing({'a', 'c', 'd', 'e', 'f'}) == 'b');
}

TEST_CASE("my test 2, len == 2") {
  REQUIRE(findMissing({'a', 'c'}) == 'b');
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
