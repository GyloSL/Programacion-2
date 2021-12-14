#include <iostream>

int main(){
    int array[5]{7, 4, 5};

    std::cout << array[0]<< "\n";
    std::cout << array[1]<< "\n";
    std::cout << array[2]<< "\n";
    std::cout << array[3]<< "\n";
    std::cout << array[4]<< "\n \n";

    int array2[3]{};
    std::cout << array2[0]<< "\n";
    std::cout << array2[1]<< "\n";
    std::cout << array2[2]<< "\n \n";

    int array3[]{3, 5, 7};
    std::cout << array3[0]<< "\n";
    std::cout << array3[1]<< "\n";
    std::cout << array3[2]<< "\n \n";

    return 0;
}