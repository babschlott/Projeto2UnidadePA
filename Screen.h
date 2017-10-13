#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <fstream>
using namespace std;
/**
 * @brief A classe Screen é uma classe concreta que serve para desenhar pontos em uma tela virtual
 * os pontos sao armazenados em uma matriz do tipo char que depois será impressa
 */
class Screen
{

    private:
        int nl, nc;
        char brush;
        vector< vector<char> > mat;


    public:
        /**
         * @brief Construtor da classe Screen
         * @param nlin numero de linhas da matriz que irá compor a tela virtual
         * @param ncol numero de colunas da matriz que irá compora tela virtual
         */
        Screen(int nlin, int ncol);
        /**
         * @brief clear cada elemento da matriz é limpo ou seja atribui-se ' ' este espaço em branco em todos os
         * elementos da matriz da tela
         */
        void clear();
        /**
         * @brief setBrush determina o pincel utilizado para desenhar os pontos na tela virtual
         * @param _brush caractere utilizado como pincel
         */
        void setBrush(char _brush);
        /**
         * @brief setPixel atribui o caractere do pincel no elemento da matriz localizado nas coordenadas x e y especificadas
         * @param x coordenada x do ponto a ser desenhado
         * @param y coordenada y do ponto a ser desenhado
         */
        void setPixel(int x, int y);
        /**
         * @brief operator << sobrecarga do operador <<
         * @param os referencia a objeto ostream
         * @param tela referencia a um objeto(tela virtual) da classe Screen
         * @return objeto da classe Screen
         */
        friend ostream& operator<<(ostream &os, Screen &tela);

};

#endif // SCREEN_H
