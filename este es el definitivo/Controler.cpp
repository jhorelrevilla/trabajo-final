#include "Controler.h"

void Controller::tecla(bool gameover){
    cTecla = getch();
    switch(cTecla){
        case ENTER:
            break;
        case TAB:
            break;
        case UP:
            modelus.c.setmPosicionX(1);
            break;
        case DOWN:
            modelus.c.setpPosicionX(1);
            break;
        case LEFT:
            modelus.c.setmPosicionY(1);

            break;
        case RIGHT:
            modelus.c.setpPosicionY(1);

            break;
    }
    if(cTecla==ESC){this->gameover=true;}

}
void Controller::Principal_game(){
    while(gameover){
        tecla(false);

        veo.draw_prota(modelus.c.getPosicionX(),modelus.c.getPosicionY());
        //veo.draw_bomba(modelus.c.b.getPosicionX(),modelus.c.b.getPosicionY(),2);
        veo.draw_bomba(5,5,2);
        system("cls");
        veo.draw_map();
        veo.draw_prota(modelus.c.getPosicionX(),modelus.c.getPosicionY());
    }
}
