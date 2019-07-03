// Fig. 13.10: fig13_10.cpp
// Introduzindo polimorfismo, fun��es virtual e vincula��o din�mica.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

// inclui defini��es de classe
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h" 

int main()
{
   // cria objeto de classe b�sica
   CommissionEmployee commissionEmployee( 
      "Sue", "Jones", "222-22-2222", 10000, .06 );

   // cria ponteiro de classe b�sica
   CommissionEmployee *commissionEmployeePtr = 0;

   // cria objeto de classe derivada
   BasePlusCommissionEmployee basePlusCommissionEmployee(
      "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );

   // cria ponteiro de classe derivada
   BasePlusCommissionEmployee *basePlusCommissionEmployeePtr = 0;

   // configura a formata��o de sa�da de ponto flutuante
   cout << fixed << setprecision( 2 );

   // gera sa�da de objetos utilizando vincula��o est�tica
   cout << "Invoking print function on base-class and derived-class "
      << "\nobjects with static binding\n\n";
   commissionEmployee.print(); // vincula��o est�tica
   cout << "\n\n";
   basePlusCommissionEmployee.print(); // vincula��o est�tica
   
   // gera sa�da de objetos utilizando vincula��o din�mica
   cout << "\n\n\nInvoking print function on base-class and "
      << "derived-class \nobjects with dynamic binding";

   // aponta o ponteiro de classe b�sica para o objeto de classe b�sica e imprime
   commissionEmployeePtr = &commissionEmployee;                                 
   cout << "\n\nCalling virtual function print with base-class pointer"
      << "\nto base-class object invokes base-class "
      << "print function:\n\n";
   commissionEmployeePtr->print(); // invoca print da classe b�sica

   // aponta o ponteiro de classe derivada p/ o objeto de classe derivada e imprime
   basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;                   
   cout << "\n\nCalling virtual function print with derived-class "
      << "pointer\nto derived-class object invokes derived-class "
      << "print function:\n\n";
   basePlusCommissionEmployeePtr->print(); // invoca print da classe derivada

   // aponta o ponteiro de classe b�sica para o objeto de classe derivada e imprime
   commissionEmployeePtr = &basePlusCommissionEmployee;                           
   cout << "\n\nCalling virtual function print with base-class pointer"
      << "\nto derived-class object invokes derived-class "
      << "print function:\n\n";

   // polimorfismo; invoca print de BasePlusCommissionEmployee;
   // ponteiro de classe b�sica para objeto de classe derivada
   commissionEmployeePtr->print();                            
   cout << endl;
   return 0;
} // fim de main


/**************************************************************************
 * (C) Copyright 1992-2005 Deitel & Associates, Inc. e                    *
 * Pearson Education, Inc. Todos os direitos reservados                   *
 *                                                                        *
 * NOTA DE ISEN��O DE RESPONSABILIDADES: Os autores e o editor deste      *
 * livro empregaram seus melhores esfor�os na prepara��o do livro. Esses  *
 * esfor�os incluem o desenvolvimento, pesquisa e teste das teorias e     *
 * programas para determinar sua efic�cia. Os autores e o editor n�o      *
 * oferecem nenhum tipo de garantia, expl�cita ou implicitamente, com     *
 * refer�ncia a esses programas ou � documenta��o contida nesses livros.  *
 * Os autores e o editor n�o ser�o respons�veis por quaisquer danos,      *
 * acidentais ou conseq�entes, relacionados com ou provenientes do        *
 * fornecimento, desempenho ou utiliza��o desses programas.               *
 **************************************************************************/
