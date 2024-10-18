#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

};
void insertAtHead(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}
void insertAtTail(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail= temp;

}
void print(node* &head){
    
    node* temp=head;
    if(temp==nullptr){
        cout<<"The list is empty"<<endl;
        return;
    }
    cout<<"Values of the linked List:"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
    node* node1= new node(21);
    node* head=node1;
    node* tail= node1;
    insertAtHead(head,4);
    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtTail(tail,52);
    print(head);

}