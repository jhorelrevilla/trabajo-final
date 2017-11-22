#include <iostream>
#include <allegro.h>
#include "pj_v_a.h"
#include "Enemigo.h"
#include "Bomberman.h"
#include "Bomba.h"
#include "Fantasmas.h"
#include "Power_UP.h"
#include "Posicion.h"

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
void draw_map(){
    for(int x=0;x<filas;x++){
        for(int y=0;y<columns;y++){
            if (map[x][y]=='P'){
                draw_sprite(buffer,pared,y*32,x*32);
            }
            if (map[x][y]=='G'){
                draw_sprite(buffer,pasto,y*32,x*32);
            }
            if (map[x][y]=='I'){
                draw_sprite(buffer,piedra,y*32,x*32);
            }
        }
    }
}
void showscreen(){
    blit(buffer,screen,0,0,0,0,480,480);
}

Bomberman f(100,200);
int main(){
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,480,480,0,0);
    buffer=create_bitmap(480,480);
    pared=load_bitmap("pared.bmp",NULL);
    pasto=load_bitmap("pasto.bmp",NULL);
    piedra=load_bitmap("piedra.bmp",NULL);
    //
    frente0=load_bitmap("front0.bmp",NULL);
    derecha0=load_bitmap("right0.bmp",NULL);
    espalda0=load_bitmap("back0.bmp",NULL);
    izqui0=load_bitmap("left0.bmp",NULL);

    //izqui=load_bitmap("izq.bmp",NULL);
    blit(frente0,screen,0,0,f.getPosicionX(),f.getPosicionY(),17,24);
    while(!key[KEY_ESC]){
        if(key[KEY_RIGHT]){
            f.setpPosicionX(32);
            blit(derecha0,screen,0,0,f.getPosicionX(),f.getPosicionY(),20,24);
            rest(120);
        }
        else if(key[KEY_LEFT]){
            f.setmPosicionX(32);
            showscreen();
            blit(izqui0,screen,0,0,f.getPosicionX(),f.getPosicionY(),20,24);
            rest(120);
        }
        else if(key[KEY_UP]){
            f.setmPosicionY(32);
            showscreen();
            blit(espalda0,screen,0,0,f.getPosicionX(),f.getPosicionY(),20,24);
            rest(120);
        }
        else if(key[KEY_DOWN]){3;
            f.setpPosicionY(32);
            showscreen();
            blit(frente0,screen,0,0,f.getPosicionX(),f.getPosicionY(),20,24);
            rest(120);
        }
        clear(buffer);
        draw_map();
        showscreen();
        blit(frente0,screen,0,0,f.getPosicionX(),f.getPosicionY(),32,32);
        rest(120);
    }

}
END_OF_MAIN();
