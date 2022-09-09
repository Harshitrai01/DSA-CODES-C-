#include<bits/stdc++.h>
using namespace std;

void solution()
{

    int x,y;
    cin>>x>>y;

    int i=(3*x)-y;
    if(i>y)
    cout<<0<<" "<<y<<" "<<i;
    else
    cout<<i<<" "<<y<<" "<<0;

}

int main(){

    int t;
    cin>> t;

    while(t--)
    solution();

return 0;
}