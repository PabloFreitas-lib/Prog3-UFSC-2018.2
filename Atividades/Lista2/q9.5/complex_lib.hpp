#ifndef COMPLEX_LIB_HPP
#define COMPLEX_LIB_HPP

#include <iostream>
#include <string>
using namespace std;

/*
--> Utilize as variáveis double para representar os dados private da classe.
--> Forneça um construtor que permita que um objeto dessa classe seja inicializado quando ele for declarado.
--> O construtor deve conter valores-padrão no caso de nenhum inicializador ser fornecido.
--> Forneça as funções-membro public que realizam as tarefas a seguir:
*/
    typedef struct {
                double parteReal;
                double parteImaginaria;
    }numeros_t;

class Complex{
    public:
      //---------------------------------------------(Construtor)----------------------------------------------------
      //--> Forneça um construtor que permita que um objeto dessa classe seja inicializado quando ele for declarado.
       Complex();
       //--------------------------------------------(Basicas)----------------------------------------------------------------------------- 
        void setNum1(double,double);
        void setNum2(double,double);
        void setNum(double,double);
        double getNumReal1(void);
        double getNumImaginaria1(void);
        double getNumReal2(void);
        double getNumImaginaria2(void);
        double getNumReal(void);
        double getNumImaginaria(void);
     //----------------------------------------------(Operacoes)-------------------------------------------------------------
        // Somar dois números Complex: as partes reais são somadas de um lado e as partes imaginárias são somadas de outro.
        void soma_complex(double,double,double,double);
        // Subtrair dois números Complex: a parte real do operando direito é subtraída da parte real do operando esquerdo e a parte imaginária
        //do operando direito é subtraída da parte imaginária do operando esquerdo.
        void diferenca_complex(double,double,double,double);
        //Imprimir os números Complex na forma (a, b), onde a é a parte real e b é a parte imaginária.
        void imprimir (double,double);
        
    private:
    //--> Utilize as variáveis double para representar os dados private da classe.
        numeros_t num_1;
        numeros_t num_2;
        numeros_t num;
};


#endif
