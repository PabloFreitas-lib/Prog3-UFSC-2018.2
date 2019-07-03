// Fig. 9.11: CreateAndDestroy.h
// Defini��o da classe CreateAndDestroy.
// Fun��es membro definidas em CreateAndDestroy.cpp.
#include <string>
using std::string;

#ifndef CREATE_H
#define CREATE_H

class CreateAndDestroy 
{
public:
   CreateAndDestroy( int, string ); // construtor
   ~CreateAndDestroy(); // destrutor            
private:
   int objectID; // N�mero de ID do objeto
   string message; // mensagem descrevendo o objeto
}; // fim da classe CreateAndDestroy

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
