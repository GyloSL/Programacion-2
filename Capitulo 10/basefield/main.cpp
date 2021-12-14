#include <iostream>     
#include <iomanip>      

int main () {
  std::cout << std::setbase(16);
  std::cout << 110 << std::endl;
  std::cout << std::setbase(8);
  std::cout << 110 << std::endl;
  std::cout << std::setbase(10);
  std::cout << 110 << std::endl;
  return 0;
}