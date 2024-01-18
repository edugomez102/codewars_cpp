#include "exercise.hpp"

std::vector<int> moveZerosToEnd(const std::vector<int>& numbers) {
  // std::vector<int> result;
  //
  // int zeroCounter = 0;
  //
  // for (int i = 0; i < numbers.size(); i++) {
  //   if(numbers[i] == 0) {
  //     zeroCounter++;
  //   }
  //   else {
  //     result.push_back(numbers[i]);
  //   }
  // }
  // for (int i = 0; i < zeroCounter; i++) {
  //   result.push_back(0);
  // }
  // return result;

  std::vector<int> result(numbers.size(), 0);

  int index = 0;
  for (int i = 0; i < numbers.size(); i++) {
    if(numbers[i] != 0) {
      result[index] = (numbers[i]);
      index++;
    }
  }

  return result;
}
