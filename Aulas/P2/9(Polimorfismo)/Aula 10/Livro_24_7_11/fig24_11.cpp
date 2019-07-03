// Fig. 24.11: fig24_11.cpp
// Driver para o exemplo de heran�a m�ltipla.
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

   // imprime membros de dados de objetos da classe b�sica
   cout << "Object base1 contains integer " << base1.getData()
      << "\nObject base2 contains character " << base2.getData()
      << "\nObject derived contains:\n" << derived << "\n\n";

   // imprime membros de dados do objeto da classe derivada
   // operador de resolu��o de escopo resolve ambig�idade de getData
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
