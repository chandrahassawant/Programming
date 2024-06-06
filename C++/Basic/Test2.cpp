#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<("Enter the age")<<endl;
    cin>>age;

    if(age>=18)
    {
        cout<<"Your are eligible for vote"<<endl;
    }
    else
    {
        cout<<"Your are not eligible for vote"<<endl;
    }
}