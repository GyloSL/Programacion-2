#include <algorithm>
#include <iostream>
#include <iterator>

int main(){
    int array[]{30,50,20,10,40};
    int lenght{static_cast<int>(std::size(array))};

    std::cout << "Pregunta 1 \n";
    for (int i{0}; i < lenght; ++i){
        int j{i};
        for (int currentIndex{i+1}; currentIndex < lenght; ++currentIndex){
            if (array[currentIndex] < array[j]){
                j = currentIndex;
            }
        }
        std::swap(array[i], array[j]);
        std::cout << "Intercambio " << i+1 << ": "; 
        for (int k{0}; k < lenght; ++k){
            std::cout << array[k] << " ";  
        }
        std::cout << '\n';
    }

    std::cout << "\nPregunta 2 \n";
    int array2[]{30,50,20,10,40};
    lenght = static_cast<int>(std::size(array2));

    for (int i{0}; i < lenght; ++i){
        int j{i};
        for (int currentIndex{i+1}; currentIndex < lenght; ++currentIndex){
            if (array2[currentIndex] > array2[j]){
                j = currentIndex;
            }
        }
        std::swap(array2[i], array2[j]);
    }

    for (int i{0}; i < lenght; ++i){
            std::cout << array2[i] << " ";  
    }
    
    std::cout << "\n\nPregunta 3\n";
    int matriz[]{6,3,2,9,7,1,5,4,8};
    lenght = static_cast<int>(std::size(matriz));
    for (int i{0}; i < lenght; ++i){
        std::cout << "Iteracion: " << i+1 << "\n";
        for (int j{i+1}; j < lenght; ++j){
            if(matriz[i] > matriz[j]){
                std::swap(matriz[i], matriz[j]);
            }
        }
    }

    for (int i{0}; i < lenght; ++i){
        std::cout << matriz[i] << " ";  
    }
    return 0;
}