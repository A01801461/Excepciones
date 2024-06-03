#include <iostream>
#include <string>
#include "impresora.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    Impresora epson("Epson 123", 2); // constructor

    try
    {
        epson.imprimir("Hola Mundo, Me llamo Isaac");
    }

    catch(string &err) // catch que atrapa del throw en impresora.cpp
    {
        cout << "Error: " << err << endl;
    }

    catch(...) // catch que atrapa todo
    {
        cout << "En el atrapa todo" << endl;
    }

    return 0;
}