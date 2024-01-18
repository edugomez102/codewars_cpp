#include <catch2/catch_all.hpp>
#include "exercise.hpp"

TEST_CASE("basic") {
  REQUIRE(dup({"hoola"}) == 
      std::vector<std::string>{"hola"}) ;
}

TEST_CASE("example") {
  REQUIRE(dup({ "abracadabra","allottee","assessee" }) == 
    std::vector<std::string> { "abracadabra","alote","asese" } );
}
int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
