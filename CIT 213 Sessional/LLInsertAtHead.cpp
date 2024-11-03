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
    insertAtHead(head,13);
    insertAtHead(head,23);
    insertAtHead(head,15);
    insertAtHead(head,63);
    
   
    print(head);
   
    
    print(head);
    
}