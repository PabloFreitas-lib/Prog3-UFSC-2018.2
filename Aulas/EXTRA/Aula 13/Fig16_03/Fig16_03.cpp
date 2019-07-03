// Fig. 16.3: Fig16_03.cpp
// Demonstrando o relançamento de exceção.
#include <iostream>
using std::cout;
using std::endl;

#include <exception>
using std::exception;

// lança, captura e relança a exceção
void throwException() 
{
   // lança a exceção e a captura imediatamente
   try 
   {
      cout << "  Function throwException throws an exception\n";
      throw exception(); // gera a exceção
   } // fim do try
   catch ( exception & ) // trata a exceção
   {
      cout << "  Exception handled in function throwException"
         << "\n  Function throwException rethrows exception";
      throw; // relança a exceção para processamento adicional
   } // fim do catch

   cout << "This also should not print\n";
} // fim da função throwException

int main()
{
   // lança a exceção
   try 
   {
      cout << "\nmain invokes function throwException\n";
      throwException();
      cout << "This should not print\n";
   } // fim do try
   catch ( exception & ) // trata a exceção
   {
      cout << "\n\nException handled in main\n";
   } // fim do catch

   cout << "Program control continues after catch in main\n";
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
