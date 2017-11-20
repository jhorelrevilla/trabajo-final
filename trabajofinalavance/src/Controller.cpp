#include "Controller.h"

int Controller::tecla(bool gameover)
{
    while(gameover==false){
        char cTecla;
        cout<<"Presione un Tecla ..."<<endl;

    while(cTecla != 27)
    {
       cTecla = getch();
       if(cTecla == 0)
           cTecla = getch();
       else
           switch(cTecla)
           {
            case 13:
                c.cambiotecla(13);
                break;
            case 9:
                c.cambiotecla(9);
                break;
            case 72:
                c.cambiotecla(72);
                break;
            case 80:
                c.cambiotecla(80);
                break;
            case 75:
                c.cambiotecla(75);
                break;
            case 77:
                c.cambiotecla(77);
                break;
            }
        if(cTecla==27){gameover=true;}
    }
    }
}
