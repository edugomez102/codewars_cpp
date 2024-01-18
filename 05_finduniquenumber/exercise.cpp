#include "exercise.hpp"

#include <algorithm>
#include <unordered_map>

float find_uniq(const std::vector<float>& arr)
{

  // ok
  float n = arr[0];
  if (n != arr[1] && n != arr[2]) return n;
  for(auto w: arr) {
    if (w != n) return w; 
  }


  // not pass

  // std::unordered_map<float, int> num_counts ;
  // for (auto num : v) {
  //   if(num_counts.count(num) > 0)
  //     num_counts[num]++;
  //   else
  //     num_counts[num] = 1;
  // }
  // for (auto num : num_counts) {
  //   if(num.second == 1)
  //     return num.first;
  // }
  //
  // float solution = v[0];
  // for (const auto& num : v) {
  //   solution = solution ^ num;
  // }

  // auto vv = v;
  // std::sort(vv.begin(), vv.end());
  //
  // if(vv[0] == vv[1]) {
  //   return vv[vv.size() - 1];
  // }
  // else {
  //   return vv[0];
  // }

  // float tmp1 = v[0];
  // for (int i = 1; i < v.size(); i++) {
  //   tmp1 = v[i - 1];
  //   if(tmp1 != v[i])
  //   {
  //     return v[i];
  //   }
  // }
}
