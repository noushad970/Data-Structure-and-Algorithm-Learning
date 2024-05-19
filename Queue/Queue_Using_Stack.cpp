#include<bits/stdc++.h>
using namespace std;
#define n 100
class que{
    stack<int> st1;
    stack<int> st2;
    stack<int> st3;
    public:
    void push(int x)
    {
        st1.push(x);
        st3.push(x);
    }
    int pop()
    {
        if(st1.empty() && st2.empty())
        {
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        if(st2.empty())
        {
            while(!st1.empty())
            {
                
            st2.push(st1.top());
            st1.pop();
            }
        }
        int topVal=st2.top();
        st2.pop();
        return topVal;
    }
    bool empty()
    {
        if(st1.empty() && st2.empty())
        return true;
        return false;
    }
    int top()
    {
       
        if(st1.empty())
        {
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        while (!st3.empty())
        {
            st2.push(st3.top());
            st3.pop();
        }
        return st2.top();
        
    }
};

int main()
{
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    cout<<q.top()<<endl;
}