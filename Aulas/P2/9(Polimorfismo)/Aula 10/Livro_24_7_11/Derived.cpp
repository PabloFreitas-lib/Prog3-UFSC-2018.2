// Fig. 24.10: Derived.cpp
// Definições de função membro para a classe Derived
#include "Derived.h"

// construtor para construtores de chamadas Derived para                     
// a classe Base1 e Base2.                                                   
// utiliza inicializadores de membro para chamar construtores de classe básica
Derived::Derived( int integer, char character, double double1 )
   : Base1( integer ), Base2( character ), real( double1 ) { } 

// retorna real
double Derived::getReal() const 
{
   return real;
} // fim da função getReal

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
