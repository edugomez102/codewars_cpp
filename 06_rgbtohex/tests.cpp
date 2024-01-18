#include <catch2/catch_all.hpp>
#include "exercise.hpp"

TEST_CASE("sample") {
  REQUIRE(rgbToHex(255, 255, 255) == "FFFFFF");
}

TEST_CASE("red") {
  REQUIRE(rgbToHex(255, 0, 0) == "FF0000");
}

TEST_CASE("green") {
  REQUIRE(rgbToHex(0, 255, 0) == "00FF00");
}

TEST_CASE("blue") {
  REQUIRE(rgbToHex(0, 0, 255) == "0000FF");
}

TEST_CASE("black") {
  REQUIRE(rgbToHex(0, 0, 0) == "000000") ;
}

TEST_CASE("rounded black") {
  REQUIRE(rgbToHex(-100, -1, 0) == "000000") ;
}

TEST_CASE("white") {
  REQUIRE(rgbToHex(255, 255, 255) == "FFFFFF") ;
}
TEST_CASE("rounded white") {
  REQUIRE(rgbToHex(1255, 355, 256) == "FFFFFF") ;
}

TEST_CASE("okque") {
  REQUIRE(rgbToHex(210, 67, 1) == "010203") ;
}


int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
