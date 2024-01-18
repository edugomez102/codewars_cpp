#include "exercise.hpp"

std::string cleanStringDuplicates(const std::string& s) {

  // iterate chars
  // if previos same to current, skip
  // else insesrt
  std::string result;

  char tmp ;
  for (int i = 0; i < s.size(); i++) {
    tmp = s[i - 1];
    if(s[i] != tmp)
      result += s[i];
  }
  return result;
}

std::vector<std::string> dup(std::vector<std::string> strings) {

  std::vector<std::string> result;
  for (const auto& s : strings) {
    result.push_back(cleanStringDuplicates(s));
  }
  return result;
}
