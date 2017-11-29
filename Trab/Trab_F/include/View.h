#ifndef VIEW_H
#define VIEW_H

#include <iostream>

#include "allegro.h"

#define columns 16
#define filas 17

using namespace std;


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
        View(){}
        void draw_map();
        void showscreen();
        void Show();


    private:
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
