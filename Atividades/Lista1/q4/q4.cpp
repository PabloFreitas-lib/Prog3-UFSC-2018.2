/* Criar uma classe que represente uma pessoa, contendo nome, data de nascimento e CPF.
 * 
 * Crie uma variável que é um ponteiro para esta classe (no programa principal).
 * 
 * Depois crie uma função que receba este ponteiro e preencha os dados da classe e também uma uma função que receba este ponteiro e
imprima os dados da classe. Finalmente, faça a chamada a esta função na função principal.
*/

#include <iostream>
#include <string>
using namespace std;


// criar struct para data
// set e get de cada atributos
class human
{
    public:
    void setName(string);
    void setData(string);
    void setCPF(string);
    string getName(void);
    string getData(void);
    string getCPF(void);
    
    void display(void);
        
    private:
    string Nome,Data,CPF;
};
//-------------------------------
void human::setName(string name)
{
    Nome = name;
}

void human::setData(string data)
{
    Data = data;
}
void human::setCPF(string cpf)
{
    CPF = cpf;
}
//-------------------------------
string human::getName()
{
    return(Nome);
}
string human::getData()
{
    return(Data);
}
string human::getCPF()
{
    return(CPF);
}
//-------------------------------
void human::display()
{
        cout << "Nome,Data,CPF : \n" << getName() << "," << getData() << "," << getCPF() <<"." << endl;
}
//---------------------------------------------------------------------------------------------------
void Preecher(human *ptr){
ptr->setName("PINTO");
ptr->setData("23/07/1999");
ptr->setCPF("054.003.225-57");
}


/*
 *  Depois crie uma função que receba este ponteiro e preencha os dados da classe e também uma uma função que receba este ponteiro e
imprima os dados da classe. Finalmente, faça a chamada a esta função na função principal.
*/


int main(void)
{
human *One = new human;// faltou alocar dinamicamente essa parte
Preecher(One);
delete One;
return(0);

}
