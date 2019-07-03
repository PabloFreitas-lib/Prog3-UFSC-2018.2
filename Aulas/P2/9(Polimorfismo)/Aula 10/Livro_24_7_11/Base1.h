// Fig. 24.7: Base1.h
// Defini��o da classe Base1
#ifndef BASE1_H
#define BASE1_H

// defini��o da classe Base1
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
   } // fim da fun��o getData
protected: // acess�veis a classes derivadas
   int value; // herdada pela classe derivada
}; // fim da classe Base1

#endif // BASE1_H


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
