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
   Array integers2; // Array de 10 elementos por padrão

   // imprime o tamanho e o conteúdo de integers1
   cout << "Size of Array integers1 is " 
      << integers1.getSize()
      << "\nArray after initialization:\n" << integers1;

   // imprime o tamanho e o conteúdo de integers2
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
   // inicializador; imprime tamanho e conteúdo              
   Array integers3( integers1 ); // invoca o construtor de cópia

   cout << "\nSize of Array integers3 is "
      << integers3.getSize()
      << "\nArray after initialization:\n" << integers3;

   // utiliza operador atribuição (=) sobrecarregado
   cout << "\nAssigning integers2 to integers1:" << endl;
   integers1 = integers2; // note que o Array alvo é menor

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
