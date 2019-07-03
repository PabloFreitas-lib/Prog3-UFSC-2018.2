// Fig. 11.6: Array.h
// Classe Array para armazenar arrays de inteiros.
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using std::ostream;
using std::istream;

class Array
{
   friend ostream &operator<<( ostream &, const Array & );
   friend istream &operator>>( istream &, Array & );     
public:
   Array( int = 10 ); // construtor padr�o
   Array( const Array & ); // construtor de c�pia
   ~Array(); // destrutor                       
   int getSize() const; // retorna tamanho

   const Array &operator=( const Array & ); // operador de atribui��o
   bool operator==( const Array & ) const; // operador de igualdade 

   // operador de desigualdade; retorna o oposto do operador ==
   bool operator!=( const Array &right ) const               
   {                                                         
      return ! ( *this == right ); // invoca Array::operator==
   } // fim da fun��o operator!=                             
   
   // operador subscrito de objetos n�o-const retorna lvalue modific�vel
   int &operator[]( int );                                             

   // operador de subscrito de objetos const retorna rvalue
   int operator[]( int ) const;                           
private:
   int size; // tamanho do array baseado em ponteiro
   int *ptr; // ponteiro para o primeiro elemento do array baseado em ponteiro
}; // fim da classe Array

#endif


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
