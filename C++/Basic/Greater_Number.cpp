#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3;
    cout<<"Enter the values of num1,num2,num3"<<endl;
    cin>>num1>>num2>>num3;

    if(num1 > num2 && num1 > num3) {
    cout << "Num1 is greater" << endl;
} else {
    if(num2 > num3) {
        cout << "Num2 is greater" << endl;
    } else {
        cout << "Num3 is greater" << endl;
    }
}

}