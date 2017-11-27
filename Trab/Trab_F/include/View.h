#ifndef VIEW_H
#define VIEW_H

#include <iostream>

#include "Model.h"
#include "allegro.h"
#include "Bomberm.h"
using namespace std;
#define columns 16
#define filas 17


class View
{
    public:
        void draw_map();
        void showscreen();
        int Inicia_game();
        Bomberman f(32,32);

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
