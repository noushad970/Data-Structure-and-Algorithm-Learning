#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtHead(node* &head,int val)
{
    node *n=new node(val);
    n->next=head;

    head=n;
    printf("\nData Added at first: %d\n",n->data);
}
void insertAtTail(node* &head,int val)
{
   node *n= new node(val);
   node *temp=head;
   if(head==NULL)
   {
    head=n;
    return;
   }
   while(temp->next!=NULL)
   {
    temp=temp->next;
   }
   printf("\nData Added at last: %d\n",temp->data); 
   temp->next=n;

}
void display(node * head)
{
//node *temp=head;
cout<<"Elements: "<<endl;
while(head!=NULL)
{
    cout<<head->data<<" ";
    head=head->next;
}
cout<<endl;
}
void deleteHead(node * &head)
{
    if(head==NULL)
    return;
    node* todelet=head;
    head=head->next;
    printf("\nHead deletion: %d \n",todelet->data);
    delete todelet;
    
}
node*  reverseRecurtion(node * &head)
{
    if(head==NULL || head->next==NULL)
    return head;
    node * newhead=reverseRecurtion(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
void deletion(node * &head,int val)
{
    if(head==NULL)
    return; 
    if(head->next==NULL)
    {
        deleteHead(head);
        return; 
    }
    node *temp =head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node *toDelete= temp->next;
    temp->next=temp->next->next;
    printf("\nElement deletion: %d \n",toDelete->data);
    delete toDelete;
}
node * reverseList(node * &head)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

node * reverseknode(node * &head,int k)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
     if(nextptr!=NULL)
     {
         head->next=reverseknode(nextptr,k);
        
     }
    return prevptr;
}
bool detectCycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next !=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        return true;
    }
    return false;
}
void makeCycle(node* head,int pos)
{
node* temp=head;
node* startNode;
int count=1;
while(temp->next!=NULL)
{
    if(count==pos)
    {
        startNode=temp;
    }
    temp=temp->next;
    
    count++;
    
}
temp->next=startNode;
}
void removeCycle(node* & head)
{
    node* slow=head;
    node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }
    while(slow!=fast);
    slow=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
}

int main()
{
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    insertAtHead(head,21);
    display(head);
    insertAtHead(head,24);
    insertAtHead(head,212);
    display(head);
    deletion(head,24);
    display(head);
    deleteHead(head);
    display(head);
    //node* newRev=reverseList(head);
    //cout<<"After reversing: "<<endl;
    //display(newRev);
    // node* newRevK=reverseknode(head,2);
    // cout<<"After reversing K node: "<<endl;
    makeCycle(head,3);
    
    cout<<endl;
    if(detectCycle(head))
    {
        cout<<"True"<<endl;
    }
    else 
    cout<<"False"<<endl;
    removeCycle(head);
    if(detectCycle(head))
    {
        cout<<"True"<<endl;
    }
    else 
    cout<<"False"<<endl;
    display(head);

}
