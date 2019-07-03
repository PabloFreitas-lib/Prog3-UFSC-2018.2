// Fig. 11.4: PhoneNumber.cpp
// Operadores de inser��o de fluxo e de extra��o de fluxo sobrecarregados
// para a classe PhoneNumber.
#include <iomanip>
using namespace std;

#include "PhoneNumber.h"

// operador de inser��o de fluxo sobrecarregado; n�o pode ser
// uma fun��o membro se quis�ssemos invoc�-lo com
// cout << somePhoneNumber;
ostream &operator<<( ostream &output, const PhoneNumber &number )
{
   output << "(" << number.areaCode << ") "
      << number.exchange << "-" << number.line;
   return output; // permite cout << a << b << c;
} // fim da fun��o operator<<

// operador de extra��o de fluxo sobrecarregado; n�o pode ser
// uma fun��o membro se quis�ssemos invoc�-lo com
// cin >> somePhoneNumber;
istream &operator>>( istream &input, PhoneNumber &number )
{
   input.ignore(); // pula (
   input >> setw( 3 ) >> number.areaCode; // entrada do c�digo de �rea
   input.ignore( 2 ); // pula ) e espa�o
   input >> setw( 3 ) >> number.exchange; // entrada do prefixo (exchange)
   input.ignore(); // pula tra�o (-)
   input >> setw( 4 ) >> number.line; // entrada de linha
   return input; // permite cin >> a >> b >> c;
} // fim da fun��o operator>>


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
