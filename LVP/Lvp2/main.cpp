/*
 * main.cpp
 *
 *  Created on: Aug 27, 2018
 *      Author: Freitas
 */



#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
  public:
  Student();
  ~Student();
  void set_age(int);
  void set_standard(int);
  void set_first_name(string);
  void set_last_name(string);
  int get_age(void);
  int get_standard(void);
  string get_first_name(void);
  string get_last_name(void);
  string to_string(void);
  private:
  int age;
  int standard;
  string first_name;
  string last_name;
};

Student::Student()
{

}
Student::~Student()
{

}

void Student::set_age(int Jahre)
{
    age = Jahre;
}
void Student::set_standard(int Random)
{
    standard = Random;
}
void Student::set_first_name(string eins)
{
	first_name = eins;
}
void Student::set_last_name(string zwei)
{
	last_name = zwei;
}
int Student::get_age(void)
{
	return(age);
}
int Student::get_standard(void)
{
	return(standard);
}
string Student::get_first_name(void)
{
	return(first_name);
}
string Student::get_last_name(void)
{
	return(last_name);
}
string Student::to_string(void)
{
	stringstream temp; // string que guardara as string que se aculmulara
	temp << get_age() <<','<< get_first_name() <<','<< get_last_name() <<','<< get_standard() << endl;;
	string complete = temp.str(); // acessar a string que recebeu todas as outras e jogar na final para retorno
	return(complete);
}


int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
