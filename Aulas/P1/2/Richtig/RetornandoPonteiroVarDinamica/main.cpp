#include <iostream>
using namespace std;

char * setName();

int main (void)
{
    char* str= setName();
    cout << str;
    delete [] str;            //faço o delete depois que o conteúdo do ponteiro não é mais necessário.
    return 0;
}

char* setName (void)
{
    char* name = new char[80];     //crio ponteiro chamado de name e dou o valor do endereço da memoria dinâmica
    cout << "Entre com seu nome: ";
    cin.getline (name, 80);
    return name;
}













