#include <iostream>
#include <cstring> // protótipos strlen e strncpy
using namespace std;

#include "Employee.h" // Definição da classe Employee
#include "Date.h" // Definição da classe Date

// construtor usa lista de inicializadores de membro p/ passar valores de inicializadores
// para construtores dos objetos membro birthDate e hireDate
// [Nota: Isso invoca o chamado "construtor de cópia padrão" que o
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

   // copia por último para lastName e certifica-se de que ele se ajusta
   length = strlen( last );
   length = ( length < 25 ? length : 24 );
   strncpy( lastName, last, length );
   lastName[ length ] = '\0';

   // gera saída do objeto Employee para mostrar quando o construtor é chamado
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
} // fim da função print

// gera saída do objeto Employee para mostrar quando seu destrutor é chamado
Employee::~Employee()
{ 
   cout << "Employee object destructor: " 
      << lastName << ", " << firstName << endl;
} // fim do destrutor ~Employee
