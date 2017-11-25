#include "Model.h"

Model::Model()
{
    vidas=3;
    puntaje=0;
    dmg=false;
    muerte_T=false;
    player_S="";
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
    if (puntaje==100){vidas+=1;}
}
void Model::quitarvida()
{
    if (muerte_T==true){vidas-=1;}
}
void Model::add_puntaje()
{
    if (k_enemy==true){puntaje+=15;}
}
void Model::setN_S(std::string player_S)
{
    this->player_S=player_S;
}
void Model::show_puntaje()
{
    v.show_puntaje(this->puntaje);
}
bool Model::col(int x, int y, int xz, int yz){
    if (x==xz && y ==yz)
        {return true;}
    else
        return false;
}
