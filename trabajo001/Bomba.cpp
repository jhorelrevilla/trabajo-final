#include "Bomba.h"

Bomba::Bomba()
{
    this -> cuerpo = 'b';
    this -> danho = 0;
}
Bomba::Bomba(Posicion pos1)
{
    this -> cuerpo = 'b';
    this -> pos = pos1;
    this -> danho = 100;
}
Posicion Bomba::getPosicion(){
    return pos;
}
void Bomba::setPosicion(Posicion pos1){
    pos.x=pos1.x;
    pos.y=pos1.y;
}
