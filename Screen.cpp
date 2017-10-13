#include <iostream>
#include "Screen.h"
#include <vector>


Screen::Screen(int nlin, int ncol)
{
    nl=nlin;
    nc=ncol;

    mat = vector< vector<char> >(nl, vector<char>(nc,' '));

}
void Screen::setBrush(char _brush){
    brush=_brush;
}
void Screen::setPixel(int x, int y){
    mat[y][x]=brush;
}
void Screen::clear()
{
    for(int i=0;i<nl;i++){
        for(int j=0;j<nc;j++){
            mat[i][j]=' ';
        }

    }
}
ostream &operator<<(ostream &os, Screen &t){

    for(int i=0; i<t.nl; i++){
        for(int j=0; j<t.nc; j++){
            os<<t.mat[i][j];
        }
        os<<endl;
    }
    return os;
}
