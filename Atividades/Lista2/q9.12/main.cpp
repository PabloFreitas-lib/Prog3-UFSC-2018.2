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
cout << " teste.Perimeter(teste) --> " << teste.Perimeter(teste) << endl;
cout << " teste.Area(teste) --> " << teste.Area(teste) << endl;
if(teste.Square()){
    cout << "Eh um quadrado" << endl;
}else{
    cout << "Nao eh um quadrado " << endl;
}

return(0);
}
