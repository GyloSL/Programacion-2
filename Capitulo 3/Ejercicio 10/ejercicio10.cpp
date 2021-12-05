#include <iostream>

int main(){
    std::cout << "Bool:\t\t" <<sizeof(bool) << " bytes\n";
    std::cout << "char:\t\t" <<sizeof(char) << " bytes\n";
    std::cout << "wchar_t:\t\t" <<sizeof(wchar_t) << " bytes\n";
    std::cout << "char16_t:\t\t" <<sizeof(char16_t) << " bytes\n";
    std::cout << "char32_t:\t\t" <<sizeof(char32_t) << " bytes\n";
    std::cout << "short:\t\t" <<sizeof(short) << " bytes\n";
    std::cout << "int:\t\t" <<sizeof(int) << " bytes\n";
    std::cout << "long:\t\t" <<sizeof(long) << " bytes\n";
    std::cout << "long long:\t\t" <<sizeof(long long) << " bytes\n";
    std::cout << "float:\t\t" <<sizeof(float) << " bytes\n";
    std::cout << "double:\t\t" <<sizeof(double) << " bytes\n";
    std::cout << "long double:\t\t" <<sizeof(long double) << " bytes\n";
    //std::cout << 20/4;
    //std::cout << 8 / 5;
    return 0;
}