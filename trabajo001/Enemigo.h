#ifndef ENEMIGO_H
#define ENEMIGO_H
#include "pj_v_a.h"

class Enemigo : public Pj
{
    public:
        Enemigo(char ,int,int,int);
        int getVida();
        char getNombre();
        virtual int getPosicionX();
        virtual int getPosicionY();

        void setpPosicionX(int);
        void setmPosicionX(int);

        void setpPosicionY(int);
        void setmPosicionY(int);
    private:
        char cuerpo;
        int vida;
        Posicion posit;
        int danho;

};

#endif // ENEMIGO_H
