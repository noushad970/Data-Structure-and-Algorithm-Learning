#include <iostream>
#include<stack>
#include<math.h>
using namespace std;

int main() {
    stack <int> st;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]);
        }else{
            int op1,op2;
            op1=st.top();
            st.pop();
            op2=st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1+op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;               
            
            default:
                break;
            }
        }
    }
    cout<<"Value:"<<st.top();
}