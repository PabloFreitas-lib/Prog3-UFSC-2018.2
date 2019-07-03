#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Date.h" // inclui defini��o da classe Date

class Employee
{
public:
   Employee( const char * const, const char * const, 
      const Date &, const Date & );
   void print() const;
   ~Employee(); // fornecida para confirmar a ordem de destrui��o
private:
   char firstName[ 25 ];
   char lastName[ 25 ];
   const Date birthDate; // composi��o: Controle de acesso de membro
   const Date hireDate; // composi��o: Controle de acesso de membro
}; // fim da classe Employee

#endif
