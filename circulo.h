#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
/**
 * @brief A classe Circulo eh derivada da classe abstrata Figura Geometrica
 * Esta classe realiza o tratamento de circulos e serve para desenhar circulos na tela virtual de classe Screen
 */
class Circulo : public FiguraGeometrica{
private:
    int x0;
    int y0;
    int r;
    bool fill;

public:
    /** @brief Construtor da classe circulo
     *  @param _x0 coordenada x do ponto central do circulo a ser desenhado
     *  @param _y0 coordenada y do ponto central do circulo a ser desenhado
     *  @param _r tamanho do raio do circulo a ser desenhado
     *  @param _fill determina o preenchimento ou nao do circulo (fill=1 : circulo eh preenchido)
     */
  Circulo(int _x0, int _y0, int _r, bool _fill);
  /**
   * @brief draw função virtual que desenha o circulo na tela
   * @param tela referencia a um objeto da classe Screen (tela virtual que terá o desenho)
   */
  void draw(Screen &tela);
};

#endif // CIRCULO_H
