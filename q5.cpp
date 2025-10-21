#include <iostream>
using namespace std;
class Person 
{
    private:
    string name;
    int age;
    public:
    Person(string n,int a) 
    {
        name=n;
        age=a;
    }
    void get() 
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
class Athlete 
{
    private:
    string sport;
    int medals;
    public:
    Athlete(string s,int m) 
    {
        sport=s;
        medals=m;
    }
    void get() 
    {
        cout<<"Sport:"<<sport<<endl;
        cout<<"Medals:"<<medals<<endl;
    }
};
class SportsPerson:public Person,public Athlete 
{
    public:
    SportsPerson(string n,int a,string s,int m):Person(n,a),Athlete(s,m) {}
    void display() {
        Person::get();
        Athlete::get();
    }
};
int main() 
{
    SportsPerson sp("A",18,"football",7);
    sp.display();
    return 0;
}