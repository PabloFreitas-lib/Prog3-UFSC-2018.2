// Fig. 11.5: fig11_05.cpp
// Demonstrando os operadores de inserção
// e extração de fluxo sobrecarregados da classe PhoneNumber.
#include <iostream>
using namespace std;

#include "PhoneNumber.h"

int main()
{
   PhoneNumber phone; // cria objeto phone

   cout << "Enter phone number in the form (123) 456-7890:" << endl;

   // cin >> phone invoca operator>> emitindo implicitamente
   // a chamada da função global operator>>( cin, phone )
   cin >> phone;

   cout << "The phone number entered was: ";

   // cout << phone invoca operator<< emitindo implicitamente
   // chamada da função global operator<<( cout, telefone )
   cout << phone << endl;
   return 0;
} // fim de main


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
