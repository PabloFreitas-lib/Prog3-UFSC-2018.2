#include "Ex_Polimorfismo.hpp"

int main(void){
 cout << "Testes" << endl; 
 Shape *s1;
 Circle c1;
 Triangle t1;
 Square sq1;
 s1 = &c1;
 s1-> draw();
 //s1.draw();
 //c1.draw();
}
