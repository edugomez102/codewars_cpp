#include <catch2/catch_all.hpp>
#include "exercise.hpp"

// L = [ "ABART 20", "CDXEF 50", "BKWRK 25","BTSQZ 89", "DRTYM 60" ]
// M = [A, B, C, W]
// (A : 20) - (B : 114) - (C : 50) - (W : 0)
TEST_CASE("basic example") {
  REQUIRE(bookCounts(
        { "ABART 20", "CDXEF 50", "BKWRK 25","BTSQZ 89", "DRTYM 60" }, 
        { "A", "B", "C", "W" }) == "(A : 20) - (B : 114) - (C : 50) - (W : 0)");
}

TEST_CASE("empty L") {
  REQUIRE(bookCounts(
        {}, { "A", "B", "C", "W" }) == "");
}

TEST_CASE("empty M") {
  REQUIRE(bookCounts(
        {"ABART 20"}, {}) == "");
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
