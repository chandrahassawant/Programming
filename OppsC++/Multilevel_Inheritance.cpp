#include<iostream>
using namespace std;


class Person
{
    protected:
    string name;
    int age;

    public:

    void details()
    {
        cout<<"My name is "<<name<<endl;
    }

};

class Employee :public Person
{
    protected:
    int salary;

    public:
    void sal()
    {
        cout<<"My salary is :"<<salary<<endl;
    }
};

class Manager : public Employee
{
    protected:
    string department;

    public:
    Manager(string name,int age,int salary,string department)
    {
        this->name=name;
        this->age=age;
        this->salary=salary;
        this->department=department;

    }

    void depart()
    {
        cout<<"My department is:"<<department<<endl;
    }
};

int main()
{
    Manager M1("chandu",25,1000,"Mechanical");
    M1.details();
    M1.sal();
    M1.depart();
}