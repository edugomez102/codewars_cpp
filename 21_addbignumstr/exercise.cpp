#include "exercise.hpp"

#include <cstdint>


std::string add(const std::string& n1, const std::string& n2) {
  std::string result;
  // result = 0
  // for(i = 0; i < len(num_str); i++)
  //   result += num_str[i] * (10 * i);
  // int re

  // 100
  // 0 * 1 
  // 0 * 10
  // 1 * 100

  // 123
  // 3 * 1    | 0
  // 2 * 10   | 1
  // 1 * 100  | 2


  uint64_t num3 = 0;
  int decimalPos = 1;
  for (int i = n1.size() - 1; i >= 0; i--) {
    num3 += (n1.data()[i] - '0') * decimalPos;
    decimalPos *= 10;
  }
  decimalPos = 1;
  for (int i = n2.size() - 1; i >= 0; i--) {
    num3 += (n2.data()[i] - '0') * decimalPos;
    decimalPos *= 10;
  }
  result = std::to_string(num3);

  return result;
}
