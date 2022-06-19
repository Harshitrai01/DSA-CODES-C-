#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> Pair;

void addEdge(vector<Pair> adj[], int u, int v, int w)
{
    adj[u].push_back({v, w});
}

// Single Pair Shortest Path (With Negative weights)
void BellmanFord(vector<Pair> adj[], int V, int s)
{

    vector<int> dist(V, INT_MAX);
    dist[s] = 0;
    for (int count = 0; count < V - 1; count++)
    {
        for (auto v : adj[count])
        {
            if (dist[v.first] > dist[count] + v.second)
            {
                dist[v.first] = dist[count] + v.second;
            }
        }
    }

    for (auto x : dist)
        cout << x << " ";

    // Detecting Negative Cycle
    while (V--)
        for (auto v : adj[V])
        {
            if (dist[v.first] > dist[V] + v.second)
                cout << endl
                     << "Negative Weight Cycle Detected" ;
            break;
        }
}

int main()
{

    int V = 4;
    vector<Pair> adj[V];

    addEdge(adj, 0, 1, 1);
    addEdge(adj, 0, 2, 4);
    addEdge(adj, 1, 2, -3);
    // addEdge(adj, 1, 3, 2);
    addEdge(adj, 2, 3, 3);

    // For Negative weight cycle- uncomment this
    addEdge(adj, 3, 1, -2);

    BellmanFord(adj, V, 0);
    return 0;

}