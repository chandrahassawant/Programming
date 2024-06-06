#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> Stack;
    Stack.push("Chandrahas");
    Stack.push("Suhas");
    Stack.push("Sawant");



    while(!Stack.empty())
    {
        cout<<Stack.top()<<endl;
        Stack.pop();

    }
}