#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int>> adj[], int u, int v, int w){
        adj[u].push_back({v,w});
}

void DFS(vector<pair<int,int>> adj[], int i, vector<bool> &visited, stack<int>&st){
    visited[i]=true;
    for(auto x: adj[i]){
        if(visited[x.first]==false){
            DFS(adj,x.first,visited,st);
        }
    }
    st.push(i);
}

void shortestPath_topoSort(vector<pair<int,int>> adj[], int V, int s){
    vector<int> dist(V,INT_MAX);
    dist[s]=0;
    vector<bool> visited(V,false);
    stack<int>st;

    for(int i=0;i<V;i++){
        if(visited[i]==false){
            DFS(adj,i,visited,st);
        }
    }

    while(!st.empty()){
        int u=st.top();
        st.pop();

        if(dist[u]!=INT_MAX)
        for(auto v: adj[u]){
            if(dist[v.first]>dist[u]+v.second){
                dist[v.first]=dist[u]+v.second;
            }
        }

    }

    for(auto i: dist)
        cout<<i<<" ";

    
}


int main(){
    // Create Array of vectors, array will hold vectors.
    // Inside vector there will be two things, node and weight.
    int V=6;
    vector<pair<int,int>> adj[V];
    addEdge(adj,0,1,2);
    addEdge(adj,0,4,1);
    addEdge(adj,1,2,3);
    addEdge(adj,4,2,2);
    addEdge(adj,4,5,4);
    addEdge(adj,2,3,6);
    addEdge(adj,5,3,1);
    int source =0;

    shortestPath_topoSort(adj,V,source);

    cout<<endl<<"Executed SucessFully !";
    return 0;
}