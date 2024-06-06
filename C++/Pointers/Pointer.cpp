#include<iostream>
using namespace std;

int main()
{
    int arr [5]={1,2,3,4,5};

    int  *ptr = &arr[0];
    // int *ptr = &arr[0];

    // cout<<arr<<endl;
    // cout<<arr+0<<endl;
    // cout<<&arr<<endl;
    // cout<<ptr<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<*ptr+i<<endl;
        ptr++;
    }


   
}