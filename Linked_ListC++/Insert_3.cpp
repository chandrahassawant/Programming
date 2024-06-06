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

void insertFront(Node *&Head,int value)
{
    if(Head==nullptr)
    {
        Head = new Node(value);
    }
    else
    {
        Node * temp = new Node(value);
        temp->next=Head;
        Head=temp;

    }
};

void printLinkedList(Node *&Head)
{
    Node *temp = Head;

    while(temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
};


int main()
{
    Node *Head = nullptr;

    int arr[5]={100,200,300,400,500};

    for(int i=0;i<5;i++)
    {
        if(Head==nullptr)
        {
            Head = new Node(arr[i]);
        }
        else
        {
            Node *temp = new Node(arr[i]);
            temp->next = Head;
            Head= temp;
        }
    }

    cout<<"Original LinkedList"<<endl;

    printLinkedList(Head);

    insertFront(Head,1000);
    cout<<endl;
    cout<<"Updated LinkedList"<<endl;

     printLinkedList(Head);


}