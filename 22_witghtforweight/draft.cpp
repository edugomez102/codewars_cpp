#include <iostream>
#include "exercise.hpp"

// Minimal enviroment

#include <vector>
#include <map>

// numbers[] = input_array.spli(" ") // CHECK all
// weightsMap = {}
//
// for (i = 0; i < len(numbers); i++)
//   w = calculateWeight(numbers[i])
//   weightsMap[w] = numbers[i]
//
// result = []
//
// weightMap.sort()
// for( key, value in weihtsMap)
//   result.push(value)

int digitSum(int num) {

  int result = 0;
  std::string num_str = std::to_string(num);
  for (const char cnum : num_str) {
    result += cnum - '0';
  }
  return result;
}

std::vector<int> orderWeight(std::vector<int> numbers) {
  std::map<int, int> wmap;

  for (int i = 0; i < numbers.size(); i++) {
    int w = digitSum(numbers[i]);
    wmap[w] = numbers[i];
  }
  std::vector<int> result;
  for (auto [key, value] : wmap) {
    result.push_back(value);
  }

  return result;
}


int main()
{

  auto o = orderWeight({5, 16, 21});
  for (auto num : o) {
    std::cout << num << "\n";
  }
  return 0;
}
