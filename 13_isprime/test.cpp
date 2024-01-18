#include <catch2/catch_all.hpp>
#include "exercise.hpp"

TEST_CASE("negative") { REQUIRE(isPrime(-4) == false); }

TEST_CASE("1") { REQUIRE(isPrime(1) == false); }

TEST_CASE("2") { REQUIRE(isPrime(2) == true); }

TEST_CASE("3") { REQUIRE(isPrime(3) == true); }

TEST_CASE("5") { REQUIRE(isPrime(5) == true); }

TEST_CASE("13") { REQUIRE(isPrime(13) == true); }

TEST_CASE("15") { REQUIRE(isPrime(15) == false); }

TEST_CASE("24") { REQUIRE(isPrime(24) == false); }

TEST_CASE("17") { REQUIRE(isPrime(17) == true); }

TEST_CASE("53") { REQUIRE(isPrime(53) == true); }

TEST_CASE("211") { REQUIRE(isPrime(211) == true); }

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
