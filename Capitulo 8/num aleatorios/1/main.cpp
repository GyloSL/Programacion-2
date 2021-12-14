#include <iostream>
#include <cstdlib>
#include <ctime>

int getRandomNumber(int min, int max){
    static constexpr double fraction {1.0 / (RAND_MAX + 1.0)};

    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

int main(){
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int count{1}; count <= 100; ++count){
        std::cout << std::rand() << "\t";
        
        if (count % 5 == 0)
            std::cout << "\n";
    }

    std::cout << "\nNumero aleatorio: " << getRandomNumber(5,18);
    return 0;
}