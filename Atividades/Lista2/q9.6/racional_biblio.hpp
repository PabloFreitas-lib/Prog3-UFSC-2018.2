#ifndef RACIONAL_BIBLIO_HPP
#define RACIONAL_BIBLIO_HPP

#include <iostream>
#include <string>
using namespace std;

class Rational
{
    public:
        Rational(); // construtor
        //------------------------
        ~Rational(); // destrutor
        //------------------------
        void setNumerador(int); 
        void setDenominador(int);
        //-------------------------
        int getNumerador(void);
        int getDenominador(void);
        //---------------------------------
        void imprime_fracao(Rational);
        void imprime_float(Rational);
        //---------------------------------
        void reduzir(int,int);
        //---------------------------------
        void soma(Rational,Rational,Rational);
        void subtracao(Rational,Rational,Rational);
        void multiplicao(Rational,Rational,Rational);
        void divisao(Rational,Rational,Rational);
        
    private:
        int denominador;
        int numerador;
};

#endif
