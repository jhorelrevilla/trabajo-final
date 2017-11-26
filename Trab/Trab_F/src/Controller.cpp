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
                c.cambiotecla(ENTER);
                break;
            case TAB:
                c.cambiotecla(TAB);
                break;
            case UP:
                c.cambiotecla(UP);
                break;
            case DOWN:
                c.cambiotecla(DOWN);
                break;
            case LEFT:
                c.cambiotecla(LEFT);
                break;
            case RIGHT:
                c.cambiotecla(RIGHT);
                break;
            }
        if(cTecla==ESC){gameover=true;}
    }
    }
}
