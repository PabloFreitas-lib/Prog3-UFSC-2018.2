/*
Create a class named with the following specifications:
    -An instance variable named to hold a student's exam scores.
    -A void input() function that reads integers and saves them to.
    -An int calculateTotalScore() function that returns the sum of the student's scores.
*/
#include <iostream>
#include <string>

using namespace std;

typedef class Student
{
    public:
    
    Student();
    ~Student();
    int calculateTotalScore(void); 
    void input(void);
    
    private:
    int *scores;
}Student_t;
