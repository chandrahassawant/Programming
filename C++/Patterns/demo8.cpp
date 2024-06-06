#include<iostream>

using namespace std;

int main()
{
    int number;
   cout<<"Enter the number"<<endl;
   cin>>number;


    int i=1;

    char ch = 'A';
    int count;

    while(i<=number)
    {
        int j=0;
        char count=ch+j;
        while(j<number)
        {
            cout<<count;
            count++;
            
        }
        cout<<endl;
        i++;
    }


}