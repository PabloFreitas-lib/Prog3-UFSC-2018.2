#include <iostream>
using namespace std;

#include "Increment.h" // inclui a definição da classe Increment

// construtor
Increment::Increment( int c, int i )
   : count( c ), // inicializador para membro não-const        
     increment( i ) // inicializador requerido para membro const
{ 
   // corpo vazio
} // fim do construtor Increment

// imprime valores de count e increment 
void Increment::print() const
{
   cout << "count = " << count << ", increment = " << increment << endl;
} // fim da função print
