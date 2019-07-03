#include <iostream>
using namespace std;

#include "Increment.h" // inclui a definição da classe Increment

// construtor; membro constante 'increment' não é inicializado    
Increment::Increment( int c, int i )                              
{                                                                 
   count = c; // permitida porque count não é constante           
   increment = i; // ERRO: Não é possível modificar um objeto const
} // fim do construtor Increment                                  

// imprime valores de count e increment 
void Increment::print() const
{
   cout << "count = " << count << ", increment = " << increment << endl;
} // fim da função print
