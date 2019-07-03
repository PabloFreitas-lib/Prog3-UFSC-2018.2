// Fig. 14.4: fig14_04.cpp
// Programa de teste da template de classe Stack. A fun��o main utiliza uma
// template de fun��o para manipular objetos do tipo Stack< T >.
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "Stack.h" // Defini��o de template de classe Stack

// template de fun��o para manipular Stack< T >           
template< typename T >                                    
void testStack(                                           
   Stack< T > &theStack, // refer�ncia a Stack< T >       
   T value, // valor inicial a inserir                    
   T increment, // incremento para valores subseq�entes   
   const string stackName ) // nome do objeto Stack< T >  
{                                                         
   cout << "\nPushing elements onto " << stackName << '\n';
                                                          
   // insere elemento na Stack                            
   while ( theStack.push( value ) )                       
   {                                                      
      cout << value << ' ';                               
      value += increment;                                 
   } // fim do while                                      
                                                          
   cout << "\nStack is full. Cannot push " << value       
      << "\n\nPopping elements from " << stackName << '\n';
                                                          
   // remove elementos da Stack                           
   while ( theStack.pop( value ) )                        
      cout << value << ' ';                               
                                                          
   cout << "\nStack is empty. Cannot pop" << endl;        
} // fim da template de fun��o testStack                  

int main()
{
   Stack< double > doubleStack( 5 ); // tamanho 5
   Stack< int > intStack; // tamanho padr�o de 10

   testStack( doubleStack, 1.1, 1.1, "doubleStack" );
   testStack( intStack, 1, 1, "intStack" );          

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
