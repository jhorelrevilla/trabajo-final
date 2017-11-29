#ifndef POWER_UP_H
#define POWER_UP_H
#include "pj_v_a.h"

class Power_UP : public Pj
{
    public:
        Power_UP();
        Power_UP(char *nombre1, Posicion pos1);

    protected:
        char *nombre;
        Posicion pos;
};

#endif // POWER_UP_H
