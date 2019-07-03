// Fig. 24.7: Base1.h
// Definição da classe Base1
#ifndef BASE1_H
#define BASE1_H

// definição da classe Base1
class Base1 
{
public:
   Base1( int parameterValue ) 
   {
      value = parameterValue;
   } // fim do construtor Base1

   int getData() const 
   {
      return value;
   } // fim da função getData
protected: // acessíveis a classes derivadas
   int value; // herdada pela classe derivada
}; // fim da classe Base1

#endif // BASE1_H


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
