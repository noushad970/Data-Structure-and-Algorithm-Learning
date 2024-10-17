#include <iostream>
#define n 1000
using namespace std;
class queues{
    int *arr;
    int front,back,sizes;
    public:
    queues(){
        arr= new int(n);
        front=-1,back=-1,sizes=0;
    }
    void enqueue(int x){
        if(back==n-1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        
        if(front==-1)
        front++;
        sizes++;
    }
    void dequeue(){
        if(front==-1 || front>back)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        front++;
        sizes--;
    }
    int peek(){
        if(front==-1 || front>back)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    int size(){
        return sizes;
    }

};
int main() {
    queues q;
    q.enqueue(4);
    cout<<q.peek()<<endl;
    q.enqueue(1);
    q.dequeue();
    cout<<q.peek()<<endl;
    q.enqueue(5);
    cout<<q.peek()<<endl;
    q.enqueue(6);
    cout<<q.peek()<<endl;
  //  int ns=q.size();
    

}