#include "exercise.hpp"

#include <algorithm>

std::vector<int> sortOdds(const std::vector<int>& arr) {
// arr[]
// odds[]
// result[]
//
// for num in arr
//   if(num % 2 == 0) // is even
//     do nothing
//   else  // is odd
//     odds.push(num)
//
// odds.sort() // reverse, so we can use vector.pop_back
//
// for num in arr
//   if(num % 2 == 0)
//     result.push(num)
//   else
//     result.push( odds.pop_front())
//
// return result

  std::vector<int> result;
  std::vector<int> odds;

  for (int num : arr) {
    if(num % 2 == 0) { }
    else {
      odds.push_back(num);
    }
  }
  std::sort(odds.rbegin(), odds.rend());
  for (int num : arr) {
    if(num % 2 == 0) {
      result.push_back(num);
    }
    else {
      result.push_back(odds.back());
      odds.pop_back();
    }
  }

  return result;
}

