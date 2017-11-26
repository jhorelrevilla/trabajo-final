#include "PJ.h"

Pj::Pj()
{
    this -> vidas = 1;
}
Pj::Pj(Posicion pos1):myPos(pos1){}
void Pj::moveMyPersonaje(Posicion newPosicion)
{
    myPos = newPosicion;
}
void Pj::moveMyPersonajeAndDraw(Posicion newPosicion)
{
    moveMyPersonaje(newPosicion);
}
int Pj::getVida(){return vidas;}
