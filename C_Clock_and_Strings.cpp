#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int max1,max2,min1,min2;
        max1=max(a,b);
        min1=min(a,b);
        max2=max(c,d);
        min2=min(c,d);
        bool isIntersect=false;
        for(int i=min1;i<=max1;i++)
        {
            if(i==min2 || i==max2)
            isIntersect=!isIntersect;
            
        }
        if(isIntersect)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        /*if(min1+1==max1 || min2+1==max2)
        {
            cout<<"NO"<<endl;
        }
        else if((max1==12 && (min1==11 || min1==1)) || (max2==12 && (min2==11 || min2==1)))
        cout<<"NO"<<endl;
        else if(max2<max1 && min2>min1)
        cout<<"NO"<<endl;
        else if(max2>max1 && min2<min1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;*/
    }
}