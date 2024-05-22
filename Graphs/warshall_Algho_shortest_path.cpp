#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;
int main()
{
    int n=4;
    vector<vector<int>> mat(4);
    cout<<"Enter the number of nodes: "<<endl;
    mat={{0,5,inf,10},
         {inf,0,3,inf},
         {inf,inf,0,1},
         {inf,inf,inf,0}};
    vector<vector<int>> des=mat;
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                des[i][j]=min(des[i][j],des[i][k]+des[k][j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(des[i][j]==inf)
            cout<<"INF"<<" ";
            else
            cout<<des[i][j]<<" ";
        }
        cout<<endl;
    }
}