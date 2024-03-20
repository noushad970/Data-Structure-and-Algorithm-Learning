#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
      
          int l[q],r[q],k[q];
        for(int i=0;i<q;i++)
        {
           cin>>l[i]>>r[i]>>k[i];
        }
        int b[n];
        
        for(int i=0;i<q;i++)
        {   int sum=0;
            for(int j=0;j<n;j++)
            b[j]=a[j];
            for(int j=l[i]-1;j<r[i];j++)
            {
                b[j]=k[i];
                
            }
            for(int j=0;j<n;j++)
            {
                sum+=b[j];
            }
           // cout<<sum<<endl;
        if(sum%2==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
        
        }
       }

