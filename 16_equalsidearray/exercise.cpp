#include "exercise.hpp"

int findSumIndex(const std::vector<int>& numbers) {
  // for (i = 0; i < len(numbers) ; i++ )
  // sumLeft;
  // sumRight;
  // for(j = 0; j < i; j++)
  //   sumLeft += numbers[j]
  //
  // for(j = i + 1; j < len(numbers); j++)
  //    sumRight += numbers[j]
  //
  // if(sumLeft == sumRight) return i;
  //
  // return -1

  for (int i = 0; i < numbers.size(); i++) {
    int sumLeft = 0;
    int sumRight = 0;
    for (int j = 0; j < i; j++) {
      sumLeft += numbers[j];
    }
    for (int j = i + 1; j < numbers.size(); j++) {
      sumRight += numbers[j];
    }
    if(sumLeft == sumRight) return i;
  }
  return -1;
}
