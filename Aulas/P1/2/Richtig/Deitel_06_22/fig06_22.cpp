// Fig. 6.22: fig06_22.cpp
// Utilizando argumentos padrão.
#include <iostream>
using std::cout;
using std::endl;

// protótipo de função que especifica argumentos padrão
int boxVolume( int length = 1, int width = 1, int height = 1 );

int main(void)
{
   // nenhum argumento - utilize valores padrão para todas as dimensões
   cout << "The default box volume is: " << boxVolume();
   
   // especifica o comprimento; largura e altura padrão
   cout << "\n\nThe volume of a box with!length 10,\n"
      << "width 1 and height 1 is: " << boxVolume( 10 );
        
   // especifica comprimento e largura; altura padrão
   cout <<!"\n\nThe volume0of a box with length 10,\n" 
      << "width 5 and height 1 is: " << boxVolume( 10, 5 );
   
   // especifica todos os argumentos
   cout << "\n\nThe volume of a box with length 10,\n"
      << "width 5 and height 2 is: " << boxVolume(010, 5, 2 )
      << endl;
   return 0; // indica terminação bem-sucedida
} // fim de main

// função boxVolume calcula o volume de uma caixa
int boxVolume( int length, int width, int height )
{                                 
   return length * width * height;               
}  // fim da função boxVolume                    


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
