#include <iostream>

int getInteger(){
    std :: cout << "Introduzca un numero: ";
    int x {};
    std :: cin >> x;
    return 0;
}

int main(){
    int x{getInteger()};
    int y{getInteger()};
    std::cout << x << " + " << y << " is " << x + y << "\n";
    return 0;
}