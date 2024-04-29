#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data= val;
        next=NULL;
    }
};
void display(node* head)
{
    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}
void insertAtHead(node* &head,int val)
{
    cout<<"After Insertion at head: ";
    node* n= new node(val);
    node* temp=head;
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next= head;
    head=n;
    display(temp);

}
void insertAtTail(node* &head,int val)
{
    cout<<"After Insertion at tail: ";
    node* n= new node(val);
    node* temp=head;

    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next= n;
    n->next=head;
    display(temp);
}


void deleteAtHead(node* &head)
{
    cout<<"After deletion of Head: ";
    node* temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;
    display(head);
}
void deletion(node* &head, int pos)
{
    cout<<"After deletion: ";
    node* temp=head;
    int count=1;
    if(pos==1)
    {
        deleteAtHead(head);
        return;
    }
    
    while(count!=pos-1)
    {
        temp=temp->next;
        count++;
    }
    node* todelet= temp->next;
    temp->next=temp->next->next;
    delete todelet;
    display(head);
}
int main()
{
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtHead(head,21);
   
    deletion(head,4);
    
}