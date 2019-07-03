// Fig. 16.7: Fig16_07.cpp
// Demonstrando set_new_handler.
#include <iostream>
using std::cerr;
using std::cout;

#include <new> // operador new padrão e set_new_handler
using std::set_new_handler;                           

#include <cstdlib> // protótipo da função abort 
using std::abort;

// trata falha de alocação de memória   
void customNewHandler()                 
{                                       
   cerr << "customNewHandler was called";
   abort();                             
} // fim da função customNewHandler     

// utilizando set_new_handler para tratar alocação de memória mal sucedida
int main()
{
   double *ptr[ 50 ];

   // especifica que customNewHandler deve ser chamado em
   // caso de falha na alocação de memória              
   set_new_handler( customNewHandler );                 

   // aloca memória para ptr[i]; customNewHandler será
   // chamado na falha na alocação de memória
   for ( int i = 0; i < 50; i++ )
   {
      ptr[ i ] = new double[ 500000000000000 ]; // pode lançar exceção
      cout << "Allocated 500000000000000 doubles in ptr[ " << i << " ]\n";
   } // fim do for

   return 0;
}  // fim de main


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
