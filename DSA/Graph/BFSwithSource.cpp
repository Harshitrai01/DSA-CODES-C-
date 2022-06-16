#include<bits/stdc++.h>
using namespace std;

// Array of Vectors - Vector will be stored as each element of array.
void addEdge(vector<int> adj[],int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);

}

void BFS(vector<int> adj[],int v, int s){

        bool visited[v+1];
        for(int i=0;i<v;i++){
            visited[i]=false;
        }
        queue<int>q;
        visited[s]=true;
        q.push(s);
        while(!q.empty()){
            int u=q.front();
            q.pop();
            cout<<u<<" ";
            for(int v:adj[u]){
                if(visited[v]==false){
                    visited[v]=true;
                    q.push(v);
                }
            }
        }


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

    BFS(adj,V,0);

    return 0;

}