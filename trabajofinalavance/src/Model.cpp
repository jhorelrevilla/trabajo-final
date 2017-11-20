#include "Model.h"

void Model::cambiotecla(int a){
    switch(a)
           {
            case 13:
                 cout<<"se cambio a enter"<<endl;
                 teclapre=13;
                 v.imprimir(13);
                break;

            case 9:
                 cout<<"se cambio a TAB"<<endl;
                 teclapre=9;
                 v.imprimir(9);
                break;

            case 72:
                 cout<<"se cambio a  Arriba"<<endl;
                 teclapre=72;
                 v.imprimir(72);
                break;

            case 80:
                 cout<<"se cambio a  Abajo"<<endl;
                 teclapre=80;
                 v.imprimir(80);
                break;

            case 75:
                 cout<<"se cambio a  izquierda"<<endl;
                 teclapre=75;
                 v.imprimir(75);
                break;

            case 77:
                cout<<"se cambio a  derecha"<<endl;
                teclapre=77;
                v.imprimir(77);
                break;
            }
}
