#include <iostream>
using namespace std;

class Retangulo
{
public:
    Retangulo(int l, int a): largura(l), altura(a){}
    bool operator < (const Retangulo & RetanguloComparar)
    {
        return (this->getArea() < RetanguloComparar.getArea());
    }
    int getArea(void) const
    {
        return altura*largura;
    }
private:
    int largura;
    int altura;
};

int main()
{
    Retangulo r1(3,4), r2(2,1);
    cout << "R1 é maior que R2? " << (r1 < r2 ? "sim" : "não") << endl;
    return 0;
}
