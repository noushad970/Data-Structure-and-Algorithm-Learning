#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==m)
        cout<<"YES"<<endl;
        else if(n>m && n%2==m%2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    

}