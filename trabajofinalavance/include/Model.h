#ifndef MODEL_H
#define MODEL_H
#include "View.h"
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
        void show_puntaje();
        void setN_S(std::string player_S);
        bool col(int x, int y, int xz, int yz);
    protected:
        char teclapre;
        View v;
        int vidas;
        int puntaje;
        bool dmg;
        bool muerte_T;
        bool k_enemy;
        std::string player_S;
};

#endif // MODEL_H
