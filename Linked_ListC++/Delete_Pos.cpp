#include<iostream>
using namespace std;

class Node
{   public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
};

void display(Node *&Head)
{
    if(Head==nullptr)
    {
        return;
    }

    Node *temp = Head;

    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void delPos(Node *&Head,int index)
{
    if(Head==nullptr)
    {
        return;
    }

    Node *temp= Head;
    
    for(int i=1;i<index;i++)
    {
        temp->next =temp->next->next;
    }

}


int main()
{
    int arr[4]= {10,20,30,40};

    Node *Head = nullptr;

    for(int i=0;i<4;i++)
    {
        if(Head==nullptr)
        {
        Head= new Node(arr[i]);
        }
        else
        {
            Node *temp =Head;

            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            temp->next= new Node(arr[i]);
        }
    }

    display(Head);
    cout<<endl;
    delPos(Head,2);
    display(Head);
    
}