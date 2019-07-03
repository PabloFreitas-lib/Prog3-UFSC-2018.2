#include "racional_biblio.hpp"


// -----Construtor--------Destrutor-------------------------------
Rational::Rational()
{
    //cout << "Classe Rational criada com sucesso!\n" << endl;
    
}
Rational::~Rational()
{
    //cout << "Classe Rational destruida com sucesso!\n" << endl;
}
//------------Acesso ao privado-------------------------------------
void Rational::setNumerador(int num)
{
    numerador = num;
}
void Rational::setDenominador(int dem)
{
    denominador = dem;    
}
int Rational::getNumerador(void)
{
    return(numerador);
}
int Rational::getDenominador(void)
{
    return(denominador);
}
//-----------Impressao---------------------------------------------------------------------------------
void Rational::imprime_fracao(Rational numero)
{
    cout << numero.getDenominador() <<"/" << numero.getDenominador() << "  ." << endl;    
}
void Rational::imprime_float(Rational numero)
{
    cout << "Numero flutuante : " << (float)(numero.getNumerador()/numero.getDenominador()) << endl;
}

//--------------------------------Operacoes------------------------------------------------------------

void Rational::soma(Rational num1,Rational num2,Rational num3)
{
num3.setNumerador(num1.getNumerador() + num2.getNumerador());
num3.setDenominador(num1.getDenominador() + num2.getDenominador());
num3.imprime_fracao(num3);
num3.imprime_float(num3);

}
void Rational::subtracao(Rational num1,Rational num2,Rational num3)
{
num3.setNumerador(num1.getNumerador() - num2.getNumerador());
num3.setDenominador(num1.getDenominador() - num2.getDenominador());
num3.imprime_fracao(num3);
num3.imprime_float(num3);    
}
void Rational::multiplicao(Rational num1,Rational num2,Rational num3)
{
num3.setNumerador(num1.getNumerador() * num2.getNumerador());
num3.setDenominador(num1.getDenominador() * num2.getDenominador());
num3.imprime_fracao(num3);
num3.imprime_float(num3);
}
void Rational::divisao(Rational num1,Rational num2,Rational num3)
{
num3.setNumerador(num3.getNumerador() / num2.getNumerador());
num3.setDenominador(num1.getDenominador() / num2.getDenominador());
num3.imprime_fracao(num3);
num3.imprime_float(num3);           
}
