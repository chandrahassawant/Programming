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
    Node *temp= Head;

    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp= temp->next;  
    }
    
};

void deleteFirst(Node *&Head)
{
    Node *temp=Head;
    temp=temp->next;
    Head=temp;

}


int main()
{
    int arr[4]={10,20,30,40};

    Node *Head = nullptr;

    for(int i=0;i<4;i++)
    {
        if(Head==nullptr)
        {
            Head = new Node(arr[i]);
        }
        else
        {
            Node *temp = Head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = new Node(arr[i]);
        }
    }

    printLinkedList(Head);
    deleteFirst(Head);
    cout<<endl;
    printLinkedList(Head);

}