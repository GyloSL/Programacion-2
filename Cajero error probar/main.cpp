#include <iostream>
#include <cstring>
using std::string;

//Estructura de datos para guardar los datos de la tarjeta
struct datos{
    string noTarjeta;
    string nip;
    double saldo;
    string movimientos[30];
}tarjeta[3]; // Creo un vector tipo tarjeta

int transf[3] = {0, 0, 0};

//Llenado de datos de las tarjetas
int llenar(){
    tarjeta[1].noTarjeta = "4000123456789010";
    tarjeta[1].nip = "1212";
    tarjeta[1].saldo = 13500;
    tarjeta[2].noTarjeta = "5412751234123456";
    tarjeta[2].nip ="1209";
    tarjeta[2].saldo = 5400;
    tarjeta[3].noTarjeta = "5415910011090949";
    tarjeta[3].nip = "0413";
    tarjeta[3].saldo = 51300;
    return 0;
}

//Validar numero de tarjeta, regresa un numero > 3 si es igual, regresa 0 si es distinta
int validarTarjeta(string tarjetas){
    for(int i = 1; i <= 3; i++){
    //.compare compara el valor de tarjeta con el valor de tarjeta en el vector, si coincide regresa 0
        if (tarjetas.compare(tarjeta[i].noTarjeta) == 0){ 
            return i; 
        }
    }
    return 0;
}

//Validar nip de la tarjeta, regresa true si es igual, regresa false si es distinto
bool validarNip(string nip, int i){ //Int i es el idTarjeta
    if (nip.compare(tarjeta[i].nip) == 0){
        return true;
    } else {
        //std::cout << "El pin ingresado no es válido";
        return false;
    }  
}
//Convertir una cadena a mayusculas
string aMayuscula(string cadena) {
    for (int i = 0; i < cadena.length(); i++){
        cadena[i] = toupper(cadena[i]);
    }
    return cadena;
}

//• retirar         
int retirar(int idTarjeta){
    std::cout << "Cantidad a retirar: ";
    double retiro{};
    std::cin >> retiro;
    tarjeta[idTarjeta].saldo -= retiro; //Se resta al saldo el retiro de dinero
    transf[idTarjeta] += 1;
    tarjeta[idTarjeta].movimientos[transf[idTarjeta]] = "Retiro de $" + std::to_string(retiro);
    std::cout << "Se retir" << char(162) << " $" << retiro << " de su cuenta \n";
    return 1;
}

//• depositar
int depositar(int idTarjeta){
    std::cout << "Cantidad a depositar: ";
    double deposito{};
    std::cin >> deposito;
    tarjeta[idTarjeta].saldo += deposito; //Se suma al saldo el retiro de dinero
    transf[idTarjeta] += 1;
    tarjeta[idTarjeta].movimientos[transf[idTarjeta]] = "Deposito de $" + std::to_string(deposito);
    std::cout << tarjeta[idTarjeta].movimientos[transf[idTarjeta]] << "\n";
    std::cout << "Se deposit"  << char(162) << " $" << deposito << " a su cuenta \n";
    return 0;
}

//• hacer transferencia
int transferencia(int idTarjeta){
    int id{};
    string cuenta{};
    //Validacion de la tarjeta donde se va a depositar
    do{
        std::cout << "Tarjeta a depositar: ";
        std::cin >> cuenta;
        id = validarTarjeta(cuenta);
        if (id == 0){
            std::cout << "El n" << char(163) << "mero de tarjeta no es valido \n";
        }
    } while(id == 0);
    std::cout << "Cantidad a depositar: ";
    int dinero{};
    std::cin >> dinero;
    tarjeta[idTarjeta].saldo -= dinero; //Se retira el dinero de la tarjeta
    tarjeta[id].saldo += dinero; //Se deposita el dinero a la otra tarjeta
    //transf[idTarjeta] guarda cuantos movimientos se han hecho en la tarjeta que transfiere
    //Para el estado de cuenta
    transf[idTarjeta] += 1;
    tarjeta[idTarjeta].movimientos[transf[idTarjeta]] = "Transferenica de $" + std::to_string(dinero) + " a la tarjeta " + cuenta + "\n";
    //transf[idTarjeta] guarda cuantos movimientos se han hecho en la tarjeta que recibe el dinero
    transf[id] += 1; 
    tarjeta[id].movimientos[transf[id]] = "Transferencia de la tarjeta " + tarjeta[idTarjeta].noTarjeta + " de $" + std::to_string(dinero) + "\n";
    std::cout << "Se deposit"  << char(162) << " $" << dinero << " a la tarjeta " << cuenta << "\n";
    return 0;
}

//• cambiar nip
int cambiarNip(int idTarjeta){
    int nip1 {};
    int nip2{};
    do{
        std::cout << "Inserte nuevo nip: ";
        std:: cin >> nip1;
        std::cout << "Repita nuevo nip: ";
        std::cin >> nip2;
        if (nip2 != nip1){
            std::cout << "Los nip no coinciden. Vuelva a intentar. \n";
        } else {
            std::cout << "El nip se cambi" << char(162) << " correctamente \n";
        }
    } while(nip1 != nip2);
    tarjeta[idTarjeta].nip = nip1;
    return 0;
}

//• estado de cuenta
int estadoDeCuenta(int idTarjeta){
    for (int i = 1; i <= 30; i++){
        std::cout << i << ": " << tarjeta[idTarjeta].movimientos[i] << "\n";
        //std::cout << tarjeta[idTarjeta].movimientos[i] << "\n";
    }
    return 0;
}

//• consultar saldo
int consultarSaldo(int idTarjeta){
    std::cout << "Su saldo actual es: $" << tarjeta[idTarjeta].saldo << "\n";
    return 0;
}

int main(){
    llenar();
    string noTarjeta {""};
    string nip {""};
    string seguir{"SI"};
    int idTarjeta{};
    int opcion{1};
    //Se valida que el número de tarjeta exista
    do{
        std::cout << "Inserte n" << char(163) << "mero de tarjeta: ";
        std::cin >>  noTarjeta;
        idTarjeta = validarTarjeta(noTarjeta);
    } while(idTarjeta == 0);
    //Se valida que el nip de la tarjeta sea correcto 
    do{
        std::cout << "Inserte nip: ";
        std::cin >> nip;
    } while(validarNip(nip, idTarjeta) == false);
    std::cout << "--------------------------------------------------------- \n";
    // Elegir una consulta
    while (opcion < 1 and opcion > 7 or seguir == "SI")
    {
        std::cout << "Menu - Elegir opcion \n";
        std::cout << "1 - Depositar          2 - Retirar \n";
        std::cout << "3 - Transferencia      4 - Estado de cuenta \n";
        std::cout << "5 - Consultar saldo    6 - Cambiar nip \n";
        std::cout << "7 - Salir \n";
        std::cout << "Elija opcion: ";
        std::cin >> opcion;
        switch (opcion) {
            case 1:
                depositar(idTarjeta);
                break;
            case 2:
                retirar(idTarjeta);
                break;
            case 3:
                transferencia(idTarjeta);
                break;
            case 4:
                estadoDeCuenta(idTarjeta);
                break;
            case 5:
                consultarSaldo(idTarjeta);
                break;
            case 6:
                cambiarNip(idTarjeta);
                break;
            case 7:
                std::cout << "Consulta finalizada \n";
                seguir = "NO";
                break;
        }
        if (opcion > 0 and opcion < 7){
            std::cout << "Desea hacer otra consulta? (SI/NO): ";
            std::cin >> seguir;
            seguir = aMayuscula(seguir);
        }
        std::cout << "--------------------------------------------------------- \n";
    }
    return 0;
}