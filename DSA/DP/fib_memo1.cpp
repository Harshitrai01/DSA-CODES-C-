#include<bits/stdc++.h>
using namespace std;
int memo[100];

int fib(int n){

    if(memo[n]=-1){
        int res;

        if(n==1 or n==0){
            res=n;
        }

        else
            res=fib(n-1)+fib(n-2);
        memo[n]=res;

    }
    return memo[n];

}

int main(){

    int n=7;

    for(int i=0;i<n;i++){
        memo[i]=-1;
    }

    cout<<fib(n);
    return 0;

return 0;
}