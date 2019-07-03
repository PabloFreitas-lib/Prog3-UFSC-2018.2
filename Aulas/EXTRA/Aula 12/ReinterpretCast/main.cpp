#include <iostream>
using namespace std;

class A {
public:
    void fun_a()
    {
        cout << " In class A\n";
    }
};

class B {
public:
    void fun_b()
    {
        cout << " In class B\n";
    }
};

int main()
{
    B* b = new B();
    A* a = reinterpret_cast<A*>(b);
    a->fun_a();
    delete a;
    return 0;
}
