#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout<<"Enter number of nodes: "<<endl;
    cin>>n;
    cout<<"Enter number of edges: "<<endl;
    cin>>m;
    int x,y;
    int AdjMat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            AdjMat[i][j]=0;
        }
    }
    
    unordered_map<int,list<int>> adjList;
    for(int i=0;i<m;i++)
    {
        
        cin>>x>>y;
        AdjMat[x][y]=1;
        AdjMat[y][x]=1;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
    cout<<"Adjacency Matrix: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    cout<<"Adjacency List: "<<endl;
    for(auto i:adjList)
    {
        cout<<i.first<<" : ";
        for(auto j: i.second)
        {
            cout<<j<<" , ";
        }
        cout<<endl;
    }
    
}