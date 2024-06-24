#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while (t--)
    {
        long long int n;
        cin>>n;
        long long int a[n];
        long long int maxAns=0;
        for(long long int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long long int i=0;i<n;i++)
        {
            for(long long int j=i+1;j<n;j++)
            {
             if(a[i]>a[j])
             swap(a[i],a[j]);   
            }
        }
        for(long long int i=0;i<n;i++)
        {
            long long int ans=0;
            for(long long int j=i;j<n;j++)
            {
                if(abs(a[i]-a[j])<=1)
                ans++;
            }
            maxAns=max(maxAns,ans);
        }
        cout<<maxAns<<endl;
    }
 //2 2 3 4 5   
}