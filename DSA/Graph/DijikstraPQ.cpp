#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int>> adj[], int u, int v, int w){
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}

typedef pair<int,int> Pair;
void dijikstra(vector<pair<int,int>> adj[], int V, int s){

    priority_queue<Pair,vector<Pair>,greater<Pair>> pq;
    vector<int> dist(V,INT_MAX);

    // Insert source in pq and initialize its distance as zero.
    pq.push({0,s});
    dist[s]=0;

    while(!pq.empty()){
        //  Extracting index of minimum distance in pq.
        int u=pq.top().second;
        pq.pop();

        for(auto x: adj[u]){
            int v=x.first;
            int weight=x.second;

            if(dist[v]>dist[u]+weight){
                dist[v]=dist[u]+weight;
                pq.push({dist[v],v});
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