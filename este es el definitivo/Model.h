#ifndef MODEL_H
#define MODEL_H

#include <iostream>

#include "Bomberman.h"



using namespace std;

class Model
{
    public:
        bool col(int,int,int,int);
        Bomberman c;
    protected:
        friend class Controller;

};

#endif // MODEL_H
