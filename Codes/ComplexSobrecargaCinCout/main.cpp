#include <iostream>
using namespace std;

class Complex
{
    friend ostream & operator << (ostream &out, const Complex &c);
    friend istream & operator >> (istream &in,  Complex &c);
public:
    Complex(int r = 0, int i =0);
private:
    int real, imag;
};

Complex::Complex(int r, int i): real(r), imag(i)
{

}

ostream & operator << (ostream & out, const Complex &c)
{
    out << c.real;
    if(c.imag < 0)
    {
        out << "-i" << -c.imag << endl;
    }
    else
    {
        out << "+i" << c.imag << endl;
    }

    return out;
}

istream & operator >> (istream & in,  Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imagenory Part ";
    in >> c.imag;
    return in;
}

int main()
{
    Complex c1;
    cin >> c1;
    cout << "The complex object is ";
    cout << c1;
    return 0;
}
