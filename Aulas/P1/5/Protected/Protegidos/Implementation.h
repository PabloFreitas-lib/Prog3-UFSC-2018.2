class Implementation 
{
public:   
   Implementation( int v ); // construtor
   
   void setValue( int v ); // configura valor como v
   
   int getValue() const; // retorna value
private:
   int value; // dados que gostaríamos de ocultar do cliente
}; // fim da classe Implemention
