#include<iostream>
using namespace std;
//chashchashsss
string removeDup(string s)
{
    if(s.length()==0)
    return "";
    char ch=s[0];
    string ans=removeDup(s.substr(1));
    if(ch==ans[0])
    {
        return ans;
    }
    
        return ch+ans;
    
}

int main()
{
string s;
getline(cin,s,'\n');
cout<<removeDup(s)<<endl;
}