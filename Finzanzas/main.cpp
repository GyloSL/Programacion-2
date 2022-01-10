#include <iostream>
#include <cstring>
#include <iomanip>
#include <iterator>
#include <fstream>
using std::string;

struct datos{
    double balance;
    double pGastos; 
    double pIngresos;
    string gastos;
    string ingresos;
} cuentas;

int idCuenta{};
string addGasto;
string addIngreso;
string cantidad{};
int lenght{0};
string inicio;

double obtenerCantidad(string linea){
    lenght = 0;
    for (int i = 0; i < linea.length(); i++){
        if (isdigit(linea[i]) == false) {
            break;
        } else {
            lenght += 1;
        }
    }
    std::cout << linea + " \n";
    return stod(linea.substr(0, lenght));
}

void llenar(){
    std::string archivo = inicio + ".txt";
    std::ifstream leerArc(archivo.c_str());
    std::string linea;
    std::getline(leerArc, linea);
    cuentas.balance = stod(linea);
    while (std::getline(leerArc, linea)) {
        if (linea == "Gastos"){
            while (std::getline(leerArc, linea) && linea != "Ingresos"){
                cuentas.pGastos += obtenerCantidad(linea);
                cuentas.gastos += linea.substr(lenght+1, linea.length()) + "\n";
                addGasto += linea + "\n"; 
            }
        } 
        while (std::getline(leerArc, linea) && linea != ""){
            cuentas.pIngresos += obtenerCantidad(linea);
            cuentas.ingresos += linea.substr(lenght+1, linea.length()) + "\n";
            addIngreso += linea + "\n";
        }
        
    }
    leerArc.close();
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

int escribirTXT(){
    std::string archivo = inicio + ".txt";
    std::ofstream escArchivo;
    escArchivo.open(archivo.c_str(), std::fstream::out);
    escArchivo.end;
    escArchivo << std::setprecision(15) << cuentas.balance << std::endl;
    escArchivo << "Gastos" << std::endl;
    escArchivo << addGasto;
    escArchivo << "Ingresos" << std::endl;
    escArchivo << addIngreso;
    escArchivo.close();
    return 0;
}

int account(){
    acc:
    std::cout << "----------------------------------------------------------------------------\n";
    std::cout << "Seleccione una cuenta (Grisel o Master): ";
    std::cin >> inicio;
    std::cin.ignore(32767, '\n');
    std::string archivo = inicio + ".txt";
    std::ifstream leerArc(archivo.c_str());
    if (leerArc.fail()){
        std::cout << "Inserte una opcion valida \n";
        goto acc;
    } else {
        leerArc.close();
        llenar();
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
    } else if(stoi(cantidad) <= 0){
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
        return 0;
    } else {
        std::cout << "Inserte una respuesta valida \n";
        goto inicio;
    }
    string opcion{};
    std::cout << std::setprecision(15);
    opc:
    std::cout << "----------------------------------------------------------------------------\n";
    std::cout << "Balance de la cuenta: $" << cuentas.balance << "\n";
    std::cout << "Gastos: $" << cuentas.pGastos << "         Ingresos: $" << cuentas.pIngresos << "\n";
    std::cout << "1 - Ver gastos      2 - Ver ingresos \n";
    std::cout << "3 - Agregar gasto   4 - Agregar ingreso \n";
    std::cout << "5 - Salir \n";
    std::cout << "Seleccione una opcion: ";
    std::cin >> opcion;
    std::cin.ignore(32767, '\n');
    if (isNumeric(opcion) == false){
        std::cout << "Inserte una opcion valida \n";
        goto opc;
    } 
    string add;
    int numOpcion {stoi(opcion)};
    switch (numOpcion){
        case 1:
            std::cout << "----------------------------------------------------------------------------\n";
            std::cout << "Gastos \n";
            std::cout << cuentas.gastos;
            break;
        case 2:
            std::cout << "----------------------------------------------------------------------------\n";
            std::cout << "Ingresos \n";
            std::cout << cuentas.ingresos;
            break;
        case 3:
            std::cout << "----------------------------------------------------------------------------\n";
            std::cout << "Agregar gasto \n";
            add = agg();
            cuentas.gastos += add;
            addGasto += cantidad + "," + add;
            cuentas.pGastos += stod(cantidad);
            cuentas.balance -= stod(cantidad);
            break;
        case 4:
            std::cout << "----------------------------------------------------------------------------\n";
            std::cout << "Agregar ingreso \n";
            add = agg();
            cuentas.ingresos += add;
            addIngreso += cantidad + "," + add;
            cuentas.pIngresos += stod(cantidad);
            cuentas.balance += stod(cantidad);
            break;
        case 5:
            std::cout << "Abandonanda la cuenteeeee \n";
            escribirTXT();
            cuentas.balance = 0;
            cuentas.gastos = "";
            cuentas.ingresos = "";
            cuentas.pGastos = 0;
            cuentas.pIngresos = 0;
            addGasto = "";
            addIngreso = "";
            goto inicio;
        default:
            std::cout << "Inserte una opcion valida \n";
            goto opc;
    }
    goto opc;
}