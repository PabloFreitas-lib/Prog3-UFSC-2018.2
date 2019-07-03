// Fig. 10.17: fig10_17.cpp  
// Utilizando o ponteiro this para referenciar membros de objeto.
#include <iostream>
using std::cout;
using std::endl;

class Test 
{
public:
   Test( int = 0 ); // construtor padr�o
   void print() const;
private:
   int x;
}; // fim da classe Test

// construtor
Test::Test( int value ) 
   : x( value ) // inicializa x como value
{ 
   // corpo vazio
} // fim do construtor Test

// imprime x utilizando ponteiros this impl�cito e expl�cito;
// os par�nteses em torno de *this s�o requeridos
void Test::print() const   
{
   // utiliza implicitamente o ponteiro this para acessar o membro x
   cout << "        x = " << x;                                    

   // utiliza explicitamente o ponteiro this e o operador seta
   // para acessar o membro x                                
   cout << "\n  this->x = " << this->x;                      

   // utiliza explicitamente o ponteiro this desreferenciado e
   // o operador ponto para acessar o membro x               
   cout << "\n(*this).x = " << ( *this ).x << endl;          
} // fim da fun��o print

int main()
{
   Test testObject( 12 ); // instancia e inicializa testObject

   testObject.print();
   return 0;
} // fim de main
