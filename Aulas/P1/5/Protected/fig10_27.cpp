#include <iostream>
using std::cout;
using std::endl;

#include "Interface.h" // Definição da classe Interface

int main()
{
   Interface i( 5 ); // cria objeto Interface
 
   cout << "Interface contains: " << i.getValue() 
      << " before setValue" << endl;

   i.setValue( 10 );

   cout << "Interface contains: " << i.getValue() 
      << " after setValue" << endl;
   return 0;
} // fim de main
