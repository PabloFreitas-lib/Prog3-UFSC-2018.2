// Fig. 16.10: Fig16_10.cpp
// Demonstrando auto_ptr.
#include <iostream>
using std::cout;
using std::endl;

#include <memory>
using std::auto_ptr; // Definição da classe auto_ptr

#include "Integer.h"

// utiliza auto_ptr para manipular o objeto Integer
int main()
{
   cout << "Creating an auto_ptr object that points to an Integer\n";

   // "aponta" auto_ptr para o objeto Integer            
   auto_ptr< Integer > ptrToInteger( new Integer( 7 ) );

   cout << "\nUsing the auto_ptr to manipulate the Integer\n";
   ptrToInteger->setInteger( 99 ); // usa auto_ptr para configurar o valor Integer

   // utiliza auto_ptr para obter o valor Integer
   cout << "Integer after setInteger: " << ( *ptrToInteger ).getInteger();
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
