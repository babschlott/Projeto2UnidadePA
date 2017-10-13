#include "retangulo.h"
#include <iostream>

using namespace std;
Retangulo::Retangulo(int _x0, int _y0, int _alt, int _larg)
{
    x0=_x0;
    y0=_y0;
    alt=_alt;
    larg=_larg;
}

void Retangulo::draw(Screen &tela){
  cout << "desenha retangulo\n";
  for(int i=x0; i<(x0+larg);i++){
      for(int j=y0;j<(y0+alt);j++){
          tela.setPixel(i,j);
      }
  }

}
