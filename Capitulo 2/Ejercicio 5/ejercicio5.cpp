#include <iostream>

// add tiene que estar antes de que se le llame
int add(int x, int y) 
{
    return x + y;
}

int main(){
    std::cout << "La suma de 3 + 4 es: " << add(3, 4) << "\n";
    return 0;
}

/* Si se encuentra aquí la funcion add el programa no compila 
int add(int x, int y) 
{
    return x + y;
} */ 