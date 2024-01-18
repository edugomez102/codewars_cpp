#include <catch2/catch_all.hpp>
#include "exercise.hpp"

// [ 5, 1, 6, 8, 2, 3]
// [1, 3, 6, 8, 2, 5]
TEST_CASE("my example") {
  REQUIRE(sortOdds({5, 1, 6, 8, 2, 3}) == std::vector{1, 3, 6, 8, 2, 5});
}
// [5, 8, 6, 3, 4]
// [3, 8, 6, 5, 4]

TEST_CASE("first example") {
  REQUIRE(sortOdds({5, 8, 6, 3, 4}) == std::vector{3, 8, 6, 5, 4});
}

// [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]
// [1, 8, 3, 6, 5, 4, 7, 2, 9, 0]
TEST_CASE("second example") {
  REQUIRE(sortOdds({ 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }) == 
        std::vector{ 1, 8, 3, 6, 5, 4, 7, 2, 9, 0 });
}

TEST_CASE("second custom example") {
  REQUIRE(sortOdds({5, 3, 2, 1, 6, 12, 4, 9, 8}) == 
        std::vector{ 1, 3, 2, 5, 6, 12, 4, 9, 8 });
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
