#include <iostream>

int main(){
    char strBuf[11];
    std::cin.get(strBuf, 11);
    std::cout << strBuf << "\n";

    std::cin.getline(strBuf, 11);
    std::cout << strBuf << "\n";
    return 0;
}
