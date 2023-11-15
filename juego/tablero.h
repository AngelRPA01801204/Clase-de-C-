#ifndef TABLERO_H_
#define TABLERO_H_

#include "casilla.h"

class Tablero
{

    private:

    Casilla cas[100];

    public:

    Tablero();
    void imprimir();
    
};

#endif