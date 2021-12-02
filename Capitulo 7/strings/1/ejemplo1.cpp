#include <iostream>
#include <string>

int main(){
    std::cout << "ingrese su nombre completo: ";
    std::string name{};
    std::getline(std::cin, name);

    std::cout << "ingrese su edad: ";
    std::string age{};
    std::getline(std::cin, age);

    std::cout << "Su nombre es " << name << " y su edad es " << age << "\n";

    return 0;
}