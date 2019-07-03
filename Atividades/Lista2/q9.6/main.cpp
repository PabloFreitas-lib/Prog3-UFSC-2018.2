#include "racional_biblio.hpp"

int main(void){
    Rational num1,num2,num3;
    num1.setNumerador(1);
    num2.setNumerador(5);
    
    num1.setDenominador(1);
    num2.setDenominador(1);
    
    num3.soma(num1,num2,num3);
    num3.subtracao(num1,num2,num3);
    num3.multiplicao(num1,num2,num3);
    num3.divisao(num1,num2,num3);
    return(0);
}
