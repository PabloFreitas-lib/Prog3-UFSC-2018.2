#ifndef DATE_H
#define DATE_H

class Date 
{
public:
   Date( int = 1, int = 1, int = 1900 ); // construtor padr�o
   void print() const; // imprime data no formato m�s/dia/ano
   ~Date(); // fornecida para confirmar a ordem de destrui��o
private:
   int month; // 1-12 (Janeiro-Dezembro)
   int day; // 1-31 conforme o m�s
   int year; // qualquer ano

   // fun��o utilit�ria para verificar se o dia � adequado para o m�s e ano
   int checkDay( int ) const; 
}; // fim da classe Date

#endif
