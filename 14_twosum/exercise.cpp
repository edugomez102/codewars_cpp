#include "exercise.hpp"

std::pair<int, int> twoSum(const std::vector<int>& numbers, int target) {
  //   for (i = 0; i > len(array); i++
  // for(j = i; j > len(array); j++
  //   if(array[i] + array[j] == number)
  //     return (i, j);

  // save all with hashmap

  for (std::size_t i = 0; i < numbers.size(); i++) {
    for (std::size_t j = i + 1; j < numbers.size(); j++) {
      if(numbers[i] + numbers[j] == target)
        return {i, j};
    }
  }
  return {0, 0};
}
