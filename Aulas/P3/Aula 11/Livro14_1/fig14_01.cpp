// Fig. 14.1: fig14_01.cpp
// Utilizando fun��es de template.
#include <iostream>
using std::cout;
using std::endl;

// Defini��o da template de fun��o printArray
template< typename T >
void printArray( const T *array, int count )
{
   for ( int i = 0; i < count; i++ )
      cout << array[ i ] << " ";

   cout << endl;
} // fim da template de fun��o printArray 

int main()
{
   const int ACOUNT = 5; // tamanho do array a
   const int BCOUNT = 7; // tamanho do array b
   const int CCOUNT = 6; // tamanho do array c

   int a[ ACOUNT ] = { 1, 2, 3, 4, 5 };
   double b[ BCOUNT ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
   char c[ CCOUNT ] = "HELLO"; // posi��o 6 para null

   cout << "Array a contains:" << endl;

   // chama a especializa��o da template de fun��o do tipo inteiro 
   printArray( a, ACOUNT );                        

   cout << "Array b contains:" << endl;

   // chama a especializa��o da template de fun��o do tipo double
   printArray( b, BCOUNT );                       

   cout << "Array c contains:" << endl;

   // chama a especializa��o da template de fun��o do tipo caractere 
   printArray( c, CCOUNT );                          
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
