#include <iostream>
#include <iomanip>
using namespace std;

#include "Time.h" // Definição da classe Time

// função constructor para inicializar dados private;
// chama a função membro setTime para configurar variáveis;
// valores padrão são 0 (ver definição de classe)
Time::Time( int hr, int min, int sec ) 
{ 
   setTime( hr, min, sec ); 
} // fim do construtor de Time

// configura valores de hour, minute e second
Time & Time::setTime( int h, int m, int s ) // observe Time & return
{
   setHour( h );
   setMinute( m );
   setSecond( s ); 
   return *this; // permite cascateamento
} // fim da função setTime

// configura valor de hour
Time & Time::setHour( int h ) // observe Time & return
{
   hour = ( h >= 0 && h < 24 ) ? h : 0; // valida horas
   return *this; // permite cascateamento
} // fim da função setHour

// configura valor de minute
Time & Time::setMinute( int m ) // observe Time & return
{
   minute = ( m >= 0 && m < 60 ) ? m : 0; // valida minutos
   return *this; // permite cascateamento
} // fim da função setMinute

// configura valor de second
Time & Time::setSecond( int s ) // observe Time & return
{
   second = ( s >= 0 && s < 60 ) ? s : 0; // valida segundos
   return *this; // permite cascateamento
} // fim da função setSecond

// obtém valor da hora
int Time::getHour() const 
{ 
   return hour; 
} // fim da função getHour

// obtém valor dos minutos
int Time::getMinute() const 
{ 
   return minute; 
} // fim da função getMinute

// obtém valor dos segundos
int Time::getSecond() const 
{ 
   return second; 
} // fim da função getSecond

// imprime a hora no formato de data/hora universal (HH:MM:SS)
void Time::printUniversal() const
{
   cout << setfill( '0' ) << setw( 2 ) << hour << ":"
      << setw( 2 ) << minute << ":" << setw( 2 ) << second;
} // fim da função printUniversal

// imprime a hora no formato padrão de data/hora (HH:MM:SS AM ou PM)
void Time::printStandard() const
{
   cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
      << ":" << setfill( '0' ) << setw( 2 ) << minute
      << ":" << setw( 2 ) << second << ( hour < 12 ? " AM" : " PM" );
} // fim da função printStandard
