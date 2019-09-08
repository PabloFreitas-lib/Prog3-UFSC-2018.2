#include <iostream>
#include <string>

using namespace std;

#define TAM 5

class Lampada
{
public:
    //Lampada(void);
    //Lampada(bool, int);
    Lampada(bool = true, int = 0);
    ~Lampada(void);
    bool getEstado(void);
    void setNumero(int);
private:
    bool _estado;
    int _numero;
};

int main()
{
    Lampada * ptr_lampada = new Lampada[TAM];
    string aux;
    cout << endl << "As lâmpadas estão:" << endl;
    for(int i=0; i < TAM; i++)
    {
        ptr_lampada[i].setNumero(i+1);
        cout << (aux = (ptr_lampada[i].getEstado() == true)? "ligada" : "desligada") << endl;
    }
    cout << endl;
    delete [] ptr_lampada;
    ptr_lampada = NULL;
    return 0;
}

/*
Lampada::Lampada(void): _estado(false)
{
    cout << "Construtor \"void\"" << endl;
}
//*/

Lampada::Lampada(bool estado, int numero): _estado(estado), _numero(numero)
{
    cout << "Construtor que recebe bool" << endl;
}

Lampada::~Lampada(void)
{
    cout << "Destruindo lâmpada: " << _numero << endl;
}

bool Lampada::getEstado(void)
{
    return _estado;
}

void Lampada::setNumero(int numero)
{
    _numero = numero;
}

