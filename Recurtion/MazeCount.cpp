#include<iostream>
using namespace std;
int mazePathCount(int n,int i,int j)
{
    if(i==n-1 && j==n-1)
    {
        return 1;
    }
    if(i>=n || j>=n)
    return 0;
    int count=mazePathCount(n,i+1,j)+mazePathCount(n,i,j+1);
    cout<<"Count: "<<count<<endl;
    return count;
}
int main()
{
    cout<<"Answer: "<<mazePathCount(4,0,0);
}