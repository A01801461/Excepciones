#include <iostream>
#include <string>
#include "impresora.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    Impresora epson("Epson-Jet123", 50);
    epson.imprimir("Hola Mundo");
    return 0;
}