#include "Enemigo.h"

Enemigo::Enemigo(char x,int y,int z,int w)
{
    posit.x=y;
    posit.y=z;
    cuerpo=x;
    vida=w;
}
char Enemigo::getNombre(){
    return cuerpo;
}
int Enemigo::getVida(){
    return vida;
}
int Enemigo::getPosicionX(){
    return posit.x;
}
int Enemigo::getPosicionY(){
    return posit.y;
}

void Enemigo::setmPosicionX(int xp){
    posit.x-=xp;
}
void Enemigo::setpPosicionX(int xp){
    posit.x+=xp;
}
void Enemigo::setmPosicionY(int xp){
    posit.y-=xp;
}
void Enemigo::setpPosicionY(int xp){
    posit.y+=xp;
}
