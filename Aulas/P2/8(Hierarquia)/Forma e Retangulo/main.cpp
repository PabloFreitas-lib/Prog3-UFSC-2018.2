#include <iostream>
using namespace std;

class Forma
{
public:
    void setLargura(int l)
    {
        largura = l;
    }
    void setAltura(int h)
    {
        altura = h;
    }

protected:
    int largura;
    int altura;
};

class Retangulo: private Forma
{
public:
    int getArea()
    {
        return (largura * altura);
    }
};

int main(void)
{
    Retangulo ret;

    ret.setLargura(5);
    ret.setAltura(7);

    cout << "Área total " << ret.getArea() << endl;

    return 0;
}
