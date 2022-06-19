#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

void DFS(vector<int> adj[], int u, bool stackMember[], int disc[],
          int low[])

{   stack<int>st;
    int timer=0;

    // Initialize discovery time and low value
    disc[u] = low[u] = ++timer;
    st.push(u);

    // Marking stack Memeber as Visited
    stackMember[u] = true;

    // traversing the all adjacents of this
    for (auto v : adj[u])
    {   
        // If v is not visited yet, then recurr for it
        if(disc[v]==-1)
        {
            DFS(adj, v, stackMember, disc, low);
            low[u] = min(low[u], low[v]);
        }

        else if(stackMember[v])
            low[u] = min(low[u], disc[v]);
    }
    int w=0;
    if(low[u]==disc[u]){
        while(st.top()!=u){
            w=st.top();
            cout<<w<<" ";
            stackMember[w]=false;
            st.pop();
        }
        w=st.top();
        cout<<w<<"\n";
        stackMember[w]=false;
        st.pop();
    }
}


void Tarjans(vector<int> adj[], int V){

    int disc[V];
    int low[V];
    bool stackMember[V];

    for(int i = 0; i<V; i++) {    //initialize all elements
      disc[i] = low[i] = -1;
      stackMember[i] = false;
   }
    
    for (int u = 0; u < V; u++)
    {
        if (disc[u]==-1)
            DFS(adj, u, stackMember, disc, low);
    }

}

int main()
{
    // Create graphs given in above diagrams
    cout << "\nSCCs in first graph \n";
    int V = 5;
    vector<int> adj1[V];
    addEdge(adj1, 1, 0);
    addEdge(adj1, 0, 2);
    addEdge(adj1, 2, 1);
    addEdge(adj1, 0, 3);
    addEdge(adj1, 3, 4);
    Tarjans(adj1, V);

    cout << "\nSCCs in second graph \n";
    V = 4;
    vector<int> adj2[V];
    addEdge(adj2, 0, 1);
    addEdge(adj2, 1, 2);
    addEdge(adj2, 2, 3);
    Tarjans(adj2, V);

    cout << "\nSCCs in third graph \n";
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
    Tarjans(adj3, V);

    return 0;
}