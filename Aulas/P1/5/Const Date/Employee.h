#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Date.h" // inclui definição da classe Date

class Employee
{
public:
   Employee( const char * const, const char * const, 
      const Date &, const Date & );
   void print() const;
   ~Employee(); // fornecida para confirmar a ordem de destruição
private:
   char firstName[ 25 ];
   char lastName[ 25 ];
   const Date birthDate; // composição: Controle de acesso de membro
   const Date hireDate; // composição: Controle de acesso de membro
}; // fim da classe Employee

#endif
