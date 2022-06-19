#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFS(vector<int> adj[], int u, bool visited[], int disc[],
          int low[], int parent, int timer)
{   
    // Marking Current Node as Visited
    visited[u] = true;

    // Initialize discovery time and low value
    disc[u] = low[u] = timer++;

    // traversing the all adjacents of this
    for (auto v : adj[u])
    {
        if(v==parent)
        continue;

        if (!visited[v])
        {
        
            DFS(adj, v, visited, disc, low, u, timer);

            // Check if the subtree rooted with v has
            // a connection to one of the ancestors of u

            // while returning we update the following.
            low[u] = min(low[u], low[v]);

            // If u is not root and low value of one of
            // its child is more than discovery value of u.
            // check for AP or not
            if (low[v] > disc[u]){
                cout<<u<<" "<<v<<endl;
            } 
        }
        
        // Update low value of u for parent function calls.
        // this is for back edge.
        else
        low[u] = min(low[u], disc[v]);
    }
}

void Bridge(vector<int> adj[], int V){


    int timer=0;
    int disc[V] = {0};
    int low[V];
    bool visited[V] = {false};
    int parent=-1;

    for (int u = 0; u < V; u++)
    {
        if (!visited[u])
            DFS(adj, u, visited, disc, low, parent, timer);
    }

}

int main()
{
    // Create graphs given in above diagrams
    cout << "\nBridges in first graph \n";
    int V = 5;
    vector<int> adj1[V];
    addEdge(adj1, 1, 0);
    addEdge(adj1, 0, 2);
    addEdge(adj1, 2, 1);
    addEdge(adj1, 0, 3);
    addEdge(adj1, 3, 4);
    Bridge(adj1, V);

    cout << "\nBridges in second graph \n";
    V = 4;
    vector<int> adj2[V];
    addEdge(adj2, 0, 1);
    addEdge(adj2, 1, 2);
    addEdge(adj2, 2, 3);
    Bridge(adj2, V);

    cout << "\nBridges in third graph \n";
    V = 7;
    vector<int> adj3[V];
    addEdge(adj3, 0, 1);
    addEdge(adj3, 1, 2);
    addEdge(adj3, 2, 0);
    addEdge(adj3, 1, 3);
    addEdge(adj3, 1, 4);
    addEdge(adj3, 1, 6);
    addEdge(adj3, 3, 5);
    addEdge(adj3, 4, 5);
    Bridge(adj3, V);

    return 0;
}