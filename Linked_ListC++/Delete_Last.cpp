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

void print(Node *&Head)
{
   if(Head==nullptr)
   {
    return;
   } 

   Node *temp= Head;

   while(temp->next!=nullptr)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }
}

void deleteLast(Node *&Head)
{
    if(Head==nullptr)
    {
        return;
    }

    Node *temp = Head;
    Node *prev = nullptr;

    while (temp->next != nullptr)
    {
        prev = temp;
        temp = temp->next;
    }

    delete temp;
    prev->next = nullptr;
}

int main()
{
    int arr[5] = {10,20,30,40,50};

    Node *Head = nullptr;

    for(int i=0;i<5;i++)
    {
        if(Head==nullptr)
        {
            Head = new Node(arr[i]);
        }
        else
        {
            Node *temp = Head;

            while(temp->next!=nullptr)
            {
                temp= temp->next;
            }
            temp->next= new Node(arr[i]);
        }
    }

    print(Head);
    cout<<endl;
    deleteLast(Head);
    print(Head);
}