#include <iostream>
#include "Time.h"

using namespace std;

int main(void)
{
    Time t;
    int & hourRef = t.badSetHour(20); // horário válido

    cout << "hora válida: " << hourRef << endl;
    hourRef = 30;
    cout << "hora inválida: " << t.getHour() << endl;

    t.badSetHour(12) = 74;
    cout << "hora inválida: " << t.getHour() << endl;
    return 0;
}
