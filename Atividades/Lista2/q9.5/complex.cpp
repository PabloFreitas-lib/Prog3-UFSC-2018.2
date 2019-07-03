#include "complex_lib.hpp"


//---------------------------------------------(Construtor)----------------------------------------------------
    Complex::Complex(void) {
        cout << "Object is being created\n" << endl;
    }
    
//--------------------------------------------(Basicas)-----------------------------------------------------------------------------
    void Complex::setNum1(double real ,double imaginaria){
       num_1.parteReal = real;
       num_1.parteImaginaria = imaginaria;
    }
    void Complex::setNum2(double real,double imaginaria){
       num_2.parteReal = real;
       num_2.parteImaginaria = imaginaria;
    }
    void Complex::setNum(double real ,double imaginaria){
       num.parteReal = real;
       num.parteImaginaria = imaginaria;
    }
    double Complex::getNumReal1(void){
        return(num_1.parteReal);
    }
    double Complex::getNumImaginaria1(void){
        return(num_1.parteImaginaria);
    }
    double Complex::getNumReal2(void){
        return(num_2.parteReal);
    }
    double Complex::getNumImaginaria2(void){
        return(num_2.parteImaginaria);
    }
    double Complex::getNumReal(void){
        return(num.parteReal);
    }
    double Complex::getNumImaginaria(void){
        return(num.parteImaginaria);
    }
    
//----------------------------------------------(Operacoes)-------------------------------------------------------------
    void Complex::soma_complex(double real1,double img1,double real2,double img2){
        real1 = Complex::getNumReal1(); img1 = Complex::getNumImaginaria1();
        real2 = Complex::getNumReal2(); img2 = Complex::getNumImaginaria2();
        Complex::setNum(real1 +real2, img1 +img2);
    }
    void Complex::diferenca_complex(double real1,double img1,double real2,double img2){
        real1 = Complex::getNumReal1(); img1 = Complex::getNumImaginaria1();
        real2 = Complex::getNumReal2(); img2 = Complex::getNumImaginaria2();
        Complex::setNum(real2 - real1 , img2 - img1);
    }
    void Complex::imprimir (double real, double img){
        real = Complex::getNumReal();
        img = Complex::getNumImaginaria();
        cout << "1 - Parte real : " << real << " Parte imaginaria : " << img << "i" <<endl;
    }
        
