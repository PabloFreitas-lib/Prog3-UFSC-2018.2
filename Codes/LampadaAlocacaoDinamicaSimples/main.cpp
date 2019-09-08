#include <iostream>
#include <string>

using namespace std;

class Lampada
{
public:
    Lampada(bool);
    ~Lampada(void);
    bool getEstado(void);
private:
    bool _estado;
};

int main(void)
{
    Lampada * ptr_lampada = new Lampada(true); // Lampada(false);
    string aux;
    cout << "Lampada: " << (aux = (ptr_lampada[0].getEstado() == true)? "ligada" : "desligada") << endl;
    delete ptr_lampada;
    ptr_lampada = NULL;
    return 0;
}

Lampada::Lampada(bool estado)
{
    _estado = estado;
}

Lampada::~Lampada(void)
{
    cout << "Destruindo lampada" << endl;
}

bool Lampada::getEstado(void)
{
    return _estado;
}
