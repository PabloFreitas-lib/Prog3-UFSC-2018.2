#ifndef EX_POLIMORFISMO_HPP
#define EX_POLIMORFISMO_HPP

#include <iostream>
#include <string>
using namespace std;
//----------------------------------------------
// Base
class Shape{
public:
    virtual void draw(void);
    
};
//----------------------------------------------
// Derivadas
class Circle:public Shape{
    
};

class Square:public Shape{
    
};

class Triangle:public Shape{
    
};
//----------------------------------------------

#endif
