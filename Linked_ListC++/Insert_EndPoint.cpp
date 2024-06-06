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
        temp=temp->next;
    }
}

void InsetLast(Node *&Head,int value)
{
    

    if(Head==nullptr)
    {
        Head= new Node(value);
    }
    else
    {
        Node *temp= Head;

        while(temp->next!=nullptr)
    {
        temp= temp->next;
    }
    temp->next=new Node(value);
    
}
};


int main()
{
    int arr[4]={100,200,300,400};

    Node *Head = nullptr;

    for(int i=0;i<4;i++)
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
    InsetLast(Head,900);
    cout<<endl;
    printLinkedList(Head);
}