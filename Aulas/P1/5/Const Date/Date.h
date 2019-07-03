#ifndef DATE_H
#define DATE_H

class Date 
{
public:
   Date( int = 1, int = 1, int = 1900 ); // construtor padrão
   void print() const; // imprime data no formato mês/dia/ano
   ~Date(); // fornecida para confirmar a ordem de destruição
private:
   int month; // 1-12 (Janeiro-Dezembro)
   int day; // 1-31 conforme o mês
   int year; // qualquer ano

   // função utilitária para verificar se o dia é adequado para o mês e ano
   int checkDay( int ) const; 
}; // fim da classe Date

#endif
