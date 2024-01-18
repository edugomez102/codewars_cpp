#include <catch2/catch_all.hpp>
#include <format>

#include "exercise.hpp"

TEST_CASE("sample") {
  REQUIRE(true);
};

TEST_CASE("sqrt helper ") {
  REQUIRE(sqrt(2) == 2 * 2);
}

TEST_CASE("4 values") {
  REQUIRE(square_digits(3212) == (9414));
}

TEST_CASE("Examples") {
  REQUIRE(square_digits(9119) == (811181));   
  REQUIRE(square_digits(765) == (493625));   

  REQUIRE(square_digits(3212) == (9414));   
  REQUIRE(square_digits(2112) == (4114)); 
  REQUIRE(square_digits(0) == (0));
  REQUIRE(square_digits(13579) == (19254981));   
  REQUIRE(square_digits(24680) == (41636640)); 
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
