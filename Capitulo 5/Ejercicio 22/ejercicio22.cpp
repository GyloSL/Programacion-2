#include <iostream>
#include <cmath>

int main(){
    int x{-7};
    int y{4};
    int z{};

    std::cout << "operador / division \n";
    std::cout << "int/int " << x / y << "\n";
    std::cout << "double/int " << static_cast<double>(x) / y << "\n";
    std::cout << "int/double " << x / static_cast<double>(y) << "\n";
    std::cout << "double/double " << static_cast<double>(x) / static_cast<double>(y) << "\n \n";

    std::cout << "operador % modulo \n";
    //std::cout << "division " << x/z;
    std::cout << "modulo " << x%-3 << "\n";
    std::cout << "modulo " << x%3 << "\n";
    std::cout << "modulo " << y%-3 << "\n \n";

    std::cout << "Operador exponencial";
    double a{std::pow(3.0, 4.0)};
    std::cout << a;
    
    return 0;
}