#include <iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
const int N=1e5+2;
bool vis[N];
class graphs
{
    public:
    unordered_map<int,list<int>> gp;
    
    void addEdge(int u,int v,int direction){
    
    //1 =directed; 2= undirected
    gp[u].push_back(v);
    if(direction==2){
        gp[v].push_back(u);
    }
    }
    void printAdj(){
        cout<<"Adj List: "<<endl;
        for(auto i: gp){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<" , ";
            }
            cout<<endl;
        }
    }
    void bfs(int source,int m){
        queue <int> q;
        int viss[m];
        for(int i=0;i<m;i++)
        viss[i]=0;
        q.push(source);
        viss[source]=1;
        while (!q.empty())
        {
            int node=q.front();
            q.pop();
            cout<<node<<" ";
            
            for(auto i: gp){
            for(auto j:i.second){
              if(viss[j]!=1){
                q.push(j);
                viss[j]=1; 
              } 
            }
            
        }

        }
        
    }
    void dfs(int source){
       
       vis[source]=1;
       cout<<source<<" ";
       for(auto i: gp[source]){
            
              if(vis[i]!=1){
                dfs(i);
                
              } 
            
        }
    }
      
};
int main() {
    int n;
    cout<<"Enter the number of edges:"<<endl;
    cin>>n;
    graphs gp;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" values of edge:"<<endl;
        int x,y;
        cin>>x>>y;
        gp.addEdge(x,y,2);
    }
    gp.printAdj();
    cout<<endl;
    cout<<"Enter source for bfs:"<<endl;
    int s;
    cin>>s;
    gp.bfs(s,n);
  
    for(int i=0;i<n;i++)
        vis[i]=0;
        cout<<"DFS:"<<endl;
    gp.dfs(s);

}


//7 1 2 1 3 2 4 2 5 2 6 2 7 7 3
