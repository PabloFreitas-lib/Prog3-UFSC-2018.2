/*
 * main.cpp
 *
 *  Created on: Aug 29, 2018
 *      Author: Freitas
 */

#include "rectangle.hpp"

int main(void)
{
Rectangle teste;
v_t cod1,cod2,cod3,cod4;
        //cod1.setVt(1.0,15.0);                        cod2.setVt(19.0,15.0);
        
        //cod3.setVt(1.0,1.0);                        cod4.setVt(19.0,1.0);

cout << " teste.Perimeter(teste) --> " << teste.Perimeter(teste) << endl;
cout << " teste.Area(teste) --> " << teste.Area(teste) << endl;
if(teste.Square()){
    cout << "Eh um quadrado" << endl;
}else{
    cout << "Nao eh um quadrado " << endl;
}

cout << "\nInput Character que sera a parte de dentro do Retangulo e dps o caracter que sera as bordas" << endl;
char c,cx;
teste.setFillCharacter(c);
teste.setPerimeterCharacter(cx);
teste.draw(teste);


//return(0);
}
