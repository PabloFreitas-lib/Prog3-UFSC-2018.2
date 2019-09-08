#include <iostream>

using namespace std;

class Vetor2D
{
public:
    Vetor2D(double _x, double _y): x(_x), y(_y){}

    //Vetor2D operator += (const Vetor2D & vector)
    //Vetor2D & operator += (const Vetor2D & vector)
    const Vetor2D & operator += (const Vetor2D & vector)
    {
        this->x += vector.x;
        this->y += vector.y;
        return *this;
    }

    void print(void)
    {
        cout << "(" << x << "," << y << ")" << endl;
    }

private:
    double x, y;
};

int main()
{
    Vetor2D v1(3.3,-4.1), v2(3.5,2.0), v3(1.4,-7.9);
    Vetor2D v4(v3);
    //(v1 += v2) = v3;
    (v1 += v2);
    cout << "V1="; v1.print();
    cout << "V2="; v2.print();
    cout << "V3="; v3.print();
    cout << "V4="; v4.print();
    return 0;
}
