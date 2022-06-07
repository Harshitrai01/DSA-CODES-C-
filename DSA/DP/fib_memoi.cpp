#include<iostream>
using namespace std;
#define MAX 100
int memo[MAX];

int _initialize(){
    int i;
    for(i=0;i<MAX;i++){
        memo[i]=-1;
    }
}


int fib(int n){
    
    if(memo[n]==-1){
        int res;
        if(n==0 or n==1)
            res=n;
        else
            res=fib(n-1)+fib(n-2);
        memo[n]=res;
    }
    return memo[n];

}

int main(){
int n=7;
_initialize();
cout<<fib(n);
return 0;
}