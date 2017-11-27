#include "Model.h"

Model::Model()
{
    dmg=false;
    muerte_T=false;
    k_enemy=false;
}
void Model::cambiotecla(int a){
    switch(a)
           {
            case ENTER:
                 cout<<"se cambio a enter"<<endl;
                 teclapre=ENTER;
                break;

            case TAB:
                 cout<<"se cambio a TAB"<<endl;
                 teclapre=TAB;
                break;

            case UP:
                 cout<<"se cambio a arriba"<<endl;
                 teclapre=UP;
                break;

            case DOWN:
                 cout<<"se cambio a abajo"<<endl;
                 teclapre=DOWN;
                break;

            case LEFT:
                 cout<<"se cambio a izquierda"<<endl;
                 teclapre=LEFT;
                break;

            case RIGHT:
                cout<<"se cambio a derecha"<<endl;
                teclapre=RIGHT;
                break;
            }
}
bool Model::col(int x, int y, int xz, int yz){
    if (x==xz && y ==yz)
        {return true;}
    else
        return false;
}
