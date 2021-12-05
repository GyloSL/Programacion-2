//Declare una estructura publicitaria que realiza un seguimiento de la cantidad de anuncios que 
//ha mostrado a los lectores, el porcentaje de anuncios en los que los usuarios hicieron clic y 
//cuánto ganó en promedio por cada anuncio en el que se hizo clic. Lea los valores del usuario 
//para cada uno de estos campos. Pase la estructura publicitaria a una función que imprima cada 
//uno de los valores y luego calcule cuánto ganó ese día (multiplique los 3 campos juntos).
#include <iostream>

struct publicidad{
    int anunciosMostrados;
    float porcentajeClick;
    float gananciaXanuncio;
} datos;

void calcular(){
    float gananciaXdia{datos.anunciosMostrados * datos.gananciaXanuncio * datos.porcentajeClick};
    std::cout << "Se tuvo una ganancia de $" << gananciaXdia;
}

int main(){
    std::cout << "Cantidad de anuncios que se ha mostrado a los lectores: ";
    std::cin >> datos.anunciosMostrados; 
    porcentaje:
    std::cout << "Porcentaje de anuncios en los que los usuarios hicieron clic (0 a 1): ";
    std::cin >> datos.porcentajeClick;
    if (datos.porcentajeClick < 0 or datos.porcentajeClick > 1){
        std::cout << "Inserte un numero entre 0 y 1 \n";
        goto porcentaje;
    }
    ganancia:
    std::cout << "Ganancia promedio por cada anuncio en el que se hizo clic: $";
    std::cin >> datos.gananciaXanuncio;
    if (datos.gananciaXanuncio < 0){
        std::cout << "Inserte un numero entre 0 y 1 \n";
        goto ganancia;
    }
    calcular();
    return 0;
}