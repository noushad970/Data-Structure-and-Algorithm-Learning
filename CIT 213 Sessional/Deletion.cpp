#include <iostream>
using namespace std;
string deletion(string s,int fst,int lst){
   
    string x;
    for(int i=0;i<s.length();i++){
        if(i>=fst && i<=lst)
        continue;
        x+=s[i];
    }
    return x;
}
int main() {
 string s="Hello everyone";
 cout<<deletion(s,3,6);   
}
