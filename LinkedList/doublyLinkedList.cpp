#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertAtHead(node* &head,int val)
{
    node* n= new node(val);
    n->next=head;
    if(head!=NULL)
    head->prev=n;
    head=n;
}
void insertAtTail(node * &head,int val)
{
    node* n=new node(val);
    node* temp=head;
    if(head==NULL)
    {
    insertAtHead(head,val);
    return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;

}
int length(node* head)
{
    node* temp=head;
    int l=0;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}
node* KAppend(node* &head,int k)
{
    node* newHead;
    node* newTail;
    node* tail=head;
    int l=length(head);
    int count=1;
    k=k%l;
    while(tail->next!=NULL)
    {
        if(count==l-k)
        newTail=tail;
        if(count==l-k+1)
        newHead=tail;
        tail=tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;
    return newHead;
}
void deleteAtHead(node* &head)
{
    node* todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;

}
void deleteVal(node* &head,int pos)
{
    cout<<endl<<"After Delete."<<endl;
    
    if(pos==1)
    {
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=pos)
    {
        temp=temp->next;
        count++;
    } 
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    temp->next->prev=temp->prev;
    delete temp;

}
void display(node* head)
{
    cout<<"Elements: "<<endl;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtHead(head,5);
    insertAtHead(head,12);
    display(head);
    node* newlist=KAppend(head,5);
    display(newlist);
    
}