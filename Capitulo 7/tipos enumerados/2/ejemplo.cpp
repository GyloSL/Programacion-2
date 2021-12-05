#include <iostream>

enum Color {
    color_black,
    color_red,
    color_blue,
    color_green,
    color_white,
    color_cyan,
    color_yellow,
    color_magenta,
};

void printColor(Color color){
    if (color == color_black)
        std::cout << "Black";
    else if (color == color_red)
        std::cout << "Red";
    else if (color == color_blue)
        std::cout << "Blue";
    else if (color == color_green)
        std::cout << "Green";
    else if (color == color_white)
        std::cout << "White";
    else if (color == color_cyan)
        std::cout << "Cyan";
    else if (color == color_yellow)
        std::cout << "Yellow";
    else if (color == color_magenta)
        std::cout << "Magenta";
}

int main(){
    std::cout << "Elija un color: ";
    int inputColor{};
    std::cin >> inputColor;
    auto colores{static_cast<Color>(inputColor)};
    printColor(colores);
}