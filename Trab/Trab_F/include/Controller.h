#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Model.h"
#include "View.h"
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class Controller
{
    public:
        int tecla(bool);
    protected:
        char cTecla;
        Model c;
        View v;
        Bomberm n;
};

#endif // CONTROLLER_H
