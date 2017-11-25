#ifndef VIEW_H
#define VIEW_H
#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80
#define ESC 27
#define ENTER 13
#define TAB 9
#include <iostream>
using namespace std;
class View
{
    public:
        void imprimir(int);
        void show_puntaje(int);
};

#endif // VIEW_H
