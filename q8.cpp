#include <iostream>
using namespace std;

class Base 
{
public:
    void display(int x) 
    {
        cout << "Base integer: " << x << endl; // Function overloading example
    }

    virtual void show() 
    {
        cout << "Base show function" << endl; // Overridable function
    }
};

class Derived : public Base 
{
public:
    void display(double x) 
    {
        cout << "Derived double: " << x << endl; // Overloaded function
    }

    void show() 
    {
        cout << "Derived show function" << endl; // Function overriding
    }
};

int main() 
{
    Derived d;
    d.display(10.5); // Calls derived overloaded function
    d.show();        // Calls overridden function

    Base* basePtr = &d;
    basePtr->show(); 
    return 0;
}
