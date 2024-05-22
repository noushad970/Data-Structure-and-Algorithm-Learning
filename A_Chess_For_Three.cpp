#include<iostream>
using namespace std;
//int count=0;
void solution(int &f,int &s,int &t,int &ans)
{
    
 //  cout<<"All Val"<<f<<" "<<s<<" "<<t<<" Answer: "<<ans<<endl;
    if((f==0 && s==0) || (f==0 && t==0) || (t==0 && s==0))
    {
       cout<<ans<<endl; 
        return;
        
        }
    int mini,maxi;
    mini=min(f,min(s,t));
    maxi=max(f,max(s,t));
    if(f==0 && s>0 && t>0)
    {
        mini=min(s,t);
    }
    if(s==0 && f>0 && t>0)
    {
        mini=min(f,t);
    }
    if(t==0 && s>0 && f>0)
    {
        mini=min(s,f);
    }
     
    if((mini==f && maxi==s) || (maxi==f && mini==s))
    solution(--f,--s,t,++ans);
    if((mini==f && maxi==t) || (maxi==f && mini==t))
    solution(--f,s,--t,++ans);
    if((mini==t && maxi==s) || ( maxi==t && mini==s))
    solution(f,--s,--t,++ans);

    

}
int main()
{
    int t;
    cin>>t;
    
    while (t--)
    {
        int ans=0;
        int p1,p2,p3;
        cin>>p1>>p2>>p3;
        int mini,maxi;
        mini=min(p1,min(p2,p3));
        maxi=max(p1,max(p2,p3));
        if(p1==0 && p2==0 && p3==0)
        {
            cout<<"0"<<endl;
        }
        else if((p1+p2+p3)%2==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            solution(p1,p2,p3,ans);
        }


    }
    
}