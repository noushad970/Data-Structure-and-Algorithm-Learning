#include<iostream>
#include<unordered_map>
using namespace std;
//main difference between map and pair is map will always print value in sorted order but pair will not print value in sorted order
int main()
{
   unordered_map<string,int> m;
    int n;
    cout<<"Enter the number of students:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        int x;
        cout<<"Enter "<<i+1<<"th student name: "<<endl;
        cin>>s;
        cout<<"Enter "<<i+1<<"th student marks: "<<endl;
        cin>>x;
        m[s]=x;
    }
    for(auto x:m)
    {
        cout<<x.first<<" = "<<x.second<<endl;
    }
}