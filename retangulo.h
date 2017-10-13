#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
/**
 * @brief A classe retangulo é derivada da classe abstrata FiguraGeometrica
 * Esta classe realiza o tratamento de retangulos e serve para desenhar o retangulo na tela virtual da classe Screen
 */
class Retangulo : public FiguraGeometrica
{
private:
    int x0, y0, alt, larg;
public:
    /**
   * @brief Construtor da classe Retangulo
   * @param _x0 coordenada x do ponto do canto superior esquerdo do retangulo
   * @param _y0 coordenada y do ponto do canto superior esquerdo do retangulo
   * @param _alt altura do retangulo
   * @param _larg largura do retangulo a ser desenhado
   */
  Retangulo(int _x0,int _y0, int _alt, int _larg);
  /**
   * @brief draw função virtual que desenha o retangulo na tela
   * @param tela referencia um objeto da classe Screen (tela virtual que receberá o desenho)
   */
  void draw(Screen &tela);
};

#endif // RETANGULO_H
