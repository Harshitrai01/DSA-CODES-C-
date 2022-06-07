#include<bits/stdc++.h>
using namespace std;
vector<int> fun(int arr[], int n, int k)
{   
    vector<int> V;
    for(int i = 0; i < n; i++)
    {   
        if (arr[i] < k) 
            V.push_back(arr[i]);
    }
    return V;
}
// Driver Code
int main()
{
    int arr[] = {17, 10, 20, 13, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 15;
    
    // Traverse and print elements of 
    // returned list

    for(auto x:fun(arr, n, k))
        cout<<x<<" ";
     return 0;
}