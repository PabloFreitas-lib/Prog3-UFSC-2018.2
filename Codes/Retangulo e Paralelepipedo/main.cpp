#include <iostream>
using namespace std;

class Retangulo;
bool operator > (const Retangulo & Retangulo1, const Retangulo & Retangulo2);

class Retangulo
{
    friend bool operator > (const Retangulo & Retangulo1, const Retangulo & Retangulo2);
public:
    Retangulo(int l, int a): largura(l), altura(a)
    {
        cout << "criando retangulo\t\t" << this << endl;
    }
    bool operator < (const Retangulo & RetanguloComparar)
    {
        return (this->getArea() < RetanguloComparar.getArea());
    }
    ~Retangulo(void)
    {
        cout << "deletando retangulo\t\t" << this << endl;
    }
    int getArea(void) const
    {
        cout << "getArea de retangulo\t\t" << this << endl;
        return altura*largura;
    }
protected:
    int largura;
    int altura;
};

class Paralelepipedo: public Retangulo
{
public:
    Paralelepipedo(int l, int a, int c = 2) : Retangulo(l, a), comprimento(c)
    {
        cout << "criando paralelepipedo\t\t" << this << endl;
    }
    ~Paralelepipedo(void)
    {
        cout << "deletando paralelepipedo\t" << this << endl;
    }
    int getArea(void) const
    {
        cout << "getArea de paralelepipedo\t" << this << endl;
        return Retangulo::getArea()*comprimento;
    }
private:
    int comprimento;
};

int main()
{
    Paralelepipedo p1(3,4,3), p2(2,1,2);
    cout << "Primeira chamada" << endl;
    cout << "P1 é menor que P2? " << (p1 < p2 ? "sim" : "não") << endl;
    cout << "Segunda chamada" << endl;
    cout << "Volume P1 = " << p1.getArea() << endl;
    cout << "Terceira chamada" << endl;
    cout << "P1 é maior que P2? " << (p1 > p2 ? "sim" : "não") << endl;
    return 0;
}

bool operator > (const Retangulo & Retangulo1, const Retangulo & Retangulo2)
{
    return (Retangulo1.getArea() > Retangulo2.getArea());
}
