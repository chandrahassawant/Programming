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

void printLinkedList(Node *&Head)
{
    Node *temp = Head;
    while(temp->next!=nullptr)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}




int main()
{
    int arr[5]={10,20,30,40,50};

    Node *Head = nullptr;

    for(int i=0;i<5;i++)
    {
        if(Head==nullptr)
        {
            Head = new Node(arr[i]);
        }
        else
        {
            Node *temp = new Node(arr[i]);
            temp->next=Head;
            Head = temp;

        }
    }

    printLinkedList(Head);

    return 0;
}


