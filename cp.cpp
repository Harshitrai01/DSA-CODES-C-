#include<bits/stdc++.h>
using namespace std;
#define lli long long int
typedef pair<lli, lli> pi;

bool sorted(vector<int> v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            return false;
        }
    }
    return true;
}

void solution()
{

    int n;
    cin>>n;
    vector<pi>v;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(make_pair(a,i));
    }
    if(n==2)
    cout<<"YES"<<endl;
vector<int>v1;
        for(int i=0;i<n;i++){
        iv1.push_back(v[i].first);
    }

    

    else{
        sort(v1.begin(),v1.end());
        vector<int>v2;

        int a=0;
        for(int i=1;i<n;i++){
            if(v[i].second>a){
                a=v[i].second;
            }
            else
            v2.push_back(v[i].first);
        }

        // int a=v[0];
        // v1.push_back(a);
        // for(int i=1;i<n;i++){
        //     if(v[i]>=a){
        //         v1.push_back(v[i]);
        //         a=v[i];
        //     }
        //     else{
        //         v2.push_back(v[i]);
        //     }
        // }

        if(sorted(v2))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }


    // priority_queue <pi,vector<pi>,greater<pi>> pq;
    // lli n;
    // cin>>n;
    // for(lli i=0;i<n;i++){
    //     lli a; cin>>a;
    //     pq.push(make_pair(a,i));
    // }

    // vector<pi>v;
    // while(pq.empty()==false){
    //     v.push_back(make_pair(pq.top().first,pq.top().second));
    //     pq.pop();
    // }

    //     // for(auto x:v){
    //     // cout<<x.first<<" "<<x.second<<endl;

    // lli a=-1,b=-1;
    // if(v[0].first==v[1].first){
    //     a=0;
    // }
    // for(lli i=1;i<n-1;i++){

    //     if(v[i].first==v[i+1].first){
    //         if(v[i].first!=v[i-1].first){
    //             a=i;
    //         }
    //         if(i!=n-2)
    //         if(v[i+1].first!=v[i+2].first){
    //             b=i+1;
    //         }

    //         if(i==n-2){
    //             if(v[i].first!=v[i+1].first);
    //             b=i;
    //             if(v[i].first==v[i+1].first)
    //             b=i+1;
    //         }
    //     }
    //     if(a!=-1 and b!=-1){
    //         //cout<<"Values "<<a<<" "<<b<<endl;
    //         reverse(v.begin()+a, v.begin()+b+1);
    //         a=-1;b=-1;
    //     }
    // }

    
    // //     for(auto x:v){
    // //     cout<<x.first<<" "<<x.second<<endl;
    // // }
    //     lli count=0;
    //     for(lli i=0;i<n-1;i++){
    //         lli f=v[i].second;
    //         lli s=v[i+1].second;
    //         if(f>s)
    //         count++;
    //         if(count>1){
    //             cout<<"NO"<<endl;
    //             break;
    //         }
    //     }
    //     if(count==0 or count==1)
    //     cout<<"YES"<<endl;



    // // int count=0;
    // // for(lli i=0;i<n-1;i++){

    // //     lli f=pq.top().second;
    // //     pq.pop();
    // //     lli s=pq.top().second;
        
    // //     if(f>s)
    // //     count++;
    // // }

    // // if(count==1 or count==0)
    // // cout<<"YES"<<endl;

    // // else
    // // cout<<"NO"<<endl;

    // // //     while(pq.empty()==false){
    // // //     cout<<pq.top().first<<" "<<pq.top().second<<endl;
    // // //     pq.pop(); // Removes the top.
    // // // }


}

int main(){

    int t;
    cin>> t;

    while(t--)
    solution();

return 0;
}