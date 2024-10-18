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
    ~node(){
        int val= this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Deleted value: "<<val<<endl;
        
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
void insertAtPosition(node* & tail,node* & head,int pos,int d){
    if(pos==1){
       insertAtHead(head,d);
       return;
    }
    node* temp= head;
    int count=1;
    while(temp!=NULL){
        if(count+1!=pos){
            count++;
            temp=temp->next;
        }else{
            if(temp->next==NULL){
                insertAtTail(tail,d);
            }
            node* nodeToInsert= new node(d);
            nodeToInsert->next=temp->next;
            temp->next=nodeToInsert;

            return;
        }

    }
}
int Length(node * & node1){
    node* temp= node1;
    int count=0;
    if(node1==nullptr){
        return 0;
    }
    while (temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    cout<<"Size of the array:"<<endl;
    return (count+1);
    
}
void deletion(node* & head,int pos){
    
    if(pos==1){
        node* temp= head;
        temp=temp->next;
        head=temp;
        temp->next=NULL;
        delete temp;
    }else{
        node* current=head;
        node* prev=NULL;
        int count=1;
        while(count<pos){
            prev=current;
            current=current->next;
            count++;
        }
        prev->next=current->next;
        current->next=NULL;
        delete current;
    }

}
int main() {
    node* node1= new node(19);
    node* head=node1;
    node* tail= node1;
    print(head);
    insertAtHead(head,13);
    print(head);
    insertAtTail(tail,43);
    print(head);
    insertAtTail(tail,26);
    print(head);
    
    insertAtTail(tail,86);
    print(head);
    insertAtPosition(tail,head,1,22);
    print(head);
    cout<<Length(head);
    deletion(head,4);
    print(head);
}