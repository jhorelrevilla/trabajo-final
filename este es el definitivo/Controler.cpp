#include "Controler.h"

void Controller::tecla(bool gameover){
    cTecla = getch();
    switch(cTecla){
        case ENTER:
            break;
        case TAB:
            veo.draw_bomba(modelus.c.getPosicionX(),modelus.c.getPosicionY(),2);
            break;
        case UP:
            modelus.c.setmPosicionX(1);
            if(veo.ver_parA(modelus.c.getPosicionX(),modelus.c.getPosicionY())){
                modelus.c.setpPosicionX(1);
            }

            break;
        case DOWN:
            modelus.c.setpPosicionX(1);
            if(veo.ver_parA(modelus.c.getPosicionX(),modelus.c.getPosicionY())){
                modelus.c.setmPosicionX(1);
            }
            break;
        case LEFT:
            modelus.c.setmPosicionY(1);
            if(veo.ver_parA(modelus.c.getPosicionX(),modelus.c.getPosicionY())){
                modelus.c.setpPosicionY(1);
            }
            break;
        case RIGHT:
            modelus.c.setpPosicionY(1);
            if(veo.ver_parA(modelus.c.getPosicionX(),modelus.c.getPosicionY())){
                modelus.c.setmPosicionY(1);
            }
            break;
    }
    if(cTecla==ESC){this->gameover=true;}

}
void Controller::Principal_game(){
    while(gameover){
//        std::cout<<"pos x"<<modelus.c.getPosicionX()<<std::endl;
//        std::cout<<"pos y"<<modelus.c.getPosicionY()<<std::endl;
        veo.draw_nulprota(modelus.c.getPosicionX(),modelus.c.getPosicionY());
        tecla(false);

        veo.draw_prota(modelus.c.getPosicionX(),modelus.c.getPosicionY());

        system("cls");
        veo.draw_map();
        veo.draw_prota(modelus.c.getPosicionX(),modelus.c.getPosicionY());
    }
}
