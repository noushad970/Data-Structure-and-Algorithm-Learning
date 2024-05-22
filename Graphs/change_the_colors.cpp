#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int sr,sc;
    cout<<"Enter source: "<<endl;
    cin>>sr>>sc;
    vector<vector<int>> newMat(n,vector<int>(m));
    int source=a[sr][sc];
    bool vis[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
         vis[i][j]=false;   
        }
       
    }

    //j+1>0 && j-1>=0 && i+1>0 && i-1>=0
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==source && (a[i+1][j]==source))
            {
                newMat[i+1][j]=source+1;
                vis[i+1][j]=true;
            }
             if(a[i][j]==source && (a[i][j+1]==source))
            {
                newMat[i][j+1]=source+1;
                vis[i][j+1]=true;
            }
             if(a[i][j]==source && (a[i-1][j]==source))
            {
                newMat[i-1][j]=source+1;
                vis[i-1][j]=true;
            }
             if(a[i][j]==source && (a[i][j-1]==source))
            {
                newMat[i][j-1]=source+1;
                vis[i][j-1]=true;
            }
            if(!vis[i][j] && a[i][j]==source && a[i+1][j]==source && a[i][j+1]==source && a[i-1][j]==source && a[i][j-1]==source)
            {
                newMat[i][j]=source+1;
                vis[i][j]=true;
            }
            if(!vis[i][j])
            {
                newMat[i][j]=a[i][j];
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<newMat[i][j]<<" ";
        }
        cout<<endl;
    }

}