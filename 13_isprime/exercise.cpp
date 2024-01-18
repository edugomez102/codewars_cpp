#include "exercise.hpp"
#include <string>

int digitSum(int num) {

  int result = 0;
  std::string num_str = std::to_string(num);
  for (const char cnum : num_str) {
    result += cnum - '0';
  }
  return result;
}

bool isPrime(int num) {
  if(num <= 1) return false;

  if(num != 2 && num % 2 == 0)
    return false;

  if(num != 3 && digitSum(num) % 3 == 0) 
    return false;

  if(num != 5 && num % 5 == 0)
    return false;

  for (int i = 5; (i * i) <= num; i+=2) {
    if(num % i == 0)
      return false;
  }
  return true;
}
