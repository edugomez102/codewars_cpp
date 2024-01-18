#include "exercise.hpp"

#include <vector>

int sumOfMultiples(int limit) {
// check if input < 0, return 0
//
// multiples[]
//
// for(i = 0; i < limit; i++)
//   if value is multiple of 3 and not in multiples[]
//     multiples.push(i)
//  if value is multiple of 5 and not in multiples[]
//     multiples.push(i)
//
// int result = 0
// for(number in multiples) result += number
// return result


  int result = 0;
  for (int i = 0; i < limit; i++)
    if(i % 3 == 0 || i % 5 == 0) result += i;
  return result;
}
