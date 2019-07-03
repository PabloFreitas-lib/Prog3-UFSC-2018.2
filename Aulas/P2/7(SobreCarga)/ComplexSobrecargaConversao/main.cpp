#include <iostream>
#include <cmath>

using namespace std;

class Complex
{
public:

    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i)
    {}

    double mag()
    {
        return getMag();
    }

    operator double () const
    {
        return sqrt(real * real + imag * imag);
    }

private:

    double getMag() const
    {
        return sqrt(real * real + imag * imag);
    }

private:

    double real;
    double imag;
};

int main()
{
    Complex com(3.0, 4.0);

    cout << "Via método: "<< com.mag() << endl;
    cout << "Via operador de conversão: " << com << endl;

    double c = double (com);
    cout << "Via double c: " << c << endl;
}
