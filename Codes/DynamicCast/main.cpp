#include <iostream>
using namespace std;

struct Base{
    virtual ~Base(){};
};

struct DerivadaA : public Base
{};

struct DerivadaB : public Base
{};

void f(Base* ponteiro_base);

int main()
{
    Base* ptr;
    DerivadaA objA;
    ptr = &objA;
    f(ptr);
    DerivadaB objB;
    ptr = &objB;
    f(ptr);
    return 0;
}

void f(Base* ponteiro_base)
{
    //tenta downcasting  para ponteiro do tipo DerivadaA
    DerivadaA * objA = dynamic_cast<DerivadaA*>(ponteiro_base);
    if(objA != nullptr)
    {
        cout<<"Objeto do tipo A" << endl;
        return;
    }

    //tenta downcasting para ponteiro do tipo DerivadaB
    DerivadaB * objB = dynamic_cast<DerivadaB*>(ponteiro_base);
    if(objB != nullptr)
    {
        cout<<"Objeto do tipo B" << endl;
        return;
    }
}
