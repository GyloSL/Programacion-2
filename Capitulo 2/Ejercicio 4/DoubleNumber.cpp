#include <iostream>

int doubleNumber(int numero)
{
    return numero * 2;
}

int main()
{
    std::cout << "Ingrese un entero: ";
    int x {};
    std :: cin >> x; 
    std::cout << "El doble de " << x << " es: " << doubleNumber(x) << "\n";
} 