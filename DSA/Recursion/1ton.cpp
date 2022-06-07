#include<iostream>
using namespace std;

void print1ton(int n){
    if(n==0)
    return;

    print1ton(n-1);
        cout<<n<<" ";
}

int main(){
    int n;
    n=5;
    print1ton(n);
    return 0;
}