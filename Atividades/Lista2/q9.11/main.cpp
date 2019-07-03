#include "rectangle.hpp"

int main(void)
{
    Rectangle pop;
    pop.setLength(15);
    pop.setWidth(21);
    cout << "Width " << pop.getWidth() << endl;
    cout << "Length " << pop.getLength() << endl;
    cout << " Area " << pop.Area(pop) << endl;
    cout << " Perimetro" << pop.Perimeter(pop) << endl;
return(0);    
}
