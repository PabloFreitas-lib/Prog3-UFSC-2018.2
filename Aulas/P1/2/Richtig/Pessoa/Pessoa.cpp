#include "Pessoa.hpp"


//----------------------DATA--------------------------------------  
int data_t::getDia(void)
{
    return(dia);
}
int data_t::getMes(void)
{
    return(mes);
}
int data_t::getAno(void)
{
    return(ano);
}
void data_t::setData(int Dia,int Mes,int Ano)
{
    dia = Dia;
    mes = Mes;
    ano = Ano;
}
//----------------PESSOA-----------------------------------------
Pessoa::Pessoa()
{
    
}
Pessoa::~Pessoa()
{
    
}

void Pessoa::setNome(string _nome)
{
    nome = _nome;
}

string Pessoa::getNome(void)
{
    return(nome);
}

void Pessoa::setNascimento(int Dia, int Mes, int Ano) // nascimento pertence ao privado
{
   nascimento.setData(Dia,Mes,Ano);
}

data_t Pessoa::getNascimento(void)
{
    return(nascimento);
}

void Pessoa::setCPF(string numero)
{
    cpf = numero;
}

string Pessoa::getCPF(void)
{
    return(cpf);
}

