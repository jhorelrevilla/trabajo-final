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
        bool col(int x, int y, int xz, int yz);
    protected:
        Bomberm c(int x_1=1,int y_2=32 );
        char teclapre;
        Obstaculos d;
        View v;
        bool dmg;
        bool muerte_T;
        bool k_enemy;
};

#endif // MODEL_H
