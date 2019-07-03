// Fig. 16.4: Fig16_04.cpp
// Demonstrando o desempilhamento.
#include <iostream>
using std::cout;
using std::endl;

#include <stdexcept>     
using std::runtime_error;

// function3 lan�a erro de tempo de execu��o
void function3() throw ( runtime_error )
{
   cout << "In function 3" << endl;

   // nenhum bloco try, o desempilhamento ocorre, retorna controle a function2
   throw runtime_error( "runtime_error in function3" ); 
} // fim de function3

// function2 invoca function3
void function2() throw ( runtime_error )
{
   cout << "function3 is called inside function2" << endl;
   function3(); // o desempilhamento ocorre, retorna o controle a function1
} // fim de function2

// function1 invoca function2
void function1() throw ( runtime_error )
{
   cout << "function2 is called inside function1" << endl;
   function2(); // o desempilhamento ocorre, retorna controle a main
} // fim de function1

// demonstra o desempilhamento
int main()
{
   // invoca function1
   try 
   {
      cout << "function1 is called inside main" << endl;
      function1(); // chama function1 que lan�a runtime_error
   } // fim do try
   catch ( runtime_error &error ) // trata erro de tempo de execu��o
   {
      cout << "Exception occurred: " << error.what() << endl;
      cout << "Exception handled in main" << endl;
   } // fim do catch

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
