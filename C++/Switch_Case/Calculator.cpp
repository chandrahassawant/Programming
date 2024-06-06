#include<iostream>
using namespace std;

int main()
{
    int count=0;
    int ch;

    do{

        cout << "1: Sum" << endl;
        cout << "2: Sub" << endl;
        cout << "3: Multi" << endl;
        cout << "4: Divide" << endl;
        count++;
    }while(count<1);
    cin>>ch;
    switch(ch)
    {
        case 1 :
        cout<<"Hi"<<endl;
        break;


        default:
        cout<<"Wrong input"<<endl;
    }
}