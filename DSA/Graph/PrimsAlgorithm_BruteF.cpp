#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int>> adj[], int u, int v, int w){
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}

int primsMST(vector<pair<int,int>> adj[], int V){

    int res=0;
    vector<int>key(V,INT_MAX);
    key[0]=0;
    vector<bool> mstSet(V,false);  // MST Set

    for(int count=0;count<V;count++){

        // selecting minimum key value.
        int u=-1;
        for(int i=0;i<V;i++)
            if(mstSet[i]==false and (u==-1 or key[i]<key[u]))
                        u=i;
        mstSet[u]=true;  // Marking MSR as true;
        res=res+key[u];  // Updating Result;

        // Updating the adjacents of the minimum u.
        for(auto x: adj[u]){
            if(x.first!=0 and !mstSet[x.first])
                key[x.first]=min(key[x.first],x.second);
        }
    }
        return res;
}

int main(){

    int V=4;
    vector<pair<int,int>> adj[V];
    addEdge(adj,0,1,5);
    addEdge(adj,0,2,8);
    addEdge(adj,1,2,10);
    addEdge(adj,1,3,15);
    addEdge(adj,2,3,20);

    cout<<primsMST(adj,V);

    cout<<endl<<"Executed Sucessfully !";
    return 0;
}