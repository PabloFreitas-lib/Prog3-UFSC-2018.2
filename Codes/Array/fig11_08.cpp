// Fig. 11.8: fig11_08.cpp
// Programa de teste da classe Array.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Array.h"

int main()
{
   Array integers1( 7 ); // Array de sete elementos   
   Array integers2; // Array de 10 elementos por padr�o

   // imprime o tamanho e o conte�do de integers1
   cout << "Size of Array integers1 is " 
      << integers1.getSize()
      << "\nArray after initialization:\n" << integers1;

   // imprime o tamanho e o conte�do de integers2
   cout << "\nSize of Array integers2 is " 
      << integers2.getSize()
      << "\nArray after initialization:\n" << integers2;

   // insere e imprime integers1 e integers2
   cout << "\nEnter 17 integers:" << endl;
   cin >> integers1 >> integers2;

   cout << "\nAfter input, the Arrays contain:\n"
      << "integers1:\n" << integers1
      << "integers2:\n" << integers2;

   // utiliza o operador de desigualdade (!=) sobrecarregado
   cout << "\nEvaluating: integers1 != integers2" << endl;

   if ( integers1 != integers2 )
      cout << "integers1 and integers2 are not equal" << endl;

   // cria Array integers3 utilizando integers1 como um      
   // inicializador; imprime tamanho e conte�do              
   Array integers3( integers1 ); // invoca o construtor de c�pia

   cout << "\nSize of Array integers3 is "
      << integers3.getSize()
      << "\nArray after initialization:\n" << integers3;

   // utiliza operador atribui��o (=) sobrecarregado
   cout << "\nAssigning integers2 to integers1:" << endl;
   integers1 = integers2; // note que o Array alvo � menor

   cout << "integers1:\n" << integers1
      << "integers2:\n" << integers2;

   // utiliza operador de igualdade (==) sobrecarregado
   cout << "\nEvaluating: integers1 == integers2" << endl;

   if ( integers1 == integers2 )
      cout << "integers1 and integers2 are equal" << endl;

   // utiliza operador de subscrito sobrecarregado para criar rvalue
   cout << "\nintegers1[5] is " << integers1[ 5 ];

   // utiliza operador de subscrito sobrecarregado para criar lvalue
   cout << "\n\nAssigning 1000 to integers1[5]" << endl;
   integers1[ 5 ] = 1000;
   cout << "integers1:\n" << integers1;

   // tentativa de utilizar subscrito fora do intervalo
   cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
   integers1[ 15 ] = 1000; // ERRO: fora do intervalo
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
