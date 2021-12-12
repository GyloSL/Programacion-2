#include <cstdlib>
#include <iostream>

void cleanup(){
    //xd
}

int main(){
    std::cout << 1 << "\n";
    cleanup();

    std::exit(0);

    //no se ejecuta
    std::cout << 2 << "\n";
    return 0;
}