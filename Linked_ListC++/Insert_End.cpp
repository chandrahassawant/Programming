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

void insertAtLast(Node *Head)
{
    Node *tail= Head;
   
   while(tail->next!=nullptr)
   {
    tail=tail->next;

   }
   tail->next= new Node(200);
};

void insertAtFirst(Node *&Head)
{
    Node *front = new Node(130);

    if(Head==nullptr)
    {
        Head = front;
    }
    else
    {
        front->next=Head;
        Head=front;
    }

    
};

int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    Node *Head = nullptr;
    Node *temp = Head;

    for (int i = 0; i < 5; i++)
    {
        if (Head == nullptr)
        {
            Head = new Node(arr[i]);
            temp = Head;
        }
        else
        {
            Node *tail = Head;
            while (tail->next != nullptr)
            {
                tail = tail->next;
            }
            tail->next = new Node(arr[i]);
        }
    }

    printLinkedList(Head);
    insertAtLast(Head);
    printLinkedList(Head);
    insertAtFirst(Head);
    printLinkedList(Head);

    return 0;
}
