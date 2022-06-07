#include<iostream>
using namespace std;

int maxSubArrSum(int arr[],n){
    int curr=0,res=arr[0];
        for(int i=0;i<n;i++){
            curr=0;
            for(int j=i;j<n;j++){
                curr=curr+arr[i];
                res=max(res,curr);
            }
        }return res;
}

int main{
    int n=7;
    int arr[]={2,3,-8,7,-1,2,3};
     cout<<maxSubArrSum(arr,n);
}