#include <catch2/catch_all.hpp>
#include "exercise.hpp"

TEST_CASE("example") {
  REQUIRE(find_uniq({1, 1, 1, 2, 1, 1}) == 2.f);
  REQUIRE(find_uniq({0, 0, 0.55, 0, 0}) == 0.55f);
  REQUIRE(find_uniq({
        999.666,  999.666, 999.666, 999.666, 999.666, 999.666, 999.666, 999, 999.666
        }) == 999.f);
}
int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
