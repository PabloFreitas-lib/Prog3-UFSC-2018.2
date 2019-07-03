// Fig. 9.12: CreateAndDestroy.cpp
// Definições de função membro da classe CreateAndDestroy.
#include <iostream>
using std::cout;
using std::endl;

#include "CreateAndDestroy.h"// inclui a definição da classe CreateAndDestroy
                                                                        
// construtor                                                          
CreateAndDestroy::CreateAndDestroy( int ID, string messageString )     
{                                                                      
   objectID = ID; // configura o número de ID do objeto                
   message = messageString; // configura mensagem descritiva do objeto 
                                                                       
   cout << "Object " << objectID << "   constructor runs   "           
      << message << endl;                                              
} // fim do construtor CreateAndDestroy                                

// destrutor                                                           
CreateAndDestroy::~CreateAndDestroy()                                  
{                                                                      
   // gera saída de nova linha para certos objetos; ajuda a legibilidade
   cout << ( objectID == 1 || objectID == 6 ? "\n" : "" );             
                                                                       
   cout << "Object " << objectID << "   destructor runs    "           
      << message << endl;                                              
} // fim do destrutor ~CreateAndDestroy                                


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
