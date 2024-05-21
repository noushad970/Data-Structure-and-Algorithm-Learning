#include<bits/stdc++.h>
using namespace std;
template <typename t>
class graphs{
public:
map<t,list<t>> adj;
void addEdge(t u,t v, bool direction)
{
    //direction=0->undirected, direction=1->directed;
    adj[u].push_back(v);
    if(direction==0)
    {
        adj[v].push_back(u);
    }
}
void displayGraph()
{
    for(auto i:adj)
    {
     cout<<i.first<<" -> ";   
     for(auto j: i.second)
     {
        cout<< j<<" , ";
     }
     cout<<endl;
    }
}

};
int main()
{
    graphs<int> g;
    cout<<"Enter the number of nodes: "<<endl;
    int n,m;
    cin>>n;
    cout<<"Enter the number of edges: "<<endl;
    cin>>m;
    int u,v;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.displayGraph();
} 