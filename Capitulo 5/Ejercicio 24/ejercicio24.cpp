#include <iostream>

int main(){
    int x {5};
    int y = x++;

    std::cout << x << " aaaaaaaaaaa " << y << "\n";

    double d1{100.0 - 99.99};
    double d2{10.0 - 9.99};

    if(d1==d2)
        std::cout << "d1 == d2" << "\n";
    else if (d1 > d2)
        std::cout << "d1 > d2" << "\n";
    else if (d1 < d2)
        std::cout << "d1 < d2" << "\n";

    std::cout << d1 << "\n";
    std::cout << d2;

    return 0;
}