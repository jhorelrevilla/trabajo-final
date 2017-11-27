#ifndef PJ_H
#define PJ_H
#include "Posicion.h"

class Pj
{
    public:
        virtual int getPosicionX()=0;
        virtual int getPosicionY()=0;
        virtual void setpPosicionX(int)=0;
        virtual void setmPosicionX(int)=0;
        virtual void setpPosicionY(int)=0;
        virtual void setmPosicionY(int)=0;

        virtual int getVida()=0;
    protected:
        int vidas;
        Posicion myPos;
};

#endif // PJ_H
