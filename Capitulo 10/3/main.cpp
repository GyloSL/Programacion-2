#include <iostream>

int main(){
    char strBuf[100];
    std::cin.getline(strBuf, 100);
    std::cout << strBuf << "\n";
    std::cout << std::cin.gcount() << " caracteres fueron leidos" << std::endl;

    return 0;
}