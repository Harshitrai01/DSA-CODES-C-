#include<bits/stdc++.h>
using namespace std;


void solution()
{

    int n; cin>>n;
    vector<int>a(n);

    for(auto &x: a)
        cin>>x;

    int k; cin>>k;
    vector<int>b(k);

    for(auto &x: b)
        cin>>x;

    vector<int> ans;

    for(int i=0;i<n;i++){
        if (!count(b.begin(),b.end(),a[i])){
            ans.push_back(a[i]);
        }
    }

    for(auto x:ans)
    cout<<x<<" ";
    cout<<endl;

}

int main(){

    int t;
    cin>> t;

    while(t--)
    solution();

return 0;
}