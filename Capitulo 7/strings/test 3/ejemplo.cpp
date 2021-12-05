#include <iostream>
#include <string>

int main(){
    std::string str{"Vi un auto azul ayer"};

    //replace toma como primer parametro la posicion desde la que se quiere empezar a remplazar los caracteres
    //como segundo parametro tiene el numero de caracteres a reemplazar y por ultimo parametro toma la cadena
    //con la que se va a reemplazar.
    str.replace(11, 4, "rojo");
    //toma la cadena azul y la reemplaza por rojo
    
    std::cout << str << "\n";

    return 0;
}