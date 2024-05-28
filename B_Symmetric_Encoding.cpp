#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s,s3={};
        int n;
        cin>>n;
        cin>>s;
        vector<char>v;
        for(int i=0;i<n;i++)
        {
            v.push_back(s[i]);
        }
      
        sort(v.begin(),v.end());
        for(auto i:v)
        {
           s3+=i; 
        }
        set<char> st;
        for(int i=0;i<n;i++)
        {
            st.insert(s[i]);
        }
        n=st.size();
        
        string s2={};
        
        for(auto i:st)
        {
          s2+=i;
        }
        int size;
        size=s2.length();
        
        pair<char,char> p[size];
        
        pair<char,bool> pr[s.length()];
        for(int i=0;i<s.length();i++)
        {
            pr[i].first=s[i];
            pr[i].second=false;
            
        }
        for(int i=0;i<size;i++)
        {
            p[i].first=s2[i];
            p[i].second=s2[s2.length()-i-1];
      
        }
   
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<size;j++)
            {
                if(pr[i].first==p[j].first && !pr[i].second)
                {
                    s[i]=p[j].second;
                    pr[i].second=true;
                    
                }
            }
        }
        cout<<s<<endl;
        
        
    }
}
/*
 s3=s;
       
        vector<char>v;
        for(int i=0;i<n;i++)
        {
            v.push_back(s[i]);
        }
        int j=0;
        sort(v.begin(),v.end());
        for(auto i:v)
        {
           s[j]=i;
           j++; 
        }
        set<char> st;
        for(int i=0;i<n;i++)
        {
            st.insert(s[i]);
        }
        n=st.size();
       // vector<>
        
        string s2={};
        
        for(auto i:st)
        {
          s2+=i;
        }
         j=0;
        
        //s3=hnndledmnhlttin
        //s2=dehilmnt
        
        int size2=s2.length();
        bool visited[s3.length()];
        for(int i=0;i<s3.length();i++)
        visited[i]=false;
        
        while(j!=size2-1)
        {
            for(int i=0;i<s3.length();i++)
        {
            if(s3[i]==s2[j] && !visited[i])
            {
               s3[i]=s2[size2-j-1];
               visited[i]=true;
            }
            
        }
        j++;
        }
        cout<<s3<<endl;
    }
    */
