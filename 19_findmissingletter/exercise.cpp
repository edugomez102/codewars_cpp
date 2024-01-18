#include "exercise.hpp"

char findMissing(const std::vector<char>& arr) {
// result = ''
// for(i = 0; i < len(arr); i++)
//     if not (arr[i] - 1 == arr[i - 1])
//       result = arr[i] + 1

  char result = '0';
  for (int i = 1; i < arr.size(); i++) {
    if(!( arr[i] - 1 == arr[i - 1])) {
      result = arr[i] - 1;
    }
  }

  return result;
}
