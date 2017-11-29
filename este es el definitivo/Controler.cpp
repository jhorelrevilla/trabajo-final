#include "Controler.h"

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
                modelus.c.setmPosicionY(1);
                cout<<"Se movio hacia Arriba"<<endl;
                break;
            case DOWN:
                modelus.c.setpPosicionY(1);
                cout<<"Se movio hacia Abajo"<<endl;
                break;
            case LEFT:
                modelus.c.setmPosicionX(1);
                cout<<"Se movio hacia la Izquierda"<<endl;
                break;
            case RIGHT:
                modelus.c.setpPosicionX(1);
                cout<<"Se movio hacia la Derecha"<<endl;
                break;
            }
        if(cTecla==ESC){gameover=true;}
    }
    }
}
