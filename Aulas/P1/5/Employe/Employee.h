#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee 
{
public:
   Employee( const char * const, const char * const ); // construtor
   ~Employee(); // destrutor
   const char *getFirstName() const; // retorna o nome
   const char *getLastName() const; // retorna o sobrenome

   // fun��o membro static                                        
   static int getCount(); // retorna n�mero de objetos instanciados
private:
   char *firstName;
   char *lastName;

   // dados static                                   
   static int count; // n�mero de objetos instanciados
}; // fim da classe Employee

#endif
