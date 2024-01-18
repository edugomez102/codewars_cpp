#include <catch2/catch_all.hpp>
#include "exercise.hpp"

TEST_CASE("example") {
  REQUIRE(primeDivisors(86240) == "(2**5)(5)(7**2)(11)");
}

TEST_CASE("4") {
  REQUIRE(primeDivisors(4) == "(2**2)");
} 

TEST_CASE("24") {
  REQUIRE(primeDivisors(24) == "(2**3)(3)");
} 

/* 
   36 2 
   18 2 
   9  3 
   3  3 
   1
*/
TEST_CASE("36") {
  REQUIRE(primeDivisors(36) == "(2**2)(3**2)");
} 

TEST_CASE("17") {
  REQUIRE(primeDivisors(17) == "(17)");
} 

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
