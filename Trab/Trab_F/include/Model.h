#ifndef MODEL_H
#define MODEL_H

#include <iostream>

#include "Bomberm.h"


#include "Obstaculos.h"


using namespace std;

class Model
{
    public:
        bool col(int x, int y, int xz, int yz);
    protected:
        friend class Controller;
        Bomberm c;
        Obstaculos d;
        static int n;

};

#endif // MODEL_H
