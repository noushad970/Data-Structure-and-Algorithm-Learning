#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool sameChar=true;
        string s;
        cin>>s;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]!=s[i+1])
            sameChar=false;
        }
        if(s.length()==1)
        cout<<"NO"<<endl;
        else if(sameChar)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(int i=0;i<s.length()-1;i++)
            {
                if(s[i]!=s[i+1])
                swap(s[i],s[i+1]);
            }
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        
    }
}