#include <iostream>
#include <cstring>
#include <vector>
using std::string;

struct cosas{
    string noTarjeta;
    string nip;
    double saldo;
}datos[4];

//Falta llenar la cosa esa del saldo
int llenar(){
    datos[1].noTarjeta = "4000123456789010";
    datos[1].nip = "1212";
    datos[2].noTarjeta = "5412751234123456";
    datos[2].nip ="1209";
    datos[3].noTarjeta = "5415910011090949";
    datos[3].nip = "0413";

    return 0;
}

//Validar numero de tarjeta, regresa un numero > 3 si es igual, regresa 0 si es distinta
int validarTarjeta(string tarjeta){
    for(int i = 1; i <= 3; i++){
        if (tarjeta.compare(datos[i].noTarjeta) == 0){
            return i; 
        }
    }
    return 0;
}

//Validar nip de la tarjeta, regresa true si es igual, regresa false si es distinto
bool validarNip(string nip, int i){
    if (nip.compare(datos[i].nip) == 0){
        return true;
    } else {
        //std::cout << "El pin ingresado no es válido";
        return false;
    }  
}

int main(){
    llenar();
    string noTarjeta {""};
    string nip {""};
    int x{0};
    do{
        std::cout << "Inserte el número de tarjeta: ";
        std::cin >>  noTarjeta;
        x = validarTarjeta(noTarjeta);
    } while(x == 0);
    do{
        std::cout << "Inserte el pin: ";
        std::cin >> nip;
    } while(validarNip(nip, x) == false);
}

//• numero de tarjeta   tinguiriringui
//• nip                 tinguiriringui
//• retirar         
//• depositar
//• hacer transferencia
//• cambiar nip
//• estado de cuenta
//• consultar saldo