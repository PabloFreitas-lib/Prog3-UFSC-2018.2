// Fig. 11.3: PhoneNumber.h
// definição da classe PhoneNumber
#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
using namespace std;

#include <string>

class PhoneNumber
{
   friend ostream & operator<<( ostream &, const PhoneNumber & );
   friend istream & operator>>( istream &, PhoneNumber & );
private:
   string areaCode; // código de área (de cidade) de 3 algarismos
   string exchange; // prefixo (de bairro/região) de 3 algarismos
   string line; // linha de 4 algarismos
}; // fim da classe PhoneNumber

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
