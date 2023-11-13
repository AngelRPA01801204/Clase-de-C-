#include <iostream>
#include "dado.h"
#include "jugador.h"

using std::cout;
using std::endl;




int main()
{
    Dado midado;

    midado.set_caras(8);

    // cout << midado << endl;


    midado.imprimir()

    for (int i = 0; i < 5; i++)
    {
        cout << midado.lanzar() << endl; 
    }

    jugador yo;
    yo.set_nombre("Angel");
    yo.imprimir();
    yo.mover();
    yo.imprimirr();

}

