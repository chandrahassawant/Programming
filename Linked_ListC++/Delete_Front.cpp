#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
};

void printLinkedList(Node *Head)
{
    Node *temp = Head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};

void deleteFront(Node *&Head)
{
    Node *temp=Head;
    temp=temp->next;
    Head=temp;
}

void deleteLast(Node *&Head)
{
    Node *temp=Head;

    while(temp->next->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=nullptr;
}

void deleteAtPos(Node *&Head, int index)
{
    if (Head == nullptr)
    {
        return; // List is empty, nothing to delete
    }

    // If the node to be deleted is the head node
    if (index == 0)
    {
        Node *temp = Head;
        Head = Head->next;
        delete temp;
        return;
    }

    // Find the node before the one to be deleted
    Node *prev = Head;
    for (int i = 0; prev != nullptr && i < index - 1; i++)
    {
        prev = prev->next;
    }

    // If index is out of bounds or prev is nullptr, or prev's next is nullptr, then index is not valid
    if (prev == nullptr || prev->next == nullptr)
    {
        return;
    }

    // Delete the node at the given position
    Node *temp = prev->next;
    prev->next = temp->next;
    delete temp;
}



int main()
{

    int arr[5]={12,14,16,18,20};

    Node *Head = nullptr;
    Node *temp = Head;

    for(int i=0;i<5;i++)
    {
        if(Head==nullptr)
        {
            Head = new Node(arr[i]);
            temp = Head;
        }
        else
        {
            Node *temp = Head;
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            temp->next = new Node(arr[i]);
        }

    }

    printLinkedList(Head);
    // deleteFront(Head);
    // printLinkedList(Head);
    // deleteLast(Head);
    // printLinkedList(Head);
    deleteAtPos(Head,3);
    printLinkedList(Head);


    return 0;
}