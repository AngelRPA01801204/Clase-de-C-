#ifndef CASILLA_H
#define CASILLA_H

#include "jugador.h"


class Casilla
{

    private:

    int posicion;
    int cambio;

    public:

    Casilla();
    Casilla(int p,int c);

    void imprimir();
    int getpos();
    int get_cambio();


};

#endif