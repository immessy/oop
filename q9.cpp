#include <iostream>
using namespace std;

class BankAccount 
{
private:
    string accountHolder; 
    double balance; 

public:
    BankAccount(string name, double bal) 
    {
        accountHolder = name; 
        balance = bal;
    }

    void deposit(double amount) 
    {
        balance += amount; // Add the money 
    }

    void withdraw(double amount) 
    {
        if(amount <= balance) 
            balance -= amount; // Withdraw if balance is there
        else 
            cout << "Insufficient balance" << endl;
    }

    void display() 
    {
        cout << accountHolder << " balance: " << balance << endl;
    }
};

int main() 
{
    BankAccount acc("Alice", 1000);
    acc.deposit(500);
    acc.withdraw(200);
    acc.display();
    acc.withdraw(2000); // check if insufficient balance
    return 0;
}
