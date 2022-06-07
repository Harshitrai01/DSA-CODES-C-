// Input: a[] = {2, 1, 5, 4, 8, 3, 6, 7};
//        b[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'}
// Output: B A F D C G H E

#include<bits/stdc++.h>
using namespace std;
void pairSort(int a[], char b[], int n){
    pair <int,int> arr_p[n];
    for(int i=0;i<n;i++){
        // Making array of pairs.
        arr_p[i].first=a[i];
        arr_p[i].second=b[i];
    }
    sort(arr_p,arr_p+n);
    for(int i=0;i<n;i++){
        b[i]=arr_p[i].second;
    }
        for(int i = 0; i < n; i++)
    {
        cout<<"("<<arr_p[i].first <<", "<<b[i]<<") ";
    }
}

int main(){
    int a[]={2,1,5,4,8,3,6,7};
    int n = sizeof(a)/sizeof(a[0]);
    char b[]={'A','B','C','D','E','F','G','H'};
    pairSort(a,b,n) ;
    return 0;
}