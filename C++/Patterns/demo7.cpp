#include<iostream>

using namespace std;

int main()
{
    int number;
   cout<<"Enter the number"<<endl;
   cin>>number;

   int i=1;
    char ch = 'A';
   while(i<=number)
   {
    int j=0;
    while(j<number)
    {
        char cha=ch+j;
        cout<<cha<<" ";
        j++;

    }
    cout<<endl;
    i++;
   }

}