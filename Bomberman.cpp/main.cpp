#include<iostream>
#include <allegro.h>
using namespace std;
#define columns 16
#define filas 17
BITMAP *buffer;
BITMAP *pared;
BITMAP *pasto;
BITMAP *piedra;

char map[filas][columns]={
    "PPPPPPPPPPPPPPP",//1
    "PGIIGIIIGIIIGIP",
    "PGPIPIPIPIPIPIP",
    "PGIIGGIIIGGIIIP",
    "PIPIPIPIPIPIPIP",//5
    "PGIGIGIIIGIGIIP",
    "PGPIPGPIPIPGPGP",
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
            /*if (map[x][y]=='G'){
                draw_sprite(buffer,pasto,y*32,x*32);
            }*/
            if (map[x][y]=='I'){
                draw_sprite(buffer,piedra,y*32,x*32);
            }
        }
    }
}
void showscreen(){
    blit(buffer,screen,0,0,0,0,480,480);
}

int main(){
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,480,480,0,0);
    buffer=create_bitmap(480,480);
    pared=load_bitmap("pared.bmp",NULL);
    pasto=load_bitmap("pasto.bmp",NULL);
    piedra=load_bitmap("piedra.bmp",NULL);

    while(!key[KEY_ESC]){
        draw_map();
        showscreen();
    }

}
END_OF_MAIN();
