#include <iostream>
#include <cmath>

bool isEven(int x){
    if(x%2 == 0){
        return true;
    } else {
        return false;
    }
}

int main(){
    std::cout << "Ingrese un numero entero: ";
    int x{};
    std::cin >> x;
    if (isEven(x)){
        std::cout << "El numero es par";
    } else {
        std::cout << "El numero " << x << " es impar";
    }

    return 0;
}