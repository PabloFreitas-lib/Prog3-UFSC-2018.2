// Fig. 11.5: fig11_05.cpp
// Demonstrando os operadores de inser��o
// e extra��o de fluxo sobrecarregados da classe PhoneNumber.
#include <iostream>
using namespace std;

#include "PhoneNumber.h"

int main()
{
   PhoneNumber phone; // cria objeto phone

   cout << "Enter phone number in the form (123) 456-7890:" << endl;

   // cin >> phone invoca operator>> emitindo implicitamente
   // a chamada da fun��o global operator>>( cin, phone )
   cin >> phone;

   cout << "The phone number entered was: ";

   // cout << phone invoca operator<< emitindo implicitamente
   // chamada da fun��o global operator<<( cout, telefone )
   cout << phone << endl;
   return 0;
} // fim de main


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
