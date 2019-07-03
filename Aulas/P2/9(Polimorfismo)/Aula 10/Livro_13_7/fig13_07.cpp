// Fig. 13.7: fig13_07.cpp
// Tentando invocar as fun��es membro exclusivas da classe derivada
// por um ponteiro de classe b�sica.
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

int main()
{
   CommissionEmployee *commissionEmployeePtr = 0; // classe b�sica
   BasePlusCommissionEmployee basePlusCommissionEmployee(
      "Bob", "Lewis", "333-33-3333", 5000, .04, 300 ); // classe derivada
   
   // aponta o ponteiro de classe b�sica para o objeto de classe derivada
   commissionEmployeePtr = &basePlusCommissionEmployee;

   // invoca as fun��es membro de classe b�sica no objeto de classe derivada
   // por ponteiro de classe b�sica
   string firstName = commissionEmployeePtr->getFirstName();
   string lastName = commissionEmployeePtr->getLastName();
   string ssn = commissionEmployeePtr->getSocialSecurityNumber();
   double grossSales = commissionEmployeePtr->getGrossSales();
   double commissionRate = commissionEmployeePtr->getCommissionRate();
   
   // tentativa de invocar fun��es exclusivas de classe derivada          
   // em objeto de classe derivada por meio de um ponteiro de classe b�sica
   double baseSalary = commissionEmployeePtr->getBaseSalary();            
   commissionEmployeePtr->setBaseSalary( 500 );                           
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
