#include <random>
#include <ctime>
#include <iostream>

namespace MyRandom{
    std::mt19937 mersenne{static_cast<std::mt19937::result_type>(std::time(nullptr))};
}

int getRandomNumber(int min, int max){
    std::uniform_int_distribution die{min, max};
    return die(MyRandom::mersenne);
}

int getNumber(){
    while(true){
        std::cout << "adivina: ";
        int numero{};
        std::cin >> numero;
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "El numero no es valido. Intente de nuevo \n";
        } else {
            std::cin.ignore(32767, '\n');
            return numero;
        }
    }
}

void juego(){
    int respuesta{getRandomNumber(1,100)};
    int intentos{7};
    int numero{0};
    std::cout << "Vamos a jugar a un juego. Estoy pensando en un numero. Tienes 7 intentos para adivinar cual es. \n";
    while (intentos > 0 && respuesta != numero){
        numero = getNumber();
        if (numero == respuesta){
            std::cout << "Correcto!, tu ganas!. \n";
        } else if(numero > respuesta){
            std::cout << "Tu conjetura es demasiado alta \n";
            intentos -= 1;
        } else if(numero < respuesta){
            std::cout << "Tu conjetura es demasiado baja \n";
            intentos -= 1;
        }
    }
}

int main(){
    char seguir{};
    do{
        std::cout << "Te gustaria volver a jugar? (s/n) ";
        std::cin >> seguir;
        if (seguir == 's'){
            juego();
        } else {
            std::cout << "Hasta la proximaaaaa.";
        }    
    } while (seguir == 's');
    
    return 0;
}

