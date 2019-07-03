#include <iostream>
#include <string>
#include "GradeBook.h"

using namespace std;

int main(void)
{
    GradeBook gradeBook1( " CS101 Introdution to C++ Programming");
    GradeBook gradeBook2( "CS102 Data Structores in C++");
    
    cout << "gradeBook1 created for course : " << gradeBook1.getCourseName() <<
    "\ngradeBook2 created for course : " << gradeBook2.getCourseName() 
    << endl;
    
    return(0);
}
