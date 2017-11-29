#include "Controller.h"

int Controller::tecla(bool gameover)
{
    while(gameover==false){
        char cTecla;
        cout<<"Presione un Tecla ..."<<endl;

    while(cTecla != ESC)
    {
       cTecla = getch();
       if(cTecla == 0)
           cTecla = getch();
       else
           switch(cTecla)
           {
            case ENTER:
                ;
                break;
            case TAB:
                ;
                break;
            case UP:
                modelus.c.setmPosicionY(32);
                cout<<modelus.c.getPosicionY();
                break;
            case DOWN:
                modelus.c.setpPosicionY(32);
                break;
            case LEFT:
                modelus.c.setmPosicionX(32);
                break;
            case RIGHT:
                modelus.c.setpPosicionX(32);
                break;
            }
        if(cTecla==ESC){gameover=true;}
    }
    }
}
