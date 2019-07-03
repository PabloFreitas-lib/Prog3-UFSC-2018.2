// Fig. 24.8: Base2.h
// Definição da classe Base2
#ifndef BASE2_H
#define BASE2_H

// definição da classe Base2
class Base2 
{
public:
   Base2( char characterData ) 
   {
      letter = characterData;
   } // fim do construtor Base2

   char getData() const 
   {
      return letter;
   } // end function getData
protected: // acessíveis a classes derivadas
   char letter; // herdada pela classe derivada
}; // fim da classe Base2

#endif // BASE2_H


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
