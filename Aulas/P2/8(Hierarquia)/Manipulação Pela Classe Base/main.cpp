#include <iostream>
using namespace std;

class Forma
{
protected:
    int largura, altura;

public:
    Forma( int a = 0, int b = 0)
    {
        largura = a;
        altura = b;
    }
    int area()
    {
        cout << "Classe forma, área: ";
        return 0;
    }
};
class Retangulo: public Forma
{
public:
    Retangulo( int a = 0, int b = 0):Forma(a, b) { }

    int area ()
    {
        cout << "Classe retângulo, área: ";
        return (largura * altura);
    }
};

class Triangulo: public Forma
{
public:
    Triangulo( int a = 0, int b = 0):Forma(a, b) { }

    int area ()
    {
        cout << "Classe triângulo, área: ";
        return (largura * altura / 2);
    }
};

int main()
{
    Forma * ptr_forma;
    Retangulo rec(10,7);
    Triangulo  tri(10,5);

    ptr_forma = &rec;
    cout << ptr_forma->area() << endl;

    ptr_forma = &tri;
    cout << ptr_forma->area() << endl;

    Retangulo * ptr_rec;
    ptr_rec = &rec;
    cout << ptr_rec->area() << endl;
    cout << ptr_rec->Forma::area() << endl;

    return 0;
}
