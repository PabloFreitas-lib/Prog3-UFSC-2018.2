#include <iostream>
using namespace std;
#define Bool false

int main(void)
{
 int *a = new int;
 int *b = new int[5];

 cout <<  "A->" << *a << endl;
 cout << "B->" << b[0] << endl;
#if Bool 
 delete a;
 delete []b;
#endif

#if !Bool 
 delete a;
 delete b;
#endif
    
}
