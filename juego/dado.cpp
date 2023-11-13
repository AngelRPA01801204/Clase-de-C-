#include <iostream>
#include "dado.h"

using std::endl;
using std::cout;

int Dado::lanzar()
{
    caras = 6;
    return std::rand() % (caras + 1) ;
}

void Dado::set_caras(int n)
{
    caras = n;
}

int Dado::get_caras()
{
    return caras;
}

void Dado::imprimir()
{
    cout << "Soy un dado jejeje de " << caras << "caras" << endl;
}
