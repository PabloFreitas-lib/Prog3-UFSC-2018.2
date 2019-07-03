#include "Interface.h" // Defini��o da classe Interface
#include "Implementation.h" // Defini��o da classe Implementation

// construtor
Interface::Interface( int v ) 
   : ptr ( new Implementation( v ) ) // inicializa ptr para apontar para
{                                    // um novo objeto Implementation
   // corpo vazio
} // fim do construtor Interface

// chama a fun��o setValue de Implemention
void Interface::setValue( int v ) 
{ 
   ptr->setValue( v ); 
} // fim da fun��o setValue

// chama a fun��o getValue de Implemention
int Interface::getValue() const 
{ 
   return ptr->getValue(); 
} // fim da fun��o getValue

// destrutor
Interface::~Interface() 
{ 
   delete ptr; 
} // fim do destrutor ~Interface
