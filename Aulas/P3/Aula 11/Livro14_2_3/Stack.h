// Fig. 14.2: Stack.h
// Template de classe Stack.
#ifndef STACK_H
#define STACK_H

template< typename T >
class Stack          
{
public:
   Stack( int = 10 ); // construtor padr�o (tamanho de Stack 10)

   // destrutor
   ~Stack() 
   { 
      delete [] stackPtr; // desaloca o espa�o interno para Stack
   } // fim do destrutor ~Stack

   bool push( const T& ); // insere (push) um elemento na Stack 
   bool pop( T& ); // remove (pop) um elemento da Stack

   // determina se a Stack est� vazia
   bool isEmpty() const 
   { 
      return top == -1; 
   } // fim da fun��o isEmpty

   // determina se Stack est� cheia
   bool isFull() const 
   { 
      return top == size - 1; 
   } // fim da fun��o isFull

private:
   int size; // n�mero de elementos na Stack
   int top; // localiza��o do elemento superior (-1 significa vazio)
   T *stackPtr; // ponteiro para a representa��o interna da Stack
}; // fim da classe template Stack

// template construtora
template< typename T >   
Stack< T >::Stack( int s )
   : size( s > 0 ? s : 10 ), // valida o tamanho
     top( -1 ), // Stack inicialmente vazia
     stackPtr( new T[ size ] ) // aloca mem�ria para elementos
{
   // corpo vazio
} // fim da template construtora Stack

// insere elemento na Stack;
// se bem-sucedida, retorna true; caso contr�rio, retorna false
template< typename T >                    
bool Stack< T >::push( const T &pushValue )
{
   if ( !isFull() )
   {
      stackPtr[ ++top ] = pushValue; // insere item em Stack
      return true; // inser��o bem-sucedido
   } // fim do if

   return false; // inser��o mal-sucedido
} // fim da template de fun��o push

// remove elemento da Stack;
// se bem-sucedida, retorna true; caso contr�rio, retorna false
template< typename T >             
bool Stack< T >::pop( T &popValue )
{
   if ( !isEmpty() ) 
   {
      popValue = stackPtr[ top-- ]; // remove item da Stack
      return true; // remo��o bem-sucedida
   } // fim do if

   return false; // remo��o mal-sucedida
} // fim da template de fun��o pop

#endif


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
