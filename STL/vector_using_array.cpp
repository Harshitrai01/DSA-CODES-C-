#include<iostream>
#include<vector>
using namespace std;

int main(){

 // initialize a vector with 
 // all elements of any other array
 int arr[]={10,5,20};
 int n=sizeof(arr)/sizeof(arr[0]);
 vector<int> v(arr,arr+n);
 for(auto itr=v.begin();itr!=v.end();itr++)
 cout<<*itr<<" ";
cout<<endl;

for(int j:v)
cout<<j<<" ";
cout<<endl;
cout<<v.capacity();  // to check the current capacity of the vector anytime
return 0;
}