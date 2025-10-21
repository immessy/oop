#include <iostream>
using namespace std;

class Sports;

class Student 
{
private:
    int marks;

public:
    Student(int m) 
    {
        marks = m;
    }

    friend void showTotal(Student s, Sports sp);
};

class Sports 
{
private:
    int score;

public:
    Sports(int s) 
    {
        score = s;
    }

    friend void showTotal(Student s, Sports sp);
};

void showTotal(Student s, Sports sp) 
{
    cout << "Total points: " << (s.marks + sp.score) << endl;
}

int main() 
{
    Student st(85);
    Sports sp(15);
    showTotal(st, sp);
    return 0;
}
