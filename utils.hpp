#include <string>
#include <vector>
#include <sstream>

namespace edgs {

  /**
   * @brief split string into smaller strings
   *
   * @param str input string to split
   * @param sep separator character value
   * @return vector of strings
   */
  inline std::vector<std::string> split(const std::string& str, const char sep) {
    std::stringstream sstr{str};
    std::string segment {};

    std::vector<std::string> result;
    while(std::getline(sstr, segment, sep)) 
      result.push_back(segment);
    return result;
  }

  /**
   * @brief join a vector of strings to a single string
   *
   * @param v input vector
   * @param del char value to insert between vector values, default to none
   */
  inline std::string join(const std::vector<std::string>& v, const char del = '\0') {
    std::string s{};
    for (const auto& part : v) { 
      s += part;
      if (&part != &*(v.end() - 1)) s += del;
    }
    return s;
  }

  /**
   * @brief converts an int to a char
   *
   */
  inline int char_to_int(const char c) { return c - '0'; }

  /**
   * @brief sum of number digits
   *
   * @para num number
   */
  inline int digitSum(int num) {
    int result = 0;
    std::string num_str = std::to_string(num);
    for (const char cnum : num_str) {
      result += cnum - '0';
    }
    return result;
  }

};
