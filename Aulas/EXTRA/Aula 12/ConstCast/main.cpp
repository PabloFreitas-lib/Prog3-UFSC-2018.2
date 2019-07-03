#include <iostream>
using namespace std;

class student
{
private:
    int roll;
public:
    student(int r):roll(r) {}

    void fun() const
    {
        this->roll = 5;
        //( const_cast <student*> (this) )->roll = 5;
    }

    int getRoll()
    {
        return roll;
    }
};

int fun(int* ptr);

int main()
{
    student s(3);
    cout << "Old roll number: " << s.getRoll() << endl;
    s.fun();
    cout << "New roll number: " << s.getRoll() << endl;

    const int val = 10;
    const int *ptr = &val;
    int *ptr1 = const_cast <int *>(ptr);
    cout << "fun=" << fun(ptr1) << ", *ptr1=" << *ptr1 << ", val=" << val << endl;

    return 0;
}

int fun(int* ptr)
{
    return (*ptr += 10);
}
