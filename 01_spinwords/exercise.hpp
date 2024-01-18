#include <algorithm>
#include <string>
#include <vector>
#include <utils.hpp>

/**
 * @brief take string of one or more words, return same with word reversed if size > 5
 *
 * @param[[TODO:direction]] str [TODO:description]
 */
inline std::string spinWords(const std::string&  str)
{
  std::vector<std::string> words = edgs::split(str, ' ');
  for (std::string& w : words) {
    if( w.length() >= 5) {
      std::reverse(w.begin(), w.end());
    }
  }
  return edgs::join(words, ' ');
}

