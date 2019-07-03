#include <iostream>
using std::cout;
using std::endl;

#include "Employee.h" // Defini��o da classe Employee

int main()
{
   Date birth( 7, 24, 1949 );
   Date hire( 3, 12, 1988 );
   Employee manager( "Bob", "Blue", birth, hire );

   cout << endl;
   manager.print();

   cout << "\nTest Date constructor with invalid values:\n";
   Date lastDayOff( 14, 35, 1994 ); // m�s e dia inv�lidos
   cout << endl;
   return 0;
} // fim de main
