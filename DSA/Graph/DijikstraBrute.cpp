#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int>> adj[], int u, int v, int w){
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}

void dijikstra(vector<pair<int,int>> adj[], int V, int s){

    vector<int>dist(V,INT_MAX);
    vector<bool>fin(V,false);
    dist[s]=0;

    for(int count=0;count<V;count++){

        int u=-1;
        for(int i=0;i<V;i++){
            if(!fin[i] and (u==-1 or dist[i]<dist[u]))
                u=i;
        }

        fin[u]=true;

        for(auto x: adj[u]){
            if(x.second!=0 and !fin[x.first]){
                dist[x.first]=min(dist[x.first],dist[u]+x.second);
            }
        }
    }



    cout<<"Vertex"<<"    "<<"Distance From Source"<<endl;
    for(int i=0;i<V;i++){
        cout<<i<<"             "<<dist[i]<<endl;
    }

}



int main(){

    int V = 9;
    vector<pair<int,int>> adj[V];

    addEdge(adj, 0, 1, 4);
    addEdge(adj, 0, 7, 8);
    addEdge(adj, 1, 2, 8);
    addEdge(adj, 1, 7, 11);
    addEdge(adj, 2, 3, 7);
    addEdge(adj, 2, 8, 2);
    addEdge(adj, 2, 5, 4);
    addEdge(adj, 3, 4, 9);
    addEdge(adj, 3, 5, 14);
    addEdge(adj, 4, 5, 10);
    addEdge(adj, 5, 6, 2);
    addEdge(adj, 6, 7, 1);
    addEdge(adj, 7, 8, 7);
    addEdge(adj, 6, 8, 6);

    int source=0;
    dijikstra(adj,V,source);

    return 0;
}