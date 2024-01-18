#include "exercise.hpp"
#include <unordered_map>

bool isValidWalk(const std::vector<char>& directions)
{
  // check if n, s, e, w but can ommit 

  // check if 10 blocks
  if(directions.size() != 10 ) return false;

  // check if return to start point
    // for every N a S id needed
    // for every E a W id needed

    // populate hashmap with dir, count
  std::unordered_map<char, int> dir_counts;
  for (const auto& d : directions) {
    if(dir_counts.count(d) > 0) {
      dir_counts[d]++;
    }
    else {
     dir_counts[d] = 1;
    }
  }

  if(dir_counts['n'] != dir_counts['s'] ||
     dir_counts['e'] != dir_counts['w'] )
  {
    return false;
  }

  return true;
}
