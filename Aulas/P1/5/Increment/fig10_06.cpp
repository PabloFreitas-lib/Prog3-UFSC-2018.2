#include <iostream>
using namespace std;

#include "Increment.h" // inclui a definição da classe Increment

int main()
{
   Increment value( 10, 5 );

   cout << "Before incrementing: ";
   value.print();

   for ( int j = 1; j <= 3; j++ ) 
   {
      value.addIncrement();
      cout << "After increment " << j << ": ";
      value.print();
   } // fim do for

   return 0;
} // fim de main
