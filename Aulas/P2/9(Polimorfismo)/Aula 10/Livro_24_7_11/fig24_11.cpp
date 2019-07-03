// Fig. 24.11: fig24_11.cpp
// Driver para o exemplo de herança múltipla.
#include <iostream>
using std::cout;
using std::endl;

#include "Base1.h"
#include "Base2.h"
#include "Derived.h"

int main()
{
   Base1 base1( 10 ), *base1Ptr = 0; // cria objeto Base1 
   Base2 base2( 'Z' ), *base2Ptr = 0; // cria objeto Base2 
   Derived derived( 7, 'A', 3.5 ); // cria objeto Derived

   // imprime membros de dados de objetos da classe básica
   cout << "Object base1 contains integer " << base1.getData()
      << "\nObject base2 contains character " << base2.getData()
      << "\nObject derived contains:\n" << derived << "\n\n";

   // imprime membros de dados do objeto da classe derivada
   // operador de resolução de escopo resolve ambigüidade de getData
   cout << "Data members of Derived can be accessed individually:"
      << "\n    Integer: " << derived.Base1::getData()
      << "\n  Character: " << derived.Base2::getData()
      << "\nReal number: " << derived.getReal() << "\n\n";
   cout << "Derived can be treated as an object of either base class:\n";

   // trata Derived como um objeto Base1
   base1Ptr = &derived;              
   cout << "base1Ptr->getData() yields " << base1Ptr->getData() << '\n';

   // trata Derived como um objeto Base2
   base2Ptr = &derived;              
   cout << "base2Ptr->getData() yields " << base2Ptr->getData() << endl;
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
