#include "Bomberman.h"

Bomberman::Bomberman(int x,int y)
{
    this -> cuerpo = 'p';
    this -> vida = 3;
    this -> pos.x = x;
    this -> pos.y = y;
}
int Bomberman::getVida(){return vida;}
int Bomberman::getPosicionX(){return pos.x;}
int Bomberman::getPosicionY(){return pos.y;}

void Bomberman::setmPosicionX(int xp){
    pos.x-=xp;
}
void Bomberman::setpPosicionX(int xp){
    pos.x+=xp;
}
void Bomberman::setmPosicionY(int xp){
    pos.y-=xp;
}
void Bomberman::setpPosicionY(int xp){
    pos.y+=xp;
}
