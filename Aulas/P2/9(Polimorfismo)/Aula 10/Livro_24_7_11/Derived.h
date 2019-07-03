// Fig. 24.9: Derived.h
// Definição de classe Derived que herda
// múltiplas classes básicas (Base1 e Base2).
#ifndef DERIVED_H
#define DERIVED_H

#include <iostream>
using std::ostream;

#include "Base1.h"
#include "Base2.h"

// definição da classe Derived 
class Derived : public Base1, public Base2 
{
   friend ostream &operator<<( ostream &, const Derived & );
public:
   Derived( int, char, double );
   double getReal() const;
private:
   double real; // dados private da classe derived
}; // fim da classe Derived

#endif // DERIVED_H


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
