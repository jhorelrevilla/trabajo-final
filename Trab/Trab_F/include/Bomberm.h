#ifndef BOMBERM_H
#define BOMBERM_H
#include "PJ.h"

class Bomberm : public Pj
{
    public:
        Bomberm ();
        Bomberm(int,int);

        int getVida();

        int getPosicionX();
        int getPosicionY();
        void setpPosicionX(int);
        void setmPosicionX(int);
        void setpPosicionY(int);
        void setmPosicionY(int);

    private:
        int puntaje;
        int vidas;
        Posicion pos;
};

#endif // BOMBERM_H
