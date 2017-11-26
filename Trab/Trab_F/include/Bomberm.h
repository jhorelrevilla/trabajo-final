#ifndef BOMBERM_H
#define BOMBERM_H
#include "PJ.h"

class Bomberm : public Pj
{
    public:
        Bomberm();
        Bomberm(int,int);
        friend class Model;
        friend class Controller;
        int getVida();
        void setN_S(std::string player_S);
        int getPosicionX();
        int getPosicionY();
        void setpPosicionX(int);
        void setmPosicionX(int);
        void setpPosicionY(int);
        void setmPosicionY(int);
    private:
        int puntaje;
        int vidas;
        std::string player_S;
        Posicion pos;
};

#endif // BOMBERM_H
