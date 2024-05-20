#include<set>
#include<iostream>
using namespace std;
int main()
{
   set<int> s;
    int n;
    cout<<"Enter the number of students:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"Enter "<<i+1<<"th value: "<<endl;
        cin>>x;
        s.insert(x);
    }
   // set<int> :: iterator it;
    cout<<"Printing sets value's: "<<endl;
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Printing sets value's in reverse: "<<endl;
    for(auto it=s.rbegin();it!=s.rend();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}