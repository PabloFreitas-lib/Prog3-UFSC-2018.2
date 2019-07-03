#include "Pessoa.hpp"
//#include <iostream>

using namespace std;

void preencheDadosPessoa(Pessoa * pessoa = NULL);
void imprimeDadosPessoa(Pessoa * pessoa = NULL);

int main(void)
{
    Pessoa * pessoa = new Pessoa;
    preencheDadosPessoa(pessoa);
    imprimeDadosPessoa(pessoa);
    delete pessoa;
    return 0;
}

void preencheDadosPessoa(Pessoa * pessoa)
{
    string aux;
    cout << "Entre com o nome: ";
    getline(cin,aux);
    pessoa->setNome(aux);
    cout << "Entre com a data de nascimento: " << endl;
    int a, b, c;
    cin >> a >> b >> c;
    pessoa->setNascimento(a,b,c);
    cout << "Entre com o CPF: ";
    cin >> aux;
    pessoa->setCPF(aux);
}

void imprimeDadosPessoa(Pessoa * pessoa)
{
    cout << endl;
    cout << "Nome: " << pessoa->getNome() << endl;
    cout << "Nascimento: " << (pessoa->getNascimento()).getDia() << "/" << (pessoa->getNascimento()).getMes() << "/" << (pessoa->getNascimento()).getAno() << endl;
    cout << "CPF: " << pessoa->getCPF() << endl;
}
