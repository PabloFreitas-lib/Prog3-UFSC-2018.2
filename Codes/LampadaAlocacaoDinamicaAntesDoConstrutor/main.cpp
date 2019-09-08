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
    Lampada lampada(true);
    return 0;
}

Lampada::Lampada(bool estado): _estado(false) // _estado(estado)
{
    string aux;
    cout << "Lamada já estava: " << (aux = (getEstado() == true)? "ligada" : "desligada") << endl;
    _estado = estado;
    cout << "Lamada passou a estar: " << (aux = (getEstado() == true)? "ligada" : "desligada") << endl;
}

Lampada::~Lampada(void)
{
    cout << "Destruindo lampada" << endl;
}

bool Lampada::getEstado(void)
{
    return _estado;
}
