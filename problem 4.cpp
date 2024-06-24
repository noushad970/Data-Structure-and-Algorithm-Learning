#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }   
    int k;
    cin>>k;
    int b[k];
    for(int i=0;i<k;i++)
    {
        cin>>b[i];
    }
    int ans=0;
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(i+1==b[index] && index<k)
        {
            index++;
            ans+=a[i];
        }
        else
        continue;
        
    }
    if(x==0)
    cout<<"0"<<endl;
    else 
    if(x==1)
    cout<<"1"<<endl;
    else
    cout<<x-ans+1<<endl;
}