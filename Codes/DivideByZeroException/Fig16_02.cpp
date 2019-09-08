// Fig. 16.2: Fig16_02.cpp
// Um exemplo simples de tratamento de exceções que verifica
// exceções de divisão por zero.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "DivideByZeroException.h" // Classe DivideByZeroException 

// realiza a divisão e lança o objeto DivideByZeroException se
// a exceção de divisão por zero ocorrer
double quotient( int numerator, int denominator )
{
   // lança DivideByZeroException se tentar dividir por zero
   if ( denominator == 0 )
      throw DivideByZeroException(); // termina a função

   // retorna resultado da divisão
   return static_cast< double >( numerator ) / denominator;
} // fim da função quotient

int main()
{
   int number1; // numerador especificado pelo usuário
   int number2; // denominador especificado pelo usuário
   double result; // resultado da divisão

   cout << "Enter two integers (end-of-file to end): ";

   // permite ao usuário inserir dois inteiros para dividir
   while ( cin >> number1 >> number2 ) 
   {
      // bloco try contém código que poderia lançar exceção     
      // e código que não deve executar se uma exceção ocorrer  
      try                                                       
      {                                                         
         result = quotient( number1, number2 );                 
         cout << "The quotient is: " << result << endl;         
      } // fim do try                                           
                                                                
      // handler de exceção trata uma exceção de divisão por zero
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
