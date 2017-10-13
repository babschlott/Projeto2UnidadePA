#include <iostream>
#include "figurageometrica.h"
#include "circulo.h"
#include "retangulo.h"
#include "reta.h"
#include "Screen.h"
#include <vector>

using namespace std;


int main(){
    // altura e largura da tela //
    int altura=30;
    int largura=30;
    int xret,yret,altret,largret;
    int xcirc,ycirc,raio;
    int xi,yi,xf,yf;
    Screen t(altura,largura);
    bool fillmode;
    bool saida=0;
    char b='*';
    // setando o pincel como * ///
    t.setBrush(b);
    t.clear();
    int resposta;

    // array de ponteiros de figura geometrica (classe base) //
    vector <FiguraGeometrica*> figuras;
    while(saida!=1){
    cout<<"O que deseja desenhar? Digite \n 1 = Retangulo \n 2 = Reta \n 3 = Circulo \n";
    cin>>resposta;


    // ponteiro da classe Retangulo //
    if(resposta==1){
        cout<<"coordenada x do ponto inicial(superior esquerdo) do retangulo : ";
        cin>>xret;
        cout<<"coordenada y do ponto inicial(superior esquerdo) do retangulo : ";
        cin>>yret;
        cout<<"altura do retangulo : ";
        cin>>altret;
        cout<<"largura do retangulo : ";
        cin>>largret;
        Retangulo *ret;
        ret=new Retangulo(xret,yret,altret,largret);
        figuras.push_back(ret);
        cout<<"desenha retangulo na tela\n";
        for(int i=0; i<figuras.size(); i++){
            figuras[i]->draw(t);
        }
        cout<<"impressao da tela com retangulo desenhado: \n";
        cout<<t;
    }

    // ponteiro da classe derivada Reta
    if(resposta==2){

        cout<<"coordenada x do ponto inicial da reta : ";
        cin>>xi;
        cout<<"coordenada y do ponto inicial da reta : ";
        cin>>yi;
        cout<<"coordenada x do ponto final da reta : ";
        cin>>xf;
        cout<<"coordenada y do ponto final da reta : ";
        cin>>yf;
        Reta *r;
        r=new Reta(xi,yi,xf,yf);
        figuras.push_back(r);
        cout<<"desenha reta na tela \n";
        for(int i=0; i<figuras.size(); i++){
            figuras[i]->draw(t);
        }
        cout<<"impressao da tela com reta desenhada \n";
        cout<<t;
    }

    // Circulo //
    if(resposta==3){
        cout<<"Circulo preenchido(digite 1) ou circulo sem preenchimento(digite 0)? : ";
        cin>>fillmode;
        cout<<"coordenada x do ponto central do circulo : ";
        cin>>xcirc;
        cout<<"coordenada y do ponto central do circulo : ";
        cin>>ycirc;
        cout<<"raio do circulo : ";
        cin>>raio;
        Circulo *c;
        c = new Circulo(xcirc,ycirc,raio,fillmode);
        figuras.push_back(c);
        cout<<"desenha circulo na tela \n";
        for(int i=0; i<figuras.size(); i++){
            figuras[i]->draw(t);
        }
        cout<<"impressao da tela com circulo desenhado \n";
        cout<<t;
    }

    cout<<"limpa tela \n";
    figuras.clear();
    t.clear();
    cout<<"Deseja sair? Se sim digite 1 : ";
    cin>>saida;
    }



    return 0;
}
