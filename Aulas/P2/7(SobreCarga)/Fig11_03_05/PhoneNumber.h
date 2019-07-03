// Fig. 11.3: PhoneNumber.h
// defini��o da classe PhoneNumber
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
   string areaCode; // c�digo de �rea (de cidade) de 3 algarismos
   string exchange; // prefixo (de bairro/regi�o) de 3 algarismos
   string line; // linha de 4 algarismos
}; // fim da classe PhoneNumber

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
