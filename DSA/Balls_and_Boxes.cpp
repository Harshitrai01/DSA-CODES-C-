#include<bits/stdc++.h>
using namespace std;

void solution()
{

    int n,k;
    cin>>n>>k;
    if(n==1 and k==1)
    cout<<"YES"<<endl;

    else if(n<=k)
    cout<<"NO"<<endl;

    else{
        int i=1;
        while(n>=0){
            n=n-i;
            i++;
        }
        if(i==k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

}

int main(){

    int t;
    cin>> t;

    while(t--)
    solution();

return 0;
}