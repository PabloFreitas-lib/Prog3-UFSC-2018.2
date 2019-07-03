/*
 * rectangle.cpp
 *
 *  Created on: Aug 29, 2018
 *      Author: Freitas
 */

#include "rectangle.hpp"
/* (Aprimorando a classe Rectangle) Modifique a classe Rectangle do Exercício 9.12 para incluir uma função draw que exibe o retângulo
dentro de uma caixa de 25 por 25 para incluir a parte do primeiro quadrante em que o retângulo reside. Inclua uma função setFillCharacter
para especificar o caractere a partir do qual o corpo do retângulo será desenhado. Inclua uma função setPerimeterCharacter
para especificar o caractere que será utilizado para desenhar a borda do retângulo. Se você se sentir ambicioso, talvez queira incluir funções
para dimensionar o tamanho do retângulo, rotacioná-lo e movê-lo dentro da parte designada do primeiro quadrante.
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
        
        cod1.setVt(1.0,15.0);                        cod2.setVt(19.0,15.0);
        
        cod3.setVt(1.0,1.0);                        cod4.setVt(19.0,1.0);
                                
        
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

    
//----------------DRAW-----------------------------------------------

void Rectangle::draw(Rectangle geometria)
{
unsigned int x = geometria.getLength(); // declare x
unsigned int y = geometria.getWidth(); // declare y

//cout << '+';
cout << getPerimeterCharacter();
    for ( unsigned int j = 1; j < 25; ++j ){ // count from 1 to x
               // cout << '-'; // output @
        cout << getPerimeterCharacter();
    }
//cout << '+';
cout << getPerimeterCharacter();

cout << endl; // begin new line 

for ( unsigned int i = 1; i <= y; ++i ) // count from 1 to y
    {
        //cout << '|';
        cout << getPerimeterCharacter();
        
            for ( unsigned int j = 1; j <= x; ++j ) // count from 1 to x
                cout << geometria.getFillCharacter(); // output @
        cout << "      " << getPerimeterCharacter();;
        cout << endl; // begin new line   
    }
    
    //cout << '+' ;
    cout << getPerimeterCharacter();
    for ( unsigned int j = 1; j < 25; ++j ){ // count from 1 to x
            //cout << '-'; // output @  
        cout << getPerimeterCharacter();
    }
    cout << getPerimeterCharacter();
    //cout << '+' ;
}

void Rectangle::setFillCharacter(char c){
    cin >> c;
    dentro = c;
}


void Rectangle::setPerimeterCharacter(char c){
    cin >> c;
    borda = c;
}

char Rectangle::getFillCharacter(void)
{
    return(dentro);
}

char Rectangle::getPerimeterCharacter(void)
{
    return(borda);
}
    
