#include <iostream>
#include <string>

using namespace std;

char *setName(void)
{
    char *name = new char[80];
    cout << "Entre com o seu nome : " << endl;
    cin.getline(name,80);
    return(name);
}

int main(void)
{
    char *str = setName();
    cout << str;
    delete str;
    return(0);
}

