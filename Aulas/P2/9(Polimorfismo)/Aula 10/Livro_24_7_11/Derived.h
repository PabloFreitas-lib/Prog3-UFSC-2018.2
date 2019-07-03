// Fig. 24.9: Derived.h
// Defini��o de classe Derived que herda
// m�ltiplas classes b�sicas (Base1 e Base2).
#ifndef DERIVED_H
#define DERIVED_H

#include <iostream>
using std::ostream;

#include "Base1.h"
#include "Base2.h"

// defini��o da classe Derived 
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
