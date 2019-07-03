#include <iostream>
using namespace std;

int f(double x);
int f(int x);

int main()
{
  float x = 1.f;
  cout << "Sem cast : " << f(x) << endl;
  cout << "Com cast : " << f(static_cast<int>(x)) << endl;
}

int f(double x)
{
  return x*5;
}

int f(int x)
{
  return x*2;
}
