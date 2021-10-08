#include <iostream>

int main(){
    int x{};
    do{
       std::cout << "Ingrese un numero menor a 10: ";
        std::cin >> x;
    } while(x > 9);

    if (x == 2 or x == 5 or x == 7 or x == 3)
        std::cout << "Es un numero primo";
    else 
        std::cout << "No es un numero primo";

    return 0;
}