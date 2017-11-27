#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80
#define ESC 27
#define ENTER 13
#define TAB 9
#include "allegro.h"
#include "Bomberm.h"
using namespace std;
#define columns 16
#define filas 17
BITMAP *buffer;
BITMAP *pared;
BITMAP *pasto;
BITMAP *piedra;
BITMAP *bombman;
BITMAP *frente0;
BITMAP *derecha0;
BITMAP *espalda0;
BITMAP *izqui0;


class View
{
    public:
        void draw_map();
        void showscreen();
        int Inicia_game();
        Bomberm f;

    private:
        int dir;
        int px=100,py=200;
        char map[filas][columns]={
        "PPPPPPPPPPPPPPP",//1
        "PGIIGIIIGIIIGIP",
        "PGPIPIPIPIPIPIP",
        "PGIIGGIIIGGIIIP",
        "PIPIPIPIPIPIPIP",//5
        "PGIGIGIIIGIGIIP",
        "PGPGPGPIPIPGPGP",
        "PGIGIGGGIIGGIGP",
        "PIPGPIPIPGPIPIP",
        "PIIIIGGGIIIGGGP",//10
        "PGPGPGPGPGPIPIP",
        "PIIIIGGGIIIGIIP",
        "PGPIPIPIPGPIPIP",
        "PGIIGGGIIIGIIIP",
        "PPPPPPPPPPPPPPP",//15
        };

};

#endif // VIEW_H
