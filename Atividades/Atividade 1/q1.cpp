/*
 * main.cpp
 *
 *  Created on: Aug 1, 2018
 *      Author: Freitas
 */
/*
 * Faca um programa que contenha uma classe que representa um funcionario, registrando seu nome, salario, data de admissao e departamento.
 * Crie uma classe que representa uma empresa, registrando seu nome e CNPJ. Todos os atributos como privados. Crie metodos "set", "get" e contrutor. Faca "main() que :
 * Crie uma empresa;
 * Adicione alguns funcionarios.
 * De aumento de 10% para um determinado departamento.
 */
#include <iostream>
#include <string>

using namespace std;


class Funcionario{
	public:

	void setFunNome(string nome) {
		FuncionarioNome = nome;
	}
	string getFunNome(void){
		return(FuncionarioNome);
	}
	void MsgTela(string FuncionarioNome){
		cout << "Relacao sobre o funcionario: " << FuncionarioNome << ".\n" << endl;
	}
//--------------------------------------------------------------------------------
	void setFunSalario(int salario) {
		FuncionarioSalario = salario;
	}
	int getFunSalario(void){
		return(FuncionarioSalario);
	}
	void MsgTelaSalario(int FuncionarioSalario){
		cout << "Relacao sobre o salario: " << FuncionarioSalario << " (bitcoins).\n" << endl;
	}
//--------------------------------------------------------------------------------
	void setFunData(string data) {
		FuncionarioData = data;
	}
	string getFunData(void){
		return(FuncionarioData);
	}
	void MsgTelaData(string FuncionarioData){
		cout << "Relacao sobre o data: " << FuncionarioData << ".\n" << endl;
	}
//--------------------------------------------------------------------------------
	void setFunDp(string departamento) {
		FuncionarioDp = departamento;
	}
	string getFunDp(void){
		return(FuncionarioDp);
	}
	void MsgTelaDp(string FuncionarioDp){
		cout << "Relacao sobre o Departamento: " << FuncionarioDp << ".\n" << endl;
	}
//--------------------------------------------------------------------------------
	private:
	string FuncionarioNome;
	int FuncionarioSalario;
	string FuncionarioData;
	string FuncionarioDp;

};

class Empresa{
	public:
	void setEmpresaNome(string company){
		EmpresaNome = company;
	}
	string getEmpresaNome(void){
		return(EmpresaNome);
	}
	void MsgTelaEmpresaNome(string EmpresaNome){
		cout << "Nome da empresa : " << EmpresaNome << ".\n"<< endl;
	}
//--------------------------------------------------------------------------------
	void setEmpresaCNPJ(int CNPJ){
			EmpresaCNPJ = CNPJ;
		}
	int getEmpresaCNPJ(void){
			return(EmpresaCNPJ);
		}
	void MsgTelaEmpresaCNPJ(string EmpresaCNPJ){
		cout << "CNPJ da empresa : " << EmpresaCNPJ << ".\n"<< endl;
	}

	private:
	string EmpresaNome;
	int EmpresaCNPJ;

};

int main(void){
int salario,CNPJ;//,qtd_fun;
string nome,data,departamento;
Empresa MyCompany;
/*
cout << "Entre com a quantidade de funcionarios :" << endl;
cin	>> qtd_fun;
cout << endl;*/
Funcionario MyFun,MyFun1,MyFun2;

cout << "Entre com o nome da empresa : "<< endl;
getline(cin,nome);
MyCompany.setEmpresaNome(nome);
nome.clear();

cout << "Entre com o CNPJ : " << endl;
cin >> CNPJ;

cout << "Entre com o nome , dp , data, salario(1) : \n"<< endl;

//for(int i =0;i<qtd_fun;i++){
	getline(cin,nome);getline(cin,departamento);getline(cin,data);cin >> salario;

	MyFun.setFunNome(nome);
    MyFun.setFunDp(departamento);
    MyFun.setFunData(data);
	MyFun.setFunSalario(salario);

	
//}
    nome.clear();
    salario=0;
    data.clear();
    departamento.clear();
    
cout << "Entre com o nome , dp , data, salario : (2)\n" << endl;
    getline(cin,nome);getline(cin,departamento);getline(cin,data);cin >> salario;

	MyFun1.setFunNome(nome);
    cout << "Nome - " << nome << endl;
    MyFun1.setFunDp(departamento);
    cout << "Dp - " << departamento << endl;
    MyFun1.setFunData(data);
    cout << "Data - " << data << endl;
	MyFun1.setFunSalario(salario);
    cout << "Salario - " << salario << endl;

//for(int i =0 ; i<qtd_fun ; i++){
MyCompany.MsgTelaEmpresaNome(MyCompany.getEmpresaNome());

	MyFun.MsgTela(MyFun.getFunNome());
    MyFun.MsgTelaDp(MyFun.getFunDp());
    MyFun.MsgTelaData(MyFun.getFunData());
	MyFun.MsgTelaSalario(MyFun.getFunSalario());
    
    MyFun1.MsgTela(MyFun1.getFunNome());
    MyFun1.MsgTelaDp(MyFun1.getFunDp());
    MyFun1.MsgTelaData(MyFun1.getFunData());
	MyFun1.MsgTelaSalario(MyFun1.getFunSalario());
    

if ( MyFun.getFunDp().compare("CEO") == 0 ){
    MyFun.setFunSalario(MyFun.getFunSalario() *(1.1));
        //cout << "Incremento de 10%:  " << MyFun[0].getFunSalario() << " x 1,1 = " <<  MyFun[0].getFunSalario() * 1.1 << " ." << endl;
        cout << "Incremento de 10%:  " << MyFun.getFunSalario() << " ." << endl;
}
if ( MyFun1.getFunDp().compare("CEO") == 0 ){
    MyFun1.setFunSalario(MyFun1.getFunSalario() *(1.1));
        //cout << "Incremento de 10%:  " << MyFun[0].getFunSalario() << " x 1,1 = " <<  MyFun[0].getFunSalario() * 1.1 << " ." << endl;
        cout << "Incremento de 10%:  " << MyFun1.getFunSalario() << " ." << endl;
}
    return(0);
}
