#include <iostream>

    int gran{};
    int peq{};

void val(int grande, int chico){
    if (chico > grande){
        peq = grande;
        gran = chico;
    }
}  // aqui muere grande y chico

int main(){
    std::cout << "Ingrese un numero: ";
    std:: cin >> gran;
    std::cout << "Ingrese otro numero: ";
    std:: cin >> peq;
    val(gran, peq);
    std::cout << "Valor menor: " << peq << "\n";
    std::cout << "Valor mayor: " << gran;
} // aqui muere gran, peq