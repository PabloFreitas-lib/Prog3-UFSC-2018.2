#include "complex_lib.hpp"

int main(void){
    Complex complex;
    cout << "Entre com o numero (a,b) sendo real e imaginaria : \n" << endl;
    double real1 = 5.0,img1 = 10.0,real2 = 2.0,img2 = 3.5,real_f,img_f;
    complex.setNum1(real1,img1);
    complex.setNum2(real2,img2);
    complex.soma_complex(complex.getNumReal1(),complex.getNumImaginaria1(),complex.getNumReal2(),complex.getNumImaginaria2() );
    complex.imprimir (real_f,img_f);
    complex.diferenca_complex(complex.getNumReal1(),complex.getNumImaginaria1(),complex.getNumReal2(),complex.getNumImaginaria2() );
    complex.imprimir (real_f,img_f);
    return(0);
}
