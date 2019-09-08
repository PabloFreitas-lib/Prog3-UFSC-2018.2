#include <iostream>
using namespace std;

class Shape
{
public:
    Shape(void)
    {

    }
    Shape(int newx, int newy)
    {
        setX(newx);
        setY(newy);
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void setX(int newx)
    {
        x = newx;
    }
    void setY(int newy)
    {
        y = newy;
    }
    virtual void draw() {}

private:
    int x;
    int y;
};

class Circle: public Shape
{
public:
    Circle(int newx, int newy, int newradius): Shape(newx, newy)
    {
        setRadius(newradius);
    }
    int getRadius()
    {
        return radius;
    }
    void setRadius(int newradius)
    {
        radius = newradius;
    }
    void draw()
    {
        cout << "Drawing a Circle at:(" << getX() << "," << getY() << "), radius " << getRadius() << endl;
    }

private:
    int radius;
};

class Square: public Shape
{
public:
    Square(int newx, int newy, int newbase): Shape(newx, newy)
    {
        setBase(newbase);
    }
    int getBase()
    {
        return base;
    }
    void setBase(int newbase)
    {
        base = newbase;
    }
    void draw()
    {
        cout << "Drawing a Square at:(" << getX() << "," << getY() << "), base " << getBase() << endl;
    }
private:
    int base;
};

class Triangle: public Shape
{
public:
    Triangle(int newx, int newy, int newbase, int newheight): Shape(newx, newy)
    {
        setBase(newbase);
        setHeight(newheight);
    }
    int getBase()
    {
        return base;
    }
    void setBase(int newbase)
    {
        base = newbase;
    }
    int getHeight()
    {
        return height;
    }
    void setHeight(int newheight)
    {
        height = newheight;
    }
    void draw()
    {
        cout << "Drawing a Triangle at:(" << getX() << "," << getY() << "), base " << getBase() << ", height " << getHeight() << endl;
    }
private:
    int base;
    int height;
};

int main()
{
    Shape ** arrayPtrShape = new Shape *[3];

    Circle objCircle(0,0,2);
    Square objSquare(0,0,4);
    Triangle objTriangle(0,0,3,5);

    arrayPtrShape[0] = &objCircle;
    arrayPtrShape[1] = &objSquare;
    arrayPtrShape[2] = &objTriangle;

    arrayPtrShape[0]->draw();
    arrayPtrShape[1]->draw();
    arrayPtrShape[2]->draw();

    delete [] arrayPtrShape;
    return 0;
}
