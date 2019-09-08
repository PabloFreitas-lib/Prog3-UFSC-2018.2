#include <iostream>
using namespace std;

#define POLYMORPHIC true

class Person
{
    //content of Person
};

#if POLYMORPHIC==true
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
    virtual void show()
    {
        cout << "First Name: " << FirstName << " Last Name: " << LastName << " Salary: " << salary<< endl;
    }
    virtual void addBonus(double bonus)
    {
        salary += bonus;
    }
};
#endif
#if POLYMORPHIC==false
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
#endif // POLYMORPHIC

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

void situacao1(void)
{
    //pointer to base class object
    Employee* emp;
    //object of derived class
    Manager m1("Steve", "Kent", 3000, 0.2);
    //implicit upcasting
    emp = &m1;
    //explicit downcasting from Employee to Manager
    Manager* m2 = (Manager*)(emp);

    //It's ok
    cout<<emp->FirstName<<endl;
    cout<<emp->salary<<endl;
    cout<<m2->getComm();
}

void situacao2(void)
{
    Employee e1("Peter", "Green", 1400);
    //try to cast an employee to Manager
    Manager* m3 = (Manager*)(&e1);

    // e1 object is not an object of Manager class. It does not contain any information about commission.
    cout << m3->getComm() << endl;
}

void situacao3(void)
{
     //pointer to base class object
    Employee* emp;
    //object of derived class
    Manager m1("Steve", "Kent", 3000, 0.2);
    //implicit upcasting
    emp = &m1;
    // Employee must be polymorphic
    //*
    Manager* m2 = dynamic_cast<Manager*>(emp);

    //It's ok
    cout<<m2->FirstName<<endl;
    cout<<m2->salary<<endl;
    cout<<m2->getComm();
    //*/
}

int main()
{
    //situacao1();
    //situacao2();
    situacao3();
    return 0;
}
