// Fig. 16.6: Fig16_06.cpp
// Demonstrando new padrão lançando bad_alloc quando a memória
// não pode ser alocada.
#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

#include <new> // operador new padrão
using std::bad_alloc;               

int main()
{
   double *ptr[ 50 ];
   
   // aloca memória para ptr
   try 
   {
      // aloca memória para ptr[i]; new lança bad_alloc em caso de falha
      for ( int i = 0; i < 50; i++ ) 
      {
       ptr[ i ] = new double[ 500000000000000 ]; // pode lançar exceção
       cout << "Allocated 500000000000000 doubles in ptr[ " << i << " ]\n";
      } // fim do for
   } // fim do try

   // trata exceção bad_alloc
   catch ( bad_alloc &memoryAllocationException )
   {
      cerr << "Exception occurred: " 
         << memoryAllocationException.what() << endl;
   } // fim do catch
   
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
