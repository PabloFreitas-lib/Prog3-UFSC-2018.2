// Fig. 6.24: fig06_24.cpp
// Fun��es sobrecarregadas.
#include <iostream>
using std::cout;
using std::endl;

// fun��o square para valores int             
int square( int x )                           
{                                             
   cout << "square of integer: " << x << " is ";
   return (x * x);                              
} // fim da fun��o square com argumento int   

// fun��o square para valores double          
double square( double y )                     
{                                             
   cout << "square of double: " << y << " is ";
   return (y * y);                              
} // fim da fun��o square com argumento double

int main()
{
   cout << square( 7 ) << endl;// chama vers�o int 
   cout << square( 7.5 ) << endl; // chama vers�o double
   return (0); // indica termina��o bem-sucedida
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
