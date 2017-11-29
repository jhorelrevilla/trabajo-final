#include "View.h"

void View::draw_map(){
    for(int x=0;x<filas;x++){
        for(int y=0;y<columns;y++){
                if (map [x][y] == 'P')
                        cout<<(char(178));
                else if (map [x][y] == 'I')
                    cout<<(char(176));
                else
                    cout<<map[x][y];
        }
        cout<<endl;
    }
}
