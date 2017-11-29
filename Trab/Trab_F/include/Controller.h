#ifndef CONTROLLER_H
#define CONTROLLER_H

#include<iostream>
#include<stdio.h>
#include<conio.h>

#include "Model.h"
//#include "View.h"

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80
#define ESC 27
#define ENTER 13
#define TAB 9

using namespace std;

class Controller
{
    public:
        int tecla(bool);

    protected:
        Model modelus;
        //View vilus;

        char* cTecla;

};

#endif // CONTROLLER_H
