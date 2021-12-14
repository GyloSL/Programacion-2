#include "constants.h"
#include <iostream>

double getInitialHeight(){
    std::cout << "Ingrese la altura de la torre en metros: ";
    double initialHeight{};
    std::cin >> initialHeight;
    return initialHeight;
}

double calculateHeight(double initialHeight, int secondsPassed){
    double distanceFallen{myConstants::gravity * secondsPassed * secondsPassed / 2.0};
    double currentHeight{initialHeight - distanceFallen};
    return currentHeight;
}

void printHeight(double height, int secondsPassed){
    if (height > 0.0){
        std::cout << "En " << secondsPassed << " segundos, la pelota esta a la altura de: \t" << height << " metros \n";
    } else {
        std::cout << "En " << secondsPassed << " segundos, la pelota esta en el suelo";
    }
}

void calculateAndPrintHeight(double initialheight, int secondsPassed){
    double height{calculateHeight(initialheight, secondsPassed)};
    printHeight(height, secondsPassed);
}

int main(){
    const double initialHeight{getInitialHeight()};
    calculateAndPrintHeight(initialHeight, 0);
    calculateAndPrintHeight(initialHeight, 1);
    calculateAndPrintHeight(initialHeight, 2);
    calculateAndPrintHeight(initialHeight, 3);
    calculateAndPrintHeight(initialHeight, 4);
    calculateAndPrintHeight(initialHeight, 5);

    return 0;
}