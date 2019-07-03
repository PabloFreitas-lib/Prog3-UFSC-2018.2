// Fig. 16.7: Fig16_07.cpp
// Demonstrando set_new_handler.
#include <iostream>
using std::cerr;
using std::cout;

#include <new> // operador new padr�o e set_new_handler
using std::set_new_handler;                           

#include <cstdlib> // prot�tipo da fun��o abort 
using std::abort;

// trata falha de aloca��o de mem�ria   
void customNewHandler()                 
{                                       
   cerr << "customNewHandler was called";
   abort();                             
} // fim da fun��o customNewHandler     

// utilizando set_new_handler para tratar aloca��o de mem�ria mal sucedida
int main()
{
   double *ptr[ 50 ];

   // especifica que customNewHandler deve ser chamado em
   // caso de falha na aloca��o de mem�ria              
   set_new_handler( customNewHandler );                 

   // aloca mem�ria para ptr[i]; customNewHandler ser�
   // chamado na falha na aloca��o de mem�ria
   for ( int i = 0; i < 50; i++ )
   {
      ptr[ i ] = new double[ 500000000000000 ]; // pode lan�ar exce��o
      cout << "Allocated 500000000000000 doubles in ptr[ " << i << " ]\n";
   } // fim do for

   return 0;
}  // fim de main


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
