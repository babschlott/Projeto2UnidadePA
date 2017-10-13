#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
/**
 * @brief A classe Reta é derivada da classe abstrata FiguraGeometrica
 * Esta classe realiza o tratamento de retas e serve para armazenar pontos da reta numa matriz ou seja
 * A classe reta desenha a reta na tela virtual da classe Screen
 */
class Reta : public FiguraGeometrica
{
private:
    int x1,x2,y1,y2;
public:
    /**
     * @brief Construtor da classe Reta
     * @param _x1 coordenada x do ponto inicial da reta
     * @param _y1 coordenada y do ponto inicial da reta
     * @param _x2 coordenada x do ponto final da reta
     * @param _y2 coordenada y do ponto final da reta
     */
    Reta(int _x1,int _y1, int _x2, int _y2);
    /**
     * @brief draw função virtual que desenha a Reta na tela
     * @param tela referencia a um objeto da classe Screen(tela virtual em que será desenhada a reta)
     */
    void draw(Screen &tela);

};

#endif // RETA_H
