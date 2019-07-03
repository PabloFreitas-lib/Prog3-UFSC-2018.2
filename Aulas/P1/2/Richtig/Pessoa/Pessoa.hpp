#ifndef PESSOA_HPP_INCLUDED
#define PESSOA_HPP_INCLUDED

#include <string>
#include <iostream>

using namespace std;

typedef class data
{
public:
    void setData(int,int,int);
    int getDia(void);
    int getMes(void);
    int getAno(void);
private:
    int dia;
    int mes;
    int ano;
}data_t;

class Pessoa
{
public:
    // missing the construct
    Pessoa();
    ~Pessoa();
    void setNome(string _nome = "Sem nome"); // Pre-definindo o nome como "Sem nome"
    string getNome(void);

    void setNascimento(int dia, int mes, int ano);
    data_t getNascimento(void);

    void setCPF(string numero = 0);
    string getCPF(void);

private:
    string nome;
    data_t nascimento;
    string cpf;
};

#endif // PESSOA_HPP_INCLUDED
