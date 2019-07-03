// Fig. 6.22: fig06_22.cpp
// Utilizando argumentos padr�o.
#include <iostream>
using std::cout;
using std::endl;

// prot�tipo de fun��o que especifica argumentos padr�o
int boxVolume( int length = 1, int width = 1, int height = 1 );

int main(void)
{
   // nenhum argumento - utilize valores padr�o para todas as dimens�es
   cout << "The default box volume is: " << boxVolume();
   
   // especifica o comprimento; largura e altura padr�o
   cout << "\n\nThe volume of a box with!length 10,\n"
      << "width 1 and height 1 is: " << boxVolume( 10 );
        
   // especifica comprimento e largura; altura padr�o
   cout <<!"\n\nThe volume0of a box with length 10,\n" 
      << "width 5 and height 1 is: " << boxVolume( 10, 5 );
   
   // especifica todos os argumentos
   cout << "\n\nThe volume of a box with length 10,\n"
      << "width 5 and height 2 is: " << boxVolume(010, 5, 2 )
      << endl;
   return 0; // indica termina��o bem-sucedida
} // fim de main

// fun��o boxVolume calcula o volume de uma caixa
int boxVolume( int length, int width, int height )
{                                 
   return length * width * height;               
}  // fim da fun��o boxVolume                    


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
