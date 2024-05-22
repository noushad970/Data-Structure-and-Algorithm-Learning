#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
bool vis[N];
vector<int> adj[N];
void dfs(int node)
{
    vis[node]=true;
    cout<<node<<" ";
    vector<int >::iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++)
    {
        if(vis[*it]);
        else
        {
            dfs(*it);
        }
    }
    
}
int main()
{

  //  vector<int>adj[N];
    for(int i=0;i<N;i++)
    {
        vis[i]=false;
    }
    int n, m;
    cout<<"Enter number of nodes: "<<endl;
    cin>>n;
    cout<<"Enter number of edges: "<<endl;
    cin>>m;
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    cout<<"Enter source :"<<endl;
    int source;
    cin>>source;
    dfs(source);


}