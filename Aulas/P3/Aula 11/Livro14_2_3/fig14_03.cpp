// Fig. 14.3: fig14_03.cpp
// Programa de teste da template de classe Stack.
#include <iostream>
using std::cout;
using std::endl;

#include "Stack.h" // Defini��o de template de classe Stack

int main()
{
   Stack< double > doubleStack( 5 ); // tamanho 5
   double doubleValue = 1.1;

   cout << "Pushing elements onto doubleStack\n";

   // insere 5 doubles em doubleStack
   while ( doubleStack.push( doubleValue ) ) 
   {
      cout << doubleValue << ' ';
      doubleValue += 1.1;
   } // fim do while

   cout << "\nStack is full. Cannot push " << doubleValue
      << "\n\nPopping elements from doubleStack\n";

   // remove elementos de doubleStack
   while ( doubleStack.pop( doubleValue ) )
      cout << doubleValue << ' ';

   cout << "\nStack is empty. Cannot pop\n";

   Stack< int > intStack; // tamanho padr�o de 10
   int intValue = 1;
   cout << "\nPushing elements onto intStack\n";

   // insere 10 inteiros em intStack
   while ( intStack.push( intValue ) ) 
   {
      cout << intValue << ' ';
      intValue++;
   } // fim do while

   cout << "\nStack is full. Cannot push " << intValue 
      << "\n\nPopping elements from intStack\n";

   // remove elementos de intStack
   while ( intStack.pop( intValue ) )  
      cout << intValue << ' ';

   cout << "\nStack is empty. Cannot pop" << endl;
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
