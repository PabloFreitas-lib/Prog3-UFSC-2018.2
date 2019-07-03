#include <iostream>
#include <cstring> // prot�tipos strlen e strncpy
using namespace std;

#include "Employee.h" // Defini��o da classe Employee
#include "Date.h" // Defini��o da classe Date

// construtor usa lista de inicializadores de membro p/ passar valores de inicializadores
// para construtores dos objetos membro birthDate e hireDate
// [Nota: Isso invoca o chamado "construtor de c�pia padr�o" que o
// compilador C++ fornece implicitamente.]   
Employee::Employee( const char * const first, const char * const last,
   const Date &dateOfBirth, const Date &dateOfHire )
   : birthDate( dateOfBirth ), // inicializa birthDate
     hireDate( dateOfHire ) // inicializa hireDate
{
   // copia primeiro para firstName e certifica-se de que ele se ajusta
   int length = strlen( first );
   length = ( length < 25 ? length : 24 );
   strncpy( firstName, first, length );
   firstName[ length ] = '\0';

   // copia por �ltimo para lastName e certifica-se de que ele se ajusta
   length = strlen( last );
   length = ( length < 25 ? length : 24 );
   strncpy( lastName, last, length );
   lastName[ length ] = '\0';

   // gera sa�da do objeto Employee para mostrar quando o construtor � chamado
   cout << "Employee object constructor: " 
      << firstName << ' ' << lastName << endl;
} // fim do construtor Employee

// imprime objeto Employee 
void Employee::print() const
{
   cout << lastName << ", " << firstName << "  Hired: ";
   hireDate.print();
   cout << "  Birthday: ";
   birthDate.print();
   cout << endl;
} // fim da fun��o print

// gera sa�da do objeto Employee para mostrar quando seu destrutor � chamado
Employee::~Employee()
{ 
   cout << "Employee object destructor: " 
      << lastName << ", " << firstName << endl;
} // fim do destrutor ~Employee
