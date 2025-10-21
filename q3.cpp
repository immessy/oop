#include <iostream>
using namespace std;

class Shape 
{
private:
    int widthDim;     
    int heightDim;    

public:
    Shape(int w, int h) 
    {
        widthDim = w;    // Initialize width
        heightDim = h;   // Initialize height
    }

    int getWidth() 
    {
        return widthDim; 
    }

    int getHeight() 
    {
        return heightDim; 
    }
};

class Rectangle : public Shape 
{
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    int calculateArea() 
    {
        return getWidth() * getHeight(); // Area formula
    }

    int calculatePerimeter() 
    {
        return 2 * (getWidth() + getHeight()); // Perimeter formula
    }

    void display() 
    {
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() 
{
    Rectangle myRect(5, 3);
    myRect.display(); // Show area and perimeter
    return 0;
}
