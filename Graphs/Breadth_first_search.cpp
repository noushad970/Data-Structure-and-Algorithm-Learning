#include<bits/stdc++.h>
using namespace std;



const int N = 1e5+2;
   vector<int> adj[N];
   bool vis[N];
int main()
{
 
    for(int i=0;i<N;i++)
    {
        vis[i]=0;
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
    queue<int> q;
    q.push(0);
    vis[0]=true;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        cout<<node<<endl;
        vector<int> :: iterator it;
        for(it=adj[node].begin();it!=adj[node].end();it++)
        {
            if(!vis[*it])
            {
                vis[*it]=1;
                q.push(*it);
            }
        }
    }
   

}