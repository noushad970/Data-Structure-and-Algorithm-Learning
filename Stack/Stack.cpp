#include<iostream>
using namespace std;
#define n 100
class stack
{
    int *arr;
    int top;
    public:
    stack()
    {
        arr= new int[n];
        top=-1;
    }
    void push(int val)
    {
        if(top==n-1)
        {
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if(top==-1)
        {
            return -1;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        if(top==-1)
        cout<<"The stack is empty"<<endl;
        else
        cout<<"The stack is not empty"<<endl;
        if(top==-1)
        return true;
        return false;
    }
};

int main()
{
    stack st;
    st.push(12);
    st.push(2);
    st.push(32);
    st.push(62);
    st.push(61);
    st.push(15);
    st.push(18);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.isEmpty();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.isEmpty();
    

}