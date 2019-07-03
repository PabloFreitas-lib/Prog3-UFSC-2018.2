// Fig. 16.3: Fig16_03.cpp
// Demonstrando o relan�amento de exce��o.
#include <iostream>
using std::cout;
using std::endl;

#include <exception>
using std::exception;

// lan�a, captura e relan�a a exce��o
void throwException() 
{
   // lan�a a exce��o e a captura imediatamente
   try 
   {
      cout << "  Function throwException throws an exception\n";
      throw exception(); // gera a exce��o
   } // fim do try
   catch ( exception & ) // trata a exce��o
   {
      cout << "  Exception handled in function throwException"
         << "\n  Function throwException rethrows exception";
      throw; // relan�a a exce��o para processamento adicional
   } // fim do catch

   cout << "This also should not print\n";
} // fim da fun��o throwException

int main()
{
   // lan�a a exce��o
   try 
   {
      cout << "\nmain invokes function throwException\n";
      throwException();
      cout << "This should not print\n";
   } // fim do try
   catch ( exception & ) // trata a exce��o
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
