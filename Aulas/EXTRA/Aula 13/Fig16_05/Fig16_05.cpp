// Fig. 16.5: Fig16_05.cpp
// Demonstrando new pr�-padr�o retornando 0 quando a mem�ria
// n�o � alocada.
#include <iostream>
using std::cerr;
using std::cout;

int main()
{
   double *ptr[ 50 ];

   // aloca mem�ria para ptr
   for ( int i = 0; i < 50; i++ ) 
   {
      ptr[ i ] = new double[500000000000000];

      if ( ptr[ i ] == 0 ) // fez new falhar na aloca��o de mem�ria
      {
         cerr << "Memory allocation failed for ptr[ " << i << " ]\n";
         break;
      } // fim do if
      else // aloca��o bem-sucedida de mem�ria
         cout << "Allocated 500000000000000 doubles in ptr[ " << i << " ]\n";
   } // fim do for

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
