// Fig. 16.1: DivideByZeroException.h
// Defini��o da classe DivideByZeroException.
#include <stdexcept> // arquivo de cabe�alho stdexcept cont�m runtime_error 
using std::runtime_error; // classe runtime_error da biblioteca padr�o do C++

// objetos DivideByZeroException devem ser lan�ados por fun��es
// ao detectar exce��es de divis�o por zero
class DivideByZeroException : public runtime_error 
{
public:
   // construtor especifica a mensagem de erro padr�o
   DivideByZeroException()
      : runtime_error( "attempted to divide by zero" ) {}
}; // fim da classe DivideByZeroException


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
