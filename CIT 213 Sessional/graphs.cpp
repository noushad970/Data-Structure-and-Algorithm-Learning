#include <iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
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
        int vis[m];
        for(int i=0;i<m;i++)
        vis[i]=0;
        q.push(source);
        
        while (!q.empty())
        {
            int node=q.front();
            q.pop();
            cout<<node<<endl;
            vis[source]=1;
            for(auto i: gp){
            for(auto j:i.second){
              if(vis[j]!=1){
                q.push(j);
                vis[j]=1; 
              } 
            }
            
        }

        }
        
    }
    int findMax(){
        int findMax=0;
        bool zeroPresented=false;
        for(auto i: gp){
            if(i.first>findMax)
            findMax=i.first;
            if(i.first==0)
            zeroPresented=true;
        }
        if(zeroPresented)
        findMax++;
        return findMax;

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

}
//7 7 1 2 1 3 2 4 2 5 2 6 2 7 7 3