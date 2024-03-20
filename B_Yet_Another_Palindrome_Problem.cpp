#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int a[x];
        for(int i=0;i<x;i++)
        cin>>a[i];
        int ans=0;
        for(int i=0;i<x;i++)
        {
            for(int j=i+2;j<x;j++)
            {
                if(a[i]==a[j])
                {
                    ans++;
                    break;
                }
            }
            
                if(ans>0)
                break;
        }
        if(ans>0)
        cout<<"YES"<<endl;
        else if(ans==0)
        cout<<"NO"<<endl;

    }
}