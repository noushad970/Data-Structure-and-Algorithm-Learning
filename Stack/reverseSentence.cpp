#include<iostream>
#include<Stack>
using namespace std;

void reverseSentence(string s)
{
    stack<string> st;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        string word;
        while(s[i]!=' '&& i<len)
        {
            word+=s[i];
            i++;
        }
        st.push(word);
       
    } 
    cout<<"Reverse of the word is: "<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    string s;
    cout<<"Enter your string: "<<endl;
    getline(cin,s,'\n');
    
    reverseSentence(s);

}