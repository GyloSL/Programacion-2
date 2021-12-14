#include <iostream>
#include <sstream>
#include <string>

int main(){
    std::stringstream os;
    os << "reprobaran!" << "\n";
    
    std::stringstream ss;
    ss.str("troste");

    std::cout << os.str();

    std::string str;
    ss >> str;
    std::cout << str << "\n";
    return 0;
}