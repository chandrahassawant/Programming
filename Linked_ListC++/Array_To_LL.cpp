#include<iostream>
using namespace std;


class Node
{   public:   //for accessing data publicly
    int data;
    Node *previous;   //creation of pointer
    Node *next;

    Node(int data)
    {
        this->data=data;
        previous = NULL;
        next=NULL;
    }
};

void print(Node *&head)
{
    Node *travel = head;  //create node for travel purpose

    while(travel!=NULL)  //loop condition here only travel!=null
    {
        cout<<travel->data<<" ";
        travel=travel->next;
    }
}

void insertFirst(Node *&head,int value)
{
    if(head==NULL)
    {
        head = new Node(value);

    }
    else
    {
        Node *temp = new Node(value);
        temp->next=head;
        head->previous=temp;
        head=temp;
    }
}

void insertEnd(Node *&head,int value)
{
    if(head==NULL)
    {
        head= new Node(value);  //if head is blank
    }
    else
    {
        Node *temp=new Node(value);

        Node * tail = head;  //creation of new node for edge case

        while(tail->next!=NULL)  //iteration upto 2nd last
        {
            tail=tail->next;
        }

        tail->next=temp;  // next to new connection
        temp->previous=tail; //
    }
}

void insertAtPos(Node *&head, int value, int index) {
    if (index < 0) {
        cout << "Invalid index." << endl;
        return;
    }

    Node *current = head;

    if (index == 0) {
        insertFirst(head, value);
        return;
    }

    Node *temp = new Node(value);

    for (int i = 0; i < index - 1 && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL) {
        cout << "Index out of bounds. Inserting at the end." << endl;
        insertEnd(head, value);
        return;
    }

    temp->next = current->next;
    temp->previous = current;
    if (current->next != NULL) {
        current->next->previous = temp;
    }
    current->next = temp;
}


int main()
{
    int arr[5]={10,20,30,40,50};

    Node *head = NULL;
    Node *tail= NULL;  //for last node

   
    for(int i=0;i<5;i++)
    {
        if(head==NULL)
    {
        head = new Node(arr[i]); //null 
        tail = head;
        
    }
    else
    {
        Node * temp = new Node(arr[i]); //create a new node
        tail->next=temp; //link
        temp->previous=tail;  //due to doubly linked list
        tail=temp;  //to stay at last node
    }
    }

    print(head);
    insertFirst(head,5);
    cout<<endl;
    cout<<"After adding first"<<endl;
    print(head);
    cout<<endl;
    cout<<"After adding end"<<endl;
    insertEnd(head,55);
    print(head);
    insertAtPos(head,25,3);
    cout<<"After adding at 2nd position"<<endl;
    print(head);
}