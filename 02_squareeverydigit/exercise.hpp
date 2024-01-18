#include <iostream>
#include <string>

inline int sqrt(int n) { return n * n ; }

inline int square_digits(int num) {
  std::string result {};

  // get digit number of num, 
  auto num_str = std::to_string(num);

  // iterate those digits
  for (std::size_t i = 0; i < num_str.size(); i++) {

    // calculate sqrt of those values 
    int value = num_str[i] - '0';
    result += std::to_string(sqrt(value));
  }

  return std::stoi(result);;
}
