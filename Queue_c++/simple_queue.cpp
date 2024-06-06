#include<iostream>
using namespace std;

class simple_queue
{
public:
    int *arr;
    int rear, front;
    int size;

    simple_queue(int size)
    {
        this->size = size;
        arr = new int[size];
        rear = -1;  // Corrected initialization
        front = -1; // Corrected initialization
    }

    ~simple_queue()
    {
        delete[] arr;
    }

    bool isFull()
    {
        return rear == size - 1;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    void push(int data)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        else if (isEmpty())
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear = rear + 1;
            arr[rear] = data;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else if (front == rear)
        {
            front = rear = -1;  // Reset the queue
        }
        else
        {
            front = front + 1;
        }
    }

    void print()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";  // Print elements in a single line
            }
            cout << endl;  // Add newline at the end
        }
    }
};

int main()
{
    simple_queue q(4);
    q.push(20);
    q.push(30);
    q.push(40);
    q.print(); // Output: 20 30 40
    q.pop();
    q.print(); // Output: 30 40
    q.push(50);
    q.print(); // Output: 30 40 50

    return 0;
}
