#include <iostream>
using namespace std;

#include "Employee.h" // Definição da classe Employee

int main()
{
   // utiliza o nome da classe e o operador de resolução de escopo binário para
   // acessar a função static number getCount 
   cout << "Number of employees before instantiation of any objects is "
      << Employee::getCount() << endl; // utiliza o nome da classe

   // utiliza new para criar dinamicamente dois novos Employees
   // operador new também chama o construtor do objeto        
   Employee *e1Ptr = new Employee( "Susan", "Baker" );        
   Employee *e2Ptr = new Employee( "Robert", "Jones" );       

   // chama getCount no primeiro objeto Employee
   cout << "Number of employees after objects are instantiated is "
      << e1Ptr->getCount();

   cout << "\n\nEmployee 1: " 
      << e1Ptr->getFirstName() << " " << e1Ptr->getLastName() 
      << "\nEmployee 2: " 
      << e2Ptr->getFirstName() << " " << e2Ptr->getLastName() << "\n\n";

   delete e1Ptr; // desaloca memória                                   
   e1Ptr = 0; // desconecta o ponteiro do espaço de armazenamento livre.
   delete e2Ptr; // desaloca memória                                   
   e2Ptr = 0; // desconecta o ponteiro do espaço de armazenamento livre.

   // não existe nenhum objeto, portanto, chama a função membro static getCount
   // utilizando o nome da classe e o operador de resolução de escopo binário
   cout << "Number of employees after objects are deleted is "
      << Employee::getCount() << endl;
   return 0;
} // fim de main
