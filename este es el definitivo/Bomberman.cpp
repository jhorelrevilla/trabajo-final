#include "Bomberman.h"

Bomberman::Bomberman(int x,int y)
{
    this -> vida = 3;
    this -> myPos.x = x;
    this -> myPos.y = y;
}
int Bomberman::getVida(){return vida;}
int Bomberman::getPosicionX(){return myPos.x;}
int Bomberman::getPosicionY(){return myPos.y;}

void Bomberman::setmPosicionX(int xp){
    myPos.x-=xp;
}
void Bomberman::setpPosicionX(int xp){
    myPos.x+=xp;
}
void Bomberman::setmPosicionY(int xp){
    myPos.y-=xp;
}
void Bomberman::setpPosicionY(int xp){
    myPos.y+=xp;
}
