#include <iostream>
#include <cstring>
enum class Animal{
    cerdo,
    pollo,
    cabra,
    gato,
    perro,
    avestruz
};

std::string getAnimalName(Animal animal){
    switch (animal)
    {
    case Animal::cerdo:
        return "Cerdo";
    case Animal::pollo:
        return "Pollo";
    case Animal::cabra:
        return "Cabra";
    case Animal::gato:
        return "Gato";
    case Animal::perro:
        return "Perro";
    case Animal::avestruz:
        return "Avestruz";
    default:
        return "-1";
    }
}

int printNumberOfLegs(Animal animal){
    switch (animal)
    {
    case Animal::cerdo:
        return 4;
    case Animal::pollo:
        return 2;
    case Animal::cabra:
        return 4;
    case Animal::gato:
        return 4;
    case Animal::perro:
        return 4;
    case Animal::avestruz:
        return 2;
    default:
        return 0;
    }
}

int main(){
    //Ingresar del 0 al 5
    std::cout << "Ingrese un animal: ";
    int inputAnimal{};
    std::cin >> inputAnimal;
    auto animal{static_cast<Animal>(inputAnimal)};
    std::string resul{getAnimalName(animal)};

    if (resul == "-1"){
        std::cout << "No se reconoce el animal";
    } else{
        std::cout << "Un " << resul << " tiene " << printNumberOfLegs(animal) << " patas \n";
    }
    
    return 0;
}