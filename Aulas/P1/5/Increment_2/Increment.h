#ifndef INCREMENT_H
#define INCREMENT_H

class Increment 
{
public:
   Increment( int c = 0, int i = 1 ); // construtor padr�o

   // Defini��o da fun��o addIncrement
   void addIncrement() 
   { 
      count += increment; 
   } // fim da fun��o addIncrement

   void print() const; // imprime count e increment
private:
   int count;
   const int increment; // membro de dados const
}; // fim da classe Increment

#endif
