#include "student.h"

Student::Student()
{
    scores = new int[4];
}

Student::~Student()
{
    delete [] scores;
}

int Student::calculateTotalScore(void)
{
    return(scores[0]+scores[1]+scores[2]+scores[3]+scores[4]);    
}

void Student::input(void)
{
    cin >> scores[0] >> scores[1] >> scores[2] >> scores[3] >> scores[4];
}
