#include<iostream>
using namespace std;

int countPath(int s,int e)
{
    if(s==e)
    return 1;
    if(s>e)
    return 0;
    int count=0;
    for(int i=1;i<=6;i++)
    {
       // cout<<"before recursion: "<<"count: "<<count<<" i+s: "<<i+s<<" e: "<<e<<endl;
        count+=countPath(i+s,e);
        //cout<<"After recursion: "<<"count: "<<count<<" i+s: "<<i+s<<" e: "<<e<<endl;
        
    }
    return count;
}
int main()
{
cout<<countPath(0,3);
}