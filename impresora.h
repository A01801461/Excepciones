#ifndef IMPRESORA_H
#define IMPRESORA_H

#include <string>

class Impresora
{
private:
    std::string nombre;
    int numHojas;

public:
    // Constructor
    Impresora(std::string nom, int nh);

    // Método para recargar hojas
    void recargar(int num);

    // Método para imprimir texto
    void imprimir(std::string txt);
};

#endif // IMPRESORA_H
