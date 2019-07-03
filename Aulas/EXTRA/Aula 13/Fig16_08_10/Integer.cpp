// Fig. 16.9: Integer.cpp
// Defini��o da fun��o membro Integer.
#include <iostream>
using std::cout;
using std::endl;

#include "Integer.h"

// construtor padr�o Integer
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
} // fim da fun��o setInteger

// retorna o valor Integer
int Integer::getInteger() const
{
   return value;
} // fim da fun��o getInteger


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
