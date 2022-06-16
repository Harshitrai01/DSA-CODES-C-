#include<bits/stdc++.h>
using namespace std;

// Array of Vectors - Vector will be stored as each element of array.
void addEdge(vector<int> adj[],int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);

}

void DFSRec(vector<int> adj[],int s, bool visited[]){
    visited[s]=true;
    cout<<s<<" ";
    for(int u:adj[s]){
        if(visited[u]==false){
            DFSRec(adj,u,visited);
        }
    }
}

void DFS(vector<int> adj[], int V){
    bool visited[V+1];
    for(int i=0;i<V;i++)
        visited[i]=false;
    DFSRec(adj,0,visited);
}

int main(){

    int V=5;
    vector<int> adj[V];
    addEdge(adj,0,3);
    addEdge(adj,0,4);
    addEdge(adj,1,0);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,0);
    addEdge(adj,2,1);
    addEdge(adj,2,2);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    addEdge(adj,3,1);
    addEdge(adj,3,2);
    addEdge(adj,3,4);
    addEdge(adj,4,2);
    addEdge(adj,4,3);

    DFS(adj,V);

    return 0;

}