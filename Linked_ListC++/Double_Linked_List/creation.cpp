#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node * previous;


    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->previous=NULL;
    }
};

void printDLL(Node *&head)
{
        Node *travel=head;

        while(travel)
        {
            cout<<travel->data<<" ";
            travel=travel->next;
        }
}


int main()
{

    Node *head= NULL;
    //not exists

    if(head==NULL)
    {
        head= new Node(10);
    }
    else
    {
        Node *temp = new Node(10);
        temp->next=head;
        head->previous=temp;
        head=temp;
    }

    printDLL(head);
    
}


// int arr[4]={10,20,30,40};

//     Node *Head = NULL;
//     for(int i=0;i<4;i++)
//     {
//         if(Head==NULL)
//     {
//         Head = new Node(arr[i]);
//     }
//     else
//     {
//         Node * temp = new Node(arr[i]);
//         temp->next
//     }