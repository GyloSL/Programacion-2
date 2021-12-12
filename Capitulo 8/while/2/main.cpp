#include <iostream>

int main(){
    int outer{1};
    while (outer <= 10){
        //se declara inner dentro del ciclo porque en cada vuelta que de en el ciclo inner se reinicia en 1
        int inner{1};
        while(inner <= outer){
            std::cout << inner++ << ' ';
        }
        std::cout << "\n";
        ++outer;
    }
    
    return 0;
}