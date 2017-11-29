#include "Dibujo.h"

void Dibujo::GotoXY(int x, int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void Dibujo::drawPixel(int x1,int y1, char a)
{
    GotoXY(x1,y1);
    cout <<a;
}
void Dibujo::drawPixel(Posicion xy1,char a)
{
    GotoXY(xy1.x,xy1.y);
    cout <<a;
}
void Dibujo::deletePixel(int x1,int y1)
{
    GotoXY(x1,y1);
    cout <<" ";
}
void Dibujo::deletePixel(Posicion xy1)
{
    GotoXY(xy1.x,xy1.y);
    cout <<" ";
}
