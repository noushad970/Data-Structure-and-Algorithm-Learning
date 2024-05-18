#include<iostream>
using namespace std;
#define n 100
class queue{

int* arr;
int front,back;
public:
queue()
{
    arr=new int[n];
    front=-1;
    back=-1;
}
void push(int val)
{
    if(back==n-1)
    {
        cout<<"Not Enough Space."<<endl;
        return;
    }
    back++;
    arr[back]=val;
    if(front==-1)
    {
        front++;
    }
}
void pop()
{
    if(front>back)
    {
        cout<<"The queue is Empty"<<endl;
        return;
    }
    front++;
}
int top()
{
    if(back==-1 || front>back)
    { 
    cout<<"The Queue is empty"<<endl;
    return -1;
    }
    return arr[front];
}
bool isEmpty()
{
    if(back==-1)
    return true;
    if(front>back)
    return true;
    return false;
}

};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    q.pop();
    if(q.isEmpty())
    cout<<"The queue is empty"<<endl;
    else
    cout<<"Queue is not empty"<<endl;
    q.push(69);
    if(q.isEmpty())
    cout<<"The queue is empty"<<endl;
    else
    cout<<"Queue is not empty"<<endl;
}