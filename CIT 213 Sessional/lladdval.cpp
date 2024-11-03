#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        data=d;
        this->next=NULL;
    }   
};
void insertAtHead(node* &head,int data){
    node * temp= new node(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(node* &tail,int data){
    node* temp=new node(data);
    tail->next=temp;
    tail=tail->next;
    
}
void insertAtPos(node* &tail,node * &head,int data, int pos){
    
    if(pos==1){
        insertAtHead(head,data);
        return;
    }
    node* temp= head;
    int count=1;
    while (temp!=NULL)
    {
        if(count+1!=pos)
        {
        count++;
        temp=temp->next;
        
        }else
        {
            if(temp->next==NULL)
            {
            insertAtTail(tail,data);
            }
            node* nodetoInsert=new node(data);
            nodetoInsert->next=temp->next;
            temp->next=nodetoInsert;
            return; 
        }
    }
    
    
}
void printLinkedList(node* temp){
    if(temp==NULL){
        cout<<"The linked list is empty"<<endl;
        return;
    }
    cout<<"Linked list values: "<<endl;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    

}
int main() {
    node * ll= new node(10);
    node * head=ll;
    node * tail=ll;
    insertAtHead(head,20);
    printLinkedList(head);
    cout<<endl;
    insertAtHead(head,30);
    printLinkedList(head);
    cout<<endl;
    insertAtHead(head,40);
    printLinkedList(head);
    cout<<endl;
    insertAtHead(head,50);
    printLinkedList(head);
    cout<<endl;
    cout<<endl;
     insertAtTail(tail,60);
    // insertAtTail(tail,70);
     insertAtTail(tail,80);
    printLinkedList(head);
    insertAtPos(tail,head,100,3);
    cout<<endl;
    cout<<endl;
    printLinkedList(head);
}