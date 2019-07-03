// Fig. 16.9: Integer.cpp
// Definição da função membro Integer.
#include <iostream>
using std::cout;
using std::endl;

#include "Integer.h"

// construtor padrão Integer
Integer::Integer( int i )
   : value( i )
{
   cout << "Constructor for Integer " << value << endl;
} // fim do construtor Integer

// destrutor Integer
Integer::~Integer()
{
   cout << "Destructor for Integer " << value << endl;
} // fim do destrutor Integer

// configura o valor Integer
void Integer::setInteger( int i )
{
   value = i;
} // fim da função setInteger

// retorna o valor Integer
int Integer::getInteger() const
{
   return value;
} // fim da função getInteger


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
