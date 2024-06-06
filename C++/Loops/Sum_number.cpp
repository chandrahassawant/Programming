#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;
    cout<<"Enter the nth term"<<endl;
    cin>>n;


    for(int i=1;i<=n;i++)
    {
        sum = sum + i;
    }

    cout<<"The total sum is :"<<sum<<endl;
}