#ifndef DIBUJO_H
#define DIBUJO_H
#include "Posicion.h"
#include <windows.h>
#include <time.h>
class Dibujo
{
    public:
        void drawPixel(int x1,int y1, char a);
        void drawPixel(Posicion xy1,char a);
        void deletePixel(int x1,int y1);
        void deletePixel(Posicion xy1);
    protected:
        COORD coord={0,0};
        void GotoXY(int x, int y);

};
#endif // DIBUJO_H
