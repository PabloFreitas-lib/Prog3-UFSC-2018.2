// Fig. 9.12: CreateAndDestroy.cpp
// Defini��es de fun��o membro da classe CreateAndDestroy.
#include <iostream>
using std::cout;
using std::endl;

#include "CreateAndDestroy.h"// inclui a defini��o da classe CreateAndDestroy
                                                                        
// construtor                                                          
CreateAndDestroy::CreateAndDestroy( int ID, string messageString )     
{                                                                      
   objectID = ID; // configura o n�mero de ID do objeto                
   message = messageString; // configura mensagem descritiva do objeto 
                                                                       
   cout << "Object " << objectID << "   constructor runs   "           
      << message << endl;                                              
} // fim do construtor CreateAndDestroy                                

// destrutor                                                           
CreateAndDestroy::~CreateAndDestroy()                                  
{                                                                      
   // gera sa�da de nova linha para certos objetos; ajuda a legibilidade
   cout << ( objectID == 1 || objectID == 6 ? "\n" : "" );             
                                                                       
   cout << "Object " << objectID << "   destructor runs    "           
      << message << endl;                                              
} // fim do destrutor ~CreateAndDestroy                                


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
