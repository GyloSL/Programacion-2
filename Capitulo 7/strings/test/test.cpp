#include <iostream>
#include <string>

int main(){
    std::cout << "Ingrese su nombre completo: ";
    std::string name{};
    std::getline(std::cin, name);

    std::cout << "Ingrese su edad: ";
    int age{};
    std::cin >> age;
    std::cin.ignore(32767, '\n');

    std::cout << "Ha vivido " << float(age)/name.length() << " años por cada letra de su nombre";
}