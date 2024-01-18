#include "exercise.hpp"

#include <unordered_map>

std::vector<int> cleanRepeated(const std::vector<int>& input, int times) {
// array<int> result;
// hashtable num_count
// for (i = 0; i< len(input_array); i++)
//   num_count[input_array[i]]++;
//   if(num_count[input_array] > N)
//     dont push to solution
//   else
//     result.push(input_array[i])
//
// return result

  std::vector<int> result;
  std::unordered_map<int, int> number_count;

  for (int num : input) {
    number_count[num]++;
    if(number_count[num] <= times) {
      result.push_back(num);
    }
  }

  return result;
}
