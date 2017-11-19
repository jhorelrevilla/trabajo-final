#ifndef M_M_H
#define M_M_H
#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80
#define ESC 27
#include "m_c.h"
#include <iostream>
using namespace std;

class m_m
{
    public:
        m_m();
        void add_vidas();
        void quitarvida();
        void restarvida();
        void add_puntaje();
        void setN_S(std::string player_S);
    protected:
        int vida;
        int vidas;
        int puntaje;
        bool dmg;
        bool muerte_T;
        bool k_enemy;
        std::string player_S;
};

#endif // M_M_H
