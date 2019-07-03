#include <iostream>
#include <iomanip>
using namespace std;

#include "Time.h" // Defini��o da classe Time

// fun��o constructor para inicializar dados private;
// chama a fun��o membro setTime para configurar vari�veis;
// valores padr�o s�o 0 (ver defini��o de classe)
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
} // fim da fun��o setTime

// configura valor de hour
Time & Time::setHour( int h ) // observe Time & return
{
   hour = ( h >= 0 && h < 24 ) ? h : 0; // valida horas
   return *this; // permite cascateamento
} // fim da fun��o setHour

// configura valor de minute
Time & Time::setMinute( int m ) // observe Time & return
{
   minute = ( m >= 0 && m < 60 ) ? m : 0; // valida minutos
   return *this; // permite cascateamento
} // fim da fun��o setMinute

// configura valor de second
Time & Time::setSecond( int s ) // observe Time & return
{
   second = ( s >= 0 && s < 60 ) ? s : 0; // valida segundos
   return *this; // permite cascateamento
} // fim da fun��o setSecond

// obt�m valor da hora
int Time::getHour() const 
{ 
   return hour; 
} // fim da fun��o getHour

// obt�m valor dos minutos
int Time::getMinute() const 
{ 
   return minute; 
} // fim da fun��o getMinute

// obt�m valor dos segundos
int Time::getSecond() const 
{ 
   return second; 
} // fim da fun��o getSecond

// imprime a hora no formato de data/hora universal (HH:MM:SS)
void Time::printUniversal() const
{
   cout << setfill( '0' ) << setw( 2 ) << hour << ":"
      << setw( 2 ) << minute << ":" << setw( 2 ) << second;
} // fim da fun��o printUniversal

// imprime a hora no formato padr�o de data/hora (HH:MM:SS AM ou PM)
void Time::printStandard() const
{
   cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
      << ":" << setfill( '0' ) << setw( 2 ) << minute
      << ":" << setw( 2 ) << second << ( hour < 12 ? " AM" : " PM" );
} // fim da fun��o printStandard
