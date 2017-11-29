#ifndef ENEMIGO_H
#define ENEMIGO_H
#include "pj_v_a.h"

class Enemigo : public Pj
{
    public:
        Enemigo(int,int);
        int getVida();

        virtual int getPosicionX();
        virtual int getPosicionY();

        void setpPosicionX(int);
        void setmPosicionX(int);

        void setpPosicionY(int);
        void setmPosicionY(int);
        static int n;
    private:
        int danho;

};

#endif // ENEMIGO_H
