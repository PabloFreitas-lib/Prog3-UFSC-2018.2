#include <iostream>
using namespace std;

#define FUNCAO true

class Caixa;


#if FUNCAO == true
double operator+(const Caixa &, const Caixa &); // possibilidade de trabalhar com classes diferentes
#endif // FUNCAO

//------------------------------------------------------------

class Caixa
{
    friend double operator+(const Caixa &, const Caixa &);
public:
    double getVolume(void)
    {
        return _comprimento * _largura * _altura;
    }
    void set_comprimento( double comprimento )
    {
        _comprimento = comprimento;
    }
    void set_largura( double largura )
    {
        _largura = largura;
    }
    void set_altura( double altura )
    {
        _altura = altura;
    }

#if FUNCAO == false
    // Sobrecarga do operador +
    Caixa operator+(const Caixa & b)
    {
        Caixa caixa;
        caixa._comprimento = this->_comprimento + b._comprimento;
        caixa._largura = this->_largura + b._largura;
        caixa._altura = this->_altura + b._altura;
        return caixa;
    }
#endif // FUNCAO

private:
    double _comprimento;
    double _largura;
    double _altura;
};

//------------------------------------------------------------

int main(void)
{
    Caixa Caixa1;
    Caixa Caixa2;
    Caixa Caixa3;
    double volume = 0.0;

    Caixa1.set_comprimento(6.0);
    Caixa1.set_largura(7.0);
    Caixa1.set_altura(5.0);

    Caixa2.set_comprimento(12.0);
    Caixa2.set_largura(13.0);
    Caixa2.set_altura(10.0);

    #if FUNCAO == false
        volume = Caixa1.getVolume();
        cout << "Volume da Caixa1 : " << volume <<endl;

        volume = Caixa2.getVolume();
        cout << "Volume da Caixa2 : " << volume <<endl;

        Caixa3 = Caixa1 + Caixa2;

        volume = Caixa3.getVolume();
        cout << "Volume da Caixa3 : " << volume <<endl;

        Caixa3 = Caixa1 + Caixa2;
    #endif // FUNCAO

    #if FUNCAO == true
        volume = Caixa1 + Caixa2;
        cout << "Volume total : " << volume <<endl;
    #endif // FUNCAO

return 0;
}

//------------------------------------------------------------

#if FUNCAO == true
double operator+(const Caixa & a, const Caixa & b)
{
    Caixa caixa;
    caixa._comprimento = a._comprimento + b._comprimento;
    caixa._largura = a._largura + b._largura;
    caixa._altura = a._altura + b._altura;
    return caixa.getVolume();
}
#endif // FUNCAO

//------------------------------------------------------------
