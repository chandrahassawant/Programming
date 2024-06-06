#include<iostream>

using namespace std;

int main()
{
    int number;
   cout<<"Enter the number"<<endl;
   cin>>number;

   int i=1;
   int asci=65;
    char ch = 'A';
   while(i<=number)
   {
    int j=0;
    while(j<i)
    {
        char cha=ch+j;
        cout<<cha<<" ";
        j++;

    }
    cout<<endl;
    i++;
   }

}