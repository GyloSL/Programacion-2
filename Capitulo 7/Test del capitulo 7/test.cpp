//Declara una estructura que represente a tu monstruo. El monstruo debe tener un tipo que puede 
//ser uno de los siguientes: un ogro, un dragón, un orco, una araña gigante o un slime. Use una
//clase enum para esto. 
#include <string>
#include <iostream>

enum monstruos{
    ogro,
    dragon,
    orco,
    giant_spider,
    slime,
};

//Cada monstruo individual también debe tener un nombre (use un std::string), así como una cantidad
//de salud que represente cuánto daño pueden recibir antes de morir. 
struct monstruo{
    monstruos tipo;
    std::string nombre;
    int salud;
};

std::string tipo_monstruo(monstruos tipo){
    switch (tipo)
    {
    case 0:
        return "ogro";
    case 1:
        return "dragon"; 
    case 2:
        return "orco";
    case 3: 
        return "araña gigante";
    case 4:
        return "slime";
    }
    return "a";
}

//Escriba una función llamada printMonster() que imprima todos los miembros de la estructura. 
void printMonster(monstruo Monster){
    std::cout << "Este " << tipo_monstruo(Monster.tipo) << " se llama " << Monster.nombre 
    << " y tiene " << Monster.salud << " puntos de salud \n";
}



//Cree una instancia de un ogro y un slime, inicialícelos usando una lista de inicializadores
//y páselos a printMonster ().
int main(){
    monstruo Ogro{ogro, "Torg", 145};
    monstruo Slime{slime, "Blurp", 23};
    printMonster(Ogro);
    printMonster(Slime);
    return 0;
}

