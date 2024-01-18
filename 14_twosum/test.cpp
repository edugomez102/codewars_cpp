#include <catch2/catch_all.hpp>
#include <iostream>
#include "exercise.hpp"


// [1, 2, 3], 4
// tuple[0, 2]

TEST_CASE("example") {
  REQUIRE(twoSum({1, 2, 3}, 4) == std::pair{0, 2});
}

TEST_CASE("my example 1") {
  REQUIRE(twoSum({1, 2, 4, 5}, 5) == std::pair{0, 2});
}

TEST_CASE("my example 2") {
  REQUIRE(twoSum({1, 2, 3, 4, 5}, 6) == std::pair{0, 4});
  // or {1, 3}
}

TEST_CASE("test case 3") {
  auto res = twoSum({2, 2, 3}, 4);
  std::cout << res.first << "," << res.second << "\n";
  REQUIRE(twoSum({2, 2, 3}, 4) == std::pair{0, 1} /* 0, 1 */);
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
