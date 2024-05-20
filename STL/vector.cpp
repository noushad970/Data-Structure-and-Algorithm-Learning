#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the number of elements added in the vector: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"Enter "<<i+1<<"th value: "<<endl;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Value with for loop: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Value printed with iterator: "<<endl;
    vector<int>:: iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Value printed with foreach loop: "<<endl;
    for(int val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Value printed with popback method: "<<endl;
    while(!v.empty())
    {
        cout<<v.back()<<" ";
        v.pop_back();
    }
    vector<int>v2(3,15);
    swap(v,v2);
    cout<<endl;
    cout<<"vector v2: "<<endl;
    for(int val:v2)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"vector  v: "<<endl;
    for(int val:v)
    {
        cout<<val<<" ";
    }

}