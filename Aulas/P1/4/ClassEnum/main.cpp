#include <iostream>

using namespace std;

namespace Paises
{
    enum Paises
    {
        BRASIL,
        ITALIA,
        ALEMANHA
    };
}

namespace Uvas
{
    enum Uvas
    {
        RUBI,
        ITALIA = 2,
        UMOUTROTIPODEUVA
    };
}

int main(void)
{
    cout << Uvas::ITALIA << " " << Paises::ITALIA << " " << Paises::BRASIL << endl;
    return 0;
}
