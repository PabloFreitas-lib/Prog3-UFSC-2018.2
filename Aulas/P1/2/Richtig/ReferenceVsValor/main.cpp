#include <iostream>

using namespace std;

void pass_by_value(int *);
void pass_by_reference(int *&);
void change_value(int *);

int main()
{
    int* p1 = NULL;
    int* p2 = NULL;

    pass_by_value(p1); //p1 will still be NULL after this call
//*
    if(p1 != NULL)
    {
        cout << *p1 << endl;
    }
//*/
//    cout << *p1 << endl; // aborta o programa
    pass_by_reference(p2); //p2 's value is changed to point to the newly allocate memory

    cout << *p2 << endl;
    change_value(p2);
    cout << *p2 << endl;

    delete [] p1;
    delete [] p2;

    return 0;
}

void pass_by_value(int * p)
{
    //Allocate memory for int and store the address in p
    p = new int;
    *p = 5;
}

void pass_by_reference(int *& p)
{
    p = new int;
    *p = 5;
}

void change_value(int * p)
{
    *p = 20;
}

