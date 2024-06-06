#include<iostream>
using namespace std;

int main()
{
    int a =20;
    cout<<&a<<endl;
    int * ptr;
    cout<<sizeof(ptr)<<endl;
    ptr = &a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

}