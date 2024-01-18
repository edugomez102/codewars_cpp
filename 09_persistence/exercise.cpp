#include "exercise.hpp"

#include <vector>
#include <string>

std::vector<int> splitNumber(int num) {
  std::vector<int> solution;
  std::string num_str = std::to_string(num);
  for (int i = 0; i < num_str.size(); i++) {
    // convert char to int
    solution.push_back( num_str[i] - '0');
  }
  return solution;
}


int persistence(int num) {
  // spit_count = 0
  // splits = split(num)
  // if len(splits) == 1 
  //   return split_count
  // else
  //   splits++
  //   spliits = multiply(splits)


  int split_counts = 0;
  std::vector<int> num_digits = splitNumber(num);

  while(num_digits.size() != 1) {
    split_counts++;
    num = 1;
    for (int digit : num_digits) {
      num *= digit;
    }
    num_digits = splitNumber(num);
  }

  return split_counts;
}
