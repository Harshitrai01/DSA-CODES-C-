#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFS(vector<int> adj[], int u, bool visited[], int disc[],
         int low[], int &time, int parent, bool isAP[])
{
    // Count of children in DFS Tree
    int children = 0;

    // Marking Current Node as Visited
    visited[u] = true;

    // Initialize discovery time and low value
    disc[u] = low[u] = ++time;

    // traversing the all adjacents of this
    for (auto v : adj[u])
    {
        if(v==parent)
        continue;

        if (!visited[v])
        {
            children++;
            DFS(adj, v, visited, disc, low, time, u, isAP);

            // Check if the subtree rooted with v has
            // a connection to one of the ancestors of u

            // while returning we update the following.
            low[u] = min(low[u], low[v]);

            // If u is not root and low value of one of
            // its child is more than discovery value of u.
            // check for AP or not
            if (parent != -1 and low[v] >= disc[u])
                isAP[u] = true;
        }

        // Update low value of u for parent function calls.
        // this is for back edge.
        else if (v != parent)
            low[u] = min(low[u], disc[v]);
    }

    // If u is root of DFS tree and has two or more children.
    if (parent == -1 && children > 1)
        isAP[u] = true;
}

void AP(vector<int> adj[], int V)
{
    int disc[V] = {0};
    int low[V];
    bool visited[V] = {false};
    bool isAP[V] = {false};
    int time = 0, parent = -1;

    for (int u = 0; u < V; u++)
    {
        if (!visited[u])
            DFS(adj, u, visited, disc, low, time, parent, isAP);
    }

    for (int u = 0; u < V; u++)
    {
        if (isAP[u] == true)
            cout << u << " ";
    }
}

int main()
{
    // Create graphs given in above diagrams
    cout << "Articulation points in first graph \n";
    int V = 5;
    vector<int> adj1[V];
    addEdge(adj1, 1, 0);
    addEdge(adj1, 0, 2);
    addEdge(adj1, 2, 1);
    addEdge(adj1, 0, 3);
    addEdge(adj1, 3, 4);
    AP(adj1, V);

    cout << "\nArticulation points in second graph \n";
    V = 4;
    vector<int> adj2[V];
    addEdge(adj2, 0, 1);
    addEdge(adj2, 1, 2);
    addEdge(adj2, 2, 3);
    AP(adj2, V);

    cout << "\nArticulation points in third graph \n";
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
    AP(adj3, V);

    return 0;
}