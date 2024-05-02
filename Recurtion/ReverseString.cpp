#include<iostream>
using namespace std;
void reverse(string s,int n)
{
    if(n==-1)
    return;
    cout<<s[n]<<" ";
    reverse(s,n-1);
    
}
int main()
{
    string s;
    getline(cin,s,'\n');
    int n=s.length();
    reverse(s,n-1);
}