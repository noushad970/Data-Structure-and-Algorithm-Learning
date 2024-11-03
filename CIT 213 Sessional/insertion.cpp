#include <iostream>
using namespace std;
string insert(string s,int n,string s2){
   // int len=s.length()+s2.length()-1;
    string x;
    for(int i=0;i<s.length();i++){
        if(i==n){
            for(int j=0;j<s2.length();j++){
                x+=s2[j];
            }
            
        }
        x+=s[i];
    }
    return x;
}
int main() {
 string s="Hello everyone";
 cout<<insert(s,3,"XYZ");   
}
