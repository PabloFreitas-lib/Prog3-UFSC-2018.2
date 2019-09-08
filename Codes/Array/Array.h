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
   Array( int = 10 ); // construtor padrão
   Array( const Array & ); // construtor de cópia
   ~Array(); // destrutor                       
   int getSize() const; // retorna tamanho

   const Array &operator=( const Array & ); // operador de atribuição
   bool operator==( const Array & ) const; // operador de igualdade 

   // operador de desigualdade; retorna o oposto do operador ==
   bool operator!=( const Array &right ) const               
   {                                                         
      return ! ( *this == right ); // invoca Array::operator==
   } // fim da função operator!=                             
   
   // operador subscrito de objetos não-const retorna lvalue modificável
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
