#include <catch2/catch_all.hpp>
#include <format>

#include "exercise.hpp"


TEST_CASE("more tests") {
  REQUIRE(
      spinWords("This sentence is a sentence") == "This ecnetnes is a ecnetnes"
  );
};

TEST_CASE("Examples") {
  REQUIRE(spinWords("Hey fellow warriors") == "Hey wollef sroirraw");
  REQUIRE(spinWords("This is a test") == "This is a test");
  REQUIRE(spinWords("This is another test") == "This is rehtona test");
};

TEST_CASE("one word") {
  REQUIRE(spinWords("Hi") == "Hi");
  REQUIRE(spinWords("Two") == "Two");
  REQUIRE(spinWords("Eduardo") == "odraudE");
  REQUIRE(spinWords("Welcome") == "emocleW");
};

TEST_CASE("all reversed") {
  REQUIRE(spinWords("Eduardo tiene mucho talento") == "odraudE eneit ohcum otnelat");
};

TEST_CASE("none reversed") {
  REQUIRE(spinWords("yo me meo") == "yo me meo");
};

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
}
