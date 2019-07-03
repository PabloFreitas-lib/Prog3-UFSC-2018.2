// Fig. 16.5: Fig16_05.cpp
// Demonstrando new pré-padrão retornando 0 quando a memória
// não é alocada.
#include <iostream>
using std::cerr;
using std::cout;

int main()
{
   double *ptr[ 50 ];

   // aloca memória para ptr
   for ( int i = 0; i < 50; i++ ) 
   {
      ptr[ i ] = new double[500000000000000];

      if ( ptr[ i ] == 0 ) // fez new falhar na alocação de memória
      {
         cerr << "Memory allocation failed for ptr[ " << i << " ]\n";
         break;
      } // fim do if
      else // alocação bem-sucedida de memória
         cout << "Allocated 500000000000000 doubles in ptr[ " << i << " ]\n";
   } // fim do for

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
