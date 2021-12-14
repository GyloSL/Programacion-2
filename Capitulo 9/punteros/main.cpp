#include <iostream>

int main(){
    int x{5};
    std::cout << "x: " <<x << "\n";
    std::cout << "Address-of: " << &x << "\n";
    std::cout << "Indireccion: " << *(&x) << "\n\n";

    int y{3};
    int *ptr{&y};
    std::cout << "Address-of y: " << &y << "\n";
    std::cout << "Address-of: " << ptr << "\n\n";

    int z{4};
    std::cout << typeid(&z).name() << "\n\n";

    int value{5};
    std::cout << "&Value: " << &value << "\n";
    std::cout << "Value:" << value << "\n";

    int *ptr2{&value};
    std::cout << "ptr2: "<< ptr2 << "\n";
    std::cout << "*ptr2: " << *ptr2;
}