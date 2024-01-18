#include <string>
#include <iostream>

int main()
{
  std::string sn{"1234"};
  int number = std::atoi(sn.c_str());
  std::cout << number << "\n";
  std::cout << number / 100 << "\n";

  return 0;
}
