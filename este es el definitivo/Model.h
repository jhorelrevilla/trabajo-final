#ifndef MODEL_H
#define MODEL_H

#include <iostream>

#include "Bomberman.h"



using namespace std;

class Model
{
    public:
        bool col(int x, int y, int xz, int yz);
        Bomberman c;
    protected:
        friend class Controller;

};

#endif // MODEL_H
