#ifndef MODEL_H
#define MODEL_H
#include "View.h"
#include <iostream>
using namespace std;

class Model
{
    public:
        void cambiotecla(int);
    protected:
        char teclapre;
        View v;
};

#endif // MODEL_H
