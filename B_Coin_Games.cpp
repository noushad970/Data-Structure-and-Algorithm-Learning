#include<bits/stdc++.h>
using namespace std;
void solution(vector<char>&l,int &ans)
{
    if(l.empty())
    {
      //  cout<<"Winner: "<<ans<<endl;
        return;
    }
    bool isfounded=false;
    for(auto i:l)
    {
        if(i=='U')
        isfounded=true;
    }
    if(!isfounded)
    {
        //cout<<"winners: "<<ans<<endl;
        return;
    }
    for(int i=0;i<l.size();i++)
    {
     if(l[i]=='U')
     {
        l.erase(l.begin()+i);
        ans++;
        solution(l,ans);
     }   
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int ans=0;
        cin>>n;
        string s;
        cin>>s;
        vector<char>l;
        for(int i=0;i<n;i++)
        {
            l.push_back(s[i]);
           // cout<<l[i];
        }
        //cout<<endl;
        solution(l,ans);
        if(ans%2==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
        
    }
}