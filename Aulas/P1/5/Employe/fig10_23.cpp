#include <iostream>
using namespace std;

#include "Employee.h" // Defini��o da classe Employee

int main()
{
   // utiliza o nome da classe e o operador de resolu��o de escopo bin�rio para
   // acessar a fun��o static number getCount 
   cout << "Number of employees before instantiation of any objects is "
      << Employee::getCount() << endl; // utiliza o nome da classe

   // utiliza new para criar dinamicamente dois novos Employees
   // operador new tamb�m chama o construtor do objeto        
   Employee *e1Ptr = new Employee( "Susan", "Baker" );        
   Employee *e2Ptr = new Employee( "Robert", "Jones" );       

   // chama getCount no primeiro objeto Employee
   cout << "Number of employees after objects are instantiated is "
      << e1Ptr->getCount();

   cout << "\n\nEmployee 1: " 
      << e1Ptr->getFirstName() << " " << e1Ptr->getLastName() 
      << "\nEmployee 2: " 
      << e2Ptr->getFirstName() << " " << e2Ptr->getLastName() << "\n\n";

   delete e1Ptr; // desaloca mem�ria                                   
   e1Ptr = 0; // desconecta o ponteiro do espa�o de armazenamento livre.
   delete e2Ptr; // desaloca mem�ria                                   
   e2Ptr = 0; // desconecta o ponteiro do espa�o de armazenamento livre.

   // n�o existe nenhum objeto, portanto, chama a fun��o membro static getCount
   // utilizando o nome da classe e o operador de resolu��o de escopo bin�rio
   cout << "Number of employees after objects are deleted is "
      << Employee::getCount() << endl;
   return 0;
} // fim de main
