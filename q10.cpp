#include <iostream>
#include <cmath>
using namespace std;

class Shape 
{
public:
    virtual double area() = 0; 
};

class Circle : public Shape 
{
private:
    double radius;

public:
    Circle(double r) 
    {
        radius = r; 
    }

    double area() 
    {
        return 3.14159 * radius * radius; //area of circle formula
    }
};

class Square : public Shape 
{
private:
    double sideLength;

public:
    Square(double s) 
    {
        sideLength = s; 
    }

    double area() 
    {
        return sideLength * sideLength; // are of square
    }
};

int main() 
{
    Circle c(3.0);
    Square s(4.0);

    cout << "Circle area: " << c.area() << endl;
    cout << "Square area: " << s.area() << endl;
    return 0;
}
