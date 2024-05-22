#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
bool vis[N];

int main()
{
    for(int i=0;i<N;i++)
    vis[i]=0;
    int n,m,x,y;
    cout<<"Enter number of node's: "<<endl;
    cin>>n;
    cout<<"Enter number of Edge's: "<<endl;
    cin>>m;
    vector<int>adj[N]; 
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<int> q;
    int source;
    cout<<"Enter source: "<<endl;
    cin>>source;
    q.push(source);
    vis[source]=1;
    
    while(!q.empty())
    {
       
       int node=q.front();
        cout<<node<<endl;
        q.pop();
        vector<int> :: iterator it;
        for(it=adj[node].begin();it!=adj[node].end();it++)
        {
            if(!vis[*it])
            {
                q.push(*it);
                vis[*it]=1;
            }
        }
        
         
    
    }
}