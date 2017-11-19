#include "m_c.h"

m_c::m_c()
{
    gameover=false;
}
void m_c::movementP(bool gameover)
{
    while(gameover==false){
        char cTecla;
        printf("\r\nPresione un Tecla ...");

    while(cTecla != 27)
    {
       cTecla = getch();
       if(cTecla == 0)
           cTecla = getch();
       else
           switch(cTecla)
           {
            case 13:
                 printf("\r\n Presiono ENTER");
            break;

            case 9:
                 printf("\r\n Presiono TAB");
            break;

            case 72:
                 printf("\r\n Presiono Flecha Arriba");
            break;

            case 80:
                 printf("\r\n Presiono Flecha Abajo");
            break;

            case 75:
                 printf("\r\n Presiono Flecha izquierda");
            break;

            case 77:
                 printf("\r\n Presiono Flecha derecha");
            break;
            }
        if(cTecla==27){gameover=true;}
    }
    }
}

