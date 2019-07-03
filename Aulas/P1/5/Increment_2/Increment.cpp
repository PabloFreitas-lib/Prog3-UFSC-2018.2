#include <iostream>
using namespace std;

#include "Increment.h" // inclui a defini��o da classe Increment

// construtor; membro constante 'increment' n�o � inicializado    
Increment::Increment( int c, int i )                              
{                                                                 
   count = c; // permitida porque count n�o � constante           
   increment = i; // ERRO: N�o � poss�vel modificar um objeto const
} // fim do construtor Increment                                  

// imprime valores de count e increment 
void Increment::print() const
{
   cout << "count = " << count << ", increment = " << increment << endl;
} // fim da fun��o print
