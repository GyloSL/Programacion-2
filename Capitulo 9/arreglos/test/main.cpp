#include <iostream>
#include <cstring>

namespace enumeraciones{
    enum animales{
        pollo,
        perro,
        gato,
        elefante,
        pato,
        serpiente,
        max_animales
    };
}

int main(){
    float temperatura[365]{0.0};

    int patas[enumeraciones::max_animales]{2, 4, 4, 4, 2, 0};

    std::cout << "El elefante tiene " << patas[enumeraciones::elefante] << " patas \n";

    return 0; 
}