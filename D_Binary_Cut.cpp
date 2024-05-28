
#include<iostream>
using namespace std;
bool isSorted(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int a[s.length()];
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            a[i]=0;
            else
            a[i]=1;
        }
        int ans=1;
        for(int i=0;i<s.length();i++)
        {
            if(a[i]==1 && a[i+1]==0)
            {
                ans++;
            }
        }
        if(a[s.length()-1]==1 && a[s.length()-2]==0)
        ans++;
        cout<<ans<<endl;
        
    }
    
}