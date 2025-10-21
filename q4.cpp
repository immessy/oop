#include <iostream>
using namespace std;

class Person 
{
private:
    string personName;
    int personAge;

public:
    Person(string n, int a) 
    {
        personName = n;
        personAge = a;
    }

    void showPerson() 
    {
        cout << "Name: " << personName << endl;
        cout << "Age: " << personAge << endl;
    }
};

class Employee : public Person 
{
private:
    int employeeID;

public:
    Employee(string n, int a, int id) : Person(n, a) 
    {
        employeeID = id;
    }

    int getEmployeeID() 
    {
        return employeeID;
    }
};

class Manager : public Employee 
{
private:
    int teamCount;

public:
    Manager(string n, int a, int id, int t) : Employee(n, a, id) 
    {
        teamCount = t;
    }

    void display() 
    {
        showPerson();
        cout << "Employee ID: " << getEmployeeID() << endl;
        cout << "Team Size: " << teamCount << endl;
    }
};

int main() 
{
    Manager mgr("abhi", 30, 1000, 5);
    mgr.display();
    return 0;
}
