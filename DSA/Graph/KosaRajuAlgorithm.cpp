#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}


void revEdge(vector<int>revAdj[], vector<int> adj[], int V){
    
    for(int i=0;i<V;i++)
        for(auto x:adj[i])
            revAdj[x].push_back(i);
}


void printDFSRec(vector<int> adj[], vector<bool> &visited, int i){
        visited[i]=true;
        cout<<i<<" ";
        for(auto x:adj[i])
            if(!visited[x])
                printDFSRec(adj,visited,x);
}


void printDFS(vector<int> adj[],int V, int x, vector<bool> &visited){
            if(!visited[x]){
                printDFSRec(adj,visited,x);
                cout<<endl;
            }
        
}

void DFS(vector<int> adj[], vector<bool> &visited, int i, stack<int> &s){
        visited[i]=true;
        //cout<<i<<" ";
        for(auto x:adj[i]){
            if(!visited[x]){
                DFS(adj,visited,x,s);
            }
        }
        s.push(i);
}


void topoSort(vector<int> adj[], int V,stack<int> &s){
    vector<bool> visited(V,false);
    for(int i=0;i<V;i++){
        if(!visited[i])
            DFS(adj,visited,i,s);
    }
}

void kosaraju(vector<int> adj[], int V){
    
    stack<int>s;
    topoSort(adj,V,s);

    vector<int>revAdj[V];
    revEdge(revAdj,adj,V);

    vector<bool> visited(V,false);
    while(!s.empty()){
        int x=s.top();
        s.pop();
        if(!visited[x])
        printDFS(revAdj,V,x,visited);
    }

}


int main(){
    int V=5;
    vector<int> adj[V];

    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,2,0);
    addEdge(adj,1,3);
    addEdge(adj,3,4);

    // Printing Strongly Connected Component.
    cout<<"Strongly Connected Components are : "<<endl;
    kosaraju(adj,V);

return 0;
}