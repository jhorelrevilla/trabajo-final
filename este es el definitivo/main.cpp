#include <iostream>

//#include <allegro.h>
#include "Bomberman.h"
#include "windows.h"

using namespace std;
#define columns 16
#define filas 17





//BITMAP *buffer;
//BITMAP *pared;
//BITMAP *pasto;
//BITMAP *piedra;
//BITMAP *bombman;
//BITMAP *frente0;
//BITMAP *derecha0;
//BITMAP *espalda0;
//BITMAP *izqui0;


int dir;

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
void draw_map(){
    for(int x=0;x<filas;x++){
        for(int y=0;y<columns;y++){
            cout<<map[x][y];
        }
        cout<<endl;
    }
}

char tecla;
Bomberman f(1,1);
void Detecta_teclaxd(char a){
    switch(a){
    case 'w':
        f.setmPosicionY(1);

        break;
    case 'a':
        f.setmPosicionX(1);
        break;
    case 's':
        f.setpPosicionX(1);
        break;
    case 'd':
        f.setpPosicionY(1);
        break;


    }

}

int main(){

    bool game_over= true;
    while(game_over){
        map[f.getPosicionX()][f.getPosicionY()]='T';
        Detecta_teclaxd(tecla);
        draw_map();
        cin>>tecla;
        system("cls");


    }


}
