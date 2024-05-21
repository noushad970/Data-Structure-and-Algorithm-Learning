#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int ans=0;
        if(y==0)
        ans=1;
        else 
        ans=(y/2)+(y%2);
        int remainBox=ans*7;
        if(y%2==1)
        remainBox+=4;
        if(y==0)
        remainBox=15;
        if(x==0 && y==0)
        ans=0;
        else if(y==0 && x>remainBox)
        {
            //cout<<"NUL1"<<endl;
           if(x%remainBox==0)
           ans=x/15;
           else
            ans=(x/remainBox)+1;
        }
        else if(y==0 && x<=remainBox)
        {
           // cout<<"NUL2"<<endl;
            ans=1;
        }
        else if(x%remainBox==0 && x>remainBox)
        {
           // cout<<"NUL3"<<endl;
            x=x-remainBox;
            if(x%15==0)
            ans+=(x/15);
            else
            ans+=(x/15)+1;
        }
        else if(x%remainBox==0 && x<=remainBox)
        {
           // cout<<"NUL4"<<endl;
            ans=ans+0;
        }
        else if(x>remainBox)
        {
           // cout<<"NUL5"<<endl;
            x=x-remainBox;
            if(x%15==0)
            ans+=(x/15);
            else
            ans+=(x/15)+1;
        }
        else if(x<=remainBox)
        {ans+=0;}
        //cout<<"NUL6"<<endl;}
        else{ ans+=0;
//cout<<"NUL7"<<endl;
}        cout<<ans<<endl;
    }
    //cout<<3/8;
}