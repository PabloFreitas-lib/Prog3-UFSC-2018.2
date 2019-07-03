// Fig. 13.6: fig13_06.cpp
// Apontando um ponteiro de classe derivada para um objeto de classe b�sica.
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

int main()
{
   CommissionEmployee commissionEmployee( 
      "Sue", "Jones", "222-22-2222", 10000, .06 );
   BasePlusCommissionEmployee * basePlusCommissionEmployeePtr = 0;

   // aponta o ponteiro de classe derivada para objeto de classe b�sica
   // Erro: um CommissionEmployee n�o � um BasePlusCommissionEmployee 
   basePlusCommissionEmployeePtr = &commissionEmployee;               
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
