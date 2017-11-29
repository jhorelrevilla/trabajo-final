#ifndef BOMBERMAN_H
#define BOMBERMAN_H
#include "pj_v_a.h"

class Bomberman : public Pj
{
    public:
        Bomberman(int,int);
        int getVida();
        int getPosicionX();
        int getPosicionY();

        void setpPosicionX(int);
        void setmPosicionX(int);

        void setpPosicionY(int);
        void setmPosicionY(int);
    private:
        int poweup;
};

#endif // BOMBERMAN_H
