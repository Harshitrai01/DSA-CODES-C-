#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 8, 3, 6};
    // Using sort()
    sort(arr,arr + 4);
    for(int i=0;i<4;i++)
    cout<<arr[i]<<" ";

    //Using binary_search()
    if (binary_search(arr, arr +4 ,8))
    cout<<"\n8 is Present";
    else
    cout<<"8 is Not Present";
}
