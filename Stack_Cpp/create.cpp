#include<iostream>
using namespace std;

class Stack
{   
public:
    int top;
    int size;
    int *arr;

    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int value)
    {
        if(top == size - 1)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            top++;
            arr[top] = value;
        }
    }

    void display()
    {
        if(top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            for(int i = 0; i <= top; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    int pop()
    {
        if(top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1; // Return some default value indicating failure
        }
        else
        {
            int poppedValue = arr[top]; // Store the value to be popped
            top--; // Decrement top
            return poppedValue; 
        }
    }
};

int main()
{
    Stack stack(5);
    stack.push(10);
    stack.push(15);
    stack.push(20);
    stack.push(25);
    stack.push(30);
    stack.display();
    cout << endl;
    int popped1 = stack.pop(); // Pop the first element
    int popped2 = stack.pop(); // Pop the second element
    
    cout << "Popped elements: " << popped1 << " " << popped2 << endl;
    
    cout << "Stack after popping: ";
    stack.display();

    return 0;
}
