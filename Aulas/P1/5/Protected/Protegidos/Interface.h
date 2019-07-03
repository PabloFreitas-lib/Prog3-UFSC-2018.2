class Implementation; // declaração de classe antecipada requerida pela linha 17

class Interface 
{
public:
   Interface( int ); // construtor
   void setValue( int ); // mesma interface public que
   int getValue() const; // a classe Implementation tem
   ~Interface(); // destrutor
private:
   // requer a declaração antecipada anterior (linha 6)
   Implementation *ptr;                               
}; // fim da classe Interface
