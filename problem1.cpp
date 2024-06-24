#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int ans=0;
    for(int i=1;i<=x;i++)
    {
        if(i%2==1)
        ans++;
    }
    cout<<ans;
}