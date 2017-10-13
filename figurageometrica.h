#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "Screen.h"
#include <iostream>
/**
 * @brief A classe FiguraGeometrica  é uma classe abstrata que serve de base para a criação
 * das classes derivadas Reta, Retangulo e Circulo
 * Esta classe realiza o tratamento de figuras geometricas e possui uma função virtual pura
 * para realizar desenhos em uma tela virtual
 */
class FiguraGeometrica{
public:

  FiguraGeometrica();
  // funcoes virtuais puras servem para
  // forcar as classes derivadas a implementarem
  // esse metodo, de forma que ele possa ser
  // chamado quando necessario for
  /**
   * @brief draw função virtual pura que será implementada em todas as classes derivadas da classe FiguraGeometrica
   * esta função realiza o desenho da figura(reta,circulo ou retangulo) numa tela virtual quando chamada
   * @param tela referencia a um objeto da classe Screen que terá o desenho armazenado
   */
  virtual void draw(Screen &tela)=0;
  virtual ~FiguraGeometrica(){
      cout<<"destruindo figura\n";
  }
};

#endif // FIGURAGEOMETRICA_H
