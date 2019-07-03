// Colocando chamadas de fun��o membro em cascata.
#ifndef TIME_H
#define TIME_H

class Time 
{
public:
   Time( int = 0, int = 0, int = 0 ); // construtor padr�o

   // fun��es set (os tipos de retorno Time & permitem cascateamento)
   Time &setTime( int, int, int ); // configura hour, minute, second
   Time &setHour( int ); // configura hour                          
   Time &setMinute( int ); // configura minute                      
   Time &setSecond( int ); // configura second                      

   // fun��es get (normalmente declaradas const)
   int getHour() const; // retorna hour 
   int getMinute() const; // retorna minute
   int getSecond() const; // retorna second

   // fun��es print (normalmente declaradas const)
   void printUniversal() const; // imprime hora universal
   void printStandard() const; // imprime a hora padr�o
private:
   int hour; // 0 - 23 (formato de rel�gio de 24 horas)
   int minute; // 0 - 59
   int second; // 0 - 59
}; // fim da classe Time

#endif
