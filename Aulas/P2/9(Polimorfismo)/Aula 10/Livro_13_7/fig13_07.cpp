// Fig. 13.7: fig13_07.cpp
// Tentando invocar as funções membro exclusivas da classe derivada
// por um ponteiro de classe básica.
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

int main()
{
   CommissionEmployee *commissionEmployeePtr = 0; // classe básica
   BasePlusCommissionEmployee basePlusCommissionEmployee(
      "Bob", "Lewis", "333-33-3333", 5000, .04, 300 ); // classe derivada
   
   // aponta o ponteiro de classe básica para o objeto de classe derivada
   commissionEmployeePtr = &basePlusCommissionEmployee;

   // invoca as funções membro de classe básica no objeto de classe derivada
   // por ponteiro de classe básica
   string firstName = commissionEmployeePtr->getFirstName();
   string lastName = commissionEmployeePtr->getLastName();
   string ssn = commissionEmployeePtr->getSocialSecurityNumber();
   double grossSales = commissionEmployeePtr->getGrossSales();
   double commissionRate = commissionEmployeePtr->getCommissionRate();
   
   // tentativa de invocar funções exclusivas de classe derivada          
   // em objeto de classe derivada por meio de um ponteiro de classe básica
   double baseSalary = commissionEmployeePtr->getBaseSalary();            
   commissionEmployeePtr->setBaseSalary( 500 );                           
   return 0;
} // fim de main


/**************************************************************************
 * (C) Copyright 1992-2005 Deitel & Associates, Inc. e                    *
 * Pearson Education, Inc. Todos os direitos reservados                   *
 *                                                                        *
 * NOTA DE ISENÇÃO DE RESPONSABILIDADES: Os autores e o editor deste      *
 * livro empregaram seus melhores esforços na preparação do livro. Esses  *
 * esforços incluem o desenvolvimento, pesquisa e teste das teorias e     *
 * programas para determinar sua eficácia. Os autores e o editor não      *
 * oferecem nenhum tipo de garantia, explícita ou implicitamente, com     *
 * referência a esses programas ou à documentação contida nesses livros.  *
 * Os autores e o editor não serão responsáveis por quaisquer danos,      *
 * acidentais ou conseqüentes, relacionados com ou provenientes do        *
 * fornecimento, desempenho ou utilização desses programas.               *
 **************************************************************************/
