#include <iostream>
using namespace std;

#include "Time.h" // Defini��o da classe Time

int main()
{
   Time t; // cria o objeto Time

   // chamadas de fun��o em cascata               
   t.setHour( 18 ).setMinute( 30 ).setSecond( 22 );

   // gera sa�da da hora nos formatos universal e padr�o
   cout << "Universal time: ";
   t.printUniversal();

   cout << "\nStandard time: ";
   t.printStandard();

   cout << "\n\nNew standard time: ";

   // chamadas de fun��o em cascata       
   t.setTime( 20, 20, 20 ).printStandard();
   cout << endl;
   return 0;
} // fim de main
