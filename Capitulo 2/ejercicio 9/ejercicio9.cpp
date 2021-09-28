#include <iostream>

int readNumber(int x){
    std::cout << "Introduzca un numero: ";
    std::cin >> x;
    return x;
}

void writeAnswer(int x){
    std::cout << "La suma es: " << x << "\n";
}

int main(){
    int x{0};
    x = readNumber(x);
    x = x + readNumber(x);
    writeAnswer(x);
    
    return 0;
}