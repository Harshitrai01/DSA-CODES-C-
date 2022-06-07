#include<iostream>
#include<queue>
using namespace std;

int main(){

//   Default uses max_heap.
    priority_queue<int>pq;

//    In this way we use min_heap.
//    priority_queue<int,vector<int>,greater<int>>pq;
//                      or
//    for(int i=0;i<n;i++) {arr[i]=-arr[i]}   and cout<<-(pq.top)

//    Constructing pq from array.
//    int arr[]={10,5,15};
//    priority_queue<int>pq(arr,arr+n);

//    Constructing pq form vector
//    priority_queue<int>pq(v.begin(),v.end());

    pq.push(10);
    pq.push(15);
    pq.push(5);

    cout<<pq.size()<<" ";
    cout<<pq.top()<<" "<<endl;

    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop(); // Removes the top.
    }

return 0;
}