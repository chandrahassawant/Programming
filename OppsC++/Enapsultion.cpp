#include<iostream>
using namespace std;


class Bank
{
    private:
    string name;
    int balance;

    public:
    Bank(string name,int balance)
    {
        this->name=name;
        this->balance=balance;
    }

    int deposit(int amount)
    {
        balance = balance+amount;
        return balance;
    }

    int withdraw(int amount)
    {
            balance = balance-amount;
            return balance;
    }

    void display()
    {
        cout<<"The balance is: "<<balance<<endl;
    }
};


int main()
{
    Bank A1("Chandu",1000);
    A1.deposit(1000);
    A1.withdraw(500);
    A1.display();
    return 0;
}