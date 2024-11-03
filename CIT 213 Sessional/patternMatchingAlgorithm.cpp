#include <iostream>
using namespace std;
void PatternMatch(string s,string s1){
        for(int i=0;i<s.length();i++){
            int x=i;
            bool breaking=false;
            for(int j=0;j<s1.length();j++){
                if(s[i]==s1[j]){
                    i++;
                }else{
                    i=x;
                    breaking=true;
                    break;
                }
                
            }
            if(!breaking){
                    cout<<x<<" ";
            }
            i=x;    
        }
}
int main() {
 string s;
 string s1;
 cout<<"enter the string"<<endl;
 getline(cin,s);
 cout<<"Enter pattern"<<endl;
 getline(cin,s1);
    PatternMatch(s,s1);
}
