// Fig. 11.4: PhoneNumber.cpp
// Operadores de inserção de fluxo e de extração de fluxo sobrecarregados
// para a classe PhoneNumber.
#include <iomanip>
using namespace std;

#include "PhoneNumber.h"

// operador de inserção de fluxo sobrecarregado; não pode ser
// uma função membro se quiséssemos invocá-lo com
// cout << somePhoneNumber;
ostream &operator<<( ostream &output, const PhoneNumber &number )
{
   output << "(" << number.areaCode << ") "
      << number.exchange << "-" << number.line;
   return output; // permite cout << a << b << c;
} // fim da função operator<<

// operador de extração de fluxo sobrecarregado; não pode ser
// uma função membro se quiséssemos invocá-lo com
// cin >> somePhoneNumber;
istream &operator>>( istream &input, PhoneNumber &number )
{
   input.ignore(); // pula (
   input >> setw( 3 ) >> number.areaCode; // entrada do código de área
   input.ignore( 2 ); // pula ) e espaço
   input >> setw( 3 ) >> number.exchange; // entrada do prefixo (exchange)
   input.ignore(); // pula traço (-)
   input >> setw( 4 ) >> number.line; // entrada de linha
   return input; // permite cin >> a >> b >> c;
} // fim da função operator>>


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
