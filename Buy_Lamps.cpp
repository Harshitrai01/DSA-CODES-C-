#include<bits/stdc++.h>
using namespace std;

void solution()
{

    int n,k,x,y;
    cin>>n>>k>>x>>y;
    int first=k*x;
    int second=(n-k)*y;
    int third=(n-k)*x;
    cout<<first+min(second,third)<<endl;

}

int main(){

    int t;
    cin>> t;

    while(t--)
    solution();

return 0;
}