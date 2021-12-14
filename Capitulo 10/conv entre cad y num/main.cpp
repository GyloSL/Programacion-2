#include <iostream>
#include <sstream>
#include <string>

int main(){
    std::stringstream os;
    
    int nValue{12345};
    double dValue{67.89};
    os << nValue << ' ' << dValue;

    std::string strValue1, strValue2;
    os >> strValue1 >> strValue2;

    std::cout << "Numeros a cadena \n";
    std::cout << strValue1 << ' ' << strValue2;

    os.clear();
    os << "12345 67.89";
    int nV;
    double dV;

    os >> nV >> dV;

    std::cout << "\nCadena a numeros \n";
    std::cout << nV << ' ' << dV;

    return 0;
}