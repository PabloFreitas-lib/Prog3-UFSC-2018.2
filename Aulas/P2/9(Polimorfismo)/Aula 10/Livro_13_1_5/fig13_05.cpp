// Fig. 13.5: fig13_05.cpp
// Apontando ponteiros de classe básica e classe derivada para objetos de classe
// básica e classe derivada, respectivamente.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

// inclui definições de classe
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

int main()
{
    // cria objeto de classe básica
    CommissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000, .06 );

    // cria ponteiro de classe básica
    CommissionEmployee *commissionEmployeePtr = 0;

    // cria objeto de classe derivada
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "333-33-3333", 5000, .04, 300 );

    // cria ponteiro de classe derivada
    BasePlusCommissionEmployee *basePlusCommissionEmployeePtr = 0;

    // configura a formatação de saída de ponto flutuante
    cout << fixed << setprecision( 2 );

    // gera saída dos objetos commissionEmployee e basePlusCommissionEmployee
    cout << "Print base-class and derived-class objects:\n\n";
    commissionEmployee.print(); // invoca print da classe básica
    cout << "\n\n";
    basePlusCommissionEmployee.print(); // invoca print da classe derivada

    // aponta o ponteiro de classe básica para o objeto de classe básica e imprime
    commissionEmployeePtr = &commissionEmployee; // perfeitamente natural
    cout << "\n\n\nCalling print with base-class pointer to "
         << "\nbase-class object invokes base-class print function:\n\n";
    commissionEmployeePtr->print(); // invoca print da classe básica

    // aponta o ponteiro de classe derivada p/ o objeto de classe derivada e imprime
    basePlusCommissionEmployeePtr = &basePlusCommissionEmployee; // natural
    cout << "\n\n\nCalling print with derived-class pointer to "
         << "\nderived-class object invokes derived-class "
         << "print function:\n\n";
    basePlusCommissionEmployeePtr->print(); // invoca print da classe derivada

    // aponta ponteiro de classe básica para o objeto de classe derivada e imprime
    commissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\n\n\nCalling print with base-class pointer to "
         << "derived-class object\ninvokes base-class print "
         << "function on that derived-class object:\n\n";
    commissionEmployeePtr->print(); // invoca print da classe básica
    cout << endl;
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
