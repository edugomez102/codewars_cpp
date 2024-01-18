#include "exercise.hpp"

#include <map>

std::string primeDivisors(int number) {
  std::string result = "";

  std::map<int, int> divisorCount;

  while(number > 1) {
    for (int i = 2; i <= number; i++) {
      if(number % i == 0) {
        number = number / i;
        divisorCount[i]++;
        break;
      }
    }
  }

  for (auto [key, value] : divisorCount) {
    if(value != 1)
      result += "(" + std::to_string(key) + "**" + std::to_string(value) + ")";
    else
      result += "(" + std::to_string(key) + ")";
  }
  return result;
}
