#include <iostream>

void calcular(int x, int y, char operacion){
    switch (operacion)
    {
    case '+':
        std::cout << x << " + " << y << " = " << x+y;
        break;
    case '-':
        std::cout << x << " - " << y << " = " << x-y;
        break;
    case '*':
        std::cout << x << " * " << y << " = " << x*y;
        break;
    case '/':
        if (y == 0){
            std::cout << x << " / " << y << " = 0";
        } else {
            std::cout << x << " / " << y << " = " << x/y;
        }
    case '%':
        if (y == 0){
            std::cout << x << " % " << y << " = 0";
        } else {
            std::cout << x << " % " << y << " = " << x%y;
        }
    default:
        std::cout << "Error. No se reconoce la operacion";
    }
}

int main(){
    std::cout << "Ingrese que operacion desea realizar (+,-,*,/,%): ";
    char operacion{};
    std::cin >> operacion;

    std::cout << "Ingrese el primer numero: ";
    int x{};
    std::cin >> x;

    std::cout << "Ingrese el segundo numero: ";
    int y{};
    std::cin >> y;
    calcular(x, y, operacion);

    return 0;
}