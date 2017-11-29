#include "View.h"
void View::showscreen(){
    blit(buffer,screen,0,0,0,0,480,480);
}


void View::Show(){

    allegro_init();
//    set_color_depth(32);
//    set_gfx_mode(GFX_AUTODETECT_WINDOWED,480,480,0,0);
//
//    buffer=create_bitmap(480,480);
//    pared=load_bitmap("pared.bmp",NULL);
//    pasto=load_bitmap("pasto.bmp",NULL);
//    piedra=load_bitmap("piedra.bmp",NULL);
//    //
//    frente0=load_bitmap("front0.bmp",NULL);
//    derecha0=load_bitmap("right0.bmp",NULL);
//    espalda0=load_bitmap("back0.bmp",NULL);
//    izqui0=load_bitmap("left0.bmp",NULL);
//    clear(buffer);
//    draw_map();
//    showscreen();
//    blit(frente0,screen,0,0,f.getPosicionX(),f.getPosicionY(),32,32);
//    rest(120);
//    if(this->pos!=f.getPosicionX()){
//
//    blit(frente0,screen,0,0,f.getPosicionX(),f.getPosicionY(),32,32);
//
//    blit(derecha0,screen,0,0,f.getPosicionX(),f.getPosicionY(),32,32);
//            showscreen();
//            blit(izqui0,screen,0,0,f.getPosicionX(),f.getPosicionY(),32,32);
//            rest(120);
//            showscreen();
//            blit(espalda0,screen,0,0,f.getPosicionX(),f.getPosicionY(),32,32);
//            rest(120);
//        }
//        else if(key[KEY_DOWN]){
//            f.setpPosicionY(32);
//            showscreen();
//            blit(frente0,screen,0,0,f.getPosicionX(),f.getPosicionY(),32,32);
//            rest(120);
//        }
//        clear(buffer);
//        draw_map();
//        showscreen();
//        blit(frente0,screen,0,0,f.getPosicionX(),f.getPosicionY(),32,32);
//        rest(120);
}
