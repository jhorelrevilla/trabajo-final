#ifndef MODEL_H
#define MODEL_H

#include <iostream>

#include "Bomberman.h"



using namespace std;

class Model
{
    public:
        Bomberman c;
    protected:
        friend class Controller;

};

#endif // MODEL_H
