#include "io.h"
#include <iostream>

int readNumber(){
    std::cout << "Introduzca un numero: ";
    int x {};
    std::cin >> x;
    return x;
}

void writeAnswer(int x){
    std::cout << "La suma es: " << x << "\n";
}

