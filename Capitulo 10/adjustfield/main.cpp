#include <iostream>    

int main () {
  int x = -234;
  std::cout.width(6); 
  std::cout << std::internal << x << '\n';
  std::cout.width(6); 
  std::cout << std::left << x << '\n';
  std::cout.width(6); 
  std::cout << std::right << x << '\n';
  return 0;
}