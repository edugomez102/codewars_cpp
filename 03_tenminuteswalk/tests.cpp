#include <catch2/catch_all.hpp>
#include "exercise.hpp"

TEST_CASE("10 blocks") {
  REQUIRE(isValidWalk({
        'n', 'n', 'n', 'n', 'n',
        's', 's', 's', 's', 's',
        }) == true);
}

TEST_CASE("n s repeat") {
  REQUIRE(isValidWalk({
        'n', 's', 'n', 's', 'n',
        's', 'n', 's', 'n', 's',
        }) == true);
}

TEST_CASE("5 e, 5 w") {
  REQUIRE(isValidWalk({
        'e', 'e', 'e', 'e', 'e',
        'w', 'w', 'w', 'w', 'w',
        }) == true);
}

TEST_CASE("e, w repeat") {
  REQUIRE(isValidWalk({
        'e', 'w', 'e', 'w', 'e',
        'w', 'e', 'w', 'e', 'w',
        }) == true);
}

TEST_CASE("less than 10") {
  REQUIRE(isValidWalk({
        'e', 'e'
        }) == false);
}

TEST_CASE("more thant 10") {
  REQUIRE(isValidWalk({
        'e', 'w', 'e', 'w', 'e', 'e',
        'w', 'e', 'w', 'e', 'w',
        }) == false);
}

TEST_CASE("all values") {
  REQUIRE(isValidWalk({
        'n', 's', 'e', 'w', 'w',
        'e', 's', 'n', 'n', 's',
        }) == true);
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
