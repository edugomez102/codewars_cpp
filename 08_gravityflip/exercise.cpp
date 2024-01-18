#include "exercise.hpp"
#include <algorithm>

std::vector<int> flip(const char d, const std::vector<int>& arr) {

  std::vector<int> solution = arr;

  // std::sort(solution.begin(), solution.end());
  // if(d == 'L') {
  //   std::reverse(solution.begin(), solution.end());
  // }

  if(d == 'R') {
    std::sort(solution.begin(), solution.end());
  }
  else {
    std::sort(solution.rbegin(), solution.rend());
  }

  return solution;
}
