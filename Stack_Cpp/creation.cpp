#include<iostream>
using namespace std;

class Stack
{
    public:
    int size;
    int top;
    int value;
    int *arr;


    Stack(int size)
    {
       
        this->size=size;
        top = -1;
        arr = new int[size];

    }

    void push(int value)
 {
    if(top==size-1)
    {
        cout<<"Stack is full"<<endl;
    }
    else
    {
        top++;
        arr[top]=value;
    }
 }


 int display()
    {
        if(top==-1)
        {
            cout<<"stack is empty";
        }
        else
        {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        }
    }

    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        return false;
    }

};

int main()
{
    Stack stack(5);

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    

    if(stack.isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout<<"Stack is not empty"<<endl;
    }
    stack.display();

}





