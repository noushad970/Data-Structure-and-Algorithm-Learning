#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    
    
};
void insertAtHead(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;

}
void insertAtTail(node* & tail,int d){
    node* temp= new node(d);
    tail->next=temp;
   tail=tail->next;
}
void print(node* &head){
    if(head==nullptr){
        cout<<"The linked list is Empty."<<endl;
    }
    node* temp=head;
    cout<<"New Node values: "<<endl;
    while (temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}

int main() {
    node* node1= new node(19);
    node* head=node1;
    node* tail= node1;
   
    print(head);
    insertAtTail(tail,43);
    print(head);
    insertAtTail(tail,26);
    print(head);
    
    insertAtTail(tail,86);
    print(head);
}