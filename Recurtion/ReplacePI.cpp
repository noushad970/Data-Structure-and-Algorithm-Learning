#include<iostream>
using namespace std;
void replacePi(string s)
{
    if(s.length()==0)
    return;
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else{        
    cout<<s[0];
    replacePi(s.substr(1));
    }
}
int main()
{
    string s;
    getline(cin,s,'\n');
    //replacePi(s);
    cout<<s.substr(1)<<endl;
    cout<<s.substr(2)<<endl;
    cout<<s.substr(3)<<endl;
}