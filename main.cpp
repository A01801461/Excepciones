#include <iostream>
#include <string>
#include "impresora.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    Impresora epson("Epson 123", 2);

    try
    {
        epson.imprimir("Hola Mundo, Me llamo Isaac");
    }

    catch(string &err)
    {
        cout << "Error: " << err << endl;
    }

    catch(...)
    {
        cout << "En el atrapa todo" << endl;
    }

    return 0;
}