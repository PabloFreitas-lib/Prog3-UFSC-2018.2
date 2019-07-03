// Fig. 14.2: Stack.h
// Template de classe Stack.
#ifndef STACK_H
#define STACK_H

template< typename T >
class Stack          
{
public:
   Stack( int = 10 ); // construtor padrão (tamanho de Stack 10)

   // destrutor
   ~Stack() 
   { 
      delete [] stackPtr; // desaloca o espaço interno para Stack
   } // fim do destrutor ~Stack

   bool push( const T& ); // insere (push) um elemento na Stack 
   bool pop( T& ); // remove (pop) um elemento da Stack

   // determina se a Stack está vazia
   bool isEmpty() const 
   { 
      return top == -1; 
   } // fim da função isEmpty

   // determina se Stack está cheia
   bool isFull() const 
   { 
      return top == size - 1; 
   } // fim da função isFull

private:
   int size; // número de elementos na Stack
   int top; // localização do elemento superior (-1 significa vazio)
   T *stackPtr; // ponteiro para a representação interna da Stack
}; // fim da classe template Stack

// template construtora
template< typename T >   
Stack< T >::Stack( int s )
   : size( s > 0 ? s : 10 ), // valida o tamanho
     top( -1 ), // Stack inicialmente vazia
     stackPtr( new T[ size ] ) // aloca memória para elementos
{
   // corpo vazio
} // fim da template construtora Stack

// insere elemento na Stack;
// se bem-sucedida, retorna true; caso contrário, retorna false
template< typename T >                    
bool Stack< T >::push( const T &pushValue )
{
   if ( !isFull() )
   {
      stackPtr[ ++top ] = pushValue; // insere item em Stack
      return true; // inserção bem-sucedido
   } // fim do if

   return false; // inserção mal-sucedido
} // fim da template de função push

// remove elemento da Stack;
// se bem-sucedida, retorna true; caso contrário, retorna false
template< typename T >             
bool Stack< T >::pop( T &popValue )
{
   if ( !isEmpty() ) 
   {
      popValue = stackPtr[ top-- ]; // remove item da Stack
      return true; // remoção bem-sucedida
   } // fim do if

   return false; // remoção mal-sucedida
} // fim da template de função pop

#endif


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
