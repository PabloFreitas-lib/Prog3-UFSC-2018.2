#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee 
{
public:
   Employee( const char * const, const char * const ); // construtor
   ~Employee(); // destrutor
   const char *getFirstName() const; // retorna o nome
   const char *getLastName() const; // retorna o sobrenome

   // função membro static                                        
   static int getCount(); // retorna número de objetos instanciados
private:
   char *firstName;
   char *lastName;

   // dados static                                   
   static int count; // número de objetos instanciados
}; // fim da classe Employee

#endif
