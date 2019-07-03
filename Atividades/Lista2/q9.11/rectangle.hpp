#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include <iostream>
#include <string>
using namespace std;

/*
 * (Classe Rectangle) Crie uma classe Rectangle com atributos length e width, cada um dos quais assume o padrão de 1. Forneça
funções-membro que calculam os atributos perimeter e area do retângulo. Além disso, forneça as funções set e get para os atributos
length e width. As funções set devem verificar se length e width são números de ponto flutuante maiores que 0,0 e menores
que 20,0.
*/

class Rectangle
{
public:
    Rectangle(void);
    ~Rectangle(void);
    
    void setLength(float);
    void setWidth(float);
    float getLength(void);
    float getWidth(void);
    
    float Perimeter(Rectangle);
    float Area(Rectangle);
private:
    float length;
    float width;
};
#endif
