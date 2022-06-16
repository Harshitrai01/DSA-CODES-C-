#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u, int v){
    adj[u].push_back(v);
}

void DFS(vector<int> adj[], int i, bool visited[], stack<int> &s){
    visited[i]=true;
    //cout<<i<<" ";
    for(auto x : adj[i]){
        if(visited[x]==false){
            DFS(adj,x,visited,s);
        }
    }
    s.push(i);
    //cout<<s.top()<<" ";

}

void topological_sort(vector<int> adj[], int V){

        bool visited[V+1];
        for(int i=0;i<V;i++){
            visited[i]=false;
        }

        stack<int>s;
        for(int i=0;i<V;i++){
            if(visited[i]==false){
                DFS(adj,i,visited,s);
            }
        }

        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }

}


int main(){
    int V=5;

    vector<int> adj[V];
    // addEdge(adj,0,2);
    // addEdge(adj,0,3);
    // addEdge(adj,1,3);
    // addEdge(adj,1,4);
    // addEdge(adj,2,3);
    addEdge(adj,0,1);
 //   addEdge(adj,0,3);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    addEdge(adj,3,4);


    topological_sort(adj,V);

}