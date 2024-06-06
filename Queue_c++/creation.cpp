#include<iostream>
using namespace std;

class Queue
{
public:
    int *arr;   //dynamic array
    int front, rear; //front and rear pointer
    int size; //array size

    Queue(int size)  // constructor
    {
        this->size = size;
        arr = new int[size];  //creation of array
        front = -1;  //initial condition
        rear = -1;
    }

    ~Queue()  // destructor
    {
        delete[] arr;
    }

    void push(int x)  // push operation
    {
        if (isFull())  // edge condition
        {
            cout << "Queue overflow" << endl;
            return;
        }
        else if (Isempty())
        {
            front = rear = 0;  //for only 1st time push
            arr[rear] = x;   //adding data in array
        }
        else
        {
            rear = rear + 1;
            arr[rear] = x;
        }
    }

    bool Isempty()  //edge case
    {
        return front == -1;
    }

    bool isFull() //edge case
    {
        return rear == size - 1; //edge case
    }

    void pop()  //for removing
    {
        if (Isempty())
        {
            cout << "Queue underflow" << endl;
            return;
        }
        else if (rear == front) //once all element are deleted then we take to front both
        {
            rear = -1;
            front = -1;
        }
        else
        {
            front = front + 1; //removing elements one by one
        }
    }

    void print() // print the data
    {
        if (Isempty()) // before print checking the queue is empty or not
        {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = front; i <= rear; i++) //traveling through the array
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue queue(5);  //creation of object and passing size
    queue.push(10);
    queue.push(20);
    queue.pop();
    queue.print();
    queue.pop();
    queue.print();
    queue.push(40);
    queue.push(80);
    queue.print();

    return 0;
}
