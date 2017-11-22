#ifndef PJ_V_A_H
#define PJ_V_A_H
#define IZQ 75
#define DER 77
#define ABA 72
#define ARI 80
#include "Posicion.h"
class Pj
{
    public:
        Pj();
        Pj(char cuerpo1);
        Pj(char cuerpo1,Posicion pos1);
        Pj(char *nombre1, char cuerpo1,int vida1);
        Pj(char *nombre1, char cuerpo1,int vida1,Posicion pos1);
        ~Pj();
        void setForm(char newForm);
        void moveMyPersonaje(Posicion newPosicion); ///cambiar de posicion
        void moveMyPersonajeAndDraw(Posicion newPosicion); ///cambiar de posicion y dibujar
        unsigned int getVida();

    protected:
        char *nombre;
        char cuerpo;
        unsigned int vida;
        Posicion myPos;
};

#endif // PJ_V_A_H
