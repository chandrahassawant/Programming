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

void InsertF(Node *&Head, int value)
{
    if(Head == nullptr)
    {
        Head = new Node(value);
    }
    else
    {
        Node *temp = new Node(value);
        temp->next = Head;
        Head = temp;
    }
}

void printLinkedList(Node *&Head)
{
    Node *temp = Head;

    while(temp != nullptr)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
}

int main()
{
    int arr[4] = {10, 20, 30, 40};
    Node *Head = nullptr;
    
    // Creating linked list from the array
    for(int i = 0; i < 4; i++)
    {
        if(Head == nullptr)
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
    
    // Printing the linked list
    cout << "Original Linked List:" << endl;
    printLinkedList(Head);

    // Inserting a node at the front
    InsertF(Head, 10);
    
    // Printing the updated linked list
    cout << "\nUpdated Linked List:" << endl;
    printLinkedList(Head);

    return 0;
}
