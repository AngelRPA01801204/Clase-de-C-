
#ifndef _JUGADOR_H_
#define _JUGADOR_H_
#include <string>
#include "dado.h"
using std::string;

class jugador
{
    private:
        string nombre;
        string color;
        int posicion;
        Dado midado;

    public:
        void cambia_posicion(int n);
        int get_posicion();
        void set_nombre(string n);
        void imprimir();
}


#endif