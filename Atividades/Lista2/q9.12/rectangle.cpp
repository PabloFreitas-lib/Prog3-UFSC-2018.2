/*
 * rectangle.cpp
 *
 *  Created on: Aug 29, 2018
 *      Author: Freitas
 */

#include "rectangle.hpp"
/* Essa classe armazena somente as coordenadas cartesianas dos quatro vértices do retângulo. O construtor chama uma função set que aceita
quatro conjuntos de coordenadas e verifica se cada um deles está no primeiro quadrante sem coordenadas x ou y individualmente maiores
que 20,0. A função set também verifica se as coordenadas fornecidas especificam de fato um retângulo. Forneça funções-membro que
calculam length, width, perimeter e area. O comprimento é o maior das duas dimensões. Inclua uma função predicado square
que determina se o retângulo é um quadrado.
*/
//--------------BASIC--------------------
    void v_t::setVt(float x ,float y )
    {
        eixo_x = x;
        eixo_y = y;
    }
    float v_t::getVx(void)
    {
        return(eixo_x);
    }
    float v_t::getVy(void)
    {
        return(eixo_y);
    }
//-----------PreSet--------------------
// Assume valores padroes de 1
    Rectangle::Rectangle(void)
    {
        setPlano(v1,v2,v3,v4);
        //cout << "Build Done" << endl;
    }
    Rectangle::~Rectangle(void)
    {
        //cout << "Destroy Done" << endl;
    }

//-------------------------------------------------

/*                 (1.0)                           (4.0)                  
                    
        (3.0)-----> v1------------------------------v2              eixos x iguais
                    |                                |
                    |                                |
                    |                                |
                    |                                |
                    |                                |
         (1.0)--->  v3-------------------------------v4             eixos x iguais
                    
              eixos y iguais                    eixos y iguais

*/


//-----------------BASIC------------------
/*
    verifica se cada um deles está no primeiro quadrante sem coordenadas x ou y individualmente maiores
que 20,0. A função set também verifica se as coordenadas fornecidas especificam de fato um retângulo.
*/
    void Rectangle::setPlano(v_t cod1,v_t cod2,v_t cod3,v_t cod4)
    {
        
        cod1.setVt(1.0,3.0);                        cod2.setVt(3.0,3.0);
        
        cod3.setVt(1.0,1.0);                        cod4.setVt(3.0,1.0);
                                
        
        if(cod1.getVx() <= 0 || cod1.getVx() >=20)
            cout << "Vertice 1 tem problema" << endl;
            if(cod2.getVx() <= 0 || cod2.getVx() >=20)
                cout << "Vertice 2 tem problema" << endl;
                if(cod3.getVx() <= 0 || cod3.getVx() >=20)
                    cout << "Vertice 3 tem problema" << endl;
                    if(cod4.getVx() <= 0 || cod4.getVx() >=20)
                        cout << "Vertice 4 tem problema" << endl;
                    
            // verifica se o v1 possui o x igual ao v2   &&   verifica se o v3 possui o x igual ao v4 
                if( cod1.getVx() != cod3.getVx()         ||   cod2.getVx() != cod4.getVx() ){
                     cout << "Erro no vertice 1 e vertice 2 ou vertice 3 e 4 (EIXOS X)" << endl;
                     return;
                }
            // verifica se o v1 possui o y igual o v3    &&    verifica se o v2 possui o y igual o v4
                if(cod1.getVy() != cod2.getVy()          ||      cod3.getVy() != cod4.getVy() ){
                        cout << "Erro no vertice 1 e vertice 3 ou vertice 2 e 4 (EIXOS Y)" << endl;
                        return;
                }
                
                setLength(cod1,cod2);
                setWidth(cod1,cod3);
    }
    void Rectangle::setLength(v_t Vx,v_t Vx0)
    {
                length = Vx0.getVx() - Vx.getVx();
    }

    void Rectangle::setWidth(v_t Vy,v_t Vy0)
    {
                width = Vy.getVy()- Vy0.getVy();
    }
    float Rectangle::getLength(void)
    {
        return(length);
    }
    float Rectangle::getWidth(void)
    {
        return(width);
    }
//----------CALCULUS---------------------------------------------
    float Rectangle::Perimeter(Rectangle geometria)
    {
        return(2*(geometria.getLength() + geometria.getWidth()));
    }
    float Rectangle::Area(Rectangle geometria)
    {
        return(geometria.getLength() * geometria.getWidth());
    }
    bool Rectangle::Square(void)
    {
    	if(length == width){
    		return(true);
    	}else{
    		return(false);
    	}
    }
