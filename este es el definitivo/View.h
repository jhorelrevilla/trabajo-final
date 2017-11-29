#ifndef VIEW_H
#define VIEW_H

#include <iostream>

#define columns 16
#define filas 17
using namespace std;

class View
{
public:

char map[filas][columns]={
    "PPPPPPPPPPPPPPP",//1
    "P             P",
    "P P P PIPIPIP P",
    "P I   I I  II P",
    "P P PIPIPIPIP P",//5
    "P I I III I I P",
    "P P P PIPIP P P",
    "P I I   II  I P",
    "P P PIPIP PIP P",
    "P III   III   P",//10
    "P P P P P PIP P",
    "P       III I P",
    "P PIPIPIP PIP P",
    "P             P",
    "PPPPPPPPPPPPPPP",//15
};
    void draw_map();
    private:

};

#endif // VIEW_H
