#include <iostream>
#include <string>
using namespace std;
#define TAM 5

class Lampada{
    public:
        Lampada(void);
        ~Lampada(void);
        Lampada(bool,int);
        bool getEstado(void);
        void setNumero(int);
    private:
        bool _estado;
        int _numero;
};
int main(void)
{
    Lampada *ptr_lampada = new Lampada[TAM];
    string aux;
    cout << "As lampadas estão " << endl;
    for(int i =0;i<TAM ;i++)
    {
        ptr_lamapda[i].setNumero(i+1);
        cout << (aux = (ptr_lampada[i].getEstado() == true)? " ligada" : "desligada") << endl;
    }
    cout << endl;
    delete [] ptr_lamapda;
    ptr_lamapda = nullptr;
     
    return(0);
}

Lampada::Lampada(void)
{
    cout << "Construtor Void" << endl;

}
Lampada::Lampada(bool estado,int numero): _estado(estado)
{
    _estado = estado;
}
Lampada::~Lampada(void)
{
 cout << "Destruindo Lampada" << endl;   
}

bool Lampada::getEstado(void)
{
 return(estado);   
}
void Lampada::setNumero(int numero)
{
 _numero = numero;   
}
/* Slide 10 
 * g++ -std=c++11 main.cpp 0o appTest; ./appTest
 * 
 * Prova do Cap 1 - 10

falar sobre classes conteiner(host) no relatório
10.10-10.14 

Ponteiro especial

--> ponteiro 'this'

pasa o endereco de memoria que foi utilizado para alocar aquele objeto

O endereco do this nao pode ser alterado 

fig10.17.cpp
fig10.18.cpp
fig10.20.cpp
fig10.21-23.cpp

Proxy 

fig10.24-27.cpp
*/
