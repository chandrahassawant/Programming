#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age,rollNo;
    string grade;
};

int main()
{
    Student s1;
    s1.name="Chandrahas";
    s1.age=10;
    s1.rollNo=30;

    cout<<s1.name<<" "<<s1.age<<" "<<s1.rollNo;
}