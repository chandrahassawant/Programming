#include<iostream>
using namespace std;



class queue
{
    public:
    int *arr;
    int data;
    int front,rear;
    int size;


    queue(int size)
    {
        this->size=size;
        arr = new int [size];
        front=-1;
        rear =-1;
    }

    bool isFull()
    {
        return rear == size-1;
    }

    bool isEmpty()
    {
        return front ==-1;
    }

    void push(int x)
    {
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
        }
        else if(isEmpty())
        {
            front=rear=0;
            arr[front]=x;
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
            return ;
        }
        else if (rear == front) //once all element are deleted then we take to front both
        {
            rear = -1;
            front = -1;
        }
        else
        {
            front = front+1;
        }
    }
    void display()
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
                cout<<arr[i]<<" "<<endl;
            }
        }
    }

    


};


int main()
{
    queue q(4);
    q.display();
    q.push(10);
    q.push(20);
    q.display();
    q.pop();
    cout<<"After the pop"<<endl;
    q.display();

}

