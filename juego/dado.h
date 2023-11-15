#ifndef DADO_H
#define DADO_H

class Dado
{
    private:
        int caras;

    public: 
        int lanzar();
        void set_caras(int n);
        int get_caras();
        void imprimir();
};

#endif