#include <iostream>
using namespace std;
//--------------------------------------------------------------------------------------
template < typename tipo > class Fila 
{
private:
    NoDERank < tipo > * ptr_cabeca , * ptr_cauda ;
    unsigned num_elementos ;
public :
    Fila ( void );
    ~Fila ( void );
    const tipo & frente ( void );
    const tipo & cauda ( void );
    void enfileira ( const tipo & elemento , unsigned
    rank = numeric_limits < unsigned >:: max ());
    void desenfileira ( void );
    bool vazia ( void );
    unsigned tamanho ( void );
    
};
template <typename tipo> class NoDERank
{
public:
    
private:
    NoDERank<tipo> *ptr_prox;
    NodeRank<tipo> *ptr_anterior;
    unsigned rank;
    tipo elemento;
};
//------------ FILA --------------------------------------------------------------
template <typename tipo>
Fila < tipo >::Fila()
{ 
    ptr_cabeca = nullptr;
    ptr_cauda = nullptr;
    num_elementos = 0;
}

template <typename tipo>
const tipo &cauda()
{
    return(ptr_cauda);
}
template <typename tipo>
const tipo & frente()
{
    return(ptr_cabeca->getElemento());
}
template <typename tipo>
void enfileirar(const tipo &elemento,unsigned rank = numeric_limits < unsigned >:: max ())
{
    
}
template <typename tipo>
void desenfileira(void)
{

}
template <typename tipo>
bool vazia(void)
{
    if(num_elementos == 0)
        return (true);
    else
        return(false);
}

template <typename tipo>
unsigned tamanho(void)
{
return(num_elementos);    
}

//--------------------------------------------------------------------------------------
void imprime(Fila<T> &filaRef);

int main(void)
{

}
