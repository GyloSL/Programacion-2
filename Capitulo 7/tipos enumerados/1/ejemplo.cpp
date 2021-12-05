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

int main(){
    Color paint = color_white;
    Color house(color_blue);
    Color apple{color_red};

    std::cout << paint << "\n";

    int perro{color_black};

    std::cout << perro << "\n";

    int inputColor{};
    std::cin >> inputColor;

    auto color{static_cast<Color>(inputColor)};
}