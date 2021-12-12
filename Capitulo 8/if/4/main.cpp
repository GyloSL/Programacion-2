#include <iostream>

enum class ErrorCode{
    Success,
    negative_number
};

ErrorCode doSomething(int value){
    if (value < 0){
        return ErrorCode::negative_number;
    }
    return ErrorCode::Success;
}

int main(){
    std::cout << "Ingrese un numero positivo: ";
    int x{};
    std::cin >> x;

    if (doSomething(x) == ErrorCode::negative_number){
        std::cout << "Ingresaste un numero negativo \n";
    } else {
        std::cout << "Funciono!!!!!!!!!!! \n";
    }
    return 0;
}