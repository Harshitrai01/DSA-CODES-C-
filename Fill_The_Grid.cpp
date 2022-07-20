#include<bits/stdc++.h>
using namespace std;

void solution()
{

    int n,m;
    cin>>n>>m;
    if(n%2==0 and m%2==0)
    cout<<0<<endl;
    else if(n%2==0 and m%2!=0)
    cout<<n<<endl;
    else if(n%2!=0 and m%2==0)
    cout<<m<<endl;
    else{
        int a=m*n;
        int b=(m-1)*(n-1);
        cout<<a-b<<endl;
    }

}

int main(){

    int t;
    cin>> t;

    while(t--)
    solution();

return 0;
}