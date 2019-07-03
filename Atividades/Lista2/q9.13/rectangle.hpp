/*
 * rectangle.hpp
 *
 *  Created on: Aug 29, 2018
 *      Author: Freitas
 */

#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

#include <iostream>
#include <string>

using namespace std;
/*
    -->(Aprimorando a classe Rectangle) Modifique a classe Rectangle do Exercício 9.12 para incluir uma função draw que exibe o retângulo
    dentro de uma caixa de 25 por 25 para incluir a parte do primeiro quadrante em que o retângulo reside.
    -->Inclua uma função setFillCharacter para especificar o caractere a partir do qual o corpo do retângulo será desenhado.
    -->Inclua uma função setPerimeterCharacter para especificar o caractere que será utilizado para desenhar a borda do retângulo.
    -->Se você se sentir ambicioso, talvez queira incluir funções para dimensionar o tamanho do retângulo, rotacioná-lo e movê-lo dentro da parte designada do primeiro quadrante.
*/
typedef class vertice
{
public:
    void setVt(float,float);
    float getVx(void);
    float getVy(void);
    
private:
    float eixo_x;
    float eixo_y;
}v_t;

typedef class Rectangle
{
    public:

        Rectangle(void);
        ~Rectangle(void);
        void setVertice(v_t);
        void setPlano(v_t,v_t,v_t,v_t);
        void setLength(v_t,v_t);
        void setWidth(v_t,v_t);
        float getLength(void);
        float getWidth(void);
        float Perimeter(Rectangle);
        float Area(Rectangle);
        bool Square(void);
        void draw(Rectangle);
        void setFillCharacter(char);
        void setPerimeterCharacter(char);
        char getFillCharacter(void);
        char getPerimeterCharacter(void);
        
        
    private:
        
        float width;
        float length;
        v_t v1,v2,v3,v4;
        char dentro,borda;

}Rectangle_t;


#endif /* RECTANGLE_HPP_ */
