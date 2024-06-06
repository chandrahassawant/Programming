#include<iostream>
using namespace std;

class Queue
{
    public:
    int front;
    int rear;
    int size;
    int *arr;

    Queue(int size)
    {
        this->size=size;
        arr = new int[size];
        rear = -1;
        front=-1;

    }

    bool isFull()
    {
        return rear == size-1;
    }

    bool isEmpty()
    {
        return front==-1;
    }

    void push(int x)
    {
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
        }
        else if(isEmpty())
        {
            front=0;
            rear=0;

            arr[rear]=x;
        }
        else
        {
             rear = rear+1; 
             arr[rear]=x;
           
        }
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
        }
        else if(front==rear)
        {
            front =-1;
            rear =-1;
        }
        else
        {
            front = front+1;
        }
    }

    void print()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        else
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
    {
        Queue q(4);
        q.push(10);
        q.push(30);
        q.print();
    }