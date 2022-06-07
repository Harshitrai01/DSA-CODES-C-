#include<iostream>
using namespace std;
int sod(int n){

    if(n == 0)
    return 0;
    else
    return n%10 + sod(n/10);
}

int main(){
    int n;
    n=9;
    cout<<sod(n);
    return 0;
}