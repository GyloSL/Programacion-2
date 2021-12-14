#include <iostream>
#include <iterator>

int getNumber(){
    while(true){
        std::cout << "Ingrese un entero entre 1 y 9: ";
        int numero{};
        std::cin >> numero;
        if (std::cin.fail() || (numero > 9 || numero < 1)){
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "El numero no es valido. Intente de nuevo \n";
        } else {
            std::cin.ignore(32767, '\n');
            return numero;
        }
    }
}

int main(){
    //pregunta 1
    std::cout << "pregunta 1 \n";
    constexpr int matriz[]{4,6,7,3,8,2,1,9,5};
    int size{static_cast<int>(std::size(matriz))};
    for (int i{0}; i < size; ++i){
        std::cout << matriz[i] << ", ";
    }

    std::cout << "\n\npregunta 2 \n";
    int numero{getNumber()};
    int indice{};

    for (int i{0}; i < size; ++i){
        std::cout << matriz[i] << ", ";
        if (numero == matriz[i]){
            indice = i;
        }
    }
    std::cout << "\nEl numero " << numero << " se encuentra en el indice " << indice << "\n\n";

    std::cout << "Pregunta 3 \n";
    constexpr int scores[]{84,92,76,81,56};
    constexpr int numStudents{static_cast<int>(std::size(scores))};

    int maxIndex{0};
    for (int student{0}; student < numStudents; ++student){
        if (scores[student] > scores[maxIndex]){
            maxIndex = student;
        }
    }

    std::cout << "La mejor calificacion fue " << scores[maxIndex] << "\n";
    
    return 0;
}