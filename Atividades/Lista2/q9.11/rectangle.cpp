#include "rectangle.hpp"
/*
 (Classe Rectangle) Crie uma classe Rectangle com atributos length e width, cada um dos quais assume o padrão de 1. Forneça
funções-membro que calculam os atributos perimeter e area do retângulo. Além disso, forneça as funções set e get para os atributos
length e width. As funções set devem verificar se length e width são números de ponto flutuante maiores que 0,0 e menores
que 20,0.
*/
//-----------PreSet--------------------
// Assume valores padroes de 1
    Rectangle::Rectangle(void)
    {
        length = 1.0;
        width = 1.0;
    }
    Rectangle::~Rectangle(void)
    {
        
    }
//-----------------BASIC------------------
//length e width são números de ponto flutuante maiores que 0,0 e menores
//que 20,0.
    void Rectangle::setLength(float L)
    {
        if(L >=0.0 && L <=20.0){
            length = L;
        }else{
            cout << "Entre com um valor entre 0.0 - 20.0 (length)" << endl;
            cin >> L;
            length = L;
        }
    }
    void Rectangle::setWidth(float W){
        if(W >=0.0 && W <=20.0){
            width = W;
        }else{
            cout << "Entre com um valor entre 0.0 - 20.0 (width) " << endl;
            cin >> W;
            width = W;
            
        }
    }
    float Rectangle::getLength(void)
    {
        return(length);
    }
    float Rectangle::getWidth(void)
    {
        return(width);
    }
//----------CALCULUS-----------------------------
    float Rectangle::Perimeter(Rectangle fernsehen)
    {
        return(2*(fernsehen.getLength() + fernsehen.getWidth()));
    }
    float Rectangle::Area(Rectangle fernsehen)
    {
        return(fernsehen.getLength() * fernsehen.getWidth());
    }
//-------------------------------------------------
