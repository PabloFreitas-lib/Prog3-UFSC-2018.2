// Fig. 14.1: fig14_01.cpp
// Utilizando funções de template.
#include <iostream>
using std::cout;
using std::endl;

// Definição da template de função printArray
template< typename T >
void printArray( const T *array, int count )
{
   for ( int i = 0; i < count; i++ )
      cout << array[ i ] << " ";

   cout << endl;
} // fim da template de função printArray 

int main()
{
   const int ACOUNT = 5; // tamanho do array a
   const int BCOUNT = 7; // tamanho do array b
   const int CCOUNT = 6; // tamanho do array c

   int a[ ACOUNT ] = { 1, 2, 3, 4, 5 };
   double b[ BCOUNT ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
   char c[ CCOUNT ] = "HELLO"; // posição 6 para null

   cout << "Array a contains:" << endl;

   // chama a especialização da template de função do tipo inteiro 
   printArray( a, ACOUNT );                        

   cout << "Array b contains:" << endl;

   // chama a especialização da template de função do tipo double
   printArray( b, BCOUNT );                       

   cout << "Array c contains:" << endl;

   // chama a especialização da template de função do tipo caractere 
   printArray( c, CCOUNT );                          
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
