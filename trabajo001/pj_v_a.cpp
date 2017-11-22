#include "pj_v_a.h"
Pj::Pj()
{
    this -> nombre = NULL;
    this -> cuerpo = 'X';
    this -> vida = 0;
}
Pj::Pj(char cuerpo1)
{
    this ->cuerpo = cuerpo1;
}
Pj::Pj(char cuerpo1,Posicion pos1):cuerpo(cuerpo1),myPos(pos1){}
Pj::Pj(char *nombre1, char cuerpo1,int vida1)
{
    nombre = new char[20];
    this -> nombre = nombre1;
    this -> cuerpo = 'X';
    this -> vida = vida1;
}
Pj::Pj(char *nombre1, char cuerpo1,int vida1,Posicion pos1)
    :nombre(nombre1),cuerpo(cuerpo1),vida(vida1),myPos(pos1){}
Pj::~Pj()
{
    delete[] nombre;
}
void Pj::setForm(char newForm){cuerpo = newForm;}
void Pj::moveMyPersonaje(Posicion newPosicion)
{
    myPos = newPosicion;
}
void Pj::moveMyPersonajeAndDraw(Posicion newPosicion)
{
    moveMyPersonaje(newPosicion);

}
unsigned int Pj::getVida(){return vida;}
