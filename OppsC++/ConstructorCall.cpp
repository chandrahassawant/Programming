#include<iostream>
using namespace std;

class Human
{
    protected:
    string name;
    int age;

   

    public:

     Human()
     {
        cout<<"I am human"<<endl;;
     }
    void display()
    {
        cout<<"I am working"<<endl;
    }

};

class Student : public Human
{
    private:
    int roll_number;
    int fees;
    
    public:
    Student(string name,int age,int roll_number,int fees)
    {
        this->name=name;
        this->age=age;
        this->roll_number=roll_number;
        this->fees=fees;
    }
};

int main()
{
    Student A1("Chandu",22,30,1000);  //1st base class constructor call and then derived class
    A1.display();

}
