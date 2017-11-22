#ifndef BOMBA_H
#define BOMBA_H
#include "pj_v_a.h"

class Bomba
{
    public:
        Bomba();
        Bomba(Posicion pos1);
        Posicion getPosicion();
        void setPosicion(Posicion pos1);

    protected:
        Posicion pos;
        char cuerpo;
        int danho;
};

#endif // BOMBA_H
