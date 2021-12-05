#include <iostream>
#include <string>

int main(){
    std::string str{"El arroz se esta cocinando"};

    //erase toma como primer parametro el primer caracter que se quiere borrar y como segundo parametro 
    //toma la cantidad de caracteres a remover
    str.erase(4, 11);
    //Se borra rroz se est
    //str = El aa cocinando
    std::cout << str << "\n";

    return 0;
}