#ifndef MODEL_H
#define MODEL_H
#include "View.h"
#include "Bomberm.h"
#include "Obstaculos.h"
#include <iostream>
using namespace std;

class Model
{
    public:
        Model();
        void cambiotecla(int);
        void add_vidas();
        void quitarvida();
        void add_puntaje();
        void add_puntaje(int p);
        void show_puntaje();
        bool col(int x, int y, int xz, int yz);
        void obs();
    protected:
        Bomberm c;
        char teclapre;
        Obstaculos d;
        View v;
        bool dmg;
        bool muerte_T;
        bool k_enemy;
};

#endif // MODEL_H
