#include <iostream>
#include <cstring>
#include <cmath>

std::string decenasCero(int unidades, int caso){
    switch (unidades){
    case 1:
        if(caso == 1000){
            return " un";
        } else{
            return " uno";
        }
    case 2:
        return " dos";
    case 3:
        return " tres";
    case 4:
        return " cuatro";
    case 5:
        return " cinco";
    case 6:
        return " seis";
    case 7:
        return " siete";
    case 8:
        return " ocho";
    case 9:
        return " nueve";
    }
    return "";
}

std::string decenas(int unidades){
    switch (unidades){
    case 1:
        return " once";
    case 2:
        return " doce";
    case 3:
        return " trece";
    case 4:
        return " catorce";
    case 5:
        return " quince";
    case 6:
        return " dieciseis";
    case 7:
        return " diecisiete";
    case 8:
        return " dieciocho";
    case 9:
        return " diecinueve";
    }
    return "";
}

std::string decenasDos(int unidades, int caso){
    switch (unidades){
    case 1:
        if (caso == 1000){
            return " veintiun";
        } else {
            return " veintiuno";
        }
    case 2:
        return " veintidos";
    case 3:
        return " veintitres";
    case 4:
        return " veinticuatro";
    case 5:
        return " veinticinco";
    case 6:
        return " veintiseis";
    case 7:
        return " veintisiete";
    case 8:
        return " veintiocho";
    case 9:
        return " veintinueve";
    }
    return "";
}

std::string numLetras(int numero, int caso){
    int cent{};
    int dec{};
    int uni;
    int aux{numero};
    std::string numero_letra{};
    cent = aux/100;
    if (cent >= 1){
        switch (cent){
        case 1:
            numero_letra = "Ciento";
            break;
        case 2:
            numero_letra = "Doscientos";
            break;
        case 3:
            numero_letra = "Trecientos";
            break;
        case 4:
            numero_letra = "Cuatroscientos";
            break;
        case 5:
            numero_letra = "Quinientos";
            break;
        case 6:
            numero_letra = "Seiscientos";
            break;
        case 7:
            numero_letra = "Setescientos";
            break;
        case 8:
            numero_letra = "Ochoscientos";
            break;
        case 9:
            numero_letra = "Novescientos";
            break;
        }
    }
    aux = aux - (cent * 100);
    dec = aux/10;
    if (dec >= 0){
        switch (dec){
        case 1:
            aux = aux - (dec * 10);
            uni = aux/1;
            if (uni == 0){
                numero_letra += " diez";
            } else {
                //std::cout << uni;
                numero_letra += decenas(uni);
            }
            break;
        case 2:
            aux = aux - (dec * 10);
            uni = aux/1;
            if (uni == 0){
                numero_letra += " veinte";
            } else {
                numero_letra += decenasDos(uni, caso);
            }
            break;
        case 3:
            numero_letra += " treinta";
            break;
        case 4:
            numero_letra += " cuarenta";
            break;
        case 5:
            numero_letra += " cincuenta";
            break;
        case 6:
            numero_letra += " sesenta";
            break;
        case 7:
            numero_letra += " setenta";
            break;
        case 8:
            numero_letra += " ochenta";
            break;
        case 9:
            numero_letra += " noventa";
            break;
        default:
            aux = aux - (dec * 10);
            uni = aux - (dec * 10);
            numero_letra +=  decenasCero(uni, caso);
        }
    }
    aux = aux - (dec * 10);
    uni = aux/1;
    //std::cout << uni;
    if ((uni/1 >= 1) && (dec >= 3)){
        switch (uni){
        case 1:
        if (caso == 1000){
            numero_letra += " y un";
            break;
        } else {
            numero_letra += " y uno";
            break;
        }   
        case 2:
            numero_letra += " y dos";
            break;
        case 3:
            numero_letra += " y tres";
            break;
        case 4:
            numero_letra += " y cuatro";
            break;
        case 5:
            numero_letra += " y cinco";
            break;
        case 6:
            numero_letra += " y seis";
            break;
        case 7:
            numero_letra += " y siete";
            break;
        case 8:
            numero_letra += " y ocho";
            break;
        case 9:
            numero_letra += " y nueve";
            break;
        }
    }
    return numero_letra;
}

int main()
{
    int aux;
    std::string numero_letra;
    num:
    std::cout << "Ingrese un numero: ";
    double numero{};
    std::cin >> numero;
    if(numero < 0){
        std::cout << "El numero no es valido \n";
        goto num;
    }
    aux = numero/1000;
    if (aux >= 1){
        numero_letra = numLetras(aux, 1000) + " mil";

    }
    aux =  trunc(numero) - (aux*1000);
    if (aux >= 1){
        numero_letra += " " + numLetras(aux, 1);
    }
    
    aux = round((numero - trunc(numero)) * 100);
    
    std::cout << numero_letra + " " + std::to_string(aux) + "/100";

    return 0;
}