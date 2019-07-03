// Fig. 16.10: Fig16_10.cpp
// Demonstrando auto_ptr.
#include <iostream>
using std::cout;
using std::endl;

#include <memory>
using std::auto_ptr; // Defini��o da classe auto_ptr

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
