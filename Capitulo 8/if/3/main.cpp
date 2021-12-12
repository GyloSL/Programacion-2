#include <iostream>

int main(){
    std::cout << "Ingrese un numero: ";
    int x{};
    std::cin >> x;

    if (x >= 10){
        if (x <= 20)
            std::cout << x << "Esta entre 10 y 20 \n";
        else
            std::cout << x << "Es mayor que 20 \n";
    }
        
    return 0;
}