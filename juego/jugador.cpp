#include <iostream>
#include "jugador.h"
#include "dado.h"


using std::cout;

void jugador::cambia_posicion(int n)
{
    posicion = posicion + n;

}

int jugador::get_posicion()
{
    return posicion;

}

void jugador::imprimir()
{
    cout << "soy el jugador" << nombre ;
    cout << "mi posicion es" << posicion ; 
}

void jugador::mover()
{
    int mov = midado.lanzar();
    cambia(mov);
}