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
void View::draw_prota(int xz,int yz){
    map[xz][yz]='B';
}
void View::draw_nulprota(int xz,int yz){
    map[xz][yz]=' ';
}
void View::draw_nulbomba(int xz,int yz,int tamanio){
    for(int i = 0;i<=tamanio;++i){
        map[xz][yz+i]=' ';
        map[xz][yz-i]=' ';
        map[xz+i][yz]=' ';
        map[xz-i][yz]=' ';
    }
}
bool View::ver_parA(int xz,int yz){
    if (map[xz][yz]=='P'){
        return true;
    }
    else
        return false;
}
void View::draw_bomba(int xz,int yz,int tamanio){
    for(int i = 0;i<=tamanio;++i){
        map[xz][yz+i]='X';
        map[xz][yz-i]='X';
        map[xz+i][yz]='X';
        map[xz-i][yz]='X';
    }
}
