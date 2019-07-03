// Fig. 16.2: Fig16_02.cpp
// Um exemplo simples de tratamento de exce��es que verifica
// exce��es de divis�o por zero.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "DivideByZeroException.h" // Classe DivideByZeroException 

// realiza a divis�o e lan�a o objeto DivideByZeroException se
// a exce��o de divis�o por zero ocorrer
double quotient( int numerator, int denominator )
{
   // lan�a DivideByZeroException se tentar dividir por zero
   if ( denominator == 0 )
      throw DivideByZeroException(); // termina a fun��o

   // retorna resultado da divis�o
   return static_cast< double >( numerator ) / denominator;
} // fim da fun��o quotient

int main()
{
   int number1; // numerador especificado pelo usu�rio
   int number2; // denominador especificado pelo usu�rio
   double result; // resultado da divis�o

   cout << "Enter two integers (end-of-file to end): ";

   // permite ao usu�rio inserir dois inteiros para dividir
   while ( cin >> number1 >> number2 ) 
   {
      // bloco try cont�m c�digo que poderia lan�ar exce��o     
      // e c�digo que n�o deve executar se uma exce��o ocorrer  
      try                                                       
      {                                                         
         result = quotient( number1, number2 );                 
         cout << "The quotient is: " << result << endl;         
      } // fim do try                                           
                                                                
      // handler de exce��o trata uma exce��o de divis�o por zero
      catch ( DivideByZeroException &divideByZeroException )    
      {                                                         
         cout << "Exception occurred: "                         
            << divideByZeroException.what() << endl;            
      } // fim do catch                                         

      cout << "\nEnter two integers (end-of-file to end): ";
   } // fim do while

   cout << endl;
   return 0; // termina normalmente
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
