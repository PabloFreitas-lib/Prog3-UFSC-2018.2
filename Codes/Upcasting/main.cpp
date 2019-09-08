#include <iostream>
using namespace std;

class Person
{
    //content of Person
};


class Employee:public Person
{
public:
    Employee(string fName, string lName, double sal)
    {
        FirstName = fName;
        LastName = lName;
        salary = sal;
    }
    string FirstName;
    string LastName;
    double salary;
    void show()
    {
        cout << "First Name: " << FirstName << " Last Name: " << LastName << " Salary: " << salary<< endl;
    }
    void addBonus(double bonus)
    {
        salary += bonus;
    }
};

class Manager :public Employee
{
public:
    Manager(string fName, string lName, double sal, double comm) :Employee(fName, lName, sal)
    {
        Commision = comm;
    }
    double Commision;
    double getComm()
    {
        return Commision;
    }
};

class Clerk :public Employee
{
public:
    Clerk(string fName, string lName, double sal, Manager* man) :Employee(fName, lName, sal)
    {
        manager = man;
    }
    Manager* manager;
    Manager* getManager()
    {
        return manager;
    }
};

void congratulate(Employee* emp)
{
    cout << "Happy Birthday!!!" << endl;
    emp->addBonus(200);
    emp->show();
};

int main()
{
    //pointer to base class object
    Employee* emp;

    //object of derived class
    Manager m1("Steve", "Kent", 3000, 0.2);
    Clerk c1("Kevin","Jones", 1000, &m1);

    //implicit upcasting
    emp = &m1;

    //It's ok
    cout<<emp->FirstName<<endl;
    cout<<emp->salary<<endl;

    //Fails because upcasting is used
    //cout<<emp->getComm();

    congratulate(&c1);
    congratulate(&m1);

    cout<<"Manager of "<<c1.FirstName<<" is "<<c1.getManager()->FirstName;
}
