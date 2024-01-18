#include <catch2/catch_all.hpp>
#include "exercise.hpp"

TEST_CASE("basic example") {
  REQUIRE(cleanRepeated({ 1, 2, 3, 1, 2, 1, 2, 3 }, 2) == 
             std::vector{ 1, 2, 3, 1, 2, 3 });
}

TEST_CASE("basic example 2") {
  REQUIRE(cleanRepeated({ 20, 37, 20, 21 }, 1) == 
             std::vector{ 20, 37, 21 });
}

TEST_CASE("custom with N=2") {
  REQUIRE(cleanRepeated({1, 2, 3, 4, 5, 2, 3, 2, 3, 1, 1}, 2) == 
             std::vector{1, 2, 3, 4, 5, 2, 3, 1 });
}

TEST_CASE("custom with N=1") {
  REQUIRE(cleanRepeated({1, 2, 3, 4, 5, 2, 3, 2, 3, 1, 1}, 1) == 
             std::vector{1, 2, 3, 4, 5});
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
