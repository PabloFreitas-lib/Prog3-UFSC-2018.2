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

/* Essa classe armazena somente as coordenadas cartesianas dos quatro vértices do retângulo. O construtor chama uma função set que aceita
quatro conjuntos de coordenadas e  Forneça funções-membro que
calculam length, width, perimeter e area. O comprimento é o maior das duas dimensões. Inclua uma função predicado square
que determina se o retângulo é um quadrado.
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
        void setPlano(v_t,v_t,v_t,v_t);
        void setLength(v_t,v_t);
        void setWidth(v_t,v_t);
        float getLength(void);
        float getWidth(void);
        float Perimeter(Rectangle);
        float Area(Rectangle);
        bool Square(void);
        
    private:
        
        float width;
        float length;
        v_t v1,v2,v3,v4;

}Rectangle_t;


#endif /* RECTANGLE_HPP_ */
