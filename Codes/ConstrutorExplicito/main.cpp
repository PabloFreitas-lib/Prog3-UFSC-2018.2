#include <iostream>
using namespace std;

#define EXPLICT_CONSTRUCTOR true

class Inteiro;
void atribuicaoInteiro2Int (Inteiro inteiro);

class Inteiro
{
public:
    // single parameter constructor, can be used as an implicit conversion
#if EXPLICT_CONSTRUCTOR == false
    Inteiro (int inteiro) : m_inteiro (inteiro)
#endif // EXPLICT_CONSTRUCTOR
#if EXPLICT_CONSTRUCTOR == true
        explicit Inteiro (int inteiro) : m_inteiro (inteiro)
#endif // EXPLICT_CONSTRUCTOR
    {

    }
    int GetInteiro ()
    {
        return m_inteiro;
    }

private:
    int m_inteiro;
};

void atribuicaoInteiro2Int (Inteiro inteiro)
{
    int i = inteiro.GetInteiro ();
    cout << i << endl;
}

int main ()
{
#if EXPLICT_CONSTRUCTOR == false
    atribuicaoInteiro2Int (42);
#endif // EXPLICT_CONSTRUCTOR
#if EXPLICT_CONSTRUCTOR == true
    //atribuicaoInteiro2Int (42);
    atribuicaoInteiro2Int (Inteiro(42));
#endif // EXPLICT_CONSTRUCTOR

}
