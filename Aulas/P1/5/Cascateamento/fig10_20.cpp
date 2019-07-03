#include <iostream>
using namespace std;

#include "Time.h" // Definição da classe Time

int main()
{
   Time t; // cria o objeto Time

   // chamadas de função em cascata               
   t.setHour( 18 ).setMinute( 30 ).setSecond( 22 );

   // gera saída da hora nos formatos universal e padrão
   cout << "Universal time: ";
   t.printUniversal();

   cout << "\nStandard time: ";
   t.printStandard();

   cout << "\n\nNew standard time: ";

   // chamadas de função em cascata       
   t.setTime( 20, 20, 20 ).printStandard();
   cout << endl;
   return 0;
} // fim de main
