#include "View.h"

void View::imprimir(int a)
{
    switch(a)
           {
            case ENTER:
                 cout<<"Presiono ENTER"<<endl;
                break;

            case TAB:
                 cout<<"Presiono TAB"<<endl;
                break;

            case UP:
                 cout<<"Presiono Flecha Arriba"<<endl;
                break;

            case DOWN:
                 cout<<"Presiono Flecha Abajo"<<endl;
                break;

            case LEFT:
                 cout<<"Presiono Flecha izquierda"<<endl;
                break;

            case RIGHT:
                cout<<"Presiono Flecha derecha"<<endl;
                break;
            }
}
void View::show_puntaje(int a)
{
    cout << "Tu puntaje: " << a << endl;
}
