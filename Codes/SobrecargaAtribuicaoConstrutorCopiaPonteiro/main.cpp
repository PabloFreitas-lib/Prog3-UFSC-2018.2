#include <iostream>
using namespace std;

#define SEM_CONSTRUTOR_COPIA false
#define SEM_ATRIBUICAO true

class Inteiro
{
    int *recurso;
public:
    Inteiro(int x = 0)
    {
        recurso = new int(x);
    }
#if SEM_CONSTRUTOR_COPIA == false
    Inteiro(const Inteiro &outro)   //Construtor de cópia
    {
        recurso = new int;
        *recurso = *(outro.recurso);
    }
#endif // SEM_CONSTRUTOR_COPIA

    ~Inteiro()
    {
        delete recurso;
    }
#if SEM_ATRIBUICAO == false
    const Inteiro &operator=(const Inteiro &outro) {
        *recurso = *(outro.recurso);
        return *this;
    }
#endif // SEM_CONSTRUTOR_COPIA

    int getValor(void)
    {
        return *recurso;
    }
};

int main()
{
    Inteiro inteiro1(5);
    Inteiro inteiro2(inteiro1);
    Inteiro inteiro3;
    inteiro3 = inteiro1;
    cout << "inteiro 1 = " << inteiro1.getValor() << endl;
    cout << "inteiro 2 = " << inteiro2.getValor() << endl;
    cout << "inteiro 3 = " << inteiro3.getValor() << endl;
    return 0;
}
