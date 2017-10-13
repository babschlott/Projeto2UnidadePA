#include "circulo.h"
#include <iostream>
#include <cmath>

using namespace std;

Circulo::Circulo(int _x0, int _y0, int _r, bool _fill){
x0=_x0;
y0=_y0;
r=_r;
fill=_fill;
}

void Circulo::draw(Screen &tela){
  cout << "desenha circulo\n";
  int x2,x1,y2,y1, mod;
  x2=x0+r;
  x1=x0-r;
  y2=y0+r;
  y1=y0-r;


  for(int i=x1; i<=x2; i++){
      for(int j=y1;j<=y2;j++){
           mod=round(sqrt(pow(i-x0,2)+pow(j-y0,2)));
          if(fill){
              if(mod<=r){
              tela.setPixel(i,j);
              }
          }
          else{
              if(mod==r){
                  tela.setPixel(i,j);
              }
          }


      }


  }
}


