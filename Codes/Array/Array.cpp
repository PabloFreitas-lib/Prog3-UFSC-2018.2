// Fig 11.7: Array.cpp
// Defini��es de fun��o membro para a classe Array
#include <iostream>
using std::cerr;
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib> // sai do prot�tipo de fun��o
using std::exit;

#include "Array.h" // defini��o da classe Array

// construtor padr�o para a classe Array (tamanho padr�o 10)
Array::Array( int arraySize )
{
   size = ( arraySize > 0 ? arraySize : 10 ); // valida arraySize
   ptr = new int[ size ]; // cria espa�o para array baseado em ponteiro

   for ( int i = 0; i < size; i++ )
      ptr[ i ] = 0; // configura elemento do array baseado em ponteiro
} // fim do construtor padr�o de Array 

// copia o construtor da classe Array;
// deve receber uma refer�ncia para impedir a recurs�o infinita
Array::Array( const Array &arrayToCopy ) 
   : size( arrayToCopy.size )
{
   ptr = new int[ size ]; // cria espa�o para array baseado em ponteiro

   for ( int i = 0; i < size; i++ )
      ptr[ i ] = arrayToCopy.ptr[ i ]; // copia para o objeto
} // fim do construtor de c�pia do Array 

// destrutor para a classe Array
Array::~Array()
{
   delete [] ptr; // libera espa�o do array baseado em ponteiro
} // fim do destrutor

// retorna o n�mero de elementos do Array
int Array::getSize() const
{
   return size; // n�mero de elementos em Array
} // fim da fun��o getSize

// operador de atribui��o sobrecarregado;
// retorno const evita: (a1 = a2) = a3
const Array &Array::operator=( const Array &right )
{
   if ( &right != this ) // evita auto-atribui��o:
   {
      // para Arrays de tamanhos diferentes, desaloca array do lado esquerdo
      // original, ent�o aloca o novo array � esquerda
      if ( size != right.size )
      {
         delete [] ptr; // libera espa�o 
         size = right.size; // redimensiona esse objeto
         ptr = new int[ size ]; // cria espa�o para a c�pia do array
      } // fim do if interno

      for ( int i = 0; i < size; i++ )
         ptr[ i ] = right.ptr[ i ]; // copia o array para o objeto
   } // fim do if externo

   return *this; // permite x = y = z, por exemplo
} // fim da fun��o operator=

// determina se dois Arrays s�o iguais e
// retorna true, caso contr�rio retorna false
bool Array::operator==( const Array &right ) const
{
   if ( size != right.size )
      return false; // arrays com diferentes n�meros de elementos

   for ( int i = 0; i < size; i++ )
      if ( ptr[ i ] != right.ptr[ i ] )
         return false; // o conte�do do Array n�o � igual

   return true; // Arrays s�o iguais
} // fim da fun��o operator==

// operador de subscrito sobrecarregado para Arrays n�o-const;
// retorno de refer�ncia cria um lvalue modific�vel
int &Array::operator[]( int subscript )
{
   // verifica erro de subscrito fora do intervalo 
   if ( subscript < 0 || subscript >= size )
   {
      cerr << "\nError: Subscript " << subscript 
         << " out of range" << endl;
      exit( 1 ); // termina o programa; subscrito fora do intervalo
   } // fim do if

   return ptr[ subscript ]; // retorno da refer�ncia
} // fim da fun��o operator[]

// operador de subscrito sobrecarregado para Arrays const
// retorno de refer�ncia const cria um rvalue
int Array::operator[]( int subscript ) const
{
   // verifica erro de subscrito fora do intervalo 
   if ( subscript < 0 || subscript >= size )
   {
      cerr << "\nError: Subscript " << subscript 
         << " out of range" << endl;
      exit( 1 ); // termina o programa; subscrito fora do intervalo
   } // fim do if

   return ptr[ subscript ]; // retorna c�pia desse elemento
} // fim da fun��o operator[]

// operador de entrada sobrecarregado para a classe Array;
// entrada de valores para o Array inteiro
istream &operator>>( istream &input, Array &a )
{
   for ( int i = 0; i < a.size; i++ )
      input >> a.ptr[ i ];

   return input; // permite cin >> x >> y;
} // fim da fun��o

// operador de sa�da sobrecarregado para classe Array 
ostream &operator<<( ostream &output, const Array &a )
{
   int i;

   // gera sa�da do array baseado em ptr private 
   for ( i = 0; i < a.size; i++ )
   {
      output << setw( 12 ) << a.ptr[ i ];

      if ( ( i + 1 ) % 4 == 0 ) // 4 n�meros por linha de sa�da
         output << endl;
   } // fim do for

   if ( i % 4 != 0 ) // termina a �ltima linha de sa�da
      output << endl;

   return output; // permite cout << x << y;
} // fim da fun��o operator<<


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
