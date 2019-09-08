// C++ program to demonstrate shared_ptr
#include<iostream>
#include<memory>
using namespace std;

class A
{
public:
	void show()
	{
		cout<<"A::show()"<<endl;
	}
};

void fun(const shared_ptr<A> & p);

int main()
{
	shared_ptr<A> p1 (new A);
	cout << p1.get() << endl;
	p1->show();
	shared_ptr<A> p2 (p1);
	p2->show();
	cout << p1.get() << endl;
	cout << p2.get() << endl;

	// Returns the number of shared_ptr objects
	//referring to the same managed object.
	cout << p1.use_count() << endl;
	cout << p2.use_count() << endl;
	fun (p1);

	cout << p1.use_count() << endl;
	cout << p2.use_count() << endl;

	// Relinquishes ownership of p1 on the object
	//and pointer becomes NULL
	p1.reset();
	cout << p1.get() << endl;
	cout << p2.use_count() << endl;
	cout << p2.get() << endl;

	return 0;
}

void fun(const shared_ptr<A> & p)
{
    shared_ptr<A> p3 (p);
	cout << p3.use_count() << endl;
}
