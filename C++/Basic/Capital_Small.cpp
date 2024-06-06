#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"Enter the characters"<<endl;
    cin>>ch;

    int asci = int(ch);

    if(asci>64 && asci<91)
    {
        cout<<"The character is Upper Case"<<endl;
    }
    else if(asci >96 && asci<123)
    {
        cout<<"The character is Smaller Case"<<endl;
    }
    else
    {
        cout<<"The character is Number"<<endl;
    }
}