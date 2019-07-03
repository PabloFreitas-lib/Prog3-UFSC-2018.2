#include <iostream>
#include <string>

using namespace std;

typedef struct DataAdmissao
{
    int dia;
    int mes;
    int ano;
} DataAdm_t;

class Funcionario
{
public:
    Funcionario(string _nome, float _salario, DataAdm_t _dataAdmissao, string _departamento)
    {
        setNome(_nome);
        setSalario(_salario);
        setDataAdmissao(_dataAdmissao);
        setDepartamento(_departamento);
    }
    void setNome(string _nome)
    {
        nome = _nome;
    }
    string getNome(void)
    {
        return nome;
    }
    void setSalario(float _salario)
    {
        salario = _salario;
    }
    float getSalario(void)
    {
        return salario;
    }
    void setDataAdmissao(DataAdm_t _dataAdmissao)
    {
        dataAdmissao.dia = _dataAdmissao.dia;
        dataAdmissao.mes = _dataAdmissao.mes;
        dataAdmissao.ano = _dataAdmissao.ano;
    }
    DataAdm_t getDataAdmissao(void)
    {
        return dataAdmissao;
    }
    void setDepartamento(string _departamento)
    {
        departamento = _departamento;
    }
    string getDepartamento(void)
    {
        return departamento;
    }

private:
    string nome;
    float salario;
    DataAdm_t dataAdmissao;
    string departamento;
};

class Empresa
{
public:
    Empresa(string _nome, int _CNPJ)
    {
        setNome(_nome);
        setCNPJ(_CNPJ);
        numeroFuncionarios = 0;
    }
    void setNome(string _nome)
    {
        nome = _nome;
    }
    string getNome(void)
    {
        return nome;
    }
    void setCNPJ(int _CNPJ)
    {
        CNPJ = _CNPJ;
    }
    int getCNPJ(void)
    {
        return CNPJ;
    }
    void addFuncionario(string _nome)
    {
        funcionarios[numeroFuncionarios] = _nome;
        numeroFuncionarios++;
    }
    void mostraFuncionarios(void)
    {
        for(int i=0; i<numeroFuncionarios; i++)
        {
            cout << funcionarios[i] << "\t";
        }
        cout << endl;
    }

private:
    string nome;
    int CNPJ;
    string funcionarios[10];
    int numeroFuncionarios;
};

int main()
{
    Empresa empresa("Seguro CFTV", 2345678);

    DataAdm_t data;
    data.dia = 31;
    data.mes = 7;
    data.ano = 2014;
    Funcionario func1("Joao", 1200, data, "Instalacao");
    Funcionario func2("Jose", (float) 1800, data, "Manutencao");
    Funcionario func3("Maria", (float) 1800, data, "Manutencao");
    data.dia = 25;
    data.mes = 8;
    data.ano = 2014;
    Funcionario func4("Ana", (float) 1200, data, "Instalacao");
    Funcionario func5("Carlos", (float) 1500, data, "Vendas");

    empresa.addFuncionario(func1.getNome());
    empresa.addFuncionario(func2.getNome());
    empresa.addFuncionario(func3.getNome());
    empresa.addFuncionario(func4.getNome());
    empresa.addFuncionario(func5.getNome());

    cout << "Os funcionarios da " << empresa.getNome() << " sao:" << endl;
    empresa.mostraFuncionarios();
    cout << endl;

    cout << func1.getNome() << "\tR$" << (float) func1.getSalario() << "\t" << (func1.getDataAdmissao()).dia << "/" << (func1.getDataAdmissao()).mes << "/" << (func1.getDataAdmissao()).ano << "\t" << func1.getDepartamento() << endl;
    cout << func2.getNome() << "\tR$" << (float) func2.getSalario() << "\t" << (func2.getDataAdmissao()).dia << "/" << (func2.getDataAdmissao()).mes << "/" << (func2.getDataAdmissao()).ano << "\t" << func2.getDepartamento() << endl;
    cout << func3.getNome() << "\tR$" << (float) func3.getSalario() << "\t" << (func3.getDataAdmissao()).dia << "/" << (func3.getDataAdmissao()).mes << "/" << (func3.getDataAdmissao()).ano << "\t" << func3.getDepartamento() << endl;
    cout << func4.getNome() << "\tR$" << (float) func4.getSalario() << "\t" << (func4.getDataAdmissao()).dia << "/" << (func4.getDataAdmissao()).mes << "/" << (func4.getDataAdmissao()).ano << "\t" << func4.getDepartamento() << endl;
    cout << func5.getNome() << "\tR$" << (float) func5.getSalario() << "\t" << (func5.getDataAdmissao()).dia << "/" << (func5.getDataAdmissao()).mes << "/" << (func5.getDataAdmissao()).ano << "\t" << func5.getDepartamento() << endl;

    cout << endl;
    cout << "Alguns funcionarios receberam aumento" << endl;
    func2.setSalario(1.1*func2.getSalario());
    func3.setSalario(1.1*func3.getSalario());

    cout << func1.getNome() << "\tR$" << (float) func1.getSalario() << "\t" << (func1.getDataAdmissao()).dia << "/" << (func1.getDataAdmissao()).mes << "/" << (func1.getDataAdmissao()).ano << "\t" << func1.getDepartamento() << endl;
    cout << func2.getNome() << "\tR$" << (float) func2.getSalario() << "\t" << (func2.getDataAdmissao()).dia << "/" << (func2.getDataAdmissao()).mes << "/" << (func2.getDataAdmissao()).ano << "\t" << func2.getDepartamento() << endl;
    cout << func3.getNome() << "\tR$" << (float) func3.getSalario() << "\t" << (func3.getDataAdmissao()).dia << "/" << (func3.getDataAdmissao()).mes << "/" << (func3.getDataAdmissao()).ano << "\t" << func3.getDepartamento() << endl;
    cout << func4.getNome() << "\tR$" << (float) func4.getSalario() << "\t" << (func4.getDataAdmissao()).dia << "/" << (func4.getDataAdmissao()).mes << "/" << (func4.getDataAdmissao()).ano << "\t" << func4.getDepartamento() << endl;
    cout << func5.getNome() << "\tR$" << (float) func5.getSalario() << "\t" << (func5.getDataAdmissao()).dia << "/" << (func5.getDataAdmissao()).mes << "/" << (func5.getDataAdmissao()).ano << "\t" << func5.getDepartamento() << endl;

    return 0;
}
