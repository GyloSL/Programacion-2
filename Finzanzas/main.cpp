#include <iostream>
#include <cstring>
#include <iomanip>
using std::string;

struct datos{
    string cuenta;
    double balance;
    double pGastos; 
    double pIngresos;
    string gastos;
    string ingresos;
} cuentas[4];

int idCuenta{};
string cantidad{};

void llenar(){
    cuentas[1].cuenta = "Grisel";
    cuentas[1].balance = 20000;
    cuentas[2].cuenta = "Master";
    cuentas[2].balance = 1000000;
    cuentas[3].cuenta = "Yisus Cristo";
    cuentas[3].balance = 1111111;
}

bool isNumeric(string cadena){
    bool validar{true};
    for (int i = 0; i < cadena.length(); i++){
        if (isdigit(cadena[i]) == false) {
            validar = false;
            break;
        }
    }
    return validar;
}

string aMayuscula(string cadena) {
    for (int i = 0; i < cadena.length(); i++){
        cadena[i] = toupper(cadena[i]);
    }
    return cadena;
}

int account(){
    string inicio;
    std::cout << "----------------------------------------------------------------------------\n";
    for(int i = 1; i <= 3; i++){
    std::cout << "   " << i << " - " << cuentas[i].cuenta << "\n";
    }
    acc:
    std::cout << "----------------------------------------------------------------------------\n";
    std::cout << "Seleccione una cuenta: ";
    std::cin >> inicio;
    std::cin.ignore(32767, '\n');
    if (isNumeric(inicio) == false){
        std::cout << "Inserte una opcion valida \n";
        goto acc;
    } else {
        idCuenta = stoi(inicio);
        if (idCuenta < 1 || idCuenta > 3){
            std::cout << "Inserte una opcion valida \n";
            goto acc;
        }
    }  
    return 0;     
}

string agg(){
    cant:
    std::cout << "Cantidad: $";
    std::getline(std::cin, cantidad);
    if(isNumeric(cantidad) == false){
        std::cout << "La cantidad no es valida \n";
        goto cant;
    } 
    std::cout << "Categoria: ";
    string categoria;
    std::getline(std::cin, categoria);
    dia:
    std::cout << "Dia: ";
    string day{};
    std::getline(std::cin, day);
    if(isNumeric(day) == false){
        std::cout << "El dia no es valido \n";
        goto dia;
    } else if(stoi(day) < 1 or stoi(day) > 31){
        std::cout << "El dia no es valido \n";
        goto dia;
    }
    mes:
    std::cout << "Mes: ";
    string month{};
    std::getline(std::cin, month);
    if(isNumeric(month) == false){
        std::cout << "El mes no es valido \n";
        goto mes;
    } else if(stoi(month) < 1 or stoi(month) > 12){
        std::cout << "El mes no es valido \n";
        goto mes;
    }
    yr:
    std::cout << "A" << char(164) << "o: ";
    string year{};
    std::getline(std::cin, year);
    if(isNumeric(year) == false){
        std::cout << "El a" << char(164) << "o no es valido \n";
        goto yr;
    } 
    std::cout << "Comentario: ";
    string comentario{};
    std::getline(std::cin, comentario);
    return "Cantidad: $" + cantidad + " --- Categoria: " + categoria + " --- Fecha: " + day + "/" + month
    + "/" + year + " --- Comentario: " + comentario + "\n";
}

int main(){
    llenar();
    inicio:
    std::cout << "----------------------------------------------------------------------------\n";
    std::cout << "Desea iniciar sesion? SI/NO: ";
    string iniciar;
    std::getline(std::cin, iniciar);
    iniciar = aMayuscula(iniciar);
    if (iniciar == "SI" && iniciar != "NO"){
        account();
    } else if(iniciar == "NO"){
        std::cout << "Hasta la proximaaaaaaa \n";
    } else {
        std::cout << "Inserte una respuesta valida \n";
        goto inicio;
    }
    string opcion{};
    std::cout << std::setprecision(15);
    opc:
    std::cout << "----------------------------------------------------------------------------\n";
    std::cout << "Balance de la cuenta: $" << cuentas[idCuenta].balance << "\n";
    std::cout << "1 - Ver gastos      2 - Ver ingresos \n";
    std::cout << "3 - Agregar gasto   4 - Agregar ingreso \n";
    std::cout << "5 - Salir \n";
    std::cout << "Seleccione una opcion: ";
    std::getline(std::cin, opcion);
    if (isNumeric(opcion) == false){
        std::cout << "Inserte una opcion valida \n";
        goto opc;
    }
    int numOpcion{stoi(opcion)};
    switch (numOpcion){
        case 1:
            std::cout << "----------------------------------------------------------------------------\n";
            std::cout << "Gastos \n";
            std::cout << cuentas[idCuenta].gastos;
            break;
        case 2:
            std::cout << "----------------------------------------------------------------------------\n";
            std::cout << "Ingresos \n";
            std::cout << cuentas[idCuenta].ingresos;
            break;
        case 3:
            std::cout << "----------------------------------------------------------------------------\n";
            std::cout << "Agregar gasto \n";
            cuentas[idCuenta].gastos += agg();
            cuentas[idCuenta].pGastos += stoi(cantidad);
            cuentas[idCuenta].balance -= stoi(cantidad);
            break;
        case 4:
            std::cout << "----------------------------------------------------------------------------\n";
            std::cout << "Agregar ingreso \n";
            cuentas[idCuenta].ingresos += agg();
            cuentas[idCuenta].pIngresos += stoi(cantidad);
            cuentas[idCuenta].balance += stoi(cantidad);
            break;
        case 5:
            std::cout << "Abandonanda la cuenteeeee \n";
            goto inicio;
        default:
            std::cout << "Inserte una opcion valida \n";
            goto opc;
    }
    goto opc;
}