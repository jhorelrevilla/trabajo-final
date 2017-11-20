#include "View.h"

void View::imprimir(int a)
{
    switch(a)
           {
            case 13:
                 cout<<"Presiono ENTER"<<endl;
                break;

            case 9:
                 cout<<"Presiono TAB"<<endl;
                break;

            case 72:
                 cout<<"Presiono Flecha Arriba"<<endl;
                break;

            case 80:
                 cout<<"Presiono Flecha Abajo"<<endl;
                break;

            case 75:
                 cout<<"Presiono Flecha izquierda"<<endl;
                break;

            case 77:
                cout<<"Presiono Flecha derecha"<<endl;
                break;
            }
}
