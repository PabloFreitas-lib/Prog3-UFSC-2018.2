// Fig. 16.1: DivideByZeroException.h
// Definição da classe DivideByZeroException.
#include <stdexcept> // arquivo de cabeçalho stdexcept contém runtime_error 
using std::runtime_error; // classe runtime_error da biblioteca padrão do C++

// objetos DivideByZeroException devem ser lançados por funções
// ao detectar exceções de divisão por zero
class DivideByZeroException : public runtime_error 
{
public:
   // construtor especifica a mensagem de erro padrão
   DivideByZeroException()
      : runtime_error( "attempted to divide by zero" ) {}
}; // fim da classe DivideByZeroException


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
