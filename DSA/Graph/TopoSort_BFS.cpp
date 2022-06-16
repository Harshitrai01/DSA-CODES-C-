#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u, int v){
    adj[u].push_back(v);
}

void topological_sort(vector<int> adj[], int V, vector<int> indegree){

        // Making an array of indegree.
        // Inserting indegree for eg. indegree[3]=3
        for (int i=0;i<V;i++){
            for(auto x: adj[i]){
                indegree[x]++;
            }
        }

        // Creating a queue and inserting all vertices with zero indegree.
        queue<int> q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        
        while (!q.empty())
        {
            int u=q.front();
            q.pop();
            cout<<u<<" ";
            for(auto x:adj[u]){         // If indegree of v becomes 0, add v to the queue.
                indegree[x]--;
                if(indegree[x]==0)
                    q.push(x);
            }
        }
}


int main(){
    int V=5;

    vector<int> indegree(V,0);
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


    topological_sort(adj,V,indegree);

}