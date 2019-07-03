#ifndef INCREMENT_H
#define INCREMENT_H

class Increment 
{
public:
   Increment( int c = 0, int i = 1 ); // construtor padrão

   // Definição da função addIncrement
   void addIncrement() 
   { 
      count += increment; 
   } // fim da função addIncrement

   void print() const; // imprime count e increment
private:
   int count;
   const int increment; // membro de dados const
}; // fim da classe Increment

#endif
