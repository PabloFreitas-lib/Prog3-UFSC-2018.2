#include "Interface.h" // Definição da classe Interface
#include "Implementation.h" // Definição da classe Implementation

// construtor
Interface::Interface( int v ) 
   : ptr ( new Implementation( v ) ) // inicializa ptr para apontar para
{                                    // um novo objeto Implementation
   // corpo vazio
} // fim do construtor Interface

// chama a função setValue de Implemention
void Interface::setValue( int v ) 
{ 
   ptr->setValue( v ); 
} // fim da função setValue

// chama a função getValue de Implemention
int Interface::getValue() const 
{ 
   return ptr->getValue(); 
} // fim da função getValue

// destrutor
Interface::~Interface() 
{ 
   delete ptr; 
} // fim do destrutor ~Interface
