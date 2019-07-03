#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
    public:
        GradeBook(string);
        void setCourseName(string);
        string getCourseName(void);
        void displayMessage(void);
    private:
        string CourseName;
};
        
    
