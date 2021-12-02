#include <iostream>
#include <string>

int main(){
    

    std::cout << "Seleccione uno o dos: ";
    int choice{};
    std::cin >> choice;
    std::cin.ignore(32767, '\n');
    std::cout << "ahora ingrese su nombre completo: ";
    std::string name{};
    std::getline(std::cin, name);

    std::cout << "hola " << name << " seleccionaste " << choice << "\n";

    return 0;
}