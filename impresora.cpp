#include <iostream>
#include <string>
#include "impresora.h"

using std::cout;
using std::endl;
using std::string;

Impresora::Impresora(string nom, int nh)
{
    nombre = nom;
    numHojas = nh;
}

void Impresora::recargar(int num)
{
    numHojas = numHojas + num;
}

void Impresora::imprimir(string txt)
{
    int letras = txt.size();
    int numeroHojas = letras/3;
    // si no hay suficientes hojas lanza error
    if(numeroHojas > numHojas) 
    {
        string err = "No hay suficientes hojas";
        throw(err);
    }
    numHojas = numHojas - numeroHojas;
    cout << "imprmiendo pagina: " << txt << endl;
    cout << "hojas restantes: " << numHojas << endl;
}