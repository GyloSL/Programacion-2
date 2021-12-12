#include <iostream>

int main(){
    std::cout << "\nLetras \n";
    int letra{65};
    while (letra <= 90){
        std::cout << char(letra) << ", ";
        ++letra; 
    }
    
    std::cout << "\n \nNumeros A \n";

    int x{5};
    while (x >= 1){
        int y{x};
        while(y != 0){
            std::cout << y-- << ' '; 
        }
        std::cout << "\n";
        --x;   
    }

    std::cout << "\nNumeros B \n";
    x = 1;
    while (x <= 5){
        int y{5};
        while(y >= 1){
            std::cout << " ";
            if (y <= x){
                std::cout << y-- ;
            } else {
                std::cout << " ";
                y--;
            }
        }
        std::cout << "\n";
        ++x;
    }


    std::cout << "\nNumeros C \n";
    x = 1;
    while (x <= 5){
        int y{5};
        while(y >= 1){
            if (y <= x){
                std::cout << y-- << " ";
            } else {
                std::cout << " ";
                y--;
            }
        }
        std::cout << "\n";
        ++x;
    }

    std::cout << "\n";
    return 0;
}