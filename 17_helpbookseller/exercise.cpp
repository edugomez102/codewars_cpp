#include "exercise.hpp"

#include <catch2/matchers/catch_matchers_floating_point.hpp>
#include <format>
#include <unordered_map>

#include "../utils.hpp"

// fun format(label, num, last)
//   separator = " - ";
//   formated = "($label - $num)"
//   if not last
//     return formated + separator
//   else
//     return formated

std::string bookFormat(char label, int num, bool isLast) {
  std::string separator = " - ";
  std::string formated = "(" ;
  formated += label ;
  formated += " : ";
  formated += std::to_string(num) ;
  formated += ")";

  if(!isLast) return 
    formated + separator;
  else 
    return formated;
}

std::string bookCounts(const std::vector<std::string>& lstOfArt, const std::vector<std::string> &categories) {

  if (lstOfArt.empty() or categories.empty()) return "";

  std::unordered_map<char, int> quantityPerLabel;

  for (const std::string& str : lstOfArt) {
    std::vector<std::string> splits = edgs::split(str, ' ');

    char label = str.data()[0];
    std::string quantity_str = splits[1];
    int quantity = std::stoi(quantity_str);

    quantityPerLabel[label] += quantity;
  }

  std::string result = "";
  for (int i = 0; i < categories.size(); i++) {
    const char key = categories[i].data()[0];

    result += bookFormat(categories[i].data()[0], quantityPerLabel[key],
        (i == categories.size() - 1));
  }

  return result;
}
