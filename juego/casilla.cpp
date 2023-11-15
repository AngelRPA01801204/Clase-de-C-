#include <iostream>

#include "casilla.h"

using std::cout;
using std::endl;

int casilla::getpos();
{
    posicion = 0;
}



void casilla::imprimir();
{
    cout << "hola" << endl;
};


Casilla:: Casilla()
{
    posicion = 0;
    cambio = 0;

};

Casilla:: Casilla(int p, int c)
{
    posicion = p;

    cambio = c;
};