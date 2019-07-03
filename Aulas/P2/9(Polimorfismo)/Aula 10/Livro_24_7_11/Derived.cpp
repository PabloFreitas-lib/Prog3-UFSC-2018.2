// Fig. 24.10: Derived.cpp
// Defini��es de fun��o membro para a classe Derived
#include "Derived.h"

// construtor para construtores de chamadas Derived para                     
// a classe Base1 e Base2.                                                   
// utiliza inicializadores de membro para chamar construtores de classe b�sica
Derived::Derived( int integer, char character, double double1 )
   : Base1( integer ), Base2( character ), real( double1 ) { } 

// retorna real
double Derived::getReal() const 
{
   return real;
} // fim da fun��o getReal

// exibe todos os membros de dados de Derived
ostream &operator<<( ostream &output, const Derived &derived )
{
   output << "    Integer: " << derived.value << "\n  Character: " 
        << derived.letter << "\nReal number: " << derived.real;
   return output; // permite chamadas em cascata
} // fim do operator<<


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
