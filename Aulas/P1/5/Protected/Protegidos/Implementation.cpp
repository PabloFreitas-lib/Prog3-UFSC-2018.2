#include "Implementation.h"

Implementation::Implementation( int v )  
  : value( v ) // inicializa value como v
{} // corpo vazio


void Implementation::setValue( int v ) // configura valor como v
{ 
  value = v; // deve validar v
} // fim da função setValue

// retorna value
int Implementation::getValue() const      
{ 
  return value; 
} // fim da função getValue
