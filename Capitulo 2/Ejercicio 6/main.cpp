#include <iostream>
#include "input.hpp"

int main(){
    using namespace calculos;
    int x{getInteger()};
    int y{getInteger()};
    std::cout << x << " + " << y << " is " << x + y << "\n";
    return 0;
}