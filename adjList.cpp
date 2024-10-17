#include <iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class AdjacencyList{
unordered_map<int,list<int>> adjlist;
public:
void addEdge(int ver1,int ver2,bool directed=false){
    adjlist[ver1].push_back(ver2);
    if(!directed)
    adjlist[ver2].push_back(ver1);
}
void print(){
    cout<<"AdjacencyList: "<<endl;
    for(auto i: adjlist){
        cout<<i.first<<" -> ";
        for(auto j:i.second){
            cout<<j<<" , ";
        }
        cout<<endl;
    }
}
void bfs(int start){
    unordered_map<int ,bool> visited;
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty())
    {
        int ver=q.front();
        q.pop();
        cout<<ver<<" ";
        for(int x: adjlist[ver]){
           if(!visited[x])
           {
             visited[x]=true;
            q.push(x);
           }
        }
    }

}
void dfsHelper(int start,unordered_map<int,bool> &visited)
    {
        visited[start]=true;
        cout<<start<<" ";
        for(auto i:adjlist[start])
        {
            if(!visited[i])
            dfsHelper(i,visited);

        }
    }
    void dfs(int start)
    {
        unordered_map<int ,bool> visited;
        dfsHelper(start,visited);
    }

};
int main() {
    AdjacencyList ad;
    ad.addEdge(1,2);
    ad.addEdge(5,3);
    ad.addEdge(1,7);
    ad.addEdge(5,2);
    ad.addEdge(6,8);
    ad.addEdge(1,6);
    ad.addEdge(4,1);
    ad.addEdge(7,4);
    ad.addEdge(11,32);
    ad.addEdge(5,3);
    ad.print();
    cout<<"BFS: "<<endl;
    ad.bfs(1);
    cout<<endl<<"DFS: "<<endl;
    ad.dfs(1);
}