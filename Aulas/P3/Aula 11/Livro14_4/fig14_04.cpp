// Fig. 14.4: fig14_04.cpp
// Programa de teste da template de classe Stack. A função main utiliza uma
// template de função para manipular objetos do tipo Stack< T >.
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "Stack.h" // Definição de template de classe Stack

// template de função para manipular Stack< T >           
template< typename T >                                    
void testStack(                                           
   Stack< T > &theStack, // referência a Stack< T >       
   T value, // valor inicial a inserir                    
   T increment, // incremento para valores subseqüentes   
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
} // fim da template de função testStack                  

int main()
{
   Stack< double > doubleStack( 5 ); // tamanho 5
   Stack< int > intStack; // tamanho padrão de 10

   testStack( doubleStack, 1.1, 1.1, "doubleStack" );
   testStack( intStack, 1, 1, "intStack" );          

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
