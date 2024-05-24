#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        
        vector<long long int> digits;
        set<long long int> st;
        long long int a[n-1];
        long long int max=0;
        for(int i=0;i<n-1;i++)
        {
            cin>>a[i];
        }
        for(int i=n-2;i>0;i--)
        {
            digits.push_back(a[i]-a[i-1]);
            st.insert(a[i]-a[i-1]);
        }
        for(auto i:digits)
        {
            
            if(i>max)
            max=i;
           // cout<<i<<" ";
        }
       // cout<<"Max "<<max<<endl;
        //cout<<endl;
        int x=n+(n-1);
        if(n==3 )
        {
            if(((a[0]==1 && a[1]==3) || (a[0]==3 && a[1]==6) || (a[0]==1 && a[1]==6)))
            cout<<"YES";
            else
            cout<<"NO";
       
        }else if(x<max)
        {cout<<"NO";
       // cout<<"3rd"<<endl;
       }else if(digits.size()>st.size()-1)
        {cout<<"NO";
      //  cout<<"2nd"<<endl;
        }
        else {cout<<"YES";
        //cout<<"4th"<<endl;
       }
       cout<<endl;
    }
    
}