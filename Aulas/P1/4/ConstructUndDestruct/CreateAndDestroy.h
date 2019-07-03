// Fig. 9.11: CreateAndDestroy.h
// Definição da classe CreateAndDestroy.
// Funções membro definidas em CreateAndDestroy.cpp.
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
   int objectID; // Número de ID do objeto
   string message; // mensagem descrevendo o objeto
}; // fim da classe CreateAndDestroy

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
