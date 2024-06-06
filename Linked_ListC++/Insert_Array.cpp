#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void printLinked_List(Node *Head)
{
     
}

int main()
{
    int arr[4] = {2, 4, 6, 8};
    
    Node *Head = nullptr; // Initialize Head to nullptr

    for (int i = 0; i < 4; i++)
    {
        if (Head == nullptr)
        {
            Head = new Node(arr[i]);
        }
        else
        {
            Node *temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    printLinked_List(Head);

    return 0;
}
