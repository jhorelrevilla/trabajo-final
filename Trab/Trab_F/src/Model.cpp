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
                 v.imprimir(ENTER);
                break;

            case TAB:
                 cout<<"se cambio a TAB"<<endl;
                 teclapre=TAB;
                 v.imprimir(TAB);
                break;

            case UP:
                 cout<<"se cambio a arriba"<<endl;
                 teclapre=UP;
                 v.imprimir(UP);
                break;

            case DOWN:
                 cout<<"se cambio a abajo"<<endl;
                 teclapre=DOWN;
                 v.imprimir(DOWN);
                break;

            case LEFT:
                 cout<<"se cambio a izquierda"<<endl;
                 teclapre=LEFT;
                 v.imprimir(LEFT);
                break;

            case RIGHT:
                cout<<"se cambio a derecha"<<endl;
                teclapre=RIGHT;
                v.imprimir(RIGHT);
                break;
            }
}
void Model::add_vidas()
{
    if (c.puntaje==100){c.vidas+=1;c.puntaje-=100;}
}
void Model::quitarvida()
{
    if (muerte_T==true){c.vidas-=1;muerte_T=false;}
}
void Model::add_puntaje()
{
    if (k_enemy==true){c.puntaje+=15;k_enemy=false;}
}
void Model::add_puntaje(int p)
{
    c.puntaje+=p;
}
void Model::show_puntaje()
{
    v.show_puntaje(c.puntaje);
}
bool Model::col(int x, int y, int xz, int yz){
    if (x==xz && y ==yz)
        {return true;}
    else
        return false;
}
