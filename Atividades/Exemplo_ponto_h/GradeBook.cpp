#include <iostream>
#include <string>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook(string name)
{
    setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
    CourseName = name;
}

string GradeBook::getCourseName()
{
    return(CourseName);
}

void GradeBook::displayMessage()
{
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}