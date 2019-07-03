#include <iostream>
#include <string>

using namespace std;

#define TAM 5

class Lampada
{
public:
    Lampada(bool = false);
    ~Lampada(void);
    bool getEstado(void);
private:
    bool _estado;
    static int _numero;

};

int Lampada::_numero = 0;

int main()
{
    Lampada * ptr_lampada = new Lampada[TAM]{Lampada(false)};
    string aux;
    cout << endl << "As lâmpadas estão:" << endl;
    for(int i=0; i < TAM; i++)
    {
        cout << (aux = (ptr_lampada[i].getEstado() == true)? "ligada" : "desligada") << endl;
    }
    cout << endl;
    delete [] ptr_lampada;
    ptr_lampada = NULL;
    return 0;
}

Lampada::Lampada(bool estado): _estado(estado)
{
    ++_numero;
    cout << "Construtor que recebe bool de " << _numero << endl;
}

Lampada::~Lampada(void)
{
    cout << "Destruindo lampada: " << _numero << endl;
    --_numero;
}

bool Lampada::getEstado(void)
{
    return _estado;
}


