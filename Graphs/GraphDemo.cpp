#include <iostream>
#include <vector>
using namespace std;

void transitiveClosure(vector<vector<int>>& graph) {
    int V = graph.size();

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (graph[i][k] && graph[k][j])
                    graph[i][j] = 1;
            }
        }
    }
}

void printTransitiveClosure(const vector<vector<int>>& graph) {
    int V = graph.size();
    cout << "Transitive Closure Matrix:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> graph = {
        {0, 1, 0, 0},
        {0, 0, 0, 1},
        {0, 0, 0, 0},
        {1, 0, 1, 0}
    };

    cout << "Original Graph:\n";
    printTransitiveClosure(graph);

    transitiveClosure(graph);

    printTransitiveClosure(graph);

    return 0;
}
