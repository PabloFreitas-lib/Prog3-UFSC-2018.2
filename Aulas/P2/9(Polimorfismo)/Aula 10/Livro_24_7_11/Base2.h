// Fig. 24.8: Base2.h
// Defini��o da classe Base2
#ifndef BASE2_H
#define BASE2_H

// defini��o da classe Base2
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
protected: // acess�veis a classes derivadas
   char letter; // herdada pela classe derivada
}; // fim da classe Base2

#endif // BASE2_H


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
