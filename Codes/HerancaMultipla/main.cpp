// Fig. 24.14: fig24_14.cpp
// Utilizando classes básicas virtual.
#include <iostream>
using std::cout;
using std::endl;

// definição da classe Base
class Base
{
public:
   virtual void print() const = 0; // virtual pura
}; // fim da classe Base

// definição da classe DerivedOne
class DerivedOne : virtual public Base
{
public:
   // sobrescreve função print
   void print() const
   {
      cout << "DerivedOne\n";
   } // fim da função print
}; // fim da classe DerivedOne

// definição da classe DerivedTwo
class DerivedTwo : virtual public Base
{
public:
   // sobrescreve função print
   void print() const
   {
      cout << "DerivedTwo\n";
   } // fim da função print
}; // fim da classe DerivedTwo

// definição da classe Multiple
class Multiple : public DerivedOne, public DerivedTwo
{
public:
   // qualifica qual versão da função print
   void print() const
   {
      DerivedTwo::print();
   } // fim da função print
}; // fim da classe Multiple

int main()
{
   Multiple both; // instancia o objeto Multiple
   DerivedOne one; // instancia o objeto DerivedOne
   DerivedTwo two; // instancia objeto DerivedTwo

   // declara array de ponteiros da classe básica e inicializa
   // cada elemento como ara um tipo de classe derivada
   Base *array[ 3 ];
   array[ 0 ] = &both;
   array[ 1 ] = &one;
   array[ 2 ] = &two;

   // invoca polimorficamente a função print
   for ( int i = 0; i < 3; i++ )
      array[ i ]->print();

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
