// not pass

#include "exercise.hpp"
#include <iomanip>
#include <algorithm>

int checkRange(int value) {
  if(value < 0) 
    return 0;
  else if(value > 255)
    return 255;
  return value;
}

std::string getStringHex(int value) {
  // c++20
  // if(value != 0)
  //   return std::format("{:X}", value);
  // else
  //   return std::format("0{:X}", value);

  std::stringstream s;
  s << std::hex << value;
  std::string result{ s.str() };
  std::transform(result.begin(), result.end(), result.begin(), ::toupper);
  if(value == 0) result += "0";
  return result;
}

std::string rgbToHex(int r, int g, int b) {
  // check range
  // for every input
  //   if invalid -> round
  //   convert to hex
  // concat 3 value in one string

  int valid_r = checkRange(r);
  int valid_g = checkRange(g);
  int valid_b = checkRange(b);

  return getStringHex(valid_r) +
         getStringHex(valid_g) +
         getStringHex(valid_b) ;
}
