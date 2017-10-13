#include "reta.h"
#include <iostream>

using namespace std;

Reta::Reta(int _x1,int _y1, int _x2, int _y2){
    x1=_x1;
    x2=_x2;
    y1=_y1;
    y2=_y2;
}
void Reta::draw(Screen &tela){
    cout << "desenha reta\n";
    int x, y, s1, s2, Delta_x, Delta_y;
    int Troca, Temp, new_e;

     x = x1;
     y = y1;
     Delta_x = abs(x2 - x1);
     Delta_y = abs(y2 - y1);
     // sinal positivo, negativo ou nulo ///
     if((x2-x1)==0){
         s1=0;
     }
     if((x2-x1)<0){
         s1=-1;
     }
     if((x2-x1)>0){
         s1=1;
     }
     if((y2-y1)==0){
         s2=0;
     }
     if((y2-y1)>0){
         s2=1;
     }
     if((y2-y1)<0){
         s2=-1;
     }

     if(Delta_y > Delta_x){
       Temp = Delta_x;
       Delta_x = Delta_y;
       Delta_y = Temp;
       Troca = 1;
     }
     else{
       Troca = 0;
     }
     new_e = 2*Delta_y - Delta_x;
     for(int i=1; i<= Delta_x; i++){
       tela.setPixel(x,y);
       while (new_e >= 0){
         if(Troca == 1){
           //Muda para a proxima linha de rasterização
           x = x + s1;
         }
         else{
           y = y + s2;
         }
         new_e = new_e - 2*Delta_x;
       }

       //Permanece nesta linha de rasterização
       if(Troca == 1){
         y = y + s2;
       }
       else{
         x = x + s1;
       }
       new_e= new_e + 2*Delta_y;
     }
}

