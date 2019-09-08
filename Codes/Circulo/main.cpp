#include <iostream>
using namespace std;

class Circulo
{
public:
    Circulo(int r): raio(r){}
    bool operator > (const Circulo & CirculoComparar)
    {
        return raio > CirculoComparar.raio;
    }
private:
    int raio;
};

int main()
{
    Circulo c1(3), c2(4);
    cout << "C1 é maior que C2? " << (c1 > c2 ? "sim" : "não") << endl;
    return 0;
}
