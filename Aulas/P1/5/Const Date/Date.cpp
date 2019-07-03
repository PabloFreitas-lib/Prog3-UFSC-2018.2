#include <iostream>
using namespace std;

#include "Date.h" // inclui defini��o da classe Date

// construtor confirma valor adequado para month; chama
// fun��o utilit�ria checkDay para confirmar o valor adequado para day
Date::Date( int mn, int dy, int yr )
{
   if ( mn > 0 && mn <= 12 ) // valida month
      month = mn;
   else 
   {                     
      month = 1; // m�s inv�lido configurado como 1
      cout << "Invalid month (" << mn << ") set to 1.\n";
   } // fim de else

   year = yr; // poderia validar yr
   day = checkDay( dy ); // validade de day

   // gera sa�da do objeto Date para mostrar quando seu construtor � chamado
   cout << "Date object constructor for date ";
   print();                   
   cout << endl;
} // fim do construtor Date

// imprime objeto Date na forma de m�s/dia/ano
void Date::print() const
{
   cout << month << '/' << day << '/' << year; 
} // fim da fun��o print

// gera sa�da do objeto Date para mostrar quando seu destrutor � chamado
Date::~Date()
{ 
   cout << "Date object destructor for date ";
   print();
   cout << endl;
} // fim do destrutor ~Date

// fun��o utilit�ria para confirmar valor adequado de day 
// com base em month e year; tamb�m trata anos bissextos 
int Date::checkDay( int testDay ) const
{
   static const int daysPerMonth[ 13 ] = 
      { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   // determina se testDay � v�lido durante m�s especificado
   if ( testDay > 0 && testDay <= daysPerMonth[ month ] )
      return testDay;

   // verifica��o 29 de fevereiro para ano bissexto
   if ( month == 2 && testDay == 29 && ( year % 400 == 0 || 
      ( year % 4 == 0 && year % 100 != 0 ) ) )
      return testDay;

   cout << "Invalid day (" << testDay << ") set to 1.\n";
   return 1; // deixa o objeto em estado consistente se valor ruim
} // fim da fun��o checkDay
