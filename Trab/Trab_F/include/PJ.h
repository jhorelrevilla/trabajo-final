#ifndef PJ_H
#define PJ_H
#include "Posicion.h"

class Pj
{
    public:
        Pj();
        Pj(Posicion pos1);
        void moveMyPersonaje(Posicion newPosicion); ///cambiar de posicion
        void moveMyPersonajeAndDraw(Posicion newPosicion); ///cambiar de posicion y dibujar
        int getVida();
    protected:
        int vidas;
        Posicion myPos;
};

#endif // PJ_H
