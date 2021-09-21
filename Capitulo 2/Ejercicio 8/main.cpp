#include <iostream>
#include "io.h"

void writeAnswer(int x);
int readNumber();

int main(){
    int x{readNumber() + readNumber()};
    writeAnswer(x);
}