#include "Bomberm.h"

Bomberm::Bomberm(){}
Bomberm::Bomberm(int x,int y)
{
    this -> puntaje = 0;
    this -> vidas = 3;
    this -> pos.x = x;
    this -> pos.y = y;
}
int Bomberm::getVida(){return vidas;}

int Bomberm::getPosicionX(){return pos.x;}
int Bomberm::getPosicionY(){return pos.y;}

void Bomberm::setmPosicionX(int xp){
    pos.x-=xp;
}
void Bomberm::setpPosicionX(int xp){
    pos.x+=xp;
}
void Bomberm::setmPosicionY(int xp){
    pos.y-=xp;
}
void Bomberm::setpPosicionY(int xp){
    pos.y+=xp;
}
