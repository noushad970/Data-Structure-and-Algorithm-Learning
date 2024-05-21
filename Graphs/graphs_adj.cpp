#include<bits/stdc++.h>
using namespace std;
void display(map<int,list<int>> adj)
{
    cout<<"Adjoint matrix: "<<endl;
    for(auto i: adj)
    {
        cout<<i.first<<" -> ";
        for(auto j: i.second)
        {
            cout<<j<<" , ";
        }
        cout<<endl;
    }
}

map<int,list<int>> adjs(int m, map<int,list<int>> &adj)
{
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    return adj;
}
int main()
{
    map<int,list<int>> adj;

    int n;
    cout<<"Enter total node's: "<<endl;
    cin>>n;
    
    int m;
    cout<<"Enter total edge's: "<<endl;
    cin>>m;
    adjs(m,adj);
    display(adj);
    int matrix[n][n];
  //  displayMatrix(adj,n,matrix[n][n]);
    
    
}