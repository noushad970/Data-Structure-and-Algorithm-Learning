#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> printAdj(int n,int m, vector<vector<int>> &edges)
{
    vector<int> ans[n];
    for(int i=0;i<m;i++)
    {
        ans[edges[i][0]].push_back(edges[i][1]);
        ans[edges[i][1]].push_back(edges[i][0]);
    }
    vector<vector<int>> adj(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            adj[i].push_back(ans[i][j]);
        }
    }
    return adj;
}
int main()
{
    
} 