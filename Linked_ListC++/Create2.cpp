#include<iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node * next;

    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
};

void printLinkedList(Node *&Head)
{
    Node *temp = Head;

    while(Head!=nullptr)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}


int main()
{
    Node *Head = new Node(28);
    printLinkedList(Head);
    return 0;
}