// Fig. 16.6: Fig16_06.cpp
// Demonstrando new padr�o lan�ando bad_alloc quando a mem�ria
// n�o pode ser alocada.
#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

#include <new> // operador new padr�o
using std::bad_alloc;               

int main()
{
   double *ptr[ 50 ];
   
   // aloca mem�ria para ptr
   try 
   {
      // aloca mem�ria para ptr[i]; new lan�a bad_alloc em caso de falha
      for ( int i = 0; i < 50; i++ ) 
      {
       ptr[ i ] = new double[ 500000000000000 ]; // pode lan�ar exce��o
       cout << "Allocated 500000000000000 doubles in ptr[ " << i << " ]\n";
      } // fim do for
   } // fim do try

   // trata exce��o bad_alloc
   catch ( bad_alloc &memoryAllocationException )
   {
      cerr << "Exception occurred: " 
         << memoryAllocationException.what() << endl;
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
