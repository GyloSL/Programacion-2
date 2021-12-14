#include <iostream>     

int main () {
  int x = 1;
  int y = 0;
  int z = -1;
  std::cout << std::showpos   << x << '\t' << y << '\t' << z << '\n';
  std::cout << std::noshowpos << x << '\t' << y << '\t' << z << '\n';
  return 0;
}