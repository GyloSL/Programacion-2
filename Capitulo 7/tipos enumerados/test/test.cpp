#include <iostream>

//Define un tipo enumerado para elegir entre las siguientes razas de monstruos: 
//orcos, goblins, trolls, ogros y esqueletos.
enum Raza {
    Orcos = - 1,
    Goblins,
    Trolls,
    Ogros,
    Esqueletos,
};

//Defina una variable del tipo enumerado que definió en la pregunta 1 e 
//inicialícela con el enumerador de trolls. 
Raza monstruo{Trolls};


int main(){
    //Verdadero o falso. Los enumeradores pueden ser: 
    //a) dado un valor entero 
    std::cout << monstruo << "\n";
    
    //b) sin valor asignado
    Raza xd{};
    std::cout << xd << "\n";

    //c) dado un valor de coma flotante 
    monstruo = static_cast<Raza>(1.2333);
    std::cout << monstruo << "\n";

    //d) negativo
    monstruo = static_cast<Raza>(-1);
    std::cout << monstruo << "\n";
    
    //f) inicializado con el valor de enumeradores anteriores (por ejemplo, color_magenta = color_red)
    monstruo = Ogros;
    std::cout << monstruo;
}
